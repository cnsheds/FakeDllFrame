#pragma once

#define EXTERNC extern "C"
#define EXPORT EXTERNC __declspec(dllexport) void __cdecl

// 定义MWORD为机器字长
#include <stdint.h>
#ifdef _WIN64
typedef uint64_t MWORD;
#else
typedef uint32_t MWORD;
#endif

#define NOP_FUNC(seq) { \
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __nop();\
    __inbyte(seq);\
}
//用__inbyte来生成一点不一样的代码，避免被VS自动合并相同函数

namespace ExportHook {
	// version.dll
	EXPORT GetFileVersionInfoA() NOP_FUNC(1)
	EXPORT GetFileVersionInfoByHandle() NOP_FUNC(2)
	EXPORT GetFileVersionInfoExA() NOP_FUNC(3)
	EXPORT GetFileVersionInfoExW() NOP_FUNC(4)
	EXPORT GetFileVersionInfoSizeA() NOP_FUNC(5)
	EXPORT GetFileVersionInfoSizeExA() NOP_FUNC(6)
	EXPORT GetFileVersionInfoSizeExW() NOP_FUNC(7)
	EXPORT GetFileVersionInfoSizeW() NOP_FUNC(8)
	EXPORT GetFileVersionInfoW() NOP_FUNC(9)
	EXPORT VerFindFileA() NOP_FUNC(10)
	EXPORT VerFindFileW() NOP_FUNC(11)
	EXPORT VerInstallFileA() NOP_FUNC(12)
	EXPORT VerInstallFileW() NOP_FUNC(13)
	EXPORT VerLanguageNameA() NOP_FUNC(14)
	EXPORT VerLanguageNameW() NOP_FUNC(15)
	EXPORT VerQueryValueA() NOP_FUNC(16)
	EXPORT VerQueryValueW() NOP_FUNC(17)
};


bool WriteMemory(PBYTE BaseAddress, PBYTE Buffer, DWORD nSize)
{
	DWORD ProtectFlag = 0;
	if (VirtualProtectEx(GetCurrentProcess(), BaseAddress, nSize, PAGE_EXECUTE_READWRITE, &ProtectFlag))
	{
		memcpy(BaseAddress, Buffer, nSize);
		FlushInstructionCache(GetCurrentProcess(), BaseAddress, nSize);
		VirtualProtectEx(GetCurrentProcess(), BaseAddress, nSize, ProtectFlag, &ProtectFlag);
		return true;
	}
	return false;
}

// 还原导出函数
void InstallJMP(PBYTE BaseAddress, MWORD Function)
{
#ifdef _WIN64
	BYTE move[] = { 0x48, 0xB8 };//move rax,xxL);
	BYTE jump[] = { 0xFF, 0xE0 };//jmp rax

	WriteMemory(BaseAddress, move, sizeof(move));
	BaseAddress += sizeof(move);

	WriteMemory(BaseAddress, (PBYTE)&Function, sizeof(MWORD));
	BaseAddress += sizeof(MWORD);

	WriteMemory(BaseAddress, jump, sizeof(jump));
#else
	BYTE jump[] = { 0xE9 };
	WriteMemory(BaseAddress, jump, sizeof(jump));
	BaseAddress += sizeof(jump);

	MWORD offset = Function - (MWORD)BaseAddress - 4;
	WriteMemory(BaseAddress, (PBYTE)&offset, sizeof(offset));
#endif // _WIN64
}

// 加载系统dll
void LoadSysDll(HINSTANCE hModule)
{
	PBYTE pImageBase = (PBYTE)hModule;
	PIMAGE_DOS_HEADER pimDH = (PIMAGE_DOS_HEADER)pImageBase;
	if (pimDH->e_magic == IMAGE_DOS_SIGNATURE)
	{
		PIMAGE_NT_HEADERS pimNH = (PIMAGE_NT_HEADERS)(pImageBase + pimDH->e_lfanew);
		if (pimNH->Signature == IMAGE_NT_SIGNATURE)
		{
			PIMAGE_EXPORT_DIRECTORY pimExD = (PIMAGE_EXPORT_DIRECTORY)(pImageBase + pimNH->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
			DWORD*  pName = (DWORD*)(pImageBase + pimExD->AddressOfNames);
			DWORD*  pFunction = (DWORD*)(pImageBase + pimExD->AddressOfFunctions);

			wchar_t szSysDirectory[MAX_PATH + 1];
			GetSystemDirectory(szSysDirectory, MAX_PATH);

			//========= 导出函数Hook ===================
			wchar_t szVersion32DLL[MAX_PATH + 1];
			lstrcpy(szVersion32DLL, szSysDirectory);
			lstrcat(szVersion32DLL, TEXT("\\version.dll"));

			HINSTANCE version_module = LoadLibrary(szVersion32DLL);

			for (size_t i = 0; i < pimExD->NumberOfNames; i++)
			{
				MWORD Original = (MWORD)GetProcAddress(version_module, (char*)(pImageBase + pName[i]));
				if (Original)
				{
					InstallJMP(pImageBase + pFunction[i], Original);
				}
			}
			//====== END 导出函数Hook ===================
		}
	}
}
#include "Patch.h"
#include "FakeExport.h"

// extern "C" MWORD retaddr;
// extern "C" MWORD retaddr2;
// extern "C" void StubFunc();
// extern "C" void CheckFunc();

/*
void __stdcall ShowClickRegWnd()
{
}

void __declspec(naked) __stdcall Stub_ClickRegWnd()
{
	__asm {
		pushad
		call ShowClickRegWnd
		popad
		mov edx, 0x110
		jmp edx
	}
}*/

void doPatch()
{
	// 	HANDLE hHostBase = GetModuleHandle(NULL);
	// 	MWORD HookAddr = hHostBase + 0xAF75F1;
	// 	InstallJMP((PBYTE)HookAddr, (MWORD)StubFunc);
}

#pragma once

#include <windows.h>
#include <tchar.h>
#include <process.h>
#include <thread>

#define EXTERNC extern "C"
#define EXPORT EXTERNC __declspec(dllexport) void __cdecl

// ģ����WINMMģ��
#define TEMPL_WINMM

// ����MWORDΪ�����ֳ�

#include <stdint.h>
#ifdef _WIN64
typedef uint64_t MWORD;
#else
typedef uint32_t MWORD;
#endif

bool WriteMemory(PBYTE BaseAddress, PBYTE Buffer, DWORD nSize);

// ��ԭ��������
void InstallJMP(PBYTE BaseAddress, MWORD Function);

// �滻ԭ��Call����
void InstallCall(PBYTE BaseAddress, MWORD Function);

// ����ϵͳdll
void LoadSysDll(HINSTANCE hModule, bool bSysDll = true);
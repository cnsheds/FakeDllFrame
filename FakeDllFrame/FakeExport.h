#pragma once

#include <windows.h>
#include <tchar.h>
#include <process.h>
#include <thread>

#define EXTERNC extern "C"
#define EXPORT EXTERNC __declspec(dllexport) void __cdecl

// 模拟用WINMM模板
#define TEMPL_WINMM

// 定义MWORD为机器字长

#include <stdint.h>
#ifdef _WIN64
typedef uint64_t MWORD;
#else
typedef uint32_t MWORD;
#endif

bool WriteMemory(PBYTE BaseAddress, PBYTE Buffer, DWORD nSize);

// 还原导出函数
void InstallJMP(PBYTE BaseAddress, MWORD Function);

// 替换原有Call函数
void InstallCall(PBYTE BaseAddress, MWORD Function);

// 加载系统dll
void LoadSysDll(HINSTANCE hModule, bool bSysDll = true);
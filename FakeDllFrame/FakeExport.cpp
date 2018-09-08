
#include "FakeExport.h"


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
#ifdef TEMPL_WINMM
#undef PlaySound
	// winmm.dll
	EXPORT    Noname2()	NOP_FUNC(2)
		EXPORT    CloseDriver()	NOP_FUNC(3)
		EXPORT    DefDriverProc()	NOP_FUNC(4)
		EXPORT    DriverCallback()	NOP_FUNC(5)
		EXPORT    DrvGetModuleHandle()	NOP_FUNC(6)
		EXPORT    GetDriverModuleHandle()	NOP_FUNC(7)
		EXPORT    NotifyCallbackData()	NOP_FUNC(8)
		EXPORT    OpenDriver()	NOP_FUNC(9)
		EXPORT    PlaySound()	NOP_FUNC(10)
		EXPORT    PlaySoundA()	NOP_FUNC(11)
		EXPORT    PlaySoundW()	NOP_FUNC(12)
		EXPORT    SendDriverMessage()	NOP_FUNC(13)
		EXPORT    WOW32DriverCallback()	NOP_FUNC(14)
		EXPORT    WOW32ResolveMultiMediaHandle()	NOP_FUNC(15)
		EXPORT    WOWAppExit()	NOP_FUNC(16)
		EXPORT    aux32Message()	NOP_FUNC(17)
		EXPORT    auxGetDevCapsA()	NOP_FUNC(18)
		EXPORT    auxGetDevCapsW()	NOP_FUNC(19)
		EXPORT    auxGetNumDevs()	NOP_FUNC(20)
		EXPORT    auxGetVolume()	NOP_FUNC(21)
		EXPORT    auxOutMessage()	NOP_FUNC(22)
		EXPORT    auxSetVolume()	NOP_FUNC(23)
		EXPORT    joy32Message()	NOP_FUNC(24)
		EXPORT    joyConfigChanged()	NOP_FUNC(25)
		EXPORT    joyGetDevCapsA()	NOP_FUNC(26)
		EXPORT    joyGetDevCapsW()	NOP_FUNC(27)
		EXPORT    joyGetNumDevs()	NOP_FUNC(28)
		EXPORT    joyGetPos()	NOP_FUNC(29)
		EXPORT    joyGetPosEx()	NOP_FUNC(30)
		EXPORT    joyGetThreshold()	NOP_FUNC(31)
		EXPORT    joyReleaseCapture()	NOP_FUNC(32)
		EXPORT    joySetCapture()	NOP_FUNC(33)
		EXPORT    joySetThreshold()	NOP_FUNC(34)
		EXPORT    mci32Message()	NOP_FUNC(35)
		EXPORT    mciDriverNotify()	NOP_FUNC(36)
		EXPORT    mciDriverYield()	NOP_FUNC(37)
		EXPORT    mciExecute()	NOP_FUNC(38)
		EXPORT    mciFreeCommandResource()	NOP_FUNC(39)
		EXPORT    mciGetCreatorTask()	NOP_FUNC(40)
		EXPORT    mciGetDeviceIDA()	NOP_FUNC(41)
		EXPORT    mciGetDeviceIDFromElementIDA()	NOP_FUNC(42)
		EXPORT    mciGetDeviceIDFromElementIDW()	NOP_FUNC(43)
		EXPORT    mciGetDeviceIDW()	NOP_FUNC(44)
		EXPORT    mciGetDriverData()	NOP_FUNC(45)
		EXPORT    mciGetErrorStringA()	NOP_FUNC(46)
		EXPORT    mciGetErrorStringW()	NOP_FUNC(47)
		EXPORT    mciGetYieldProc()	NOP_FUNC(48)
		EXPORT    mciLoadCommandResource()	NOP_FUNC(49)
		EXPORT    mciSendCommandA()	NOP_FUNC(50)
		EXPORT    mciSendCommandW()	NOP_FUNC(51)
		EXPORT    mciSendStringA()	NOP_FUNC(52)
		EXPORT    mciSendStringW()	NOP_FUNC(53)
		EXPORT    mciSetDriverData()	NOP_FUNC(54)
		EXPORT    mciSetYieldProc()	NOP_FUNC(55)
		EXPORT    mid32Message()	NOP_FUNC(56)
		EXPORT    midiConnect()	NOP_FUNC(57)
		EXPORT    midiDisconnect()	NOP_FUNC(58)
		EXPORT    midiInAddBuffer()	NOP_FUNC(59)
		EXPORT    midiInClose()	NOP_FUNC(60)
		EXPORT    midiInGetDevCapsA()	NOP_FUNC(61)
		EXPORT    midiInGetDevCapsW()	NOP_FUNC(62)
		EXPORT    midiInGetErrorTextA()	NOP_FUNC(63)
		EXPORT    midiInGetErrorTextW()	NOP_FUNC(64)
		EXPORT    midiInGetID()	NOP_FUNC(65)
		EXPORT    midiInGetNumDevs()	NOP_FUNC(66)
		EXPORT    midiInMessage()	NOP_FUNC(67)
		EXPORT    midiInOpen()	NOP_FUNC(68)
		EXPORT    midiInPrepareHeader()	NOP_FUNC(69)
		EXPORT    midiInReset()	NOP_FUNC(70)
		EXPORT    midiInStart()	NOP_FUNC(71)
		EXPORT    midiInStop()	NOP_FUNC(72)
		EXPORT    midiInUnprepareHeader()	NOP_FUNC(73)
		EXPORT    midiOutCacheDrumPatches()	NOP_FUNC(74)
		EXPORT    midiOutCachePatches()	NOP_FUNC(75)
		EXPORT    midiOutClose()	NOP_FUNC(76)
		EXPORT    midiOutGetDevCapsA()	NOP_FUNC(77)
		EXPORT    midiOutGetDevCapsW()	NOP_FUNC(78)
		EXPORT    midiOutGetErrorTextA()	NOP_FUNC(79)
		EXPORT    midiOutGetErrorTextW()	NOP_FUNC(80)
		EXPORT    midiOutGetID()	NOP_FUNC(81)
		EXPORT    midiOutGetNumDevs()	NOP_FUNC(82)
		EXPORT    midiOutGetVolume()	NOP_FUNC(83)
		EXPORT    midiOutLongMsg()	NOP_FUNC(84)
		EXPORT    midiOutMessage()	NOP_FUNC(85)
		EXPORT    midiOutOpen()	NOP_FUNC(86)
		EXPORT    midiOutPrepareHeader()	NOP_FUNC(87)
		EXPORT    midiOutReset()	NOP_FUNC(88)
		EXPORT    midiOutSetVolume()	NOP_FUNC(89)
		EXPORT    midiOutShortMsg()	NOP_FUNC(90)
		EXPORT    midiOutUnprepareHeader()	NOP_FUNC(91)
		EXPORT    midiStreamClose()	NOP_FUNC(92)
		EXPORT    midiStreamOpen()	NOP_FUNC(93)
		EXPORT    midiStreamOut()	NOP_FUNC(94)
		EXPORT    midiStreamPause()	NOP_FUNC(95)
		EXPORT    midiStreamPosition()	NOP_FUNC(96)
		EXPORT    midiStreamProperty()	NOP_FUNC(97)
		EXPORT    midiStreamRestart()	NOP_FUNC(98)
		EXPORT    midiStreamStop()	NOP_FUNC(99)
		EXPORT    mixerClose()	NOP_FUNC(100)
		EXPORT    mixerGetControlDetailsA()	NOP_FUNC(101)
		EXPORT    mixerGetControlDetailsW()	NOP_FUNC(102)
		EXPORT    mixerGetDevCapsA()	NOP_FUNC(103)
		EXPORT    mixerGetDevCapsW()	NOP_FUNC(104)
		EXPORT    mixerGetID()	NOP_FUNC(105)
		EXPORT    mixerGetLineControlsA()	NOP_FUNC(106)
		EXPORT    mixerGetLineControlsW()	NOP_FUNC(107)
		EXPORT    mixerGetLineInfoA()	NOP_FUNC(108)
		EXPORT    mixerGetLineInfoW()	NOP_FUNC(109)
		EXPORT    mixerGetNumDevs()	NOP_FUNC(110)
		EXPORT    mixerMessage()	NOP_FUNC(111)
		EXPORT    mixerOpen()	NOP_FUNC(112)
		EXPORT    mixerSetControlDetails()	NOP_FUNC(113)
		EXPORT    mmDrvInstall()	NOP_FUNC(114)
		EXPORT    mmGetCurrentTask()	NOP_FUNC(115)
		EXPORT    mmTaskBlock()	NOP_FUNC(116)
		EXPORT    mmTaskCreate()	NOP_FUNC(117)
		EXPORT    mmTaskSignal()	NOP_FUNC(118)
		EXPORT    mmTaskYield()	NOP_FUNC(119)
		EXPORT    mmioAdvance()	NOP_FUNC(120)
		EXPORT    mmioAscend()	NOP_FUNC(121)
		EXPORT    mmioClose()	NOP_FUNC(122)
		EXPORT    mmioCreateChunk()	NOP_FUNC(123)
		EXPORT    mmioDescend()	NOP_FUNC(124)
		EXPORT    mmioFlush()	NOP_FUNC(125)
		EXPORT    mmioGetInfo()	NOP_FUNC(126)
		EXPORT    mmioInstallIOProcA()	NOP_FUNC(127)
		EXPORT    mmioInstallIOProcW()	NOP_FUNC(128)
		EXPORT    mmioOpenA()	NOP_FUNC(129)
		EXPORT    mmioOpenW()	NOP_FUNC(130)
		EXPORT    mmioRead()	NOP_FUNC(131)
		EXPORT    mmioRenameA()	NOP_FUNC(132)
		EXPORT    mmioRenameW()	NOP_FUNC(133)
		EXPORT    mmioSeek()	NOP_FUNC(134)
		EXPORT    mmioSendMessage()	NOP_FUNC(135)
		EXPORT    mmioSetBuffer()	NOP_FUNC(136)
		EXPORT    mmioSetInfo()	NOP_FUNC(137)
		EXPORT    mmioStringToFOURCCA()	NOP_FUNC(138)
		EXPORT    mmioStringToFOURCCW()	NOP_FUNC(139)
		EXPORT    mmioWrite()	NOP_FUNC(140)
		EXPORT    mmsystemGetVersion()	NOP_FUNC(141)
		EXPORT    mod32Message()	NOP_FUNC(142)
		EXPORT    mxd32Message()	NOP_FUNC(143)
		EXPORT    sndPlaySoundA()	NOP_FUNC(144)
		EXPORT    sndPlaySoundW()	NOP_FUNC(145)
		EXPORT    tid32Message()	NOP_FUNC(146)
		EXPORT    timeBeginPeriod()	NOP_FUNC(147)
		EXPORT    timeEndPeriod()	NOP_FUNC(148)
		EXPORT    timeGetDevCaps()	NOP_FUNC(149)
		EXPORT    timeGetSystemTime()	NOP_FUNC(150)
		EXPORT    timeGetTime()	NOP_FUNC(151)
		EXPORT    timeKillEvent()	NOP_FUNC(152)
		EXPORT    timeSetEvent()	NOP_FUNC(153)
		EXPORT    waveInAddBuffer()	NOP_FUNC(154)
		EXPORT    waveInClose()	NOP_FUNC(155)
		EXPORT    waveInGetDevCapsA()	NOP_FUNC(156)
		EXPORT    waveInGetDevCapsW()	NOP_FUNC(157)
		EXPORT    waveInGetErrorTextA()	NOP_FUNC(158)
		EXPORT    waveInGetErrorTextW()	NOP_FUNC(159)
		EXPORT    waveInGetID()	NOP_FUNC(160)
		EXPORT    waveInGetNumDevs()	NOP_FUNC(161)
		EXPORT    waveInGetPosition()	NOP_FUNC(162)
		EXPORT    waveInMessage()	NOP_FUNC(163)
		EXPORT    waveInOpen()	NOP_FUNC(164)
		EXPORT    waveInPrepareHeader()	NOP_FUNC(165)
		EXPORT    waveInReset()	NOP_FUNC(166)
		EXPORT    waveInStart()	NOP_FUNC(167)
		EXPORT    waveInStop()	NOP_FUNC(168)
		EXPORT    waveInUnprepareHeader()	NOP_FUNC(169)
		EXPORT    waveOutBreakLoop()	NOP_FUNC(170)
		EXPORT    waveOutClose()	NOP_FUNC(171)
		EXPORT    waveOutGetDevCapsA()	NOP_FUNC(172)
		EXPORT    waveOutGetDevCapsW()	NOP_FUNC(173)
		EXPORT    waveOutGetErrorTextA()	NOP_FUNC(174)
		EXPORT    waveOutGetErrorTextW()	NOP_FUNC(175)
		EXPORT    waveOutGetID()	NOP_FUNC(176)
		EXPORT    waveOutGetNumDevs()	NOP_FUNC(177)
		EXPORT    waveOutGetPitch()	NOP_FUNC(178)
		EXPORT    waveOutGetPlaybackRate()	NOP_FUNC(179)
		EXPORT    waveOutGetPosition()	NOP_FUNC(180)
		EXPORT    waveOutGetVolume()	NOP_FUNC(181)
		EXPORT    waveOutMessage()	NOP_FUNC(182)
		EXPORT    waveOutOpen()	NOP_FUNC(183)
		EXPORT    waveOutPause()	NOP_FUNC(184)
		EXPORT    waveOutPrepareHeader()	NOP_FUNC(185)
		EXPORT    waveOutReset()	NOP_FUNC(186)
		EXPORT    waveOutRestart()	NOP_FUNC(187)
		EXPORT    waveOutSetPitch()	NOP_FUNC(188)
		EXPORT    waveOutSetPlaybackRate()	NOP_FUNC(189)
		EXPORT    waveOutSetVolume()	NOP_FUNC(190)
		EXPORT    waveOutUnprepareHeader()	NOP_FUNC(191)
		EXPORT    waveOutWrite()	NOP_FUNC(192)
		EXPORT    wid32Message()	NOP_FUNC(193)
		EXPORT    wod32Message()	NOP_FUNC(194)

#else
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
#endif

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

void InstallCall(PBYTE BaseAddress, MWORD Function)
{
	BYTE call[] = { 0xE8 };
	WriteMemory(BaseAddress, call, sizeof(call));
	BaseAddress += sizeof(call);

	MWORD offset = Function - (MWORD)BaseAddress - 4;
	WriteMemory(BaseAddress, (PBYTE)&offset, sizeof(offset));
}

// 加载系统dll
void LoadSysDll(HINSTANCE hModule, bool bSysDll)
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
			if (bSysDll)
				GetSystemDirectory(szSysDirectory, MAX_PATH);
			else
			{
				GetModuleFileName(hModule, szSysDirectory, MAX_PATH);
				wchar_t *pszLast = _tcsrchr(szSysDirectory, '\\');
				if (pszLast)
					*pszLast = '\0';
			}

			//========= 导出函数Hook ===================
			wchar_t szVersion32DLL[MAX_PATH + 1];
			lstrcpy(szVersion32DLL, szSysDirectory);
#ifdef TEMPL_WINMM
			lstrcat(szVersion32DLL, TEXT("\\winmm.dll"));
#else
			lstrcat(szVersion32DLL, TEXT("\\version.dll"));
#endif

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
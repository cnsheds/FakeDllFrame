# FakeDllFrame
一个用来生成替换Dll的框架

使用方法:
第一步:
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

示例中以替换version.dll为例

这里的函数名称等修改为自己要替换的Dll的导出函数

第二步:
			lstrcat(szVersion32DLL, TEXT("\\version.dll"));
      修改这里的Dll文件名

大功告成.

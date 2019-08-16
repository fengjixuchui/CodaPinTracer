#ifndef HIDDENELEMENTS_H
#define HIDDENELEMENTS_H

#include <cstddef>

#define NUMHIDDENMAX	64
#define HOOK_NUMENUM	100
#define NUMGROUP		16

extern bool KTM[HOOK_NUMENUM];

#define ACTIVE_HOOK(index) \
		do { if(!KTM[index]) return; } while(0)

// check HiddenElements.cpp for default choices

typedef enum _HOOK_LIST_ENABLE_DISABLE {
	/** syscall category **/
	EN_NtQueryInformationProcess,
	EN_NtQuerySystemInformation,
	EN_NtQueryPerformanceCounter,
	EN_NtOpenProcess,
	EN_NtRequestWaitReplyPort,
	EN_NtAllocateVirtualMemory,
	EN_NtProtectVirtualMemory,
	EN_NtCreateFile,
	EN_NtWriteVirtualMemory,
	EN_NtMapViewOfSection,
	EN_NtCreateThreadEx,
	EN_NtQueueApcThread,
	EN_NtResumeThread,
	EN_NtDelayExecution,
	EN_NtQueryDirectoryObject,
	EN_NtOpenKey,
	EN_NtOpenKeyEx,
	EN_NtEnumerateKey,
	EN_NtQueryValueKey,
	EN_NtQueryAttributesFile,
	EN_NtOpenDirectoryObject,
	EN_NtQueryObject,
	EN_NtClose,
	/** function category **/
	EN_VirtualFree, // MEMORY group
	EN_RtlAllocateHeap,
	EN_RtlReAllocateHeap,
	EN_GetFileAttributes, // FILE group
	EN_FindFirstFile,
	EN_FindNextFile,
	EN_CreateFile,	
	EN_IsDebuggerPresent, // DEBUGGER group
	EN_GetCursorPos, // GUI group
	EN_FindWindow,
	EN_GetWindowText,
	EN_SysAllocString, // WMI group
	EN_GetDiskFreeSpaceEx, // HARDWARE group
	EN_SetupDiGetDeviceRegistryProperty,
	EN_EnumDisplaySettings,
	EN_K32GetDeviceDriverBaseName,
	EN_GetModuleFileName, // PROCESS group
	EN_GetModuleFileNameEx,
	EN_Process32Next,
	EN_CreateProcessInternal,
	EN__popen, // PIPE group
	EN__wpopen,
	EN__tpopen,
	EN_LoadLibrary, // DLL group
	EN_LoadLibraryEx,
	EN_LdrGetDllHandle,
	EN_LdrGetDllHandleEx,
	EN_GetTickCount, // TIME group
	EN_SetTimer,
	EN_GetSystemTimeAsFileTime,
	EN_WaitForSingleObject, // MUTEX group
	EN_IcmpCreateFile, // NETWORK group
	EN_IcmpSendEcho,
	EN_WNetGetProviderName,
	EN_GetAdaptersInfo,
	EN_RegOpenKeyEx, // REGISTRY group
	EN_RegOpenKey,
	EN_RegQueryValueEx,
	EN_RtlCompareUnicodeString, // STRING group
	EN_RtlEqualUnicodeString,
	EN_wcsstr,
	EN_wcscmp,
	EN_wcsncmp,
	EN__wcsnicmp,
	EN_strstr,
	EN_strcmp,
	EN__strcmpi,
	EN_CompareString,
	EN_CompareStringEx,
	/** instruction category **/
	EN_rdtsc,
	EN_cpuid,
	EN_int0x2d

} HOOK_LIST;

typedef enum {
	EN_GR_L_MEMORY,
	EN_GR_L_FILE,
	EN_GR_L_DEBUGGER,
	EN_GR_L_GUI,
	EN_GR_L_WMI,
	EN_GR_L_HARDWARE,
	EN_GR_L_PROCESS,
	EN_GR_L_PIPE,
	EN_GR_L_DLL,
	EN_GR_L_TIME,
	EN_GR_L_MUTEX,
	EN_GR_L_NETWORK,
	EN_GR_L_REGISTRY,
	EN_GR_L_STRING,
	EN_GR_S_ALL,
	EN_GR_I_ALL
} HOOK_GROUPS;

class HiddenElements {
public:
	static void initializeHiddenStuff();

	static void updateHiddenProcesses(char** procNames);
	static void updateRegOpenKeyStrings(char** strings);
	static void updateRegQueryValueStrings(char** strings);
	static void updateGenericFileNames(char** fileNames);
	static void updateWindowNames(char** windowsNames);
	static void updateWMIQueryFail(char** strings);

	static bool shouldHideProcessStr(const char* procNameUpper);
	static bool shouldHideRegOpenKeyStr(const char* strUpper);
	static bool shouldHideReqQueryValueStr(const char* strUpper);
	static bool shouldHideGenericFileNameStr(const char* strUpper);
	static bool shouldHideWindowStr(const char* strUpper);
	static bool shouldWMIQueryFail(const char* strUpper);

	static void setGroup(int groupID, bool value);

private:
	static char* hiddenProcesses[NUMHIDDENMAX];
	static char* regOpenKeyStrings[NUMHIDDENMAX];
	static char* regQueryValueStrings[NUMHIDDENMAX];
	static char* genericFilenames[NUMHIDDENMAX];
	static char* windowNames[NUMHIDDENMAX];
	static char* WMIQueryFail[NUMHIDDENMAX];
};

#endif

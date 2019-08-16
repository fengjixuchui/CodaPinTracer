#pragma once
#include <map>
#include "pin.H"
#include "ProcessInjectionModule.h"
#include "ProcInfo.h"

class HookFunctions
{
public:
	HookFunctions();
	void hookDispatcher(IMG img);

private:
	std::map<string, int> functionsMap;
};

// Arancino
VOID VirtualAllocHook(UINT32 virtual_alloc_size, UINT32 ret_heap_address);
VOID RtlAllocateHeapHook(W::SIZE_T heap_alloc_size, ADDRINT ret_heap_address); // TODO check type for 64-bit
VOID RtlReAllocateHeapHook(ADDRINT heap_address, W::ULONG size); // TODO check type for 64-bit
VOID VirtualFreeHook(ADDRINT address_to_free);
//bool* IsDebuggerPresentHook(); // TODO look into their note
VOID CreateProcessHookEntry(W::LPWSTR  lpApplicationName);

// Suppli

typedef W::WCHAR PIN_OLECHAR;

VOID SleepHook(W::DWORD* dwmillisecond);
VOID RegQueryValueExEntryHook(W::LPCTSTR *path, W::LPBYTE *lpData);
VOID RegQueryValueExExitHook();
VOID RegOpenKeyExHook(W::LPCTSTR * path);
VOID GetFileAttributesHook(W::LPCSTR * path);
VOID GetAdaptersInfoHookEntry(PIP_ADAPTER_INFO *adapInfo, W::PULONG *size);
VOID GetAdaptersInfoHookExit(ADDRINT ret);
VOID CreateFileHook(W::LPCTSTR* path);
VOID FindWindowHook(W::LPCTSTR* path1, W::LPCTSTR* path2);
VOID WNetGetProviderNameHookEntry(W::LPTSTR* buffer);
VOID WNetGetProviderNameHookExit();
VOID Process32NextEntry(W::LPPROCESSENTRY32* proc);
VOID Process32NextExit();
VOID GetTickCountHook(W::DWORD* ret);
VOID SetTimerHook(W::UINT *time);
VOID WaitForSingleObjectHook(W::DWORD *time);
VOID IcmpCreateFileEntryHook();
VOID IcmpCreateFileExitHook();
VOID IcmpSendEchoHook(W::DWORD *time);
VOID SysAllocStringHook(const PIN_OLECHAR **path);
VOID GetDiskFreeSpaceHookExit();
VOID FindFirstFileHook(W::LPCTSTR *path);
VOID GetSystemTimeAsFileTimeHook(W::LPFILETIME *lpSystemTimeAsFileTime);
VOID _popenHook(const char **command);
VOID LoadLibraryHook(W::LPCTSTR *lib);
VOID VirtualProtectHookEntry(VOID **lpAddress, W::SIZE_T *dwSize, W::ULONG *protect);
VOID VirtualProtectHookExit();
VOID GetDeviceDriverBaseNameHookEntry(W::LPTSTR *lpBaseName);
VOID GetDeviceDriverBaseNameHookExit();
VOID GetWindowTextHookEntry(W::LPTSTR *lpString);
VOID GetWindowTextHookExit();
VOID GetModuleFileNameHookEntry(W::LPTSTR *name);
VOID GetModuleFileNameHookExit();
VOID LdrGetDllHandleHook(W::PUNICODE_STRING *p);
VOID EnumDisplaySettingsHook(W::LPCTSTR *devName);
VOID SetupDiGetDeviceRegistryPropertyHookExit(ADDRINT ret);
VOID SetupDiGetDeviceRegistryPropertyHookEntry(W::PBYTE *buffer);
VOID CloseHandleHookEntry(W::HANDLE *handle);
VOID CloseHandleHookExit(W::BOOL *ret);
VOID GetCursorPosHookEntry(ADDRINT retAddr, W::LPPOINT *point);
VOID GetCursorPosHookExit();
//VOID SCardDisconnectHookEntry(W::DWORD *par);
VOID GetDiskFreeSpaceHookEntry(ADDRINT retAddr,
		W::PULARGE_INTEGER *lpFreeBytesAvailable,
		W::PULARGE_INTEGER *lpTotalNumberOfBytes,
		W::PULARGE_INTEGER *lpTotalNumberOfFreeBytes);

/*DEBUG HOOK*/
VOID CompareStringHook(W::LPCTSTR *s1, W::LPCTSTR *s2);
VOID RtlCompareUnicodeStringHook(W::PCUNICODE_STRING *s1, W::PCUNICODE_STRING *s2);
VOID wcsstrHook(wchar_t** wcs1, const wchar_t** wcs2);
VOID wcscmpHook(wchar_t** wcs1, const wchar_t** wcs2);
VOID strcmpHook(char** wcs1, const char** wcs2);
VOID strstrHook(char** wcs1, const char** wcs2);
VOID PrintDebug(const char *a); // used in PINdemonium.cpp

/*Logging hooks*/
VOID timeLogHook(ADDRINT retAddr, const char* funName);
VOID logGetSystemTimeAsFileTime(ADDRINT retAddr);

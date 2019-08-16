#include "HookFunctions.h"
#include "Logging.h"
#include "HookSyscalls.h" // for TIMER macro
#include "AssemblyHandler.h"
#include "porting.h"
#include "Helper.h"
#include "HiddenElements.h"
#include "types.h"

#define CHAR_EDS	'd'
#define CHAR_SDI	's'

HookFunctions::HookFunctions() {
	/* [Original code from Arancino]
	this->functionsMap.insert( std::pair<string,int>("VirtualFree",VIRTUALFREE_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("CreateProcessInternalW",CREATEPROCESS_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("CreateProcessInternalA",CREATEPROCESS_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("CreateProcessInternal",CREATEPROCESS_INDEX) );
	*/
	/* [Original code from Arancino - disabled already]
	this->functionsMap.insert( std::pair<string,int>("RtlAllocateHeap",RTLALLOCATEHEAP_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("IsDebuggerPresent",ISDEBUGGERPRESENT_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("RtlReAllocateHeap",RTLREALLOCATEHEAP_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("VirtualQuery",VIRTUALQUERY_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("VirtualProtect",VIRTUALPROTECT_INDEX) );
	this->functionsMap.insert( std::pair<string,int>("VirtualQueryEx",VIRTUALQUERYEX_INDEX) );
	CsrFreeCaptureBufferHook
	*/

	// special hook for syscalls for logging purposes
	this->functionsMap.insert(std::pair<string, int>("NtDelayExecution", NTDELAYEXEC_INDEX));
	this->functionsMap.insert(std::pair<string, int>("NtQueryPerformanceCounter", NTQUERYPERF_INDEX));

	this->functionsMap.insert(std::pair<string, int>("VirtualFree", VIRTUALFREE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CreateProcessInternalW", CREATEPROCESS_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CreateProcessInternalA", CREATEPROCESS_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CreateProcessInternal", CREATEPROCESS_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RtlAllocateHeap", RTLALLOCATEHEAP_INDEX));
	this->functionsMap.insert(std::pair<string, int>("IsDebuggerPresent", ISDEBUGGERPRESENT_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RtlReAllocateHeap", RTLREALLOCATEHEAP_INDEX));

	this->functionsMap.insert(std::pair<string, int>("GetFileAttributes", GETFILEATTRIBUTES_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetFileAttributesW", GETFILEATTRIBUTES_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetFileAttributesA", GETFILEATTRIBUTES_INDEX));

	this->functionsMap.insert(std::pair<string, int>("FindFirstFile", GETFIRSTFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("FindFirstFileA", GETFIRSTFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("FindFirstFileW", GETFIRSTFILE_INDEX));

	this->functionsMap.insert(std::pair<string, int>("FindNextFile", GETFIRSTFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("FindNextFileA", GETFIRSTFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("FindNextFileW", GETFIRSTFILE_INDEX));

	this->functionsMap.insert(std::pair<string, int>("CreateFile", CREATEFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CreateFileW", CREATEFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CreateFileA", CREATEFILE_INDEX));

	this->functionsMap.insert(std::pair<string, int>("GetAdaptersInfo", GETADAPTER_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("GetCursorPos", GETCUR_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("FindWindow", FINDWINDOW_INDEX));
	this->functionsMap.insert(std::pair<string, int>("FindWindowW", FINDWINDOW_INDEX));
	this->functionsMap.insert(std::pair<string, int>("FindWindowA", FINDWINDOW_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("WNetGetProviderName", WGETNET_INDEX));
	this->functionsMap.insert(std::pair<string, int>("WNetGetProviderNameW", WGETNET_INDEX));
	this->functionsMap.insert(std::pair<string, int>("WNetGetProviderNameA", WGETNET_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("Process32Next", NEXTPROC_INDEX));
	this->functionsMap.insert(std::pair<string, int>("Process32NextW", NEXTPROC_INDEX));
	this->functionsMap.insert(std::pair<string, int>("Process32NextA", NEXTPROC_INDEX));

	this->functionsMap.insert(std::pair<string, int>("NtClose", CLOSEH_INDEX));

	//this->functionsMap.insert(std::pair<string, int>("SCardDisconnect", SCARD_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("SysAllocString", SYSALLOC_INDEX));

	this->functionsMap.insert(std::pair<string, int>("SetupDiGetDeviceRegistryProperty", SETUPDEV_INDEX));
	this->functionsMap.insert(std::pair<string, int>("SetupDiGetDeviceRegistryPropertyW", SETUPDEV_INDEX));
	this->functionsMap.insert(std::pair<string, int>("SetupDiGetDeviceRegistryPropertyA", SETUPDEV_INDEX));

	this->functionsMap.insert(std::pair<string, int>("EnumDisplaySettings", ENUMDIS_INDEX));
	this->functionsMap.insert(std::pair<string, int>("EnumDisplaySettingsA", ENUMDIS_INDEX));
	this->functionsMap.insert(std::pair<string, int>("EnumDisplaySettingsW", ENUMDIS_INDEX));

	this->functionsMap.insert(std::pair<string, int>("GetModuleFileName", GETMODULE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetModuleFileNameA", GETMODULE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetModuleFileNameW", GETMODULE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetModuleFileNameEx", GETMODULEX_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetModuleFileNameExA", GETMODULEX_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetModuleFileNameExW", GETMODULEX_INDEX));

	this->functionsMap.insert(std::pair<string, int>("K32GetDeviceDriverBaseName", DEVICEBASE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("K32GetDeviceDriverBaseNameA", DEVICEBASE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("K32GetDeviceDriverBaseNameW", DEVICEBASE_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("GetWindowText", WINNAME_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetWindowTextA", WINNAME_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetWindowTextW", WINNAME_INDEX));

	this->functionsMap.insert(std::pair<string, int>("LoadLibrary", LOADLIB_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LoadLibraryA", LOADLIB_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LoadLibraryW", LOADLIB_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LoadLibraryEx", LOADLIB_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LoadLibraryExA", LOADLIB_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LoadLibraryExW", LOADLIB_INDEX));

	this->functionsMap.insert(std::pair<string, int>("_popen", POPEN_INDEX));
	this->functionsMap.insert(std::pair<string, int>("_wpopen", POPEN_INDEX));
	this->functionsMap.insert(std::pair<string, int>("_tpopen", POPEN_INDEX));

	this->functionsMap.insert(std::pair<string, int>("LdrGetDllHandle", LDRHND_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LdrGetDllHandleA", LDRHND_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LdrGetDllHandleW", LDRHND_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LdrGetDllHandleEx", LDRHND_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LdrGetDllHandleExA", LDRHND_INDEX));
	this->functionsMap.insert(std::pair<string, int>("LdrGetDllHandleExW", LDRHND_INDEX));

	this->functionsMap.insert(std::pair<string, int>("GetDiskFreeSpaceEx", GETDISKSPACE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetDiskFreeSpaceExW", GETDISKSPACE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetDiskFreeSpaceExA", GETDISKSPACE_INDEX));
	
	//timing
	
	this->functionsMap.insert(std::pair<string, int>("GetTickCount", GETTICKCOUNT_INDEX));
	this->functionsMap.insert(std::pair<string, int>("SetTimer", SETTIMER_INDEX));
	this->functionsMap.insert(std::pair<string, int>("WaitForSingleObject", WAITOBJ_INDEX));
	this->functionsMap.insert(std::pair<string, int>("GetSystemTimeAsFileTime", TIMEASFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("IcmpCreateFile", ICMPFILE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("IcmpSendEcho", ICMPECHO_INDEX));
	
	//regstatus
	this->functionsMap.insert(std::pair<string, int>("RegOpenKeyExA", REGOPENKEY_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RegOpenKeyExW", REGOPENKEY_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RegOpenKeyEx", REGOPENKEY_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RegOpenKeyA", REGOPENKEY_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RegOpenKeyW", REGOPENKEY_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RegOpenKey", REGOPENKEY_INDEX));

	this->functionsMap.insert(std::pair<string, int>("RegQueryValueExW", REGQUERYVALUE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RegQueryValueExA", REGQUERYVALUE_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RegQueryValueEx", REGQUERYVALUE_INDEX));

	/*DEBUG HOOK*

    this->functionsMap.insert(std::pair<string, int>("RtlCompareUnicodeString", RTLSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("RtlEqualUnicodeString", RTLSTR_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("wcsstr", WCSSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("wcscmp", WCSCMP_INDEX));
	this->functionsMap.insert(std::pair<string, int>("wcsncmp", WCSCMP_INDEX));
	this->functionsMap.insert(std::pair<string, int>("_wcsnicmp", WCSCMP_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("strstr", STRSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("strcmp", STRCMP_INDEX));
	this->functionsMap.insert(std::pair<string, int>("_strcmpi", STRCMP_INDEX));
	
	this->functionsMap.insert(std::pair<string, int>("CompareString", CMPSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CompareStringA", CMPSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CompareStringW", CMPSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CompareStringEx", CMPSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CompareStringExA", CMPSTR_INDEX));
	this->functionsMap.insert(std::pair<string, int>("CompareStringExW", CMPSTR_INDEX));

	/*END DEBUG HOOK*/

}

//scan the image and try to hook all the function specified above
void HookFunctions::hookDispatcher(IMG img){
	// iterate over functions that we want to hook/replace
	for (std::map<string,int>::iterator item = this->functionsMap.begin(); item != this->functionsMap.end(); ++item){
		const char * func_name = item->first.c_str();
		RTN rtn = RTN_FindByName(img, func_name); // get pointer to the function
		
		if (rtn != RTN_Invalid()) {
			int index = item->second;
			ADDRINT va_address = RTN_Address(rtn);
			//LOG_INFO("Inside %s Address of %s: %08x" ,IMG_Name(img).c_str(),func_name, va_address);
			
			RTN_Open(rtn);
			// different arguments get passed to the hooking routine depending on the specific function
			switch(index){
				/* [Original code from Arancino] */
				case(VIRTUALFREE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)VirtualFreeHook,
										IARG_FUNCARG_ENTRYPOINT_VALUE, 0, // lpAddress for VirtualFree
										IARG_END);
					break;
				case(CREATEPROCESS_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)CreateProcessHookEntry,
										IARG_FUNCARG_ENTRYPOINT_VALUE, 1, // lpCommandLine? TODO check this
										IARG_END);
					break;

				/*
				case(VIRTUALALLOC_INDEX):
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)VirtualAllocHook,
										IARG_FUNCARG_ENTRYPOINT_VALUE, 1, // SIZE_T dwSize
										IARG_FUNCRET_EXITPOINT_VALUE,
										IARG_END);
					break;
				case(RTLALLOCATEHEAP_INDEX):
					//need to be IPOINT_AFTER because the allocated address is returned as return value
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)RtlAllocateHeapHook,
										IARG_FUNCARG_ENTRYPOINT_VALUE, 2, // SIZE_T Size
										IARG_FUNCRET_EXITPOINT_VALUE,
										IARG_END);
					break;
				case(ISDEBUGGERPRESENT_INDEX):
					RTN_Replace(rtn, AFUNPTR(IsDebuggerPresentHook));
					break;
				case(RTLREALLOCATEHEAP_INDEX):
					//IPOINT_BEFORE because the address to be realloc is passed as an input paramenter
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)RtlReAllocateHeapHook,
										IARG_FUNCARG_ENTRYPOINT_VALUE, 2, // MemoryPointer
										IARG_FUNCARG_ENTRYPOINT_VALUE, 3, // Size
										IARG_END);
					break;
				*/
				
				/* [Suppli] */
				case(ISDEBUGGERPRESENT_INDEX):
					//RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)IsDebuggerPresentHook, IARG_END);
					break;

				case(SLEEP_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)SleepHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(REGQUERYVALUE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)RegQueryValueExEntryHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 4, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)RegQueryValueExExitHook, IARG_END);
					break;

				case(REGOPENKEY_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)RegOpenKeyExHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				case(GETFILEATTRIBUTES_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetFileAttributesHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(GETADAPTER_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetAdaptersInfoHookEntry, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)GetAdaptersInfoHookExit, IARG_FUNCRET_EXITPOINT_VALUE, IARG_END);
					break;

				case(CREATEFILE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)CreateFileHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(FINDWINDOW_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)FindWindowHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				case(WGETNET_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)WNetGetProviderNameHookEntry, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)WNetGetProviderNameHookExit, IARG_END);
					break;

				case(NEXTPROC_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)Process32NextEntry, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)Process32NextExit, IARG_END);
					break;

				case(GETTICKCOUNT_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)timeLogHook, IARG_RETURN_IP, IARG_PTR, "GetTickCnt", IARG_END); // GetTickCount
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)GetTickCountHook, IARG_FUNCRET_EXITPOINT_REFERENCE, IARG_END);
					break;

				case(SETTIMER_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)timeLogHook, IARG_RETURN_IP, IARG_PTR, "SetTimer", IARG_END); // SetTimer
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)SetTimerHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 2, IARG_END);
					break;

				case(WAITOBJ_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)timeLogHook, IARG_RETURN_IP, IARG_PTR, "WFSO", IARG_END); // WaitForSingleObject
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)WaitForSingleObjectHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				case(ICMPFILE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)timeLogHook, IARG_RETURN_IP, IARG_PTR, "IcmpCrtF", IARG_END); // IcmpCreateFile
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)IcmpCreateFileEntryHook, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)IcmpCreateFileExitHook, IARG_END);
					break;

				case(ICMPECHO_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)timeLogHook, IARG_RETURN_IP, IARG_PTR, "IcmpSndE", IARG_END); // IcmpSendEcho
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)IcmpSendEchoHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 7, IARG_END);
					break;

				case(SYSALLOC_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)SysAllocStringHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(GETDISKSPACE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetDiskFreeSpaceHookEntry,
						IARG_RETURN_IP,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 2, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 3, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)GetDiskFreeSpaceHookExit, IARG_END);
					break;

				case(GETFIRSTFILE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)FindFirstFileHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(TIMEASFILE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)logGetSystemTimeAsFileTime, IARG_RETURN_IP, IARG_END);
					//RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetSystemTimeAsFileTimeHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(POPEN_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)_popenHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(LOADLIB_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)LoadLibraryHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(VPROTECT_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)VirtualProtectHookEntry, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 2, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)VirtualProtectHookExit, IARG_END);
					break;

				case(DEVICEBASE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetDeviceDriverBaseNameHookEntry,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)GetDeviceDriverBaseNameHookExit, IARG_END);
					break;

				case(WINNAME_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetWindowTextHookEntry,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)GetWindowTextHookExit, IARG_END);
					break;

				case(GETMODULE_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetModuleFileNameHookEntry,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)GetModuleFileNameHookExit, IARG_END);
					break;

				case(LDRHND_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)LdrGetDllHandleHook,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 2, IARG_END);
					break;

				case(ENUMDIS_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)EnumDisplaySettingsHook,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					break;

				case(SETUPDEV_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)SetupDiGetDeviceRegistryPropertyHookEntry,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 4, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)SetupDiGetDeviceRegistryPropertyHookExit,
						IARG_FUNCRET_EXITPOINT_VALUE, IARG_END);
					break;

				case(CLOSEH_INDEX):
					if (Config::getInstance()->ATTACH_DEBUGGER) {
						RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)CloseHandleHookEntry,
							IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
						RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)CloseHandleHookExit,
							IARG_FUNCRET_EXITPOINT_REFERENCE, IARG_END);
					}
					break;

				case(GETCUR_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)GetCursorPosHookEntry,
						IARG_RETURN_IP,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_END);
					RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)GetCursorPosHookExit, IARG_END);
					break;

				/*case(SCARD_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)SCardDisconnectHookEntry,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;*/


					/****************** DEBUG HOOK **************/

				case(CMPSTR_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)CompareStringHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 2, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 4, IARG_END);
					break;

				case(RTLSTR_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)RtlCompareUnicodeStringHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				case(WCSSTR_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)wcsstrHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				case(WCSCMP_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)wcscmpHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				case(STRSTR_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)strstrHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				case(STRCMP_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)strcmpHook, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0, IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
					break;

				// log syscalls for timing artifacts
				case(NTDELAYEXEC_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)timeLogHook, IARG_RETURN_IP, IARG_PTR, "NtDelayEx", IARG_END); //NtDelayExecuton
					break;

				case(NTQUERYPERF_INDEX):
					RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)timeLogHook, IARG_RETURN_IP, IARG_PTR, "NtQPerfC", IARG_END); // NtQueryPerformanceCounter
					break;
				}			
			RTN_Close(rtn);
		}
	}
}

/******* ARANCINO's HOOKERS START HERE *******/

//REMEMBER!!! : PIN wants a function pointer in the AFUNCPTR agument!!!
//avoid the detection of the debugger replacing the function IsDebuggerPresent() with a new one that returns always false
//very basic way to avoid this anti-debugging technique
/*
bool * IsDebuggerPresentHook() {
	return false; // TODO this is wrong?!?
}
*/
// hook the VirtualAlloc() in order to retrieve the memory range allocated and build ours data structures
// NOT USED ANYMORE, WE HOOKED THE NtAllocateVirtualMemory syscall in order to be more generic ( see HookSyscalls.cpp row 126 )
VOID VirtualAllocHook(UINT32 virtual_alloc_size, UINT32 ret_heap_address) {

	ProcInfo *proc_info = ProcInfo::getInstance();
	HeapZone hz;
	hz.begin = ret_heap_address;
	hz.size = virtual_alloc_size;
	hz.end = ret_heap_address + virtual_alloc_size;
	hz.version = 0;
	LOG_INFO("Virtualloc insert in Heap Zone %08x -> %08x", hz.begin, hz.end);
	//saving this heap zone in the map inside ProcInfo

	std::string heap_key = to_string((unsigned long long)hz.begin) + to_string((unsigned long long)hz.end); /* DCD: was _ULonglong */

	std::string hz_md5 = md5(heap_key);

	proc_info->insertHeapZone(hz_md5, hz);
}

//hook the  HeapAllocHook() in order to retrieve the memory range allocated and build ours data structures
static HeapZone prev_heap_alloc;
std::string prev_md5;

VOID RtlAllocateHeapHook(W::SIZE_T heap_alloc_size, ADDRINT ret_heap_address) {
	
	ACTIVE_HOOK(EN_RtlAllocateHeap);

	if (heap_alloc_size == 0) {
		return;
	}
	ProcInfo *proc_info = ProcInfo::getInstance();

	//need this code because sometimes RTLAllocHeap is invoked twice (because of the IPOINT_AFTER insert)and the second time is the correct one
	if (prev_heap_alloc.begin == ret_heap_address) {
		proc_info->deleteHeapZone(prev_md5);
	}

	HeapZone hz;
	hz.begin = ret_heap_address;
	hz.size = (UINT32)heap_alloc_size; // DCD this should be fine
	hz.end = ret_heap_address + heap_alloc_size;
	hz.version = 0;
	prev_heap_alloc = hz;

	// DCD this looks like a leftover
	//char *hz_data = (char*)malloc(hz.size);
	//PIN_SafeCopy(hz_data, (void const *)hz.begin, hz.size);

	std::string heap_key = to_string(hz.begin) + to_string(hz.end); /* DCD: why they were both casted to _ULonglong ?? */
	std::string hz_md5 = md5(heap_key);

	proc_info->insertHeapZone(hz_md5, hz);
	//free(hz_data);
}

// undocumented NTAPI function
// HeapReAlloc maps directly to RtlReAllocateHeap
/*NTSYSAPI PVOID NTAPI RtlReAllocateHeap(
IN PVOID	HeapHandle,
IN ULONG	Flags,
IN PVOID	MemoryPointer,
IN ULONG	Size);*/
VOID RtlReAllocateHeapHook(ADDRINT heap_address, W::ULONG size) {

	ACTIVE_HOOK(EN_RtlReAllocateHeap);

	ProcInfo *proc_info = ProcInfo::getInstance();
	HeapZone hz;
	hz.begin = heap_address;
	hz.size = size;
	hz.end = heap_address + size;
	hz.version = 0;

	// DCD this looks like a leftover
	//char *hz_data = (char *)malloc(hz.size);
	//PIN_SafeCopy(hz_data, (void const *)hz.begin, hz.size);

	std::string heap_key = to_string(hz.begin) + to_string(hz.end); /* DCD: why they were both casted to _ULonglong ?? */
	std::string hz_md5 = md5(heap_key);

	proc_info->insertHeapZone(hz_md5, hz);
	//free(hz_data);
}

VOID VirtualFreeHook(ADDRINT address_to_free) {

	ACTIVE_HOOK(EN_VirtualFree);

#if EVALUATION_LOGGING == 0
	LOG_INFO("Calling VirtualFree of the address %08x", address_to_free);
#endif
	ProcInfo *pInfo = ProcInfo::getInstance();
	std::vector<HeapZoneID> &HeapZones = pInfo->getHeapZones();

	std::string md5_to_remove;

	for (std::vector<HeapZoneID>::iterator it = HeapZones.begin(); it != HeapZones.end(); ++it) {
		if (address_to_free == it->second.begin) {
			md5_to_remove = it->first;
			pInfo->deleteHeapZone(it->first); // DCD should not be empty
			return;
		}
	}
}

/*
VOID VirtualQueryHook (W::LPCVOID baseAddress, W::PMEMORY_BASIC_INFORMATION mbi, W::SIZE_T *numBytes) {
FakeReadHandler* fake_memory_handler = new FakeReadHandler();
if (!fake_memory_handler->isAddrInWhiteList((ADDRINT)baseAddress) && numBytes && mbi) {
*numBytes = 0;
mbi->State = MEM_FREE;
}
}

VOID VirtualQueryExHook (W::HANDLE hProcess, W::LPCVOID baseAddress, W::PMEMORY_BASIC_INFORMATION mbi, W::SIZE_T *numBytes) {
if (hProcess == W::GetCurrentProcess())
VirtualQueryHook(baseAddress, mbi, numBytes);
}
*/


VOID CreateProcessHookEntry(W::LPWSTR lpApplicationName) {
	ACTIVE_HOOK(EN_CreateProcessInternal);
	LOG_INFO("Started CreateProcessInternal application name %S", lpApplicationName);
	ProcessInjectionModule::getInstance()->setInsideCreateProcess();
}


/********** SUPPLI HOOKS START HERE ********/

VOID PrintDebug(const char *a) {

	//if(ProcInfo::getInstance()->tmp == 1)
		cout << "\ndebug " << a << endl;
}


VOID SleepHook(W::DWORD* dwmillisecond) {

	LOG_EVASION("[Sleep] - %u", dwmillisecond);
	ProcInfo* in = ProcInfo::getInstance();
	in->sleepMs += *dwmillisecond;
	in->sleepMsTick += *dwmillisecond;

	//reset sleep value
	*dwmillisecond = 0;

}


/* hook register query on VBOX artefact */
VOID RegQueryValueExEntryHook(W::LPCTSTR *path, W::LPBYTE *lpData) {

	ACTIVE_HOOK(EN_RegQueryValueEx);
	ProcInfo* in = ProcInfo::getInstance();
	in->dataQuery = *lpData;

}

VOID RegQueryValueExExitHook() {

	ACTIVE_HOOK(EN_RegQueryValueEx);

	ProcInfo* in = ProcInfo::getInstance();

	W::LPBYTE lpData = in->dataQuery;

	if (lpData == NULL || *lpData == 0)
		return;

	char value[PATH_BUFSIZE];
	GET_TO_UPPER((char*)lpData, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideReqQueryValueStr(value)) goto FIX;

	memset(value, 0, sizeof(value));
	GET_LPCSTR_TO_UPPER(lpData, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideReqQueryValueStr(value)) goto FIX;

	return;

FIX:
	LOG_EVASION("[RegQueryValueEx] - %s", value);
	memset((void*)lpData, 0, sizeof(lpData));

}


/* hook open key on VBOX artefact */
VOID RegOpenKeyExHook(W::LPCTSTR * path) {

	ACTIVE_HOOK(EN_RegOpenKeyEx);

	if (path == NULL || *path == NULL || (char*)*path == 0) // check also for empty string
		return;

	char value[PATH_BUFSIZE];
	GET_TO_UPPER((char*)*path, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideRegOpenKeyStr(value)) goto FIX;

	memset(value, 0, sizeof(value));
	GET_LPCSTR_TO_UPPER(*path, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideRegOpenKeyStr(value)) goto FIX;

	return;

FIX:
	LOG_EVASION("[RegOpenKey] - %s", value);
	*path = "SOFTWARE\\ZORRO";

}



/***** Check if exists some files of VBOX ***********/
VOID GetFileAttributesHook(W::LPCSTR * path) {

	ACTIVE_HOOK(EN_GetFileAttributes);

	if (path == NULL || *path == NULL || (char*)*path == "")
		return;

	char value[PATH_BUFSIZE];

	GET_LPCSTR_TO_UPPER(*path, value, PATH_BUFSIZE);

	//cout << "FILE ATTR: " << value << endl;
	if (HiddenElements::shouldHideGenericFileNameStr(value)) goto FIX;

	memset(value, 0, sizeof(value));
	GET_TO_UPPER((*path), value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideGenericFileNameStr(value)) goto FIX;

	return;

FIX:
	LOG_EVASION("[GetFileAttributes] - %s", value);
	*path = "C:\\c.txt";

}


VOID GetAdaptersInfoHookEntry(PIP_ADAPTER_INFO *adapInfo, W::PULONG *size) {

	ACTIVE_HOOK(EN_GetAdaptersInfo);

	LOG_EVASION("[GetAdaptersInfo] Check on MACAddress value");
	
	ProcInfo *pc = ProcInfo::getInstance();
	pc->macStruct = *adapInfo;
	pc->macSizeStruct = *size;
	pc->macSizeStructInitial = **size;	

}

VOID GetAdaptersInfoHookExit(ADDRINT ret) {

	ACTIVE_HOOK(EN_GetAdaptersInfo);

	ProcInfo *pc = ProcInfo::getInstance();
	PIP_ADAPTER_INFO adapInfo = pc->macStruct;
	W::PULONG size = pc->macSizeStruct;
	W::ULONG preSize = pc->macSizeStructInitial;
	
	pc->macCounter = (pc->macCounter + 1) % 2;
	
	if (pc->macCounter != 0)
		return;

	if (preSize != *size)
		return;

	while (adapInfo != nullptr) {
		if (adapInfo->AddressLength == 6 && !memcmp("\x08\x00\x27", adapInfo->Address, 3)) {
			memcpy(adapInfo->Address, "\x07\x01\x33", 3);
			break;
		}
		adapInfo = adapInfo->Next;
	}
	

}

VOID CreateFileHook(W::LPCTSTR* path) {

	ACTIVE_HOOK(EN_CreateFile);

	if (path == NULL || *path == NULL || (char*)*path == "")
		return;

	char value[PATH_BUFSIZE];
	GET_TO_UPPER((char*)*path, value, PATH_BUFSIZE);

	if (strstr(value, "VIRTUALBOX") != NULL || strstr(value, "VBOX") != NULL ||
		strstr(value, "GUEST") != NULL || strstr(value, "ORACLE") != NULL) {
		LOG_EVASION("[CreateFile] - %s", value);
		*path = (W::LPCSTR)L"C:\\c.txt";
		return;
	}

	memset(value, 0, sizeof(value));
	GET_LPCSTR_TO_UPPER(*path, value, PATH_BUFSIZE);

	//cout << "OPEN FILE: " << value << endl;
	ProcInfo::getInstance()->createFCont++;

	if (strstr(value, "VIRTUALBOX") != NULL || strstr(value, "VBOX") != NULL ||
		strstr(value, "GUEST") != NULL || strstr(value, "ORACLE") != NULL) {

		if (ProcInfo::getInstance()->flagObsidium) return;

		LOG_EVASION("[CreateFile] - %s", value);
		if (ProcInfo::getInstance()->createFCont == 8 && strstr(value, "VBOXGUEST") != NULL) {
			//obsidium!
			ProcInfo::getInstance()->flagObsidium = true;
			return;
		}

		*path = (W::LPCTSTR)L"C:\\c.txt";

	}

}

VOID FindWindowHook(W::LPCTSTR* path1, W::LPCTSTR* path2) {

	ACTIVE_HOOK(EN_FindWindow);

	char value[PATH_BUFSIZE] = { 0 };

	if (path1 != NULL && *path1 != NULL && (char*)*path1 != "") {	

		GET_TO_UPPER((char*)*path1, value, PATH_BUFSIZE);

		if (HiddenElements::shouldHideWindowStr(value)) {
			LOG_EVASION("[FindWindow] - %s", value);
			*path1 = "W";
			return;
		}

		memset(value, 0, sizeof(value));
		GET_LPCSTR_TO_UPPER(*path1, value, PATH_BUFSIZE);

		if (HiddenElements::shouldHideWindowStr(value)) {
			LOG_EVASION("[FindWindow] - %s", value);
			W::LPCTSTR a = "a";
			*path1 = a;
			return;
		}
	}

	// test on path2
	if (!(path2 != NULL && *path2 != NULL && (char*)*path2 != "")) return;
	
	memset(value, 0, sizeof(value));
	GET_TO_UPPER((char*)*path2, value, PATH_BUFSIZE);

	if (HiddenElements::shouldHideWindowStr(value)) goto FIX2;

	memset(value, 0, sizeof(value));
	GET_LPCSTR_TO_UPPER(*path2, value, PATH_BUFSIZE);

	if (HiddenElements::shouldHideWindowStr(value)) goto FIX2;

	return;

FIX2:
	LOG_EVASION("[FindWindow] - %s", value);
	*path2 = "WantSuppli";

}

VOID WNetGetProviderNameHookEntry(W::LPTSTR* buffer) {

	ACTIVE_HOOK(EN_WNetGetProviderName);

	ProcInfo *pInfo = ProcInfo::getInstance();
	pInfo->buf = *buffer;

}

VOID WNetGetProviderNameHookExit() {

	ACTIVE_HOOK(EN_WNetGetProviderName);

	ProcInfo *pInfo = ProcInfo::getInstance();
	W::LPTSTR buffer = pInfo->buf;

	if (buffer == NULL) return;

	char value[PATH_BUFSIZE];

	GET_LPCSTR_TO_UPPER(buffer, value, PATH_BUFSIZE);

	if (strstr(value, "VIRTUALBOX") != NULL || strstr(value, "VBOX") != NULL || strstr(value, "ORACLE") != NULL) {
		LOG_EVASION("[WNetGPN] - %s", value);
		pInfo->buf[0] = 'I';
		pInfo->buf[2] = 'n';
		pInfo->buf[4] = 't';
		pInfo->buf[6] = 'e';
		pInfo->buf[8] = 'l';
		return;
	}

	memset(value, 0, sizeof(value));

	GET_TO_UPPER(buffer, value, PATH_BUFSIZE);

	if (strstr(value, "VIRTUALBOX") != NULL || strstr(value, "VBOX") != NULL || strstr(value, "ORACLE") != NULL) {
		LOG_EVASION("[WNetGPN] - %s", value);
		pInfo->buf[0] = 'I';
		pInfo->buf[1] = 'n';
		pInfo->buf[2] = 't';
		pInfo->buf[3] = 'e';
		pInfo->buf[4] = 'l';
	}
	
}


/**** PROCESS NEXT 32 ****/
VOID Process32NextEntry(W::LPPROCESSENTRY32* proc) {

	ACTIVE_HOOK(EN_Process32Next);

	ProcInfo *pInfo = ProcInfo::getInstance();
	pInfo->lp = *proc;

}

VOID Process32NextExit() {

	ACTIVE_HOOK(EN_Process32Next);

	ProcInfo *pInfo = ProcInfo::getInstance();

	if (pInfo->lp == NULL)
		return;

	W::PROCESSENTRY32 a = (*pInfo->lp);

	char value[PATH_BUFSIZE];

	// try LPCSTR first
	GET_LPCSTR_TO_UPPER(a.szExeFile, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideProcessStr(value)) goto FIX;
	
	memset(value, 0, sizeof(value));
	GET_TO_UPPER(a.szExeFile, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideProcessStr(value)) goto FIX;
	
	return;

	// perform replacement
FIX:
	LOG_EVASION("[Process32Next] - %s", value);
	memset((pInfo->lp->szExeFile), 0, sizeof(a.szExeFile));
	//if (sizeof(a.szExeFile) < 7) return;
	pInfo->lp->szExeFile[0] = 'c';
	pInfo->lp->szExeFile[1] = 'm';
	pInfo->lp->szExeFile[2] = 'd';
	pInfo->lp->szExeFile[3] = '.';
	pInfo->lp->szExeFile[4] = 'e';
	pInfo->lp->szExeFile[5] = 'x';
	pInfo->lp->szExeFile[6] = 'e';
}

VOID GetTickCountHook(W::DWORD* ret) {

	ACTIVE_HOOK(EN_GetTickCount);

	ProcInfo* pi = ProcInfo::getInstance();
	pi->tick += 15 + pi->sleepMsTick;
	pi->sleepMsTick = 0;
	*ret = pi->tick;

}

VOID SetTimerHook(W::UINT *time) {

	ACTIVE_HOOK(EN_SetTimer);

	//LOG_EVASION("[EVASION?] SetTimer called! -> %u", *time);
	if (*time == INFINITE)
		return;

	ProcInfo* in = ProcInfo::getInstance();
	in->sleepMs += *time;
	in->sleepMsTick += *time;

	//reset sleep value
	*time = in->sleepTime;

}

VOID WaitForSingleObjectHook(W::DWORD *time) {

	ACTIVE_HOOK(EN_WaitForSingleObject);

	if (*time == INFINITE) { //avoit infinite wait break
		return;
	}

	//LOG_EVASION("[EVASION?] WaitForSingleObject called! -> %u", *time);

	ProcInfo* in = ProcInfo::getInstance();
	in->sleepMs += *time;
	in->sleepMsTick += *time;

	*time = TIMER;

}

VOID IcmpCreateFileEntryHook() {

	ACTIVE_HOOK(EN_IcmpCreateFile);

	ProcInfo* in = ProcInfo::getInstance();
	in->sleepTime = 300; //only for this call

}

VOID IcmpCreateFileExitHook() {

	ACTIVE_HOOK(EN_IcmpCreateFile);

	ProcInfo* in = ProcInfo::getInstance();
	in->sleepTime = 0;

}

VOID IcmpSendEchoHook(W::DWORD *time) {

	ACTIVE_HOOK(EN_IcmpSendEcho);

	LOG_EVASION("[IcmpSendEcho] - %u", *time);
	ProcInfo* in = ProcInfo::getInstance();
	in->sleepMs += *time;
	in->sleepMsTick += *time;

	//reset timer
	*time = 0;

}

VOID SysAllocStringHook(const PIN_OLECHAR **path) {

	ACTIVE_HOOK(EN_SysAllocString);

	if (path == NULL || *path == NULL || (char*)*path == "")
		return;

	char value[PATH_BUFSIZE];
	GET_TO_UPPER(*path, value, PATH_BUFSIZE);

	//cout << value << endl;
	if (HiddenElements::shouldWMIQueryFail(value)) {
		LOG_EVASION("[WMI] - %s", value);
		*path = L"SELECT * FROM W";
	}

}

static ADDRINT getDiskFreeSpaceRetAddr; // TODO
VOID GetDiskFreeSpaceHookEntry(ADDRINT retAddr, W::PULARGE_INTEGER *lpFreeBytesAvailable, W::PULARGE_INTEGER *lpTotalNumberOfBytes,
	W::PULARGE_INTEGER *lpTotalNumberOfFreeBytes) {

	ACTIVE_HOOK(EN_GetDiskFreeSpaceEx);

	getDiskFreeSpaceRetAddr = retAddr; // for logging purposes

	ProcInfo *pc = ProcInfo::getInstance();
	pc->lpFreeBytesAvailable = *lpFreeBytesAvailable;
	pc->lpTotalNumberOfBytes = *lpTotalNumberOfBytes;
	pc->lpTotalNumberOfFreeBytes = *lpTotalNumberOfFreeBytes;

}

VOID GetDiskFreeSpaceHookExit() {

	ACTIVE_HOOK(EN_GetDiskFreeSpaceEx);

	if (ProcInfo::getInstance()->isInsideMainIMG(getDiskFreeSpaceRetAddr)) {
		LOG_EVASION("[GetDiskFreeSpace] - from main image");
	} else {
		LOG_EVASION("[GetDiskFreeSpace-lib] - from library");
	}

	ProcInfo *pc = ProcInfo::getInstance();
	if (pc->lpFreeBytesAvailable != NULL)
		pc->lpFreeBytesAvailable->QuadPart = 1073741824000;
	if (pc->lpTotalNumberOfBytes != NULL)
		pc->lpTotalNumberOfBytes->QuadPart = 1073741824000;
	if (pc->lpTotalNumberOfFreeBytes != NULL)
		pc->lpTotalNumberOfFreeBytes->QuadPart = 1073741824000;

}

VOID FindFirstFileHook(W::LPCTSTR *path) {

	ACTIVE_HOOK(EN_FindFirstFile);

	if (path == NULL || *path == NULL || (void*)*path == (void*)0xffffffff) {
		return;
	}

	char value[PATH_BUFSIZE];

	GET_TO_UPPER(*path, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideGenericFileNameStr(value)) goto FIX;

	memset(value, 0, sizeof(value));
	GET_LPCSTR_TO_UPPER(*path, value, PATH_BUFSIZE);
	if (HiddenElements::shouldHideGenericFileNameStr(value)) goto FIX;

	return;

FIX:
	LOG_EVASION("[FindFirstFile] - %s", value);
	*path = "C:\\a\\";

}

VOID GetSystemTimeAsFileTimeHook(W::LPFILETIME *lpSystemTimeAsFileTime) {

	ACTIVE_HOOK(EN_GetSystemTimeAsFileTime);

	LOG_EVASION("[GetSTAsFT] GetSystemTimeAsFileTime");
	ProcInfo* in = ProcInfo::getInstance();
	in->filetime = *lpSystemTimeAsFileTime;

}

VOID GetSystemTimeAsFileTimeHookExit() {

	ACTIVE_HOOK(EN_GetSystemTimeAsFileTime);

	ProcInfo* in = ProcInfo::getInstance();
	AssemblyHandler* rd = AssemblyHandler::getInstance();

	rd->_edx = (rd->_edx_eax & 0xffffffff00000000ULL) >> 32; //prende 32 bit piu significativi
	rd->_edx_eax += in->sleepMs; //add to result ms of previous sleep call
	rd->_eax = rd->_edx_eax & 0x00000000ffffffffULL; //prende i 32 bit meno significativi
	rd->_edx_eax += 30;
	in->sleepMs = 0;

	W::FILETIME ft;
	ft.dwHighDateTime = rd->_edx;
	ft.dwLowDateTime = rd->_eax;

	memcpy(in->filetime, &ft, sizeof(ft));

}

VOID _popenHook(const char **command) {

	ACTIVE_HOOK(EN__popen);

	if (*command != NULL) {
		if (strstr(*command, "size") == NULL) {
			LOG_EVASION("[Popen] - %s", *command);
			char *b = "cd";
			*command = b;
		}
	}

}

VOID LoadLibraryHook(W::LPCTSTR *lib) { // DCD TODO

	ACTIVE_HOOK(EN_LoadLibrary);

	if (lib == NULL || *lib == NULL)
		return;

	char value[PATH_BUFSIZE];

	GET_LPCSTR_TO_UPPER(*lib, value, PATH_BUFSIZE);

	//cout << "loadLib: " << value << endl;
	if (strstr(value, "VIRTUALBOX") != NULL || strstr(value, "VBOX") != NULL || strstr(value, "HOOK") != NULL) {
		LOG_EVASION("[LoadLibrary] - %s", value);
		*lib = "sup.dll";
		return;
	}

	memset(value, 0, sizeof(value));

	GET_TO_UPPER(*lib, value, PATH_BUFSIZE);

	if (strstr(value, "VIRTUALBOX") != NULL || strstr(value, "VBOX") != NULL || strstr(value, "HOOK") != NULL) {
		LOG_EVASION("[LoadLibrary] - %s", value);
		*lib = "sup.dll";
	}
}

VOID VirtualProtectHookEntry(VOID **lpAddress, W::SIZE_T *dwSize, W::ULONG *protect) {

	ProcInfo *pc = ProcInfo::getInstance();

	pc->protectAddr = *lpAddress;
	pc->addrSize = *dwSize;
	pc->protectionSign = *protect;

}

VOID VirtualProtectHookExit() {

	ProcInfo *pc = ProcInfo::getInstance();
	if ((pc->protectionSign & PAGE_GUARD) == PAGE_GUARD) {

		GuardPageHandler *gh = GuardPageHandler::getInstance();

		ADDRINT start = (ADDRINT)pc->protectAddr;
		ADDRINT end = start + pc->addrSize;

		if (!gh->isPagePresent(start)) {
			gh->addGuardPage(start, end);
		}
	}

}

VOID GetDeviceDriverBaseNameHookEntry(W::LPTSTR *lpBaseName) {

	ACTIVE_HOOK(EN_K32GetDeviceDriverBaseName);

	ProcInfo *pc = ProcInfo::getInstance();
	pc->driverBaseName = *lpBaseName;

}

VOID GetDeviceDriverBaseNameHookExit() {

	ACTIVE_HOOK(EN_K32GetDeviceDriverBaseName);

	ProcInfo *pc = ProcInfo::getInstance();

	if (pc->driverBaseName == NULL || *pc->driverBaseName == NULL)
		return;


	char value[PATH_BUFSIZE];
	
	GET_TO_UPPER(pc->driverBaseName, value, PATH_BUFSIZE);
	if (strstr(value, "VBOX") != NULL) goto FIX;

	memset(value, 0, sizeof(value));
	GET_LPCSTR_TO_UPPER(pc->driverBaseName, value, PATH_BUFSIZE);
	if (strstr(value, "VBOX") == NULL) return;

FIX:
	LOG_EVASION("[GetDeviceDBN] - %s", value);
	memcpy(pc->driverBaseName, (W::LPSTR)"vga.sys", sizeof("vga.sys"));
	return;

}

VOID GetWindowTextHookEntry(W::LPTSTR *lpString) {

	ACTIVE_HOOK(EN_GetWindowText);

	ProcInfo *pc = ProcInfo::getInstance();
	pc->windowName = *lpString;

}

VOID GetWindowTextHookExit() {

	ACTIVE_HOOK(EN_GetWindowText);

	ProcInfo *pc = ProcInfo::getInstance();

	if (pc->windowName == NULL || *pc->windowName == NULL)
		return;

	char value[PATH_BUFSIZE];
	
	GET_LPCSTR_TO_UPPER(pc->windowName, value, PATH_BUFSIZE);
	if (strstr(value, "VBOX") != NULL) goto FIX;

	memset(value, 0, sizeof(value));
	GET_TO_UPPER(pc->windowName, value, PATH_BUFSIZE);
	if (strstr(value, "VBOX") != NULL) goto FIX;
	
	return;

FIX:
	LOG_EVASION("[GetWindowText] - %s", value);
	memset(pc->windowName, 0, sizeof(pc->windowName));
	memcpy(pc->windowName, (W::LPTSTR)L"ex", sizeof(L"ex"));	

}


VOID GetModuleFileNameHookEntry(W::LPTSTR *name) {

	ACTIVE_HOOK(EN_GetModuleFileName);

	ProcInfo *pc = ProcInfo::getInstance();
	pc->modName = *name;

}

VOID GetModuleFileNameHookExit() {

	ACTIVE_HOOK(EN_GetModuleFileName);

	ProcInfo *pc = ProcInfo::getInstance();
	if (pc->modName == NULL) return;

	char value[PATH_BUFSIZE];

	GET_LPCSTR_TO_UPPER(pc->modName, value, PATH_BUFSIZE);

	if (strstr(value, "VBOX") != NULL) goto FIX; // || strstr(value, "PIN") != NULL

	memset(value, 0, sizeof(value));
	GET_TO_UPPER(pc->modName, value, PATH_BUFSIZE);
	if (strstr(value, "VBOX") != NULL) goto FIX; // || strstr(value, "PIN") != NULL
	
	return;

FIX:
	LOG_EVASION("[GetModuleFileName] - %s", value);
}

VOID LdrGetDllHandleHook(W::PUNICODE_STRING *p) {

	ACTIVE_HOOK(EN_LdrGetDllHandle);

}

VOID EnumDisplaySettingsHook(W::LPCTSTR *devName) {

	ACTIVE_HOOK(EN_EnumDisplaySettings);

	LOG_EVASION("[EnumDisplaySettings] EnumDisplaySettings");
	//memset((void*)*devName, CHAR_EDS, sizeof(*devName));
	memset((void*)*devName, CHAR_EDS, W::lstrlen(*devName));

}

VOID SetupDiGetDeviceRegistryPropertyHookEntry(W::PBYTE *buffer) {

	ACTIVE_HOOK(EN_SetupDiGetDeviceRegistryProperty);

	ProcInfo *pc = ProcInfo::getInstance();
	pc->devBuff = *buffer;

}

VOID SetupDiGetDeviceRegistryPropertyHookExit(ADDRINT ret) {

	ACTIVE_HOOK(EN_SetupDiGetDeviceRegistryProperty);

	if ((W::BOOL)ret != TRUE) return;
	ProcInfo *pc = ProcInfo::getInstance();
	if (pc->devBuff == NULL || *pc->devBuff == NULL) return; // LPTSTR stype
	
	char value[PATH_BUFSIZE];
	GET_LPCSTR_TO_UPPER(pc->devBuff, value, PATH_BUFSIZE);
	
	if ((strstr(value, "VBOX") != NULL)) {
		LOG_EVASION("[SDGDRP] - %s", value);
		char* tmp = (char*)pc->devBuff;
		size_t len = strlen(value);
		memset(tmp, 0, 2 * (len + 1));
		for (size_t i = 0; i < len; i++) {
			tmp[2*i] = CHAR_SDI;
		}
	}
}

VOID CloseHandleHookEntry(W::HANDLE *handle) {

	ACTIVE_HOOK(EN_NtClose);
	OBJECT_HANDLE_FLAG_INFORMATION flags;
	flags.ProtectFromClose = 0;
	flags.Inherit = 0;

	if (W::NtQueryObject(*handle, (W::OBJECT_INFORMATION_CLASS)4, &flags, sizeof(OBJECT_HANDLE_FLAG_INFORMATION), 0) >= 0) {
		if (flags.ProtectFromClose) {
			//STATUS_HANDLE_NOT_CLOSABLE;
			LOG_EVASION("[CloseHandle-HNC] - STATUS_HANDLE_NOT_CLOSABLE");
			ProcInfo *pc = ProcInfo::getInstance();
			pc->NtCloseFlag = 1;
			W::HANDLE ret = W::CreateMutex(NULL, FALSE, "suppli");
			*handle = ret;
		}
	}
	else {
		//STATUS_INVALID_HANDLE;
		LOG_EVASION("[CloseHandle-I] - STATUS_INVALID_HANDLE");
		ProcInfo *pc = ProcInfo::getInstance();
		pc->NtCloseFlag = 2;
		W::HANDLE ret = W::CreateMutex(NULL, FALSE, "suppli");
		*handle = ret;
	}

}

VOID CloseHandleHookExit(W::BOOL *ret) {

	ACTIVE_HOOK(EN_NtClose);

	ProcInfo *pc = ProcInfo::getInstance();
	if (pc->NtCloseFlag == 1)
		*ret = 0;
	else if (pc->NtCloseFlag == 2) {
		W::SetLastError(ERROR_INVALID_HANDLE);
		*ret = 0xC0000008;
	}

}

VOID GetCursorPosHookEntry(ADDRINT retAddr, W::LPPOINT *point) {

	ACTIVE_HOOK(EN_GetCursorPos);

	if (ProcInfo::getInstance()->isInsideMainIMG(retAddr)) {
		LOG_EVASION("[GetCursorPos] - from main image");
	} else {
		LOG_EVASION("[GetCursorPos-lib] - from library");
	}
	
	ProcInfo *pc = ProcInfo::getInstance();
	pc->cursorPoint = *point;

}

VOID GetCursorPosHookExit() {

	ACTIVE_HOOK(EN_GetCursorPos);

	ProcInfo *pc = ProcInfo::getInstance();
	if (pc->cursorPoint == NULL) return;
	W::LPPOINT point = pc->cursorPoint;
	point->x = rand() % 500;
	point->y = rand() % 500;

}

/*VOID SCardDisconnectHookEntry(W::DWORD *par) {

	cout << "Scard function called, param: " << *par << endl;

}*/

/*********************	DEBUG	 **************************/

VOID CompareStringHook(W::LPCTSTR *s1, W::LPCTSTR *s2) {

	ACTIVE_HOOK(EN_CompareString);

	if (s1 == NULL || s2 == NULL || *s1 == NULL || *s2 == NULL)
		return;
	if (strlen(*s1) != 1 && strlen(*s2) != 1) {
		cout << "CMP1 -> " << *s1 << "   " << *s2 << endl;
	}

}

VOID RtlCompareUnicodeStringHook(W::PCUNICODE_STRING *s1, W::PCUNICODE_STRING *s2) {

	ACTIVE_HOOK(EN_RtlCompareUnicodeString);

	if (s1 == NULL || s2 == NULL || *s1 == NULL || *s2 == NULL)
		return;
	char value[PATH_BUFSIZE];
	char value1[PATH_BUFSIZE];

	GET_TO_UPPER((**s1).Buffer, value, PATH_BUFSIZE);
	GET_TO_UPPER((**s2).Buffer, value1, PATH_BUFSIZE);
	cout << "RTL: " << value << "   " << value1 << endl;
	//wcout << "RTL: " << (**s1).Buffer << "   " << (**s2).Buffer << endl;

}

VOID wcsstrHook(wchar_t** wcs1, const wchar_t** wcs2) {

	ACTIVE_HOOK(EN_wcsstr);

	char value[PATH_BUFSIZE];
	char value1[PATH_BUFSIZE];

	GET_TO_UPPER(*wcs1, value, PATH_BUFSIZE);
	GET_TO_UPPER(*wcs2, value1, PATH_BUFSIZE);
	cout << "wcs: " << value << "   " << value1 << endl;
	//cout << ": " << *wcs1 << "    " << *wcs2 << endl;

}

VOID wcscmpHook(wchar_t** wcs1, const wchar_t** wcs2) {

	ACTIVE_HOOK(EN_wcscmp);

	char value[PATH_BUFSIZE];
	char value1[PATH_BUFSIZE];

	GET_TO_UPPER(*wcs1, value, PATH_BUFSIZE);
	GET_TO_UPPER(*wcs2, value1, PATH_BUFSIZE);
	cout << "wcscmp: " << value << "   " << value1 << endl;
	//cout << "wcscmp: " << *wcs1 << "    " << *wcs2 << endl;

}

VOID strstrHook(char** wcs1, const char** wcs2) {

	ACTIVE_HOOK(EN_strstr);

	cout << "strstr: " << *wcs1 << "    " << *wcs2 << endl;

}

VOID strcmpHook(char** wcs1, const char** wcs2) {

	ACTIVE_HOOK(EN_strcmp);

	cout << "strcmp: " << *wcs1 << "    " << *wcs2 << endl;

}

VOID timeLogHook(ADDRINT retAddr, const char* funName) {
	if (ProcInfo::getInstance()->isInsideMainIMG(retAddr)) {
		LOG_EVASION("[%s] - *", funName);
	}
}

VOID logGetSystemTimeAsFileTime(ADDRINT retAddr) {
	static int logCounter = 0;
#define logGetSystemTimeAsFileTime_COUNT	20
	if (ProcInfo::getInstance()->isInsideMainIMG(retAddr)) {
		if (logCounter % logGetSystemTimeAsFileTime_COUNT == 0) {
			LOG_EVASION("[GetSTAsFT] - *");
		}
		logCounter = (logCounter + 1) % logGetSystemTimeAsFileTime_COUNT;
	}
#undef logGetSystemTimeAsFileTime_COUNT
}
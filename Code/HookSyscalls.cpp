#include "HookSyscalls.h"
#include "porting.h"
#include "Config.h"
#include "Helper.h"
#include "HiddenElements.h"
#include "TaintAnalysis.h"
#include "Logging.h"

#define CHAR_QSI1	'q'
#define CHAR_QSI2	'k'
#define CHAR_EK		'e'

//----------------------------- SYSCALL HOOKS -----------------------------//

//static int testing = 0;

void HookSyscalls::syscallEntry(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std, void *v){
	// get the syscall number
	ADDRINT syscall_number = PIN_GetSyscallNumber(ctx, std);
	
	// [Note from Arancino's authors]
	// int 0x2e probably leaves ctx in a corrupted state and we have an undefined behavior here, 
	// the syscall_number will result in a 0 and this isn't correct, the crash is inside the function PIN_GetSyscallArguments.
	// According to PIN documentation: Applying PIN_GetSyscallArguments() to an inappropriate context results in undefined behavior and even may cause 
	// crash on systems in which system call arguments are located in memory.
	// The incriminated syscall is executed after the int 0x2e, before the next instruction, just for now filter out the 0 syscall since we don't use it at all...
	if (syscall_number == 0) {
		LOG_INFO("==> WARNING: PIN returned 0 as system call number, possible int 2e case?", syscall_number);
		return;
	}

	//If tracer enabled proceed to syscall tracing
	if (Config::getInstance()->TRACER) {

		// Check for empty instrumentation
		if (!(Config::getInstance()->getEmptyImgInstrFlag()) && !(Config::getInstance()->getEmptyRtnInstrFlag())) {
			TracerSysCalls::traceSysCallEntry(thread_id, ctx, std, syscallIDs, syscall_number);
		}
		else TracerSysCalls::traceSysCallEntryEmpty();
	}


#if	USE_TLS_FOR_SYSCALLS
	bluepill_tls *tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, thread_id));
	syscall_t *sc = &tdata->sc;
#else
	syscall_t *sc = &((syscall_t *)v)[thread_id];
#endif

	sc->syscall_number = syscall_number;

	if (syscall_number < MAXSYSCALLS) {
		syscall_hook hookEntry = sysEntryHooks[syscall_number];
		syscall_hook hookExit = sysExitHooks[syscall_number];

		if (hookEntry || hookExit) { // fill sc (we may have a hook on exit only)
			// 0 .. 7 -> &sc->arg0 .. &sc->arg7 trick to fill sc using a variadic function
			// DCD TODO selectively fill number of arguments
			HookSyscalls::syscallGetArguments(ctx, std, 8,
				0, &sc->arg0, 1, &sc->arg1, 2, &sc->arg2, 3, &sc->arg3,
				4, &sc->arg4, 5, &sc->arg5, 6, &sc->arg6, 7, &sc->arg7);
			//HookSyscalls::printArgs(sc);

			// call on-entry hook
			if (hookEntry) hookEntry(sc, ctx, std);
		}
	}
}

#define TAINT_TAG_REG(ctx, taint_gpr, t0, t1, t2, t3) do { \
	if (!Config::getInstance()->TAINT_MODE) break; \
	tag_t _tags[4] = {t0, t1, t2, t3}; \
	thread_ctx_t *thread_ctx = (thread_ctx_t *)PIN_GetContextReg(ctx, thread_ctx_ptr); \
	addTaintRegister(thread_ctx, taint_gpr, _tags, true); \
} while (0)

void HookSyscalls::syscallExit(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std, void *v){
#if	USE_TLS_FOR_SYSCALLS
	bluepill_tls *tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, thread_id));
	syscall_t *sc = &tdata->sc;
#else
	syscall_t *sc = &((syscall_t *)v)[thread_id];
#endif
	
	//If tracer enabled proceed to syscall tracing
	if (Config::getInstance()->TRACER) {

		// Check for empty instrumentation
		if (!(Config::getInstance()->getEmptyImgInstrFlag()) && !(Config::getInstance()->getEmptyRtnInstrFlag())) {
			TracerSysCalls::traceSysCallExit(thread_id,ctx,std);
		}
		else TracerSysCalls::traceSysCallExitEmpty();
	}

	// default policy for taint analysis (will be overriden inside custom handler if any)
	TAINT_TAG_REG(ctx, GPR_EAX, 0, 0, 0, 0);

	if (sc->syscall_number < MAXSYSCALLS) { // DCD we found for instance 0x2007 on Win7
		syscall_hook hook = sysExitHooks[sc->syscall_number];
		if (hook) hook(sc, ctx, std);
	}
}

//----------------------------- HELPER METHODS -----------------------------//

/* TODO: why we do not build this once for all offline?
 * https://www.evilsocket.net/2014/02/11/on-windows-syscall-mechanism-and-syscall-numbers-extraction-methods// */

/* CREDITS
 * adapted from godware https://github.com/jbremer/godware/blob/master/godware.cpp
 * which borrowed it from rreat library https://github.com/jbremer/rreat/blob/master/rreat.c
 * then DCD added provisional code for Win64 */
void HookSyscalls::enumSyscalls()
{
	/* DCD we can trust C compilers on this one :-)
	memset(sysEntryHooks, 0, sizeof(sysEntryHooks));
	memset(sysExitHooks, 0, sizeof(sysExitHooks));
	memset(syscallIDs, 0, sizeof(syscallIDs)); */

    // no boundary checking at all, I assume ntdll is not malicious..
    // besides that, we are in our own process, _should_ be fine..
    unsigned char *image = (unsigned char *) W::GetModuleHandle("ntdll");
    W::IMAGE_DOS_HEADER *dos_header = (W::IMAGE_DOS_HEADER *) image;
    W::IMAGE_NT_HEADERS *nt_headers = (W::IMAGE_NT_HEADERS *)(image + dos_header->e_lfanew);
    W::IMAGE_DATA_DIRECTORY *data_directory = &nt_headers->
		OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];
    W::IMAGE_EXPORT_DIRECTORY *export_directory = (W::IMAGE_EXPORT_DIRECTORY *)(image + data_directory->VirtualAddress);
    // RVAs from base of image
	W::DWORD *address_of_names = (W::DWORD*)(image + export_directory->AddressOfNames);
	W::DWORD *address_of_functions = (W::DWORD*)(image + export_directory->AddressOfFunctions);
    UINT16 *address_of_name_ordinals = (W::UINT16*)(image + export_directory->AddressOfNameOrdinals);
	// NumberOfNames can be 0: in that case the module will export by ordinal only 
    W::DWORD number_of_names = MIN(export_directory->NumberOfFunctions, export_directory->NumberOfNames);
	size_t ntcalls = 0, zwcalls = 0;

	for (W::DWORD i = 0; i < number_of_names; i++) {
		// AddressOfNameOrdinals contains the ordinals associated with the function names in AddressOfNames
        const char *name = (const char *)(image + address_of_names[i]);
		// AddressOfFunctions points to an array of RVAs of the functions/symbols in the module
        unsigned char *addr = image + address_of_functions[address_of_name_ordinals[i]];
        if (!memcmp(name, "Zw", 2) || !memcmp(name, "Nt", 2)) {
			#ifdef __LP64__
			// mov r10, rcx ; mov eax, syscall_number; syscall; ret
			// => 4C 8B D1 B8 82 00 00 00 0F 05 C3
			if (*((UINT32*)addr) == 0xb8d18b4c && addr[8] == 0x0f) {
				ADDRINT syscall_number = *(UINT32*)(addr + 4);
				ASSERT(syscall_number < MAXSYSCALLS, "Syscall ID from NTDLL too high - please increase MAXSYSCALLS");
				if (!syscallIDs[syscall_number] || !memcmp(name, "Nt", 2)) {
					syscallIDs[syscall_number] = strdup(name);
				}
			}
			#else
            // does the signature match?
            // either:   mov eax, syscall_number ; mov ecx, some_value
            // or:       mov eax, syscall_number ; xor ecx, ecx
            // or:       mov eax, syscall_number ; mov edx, 0x7ffe0300
			// DCD remember to add one more case if we go for Windows 8+
            if(addr[0] == 0xb8 && (addr[5] == 0xb9 || addr[5] == 0x33 || addr[5] == 0xba)) {
                ADDRINT syscall_number = *(UINT32*)(addr + 1);
				// DCD by using a map for every Zw/Nt pair we will skip duplicates
				ASSERT(syscall_number < MAXSYSCALLS, "Syscall ID from NTDLL too high - please increase MAXSYSCALLS");
				if (!syscallIDs[syscall_number] || !memcmp(name, "Nt", 2)) {
					syscallIDs[syscall_number] = strdup(name);
				}
			}
			#endif
			else {
				/* DCD on 64-bit Windows 7 it will skip (in both native and Wow64 mode):
				 * - NtCurrentTeb
				 * - NtGetTickCount
				 * - NtdllDefWindowProc_A
				 * - NtdllDefWindowProc_W
				 * - NtdllDialogWndProc_A
				 * - NtdllDialogWndProc_W
				 * which are not syscalls (although IDA couldn't find NtGetTickCount).
				 *
				 * Also, on native 64-bit mode it will skip NtQuerySystemTime as it is an
				 * user-mode query (RtlQuerySystemTime) of USER_SHARED_DATA -> SystemTime.
				*/
			}
        }
    }
}

static int lookupIndex(const char* syscallName) {
	for (int i = 0; i < MAXSYSCALLS; ++i) {
		if (!strcmp(syscallIDs[i], syscallName)) return i;
	}

	ASSERT(false, "Unknown system call number");
	return 0;
}

void HookSyscalls::initHooks(syscall_t *callbackArray){
	/* [Original code by Arancino]
//	syscallsHooks.insert(std::pair<string,syscall_hook>("NtQueryPerformanceCounter_exit",&HookSyscalls::NtQueryPerformanceCounterHook));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtQuerySystemInformation_exit",&HookSyscalls::NtQuerySystemInformationHookExit));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtOpenProcess_entry",&HookSyscalls::NtOpenProcessEntry));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtRequestWaitReplyPort_exit",&HookSyscalls::NtRequestWaitReplyPortHook));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtQueryInformationProcess_exit",&HookSyscalls::NtQueryInformationProcessHook));

	syscallsHooks.insert(std::pair<string,syscall_hook>("NtAllocateVirtualMemory_exit",&HookSyscalls::NtAllocateVirtualMemoryHook));
	//hxxp://undocumented.ntinternals.net/index.html?page=UserMode%2FUndocumented%20Functions%2FMemory%20Management%2FVirtual%20Memory%2FNtWriteVirtualMemory.html
	
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtWriteVirtualMemory_entry",&HookSyscalls::NtWriteVirtualMemoryHook));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtMapViewOfSection_exit",&HookSyscalls::NtMapViewOfSectionHook));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtCreateThreadEx_entry",&HookSyscalls::NtCreateThreadExHook));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtQueueApcThread_entry",&HookSyscalls::NtQueueApcThreadHook));
	syscallsHooks.insert(std::pair<string,syscall_hook>("NtResumeThread_entry",&HookSyscalls::NtResumeThreadHook));
	*/
	
	sysExitHooks[lookupIndex("NtQueryInformationProcess")] = &HookSyscalls::NtQueryInformationProcessHook;
	sysExitHooks[lookupIndex("NtQuerySystemInformation")] = &HookSyscalls::NtQuerySystemInformationHookExit;
	sysExitHooks[lookupIndex("NtQueryPerformanceCounter")] = &HookSyscalls::NtQueryPerformanceCounterHook;
	sysEntryHooks[lookupIndex("NtOpenProcess")] = &HookSyscalls::NtOpenProcessEntry;
	sysExitHooks[lookupIndex("NtRequestWaitReplyPort")] = &HookSyscalls::NtRequestWaitReplyPortHook;
	sysExitHooks[lookupIndex("NtAllocateVirtualMemory")] = &HookSyscalls::NtAllocateVirtualMemoryHook;
	sysExitHooks[lookupIndex("NtProtectVirtualMemory")] = &HookSyscalls::NtProtectVirtualMemoryHook;
	//sysExitHooks[lookupIndex("NtGetContextThread")] = &HookSyscalls::NtGetContextThreadHook;
	sysExitHooks[lookupIndex("NtCreateFile")] = &HookSyscalls::NtCreateFileHook;
	sysEntryHooks[lookupIndex("NtWriteVirtualMemory")] = &HookSyscalls::NtWriteVirtualMemoryHook;
	sysExitHooks[lookupIndex("NtMapViewOfSection")] = &HookSyscalls::NtMapViewOfSectionHook;
	sysEntryHooks[lookupIndex("NtCreateThreadEx")] = &HookSyscalls::NtCreateThreadExHook;
	sysEntryHooks[lookupIndex("NtQueueApcThread")] = &HookSyscalls::NtQueueApcThreadHook;
	sysEntryHooks[lookupIndex("NtResumeThread")] = &HookSyscalls::NtResumeThreadHook;
	sysEntryHooks[lookupIndex("NtDelayExecution")] = &HookSyscalls::NtDelayexecutionHook;
	sysExitHooks[lookupIndex("NtQueryDirectoryObject")] = &HookSyscalls::NtQueryDirectoryObjectHook;
	sysEntryHooks[lookupIndex("NtOpenKey")] = &HookSyscalls::NtOpenKeyHook;
	sysEntryHooks[lookupIndex("NtOpenKeyEx")] = &HookSyscalls::NtOpenKeyHook;
	sysExitHooks[lookupIndex("NtEnumerateKey")] = &HookSyscalls::NtEnumerateKeyHook;
	sysEntryHooks[lookupIndex("NtQueryValueKey")] = &HookSyscalls::NtQueryValueKeyHook; //FP TODO fix with themida and enigma
	sysEntryHooks[lookupIndex("NtQueryAttributesFile")] = &HookSyscalls::NtQueryAttributesFileHook;
	sysEntryHooks[lookupIndex("NtOpenDirectoryObject")] = &HookSyscalls::NtOpenDirectoryObjectHook;
	sysExitHooks[lookupIndex("NtQueryObject")] = &HookSyscalls::NtQueryObjectHook;

	//If TRACER enabled, initialize it
	if (Config::getInstance()->TRACER) {
		TracerSysCalls::initSyscallTracer();
	}

	// register callback functions for Pin
#if USE_TLS_FOR_SYSCALLS
	PIN_AddSyscallEntryFunction(&syscallEntry, NULL);
	PIN_AddSyscallExitFunction(&syscallExit, NULL);
#else
	PIN_AddSyscallEntryFunction(&syscallEntry, callbackArray);
    PIN_AddSyscallExitFunction(&syscallExit, callbackArray);
#endif
}

//get the pointer to the syscall arguments
//stole this lovely source code from godware
void HookSyscalls::syscallGetArguments(CONTEXT *ctx, SYSCALL_STANDARD std, int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        int index = va_arg(args, int);
        ADDRINT *ptr = va_arg(args, ADDRINT *);
        *ptr = PIN_GetSyscallArgument(ctx, std, index);
    }
    va_end(args);
}

void HookSyscalls::printArgs(syscall_t * sc){
	printf("arg0 : %08x\n", sc->arg0);
	printf("arg1 : %08x\n", sc->arg1);
	printf("arg2 : %08x\n", sc->arg2);
	printf("arg3 : %08x\n", sc->arg3);
	printf("arg4 : %08x\n", sc->arg4);
	printf("arg5 : %08x\n", sc->arg5);
	printf("arg6 : %08x\n", sc->arg6);
	printf("arg7 : %08x\n", sc->arg7);
}

/*
void HookSyscalls::printRegs(CONTEXT *ctx){
	#ifdef __LP64__
	// TODO: which ones are of interest? btw, use REG_GAX [...]
	#else
	printf("EAX : %08x\n", PIN_GetContextReg(ctx, REG_GAX));
	printf("EBX : %08x\n", PIN_GetContextReg(ctx, REG_GBX));
	printf("ECX : %08x\n", PIN_GetContextReg(ctx, REG_GCX));
	printf("EDX : %08x\n", PIN_GetContextReg(ctx, REG_GDX));
	#endif
}
*/

//---------------------------- BEGIN HOOKS ----------------------------//

// Avoid Pin detection based on NtSystemQueryInformation 
void HookSyscalls::NtQuerySystemInformationHookExit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	/* [Original code from Arancino]
	if (sc->arg0 == SYSTEM_PROCESS_INFORMATION) {
		//cast to our structure in order to retrieve the information returned from the NtSystemQueryInformation function
		PSYSTEM_PROCESS_INFO spi = (PSYSTEM_PROCESS_INFO)sc->arg1;
		//iterate through all processes 
		while (spi->NextEntryOffset) {
			//if the process is PIN change its name to cmd.exe in order to avoid evasion
			if (spi->ImageName.Buffer && ((wcscmp(spi->ImageName.Buffer, L"pin.exe") == 0))) {
				LOG_EVASION("[EVASION?] Detection of parent process\n");
				wcscpy(spi->ImageName.Buffer, L"cmd.exe");
			}
			spi = (PSYSTEM_PROCESS_INFO)((W::LPBYTE)spi + spi->NextEntryOffset); // Calculate the address of the next entry.
		}
	}
	*/

	ACTIVE_HOOK(SYSCALL_KEY_NtQuerySystemInformation);
	tag_t taintTag = hooks_seeds[SYSCALL_KEY_NtQuerySystemInformation];
	TAINT_TAG_REG(ctx, GPR_EAX, taintTag, taintTag, taintTag, taintTag);

	if (sc->arg0 == SystemProcessInformation) {

		LOG_EVASION("[NtQSI-proc] - SystemProcessInformation for process check");

		//cast to our structure in order to retrieve the information returned from the NtSystemQueryInformation function
		PSYSTEM_PROCESS_INFO spi;
		spi = (PSYSTEM_PROCESS_INFO)sc->arg1;

		//avoid null pointer exception
		if (spi == NULL)
			return;

		//iterate through all processes 
		while (spi->NextEntryOffset) {

			if (spi->ImageName.Buffer) {
				//wcout << spi->ImageName.Buffer << endl;
				//if the process is pin change it's name in cmd.exe in order to avoid evasion
				if (wcscmp(spi->ImageName.Buffer, L"pin.exe") == 0) {
					wcscpy(spi->ImageName.Buffer, L"aaa.exe"); // TODO set via JSON? hopefully explorer.exe? if we change the buffer
				}
				//avoid VBox/other tools detection
				else if (wcsstr(spi->ImageName.Buffer, L"VBox") != NULL || // TODO refactor?
					wcsstr(spi->ImageName.Buffer, L"python") != NULL) {

					memset((void*)spi->ImageName.Buffer, CHAR_QSI1, wcslen(spi->ImageName.Buffer) - 4); // -4 to keep the extension
				}
			}
			spi = (PSYSTEM_PROCESS_INFO)((W::LPBYTE)spi + spi->NextEntryOffset); // Calculate the address of the next entry.

		}

	}

	else if (sc->arg0 == SystemFirmwareTableInformation) {

		PSYSTEM_FIRMWARE_TABLE_INFORMATION sfti = (PSYSTEM_FIRMWARE_TABLE_INFORMATION)sc->arg1;
		if (sfti->Action == SystemFirmwareTable_Get) {
			LOG_EVASION("[NtQSI-raw] - SystemFirmwareTableInformation for raw firmware query");
			char vbox[] = { "VirtualBox" };
			char vbox2[] = { "vbox" };
			char vbox3[] = { "VBOX" };
			ADDRINT sizeOut = *(W::ULONG*)sc->arg3;
			ADDRINT sizeIn = (W::ULONG)sc->arg2;
			W::ULONG sizeVbox = (W::ULONG)Helper::_strlen_a(vbox);
			W::ULONG sizeVbox2 = (W::ULONG)Helper::_strlen_a(vbox2);
			W::ULONG sizeVbox3 = (W::ULONG)Helper::_strlen_a(vbox3);
			if (sizeOut > sizeIn)
				return;

			PSYSTEM_FIRMWARE_TABLE_INFORMATION info = (PSYSTEM_FIRMWARE_TABLE_INFORMATION)sc->arg1;
			//scan entire bios in order to find vbox string
			for (size_t i = 0; i < info->TableBufferLength - sizeVbox; i++) {
				if (memcmp(info->TableBuffer+i, vbox, sizeVbox) == 0 ||
					memcmp(info->TableBuffer + i, vbox2, sizeVbox2) == 0 ||
					memcmp(info->TableBuffer + i, vbox3, sizeVbox3) == 0) {

					memset(((PSYSTEM_FIRMWARE_TABLE_INFORMATION)sc->arg1)->TableBuffer + i, 0, sizeVbox);
				
				}
			}
		}

	}

	else if (sc->arg0 == SystemModuleInformation) {
		
		PRTL_PROCESS_MODULES pmi = (PRTL_PROCESS_MODULES)sc->arg1;

		if (pmi == NULL)
			return;
		
		if ((W::ULONG*)sc->arg3 == nullptr) return;

		ADDRINT sizeOut = *(W::ULONG*)sc->arg3;
		ADDRINT sizeIn = (W::ULONG)sc->arg2;

		if (sizeOut > sizeIn) return;
		
		LOG_EVASION("[NtQSI-drv] - SystemModuleInformation for system drivers");

		unsigned long size = pmi->NumberOfModules;

		for (size_t i = 0; i < size; i++) {
			if (strstr((char*)pmi->Modules[i].FullPathName, "VBox") != NULL) {
				char* tmpAddr = (char*)pmi->Modules[i].FullPathName;
				size_t len = strlen(tmpAddr) + 1;
				memset(tmpAddr, CHAR_QSI2, len-1);		
				addTaintMemory((ADDRINT)tmpAddr, len, taintTag, true); // allocated by Windows
			}
		}
		
	}

}

void HookSyscalls::NtAllocateVirtualMemoryHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtAllocateVirtualMemory);
	
	W::PVOID base_address_pointer = (W::PVOID) sc->arg1;
	W::PSIZE_T region_size_address = (W::PSIZE_T) sc->arg3;
	ADDRINT heap_address = *(ADDRINT *)base_address_pointer;
	W::SIZE_T region_size = *(W::SIZE_T *)region_size_address;
	ProcInfo *proc_info = ProcInfo::getInstance();
	HeapZone hz;
	hz.begin = heap_address;
	hz.size = (UINT32)region_size; // reasonable :)
	hz.end = region_size + heap_address;
	hz.version = 0; // version 0 of this heap

	std::string heap_key = to_string(hz.begin) + to_string(hz.end); /* DCD: was _ULonglong */

	std::string hz_md5 = md5(heap_key);

	//LOG_INFO("NtAllocateVirtualMemoryHook insert in Heap Zone %08x -> %08x MD5(begin_addr+end_addr): %s",hz.begin,hz.end,hz_md5.c_str());
	//saving this heap zone in the map inside ProcInfo
	proc_info->insertHeapZone(hz_md5, hz);
}

// Avoid PIN detection through NtQueryInformationProcessHook
//static W::ULONG ValueProcessDebugFlags = PROCESS_DEBUG_INHERIT;
void HookSyscalls::NtQueryInformationProcessHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	/* [Original code by Arancino]
	if (sc->arg1 == 0x1f) {
		LOG_EVASION("[EVASION?] Detect NtQueryInformation with 0x1f paramter, leak of DEBUG flag\n");
		void* pdebug_flag = (void*)sc->arg2;
		memset(pdebug_flag, 0x00000001, 1);
	}*/

	ACTIVE_HOOK(EN_NtQueryInformationProcess);

	W::PROCESSINFOCLASS ProcessInformationClass = (W::PROCESSINFOCLASS)sc->arg1;
	W::PVOID ProcessInformation = (W::PVOID)sc->arg2;
	W::ULONG ProcessInformationLength = (W::ULONG)sc->arg3;
	W::PULONG ReturnLength = (W::PULONG)sc->arg4;
	
	if (ProcessInformation != 0 && ProcessInformationLength != 0) {
		W::ULONG backupReturnLength = 0;
		if (ReturnLength != nullptr && (W::ULONG_PTR)ReturnLength >= (W::ULONG_PTR)ProcessInformation &&
			(W::ULONG_PTR)ReturnLength <= (W::ULONG_PTR)ProcessInformation + ProcessInformationLength)
		{
			backupReturnLength = *ReturnLength;
		}

		if (ProcessInformationClass == ProcessDebugFlags)
		{
			// NB this is the only case that gives Pin away as a debugger!
			LOG_EVASION("[NtQIP-31] - ProcessDebugFlags");
			*((W::ULONG *)ProcessInformation) = PROCESS_DEBUG_INHERIT;
		}
		else if (ProcessInformationClass == ProcessDebugObjectHandle)
		{
			LOG_EVASION("[NtQIP-30] - ProcessDebugObjectHandle");
			if (Config::getInstance()->ATTACH_DEBUGGER) {
				*((W::HANDLE *)ProcessInformation) = (W::HANDLE)0;
				ADDRINT _eax = 0xC0000353; //return value to STATUS_PORT_NOT_SET
				PIN_SetContextReg(ctx, REG_GAX, _eax);
			}
		}
		else if (ProcessInformationClass == ProcessDebugPort)
		{
			LOG_EVASION("[NtQIP-7] - ProcessDebugPort");
			if (Config::getInstance()->ATTACH_DEBUGGER) {
				*((W::HANDLE *)ProcessInformation) = (W::HANDLE)0;
			}
		}
		else if (ProcessInformationClass == ProcessVmCounters)
		{
			//LOG_EVASION("[EVASION?] NtQueryInformation called with param -> 3");
			//TODO commented out as it is invoked frequently by legit APIs
		}
		else if (ProcessInformationClass == ProcessBasicInformation) //Fake parent
		{
			// TODO shall we distinguish the call site? FP reports high false positives rate
			//LOG_EVASION("[NtQIP-0] - ProcessBasicInformation");
			((PPROCESS_BASIC_INFORMATION)ProcessInformation)->InheritedFromUniqueProcessId = (W::HANDLE)ProcInfo::GetProcessIdByName("explorer.exe");
		}
		else if (ProcessInformationClass == ProcessBreakOnTermination)
		{
			//LOG_EVASION("[POSSIBLE EVASIVE BEHAVIOR] NtQueryInformation called with param -> 29");
			//*((W::ULONG *)ProcessInformation) = ValueProcessBreakOnTermination;
			//LOG_EVASION("[NtQIP-29] - ProcessBreakOnTermination"); // FP says no evasion here
		}
		else if (ProcessInformationClass == ProcessHandleTracing)
		{
			LOG_EVASION("[NtQIP-32] - ProcessHandleTracing");
			//ntStat = IsProcessHandleTracingEnabled ? STATUS_SUCCESS : STATUS_INVALID_PARAMETER;
		}

		if (backupReturnLength != 0)
			*ReturnLength = backupReturnLength;
	}
}

void HookSyscalls::NtMapViewOfSectionHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtMapViewOfSection);
	
	W::HANDLE process = (W::HANDLE)sc->arg1;
	W::PVOID *BaseAddress = (W::PVOID *) sc->arg2;
	W::PSIZE_T ViewSize = (W::PSIZE_T) sc->arg6;
	W::DWORD pid = W::GetProcessId(process);

	// LOG_INFO("-------------------- Write Injection through NtMapViewOfSectionHook pid %d  baseAddr %08x Size %08x",pid,*BaseAddress,*ViewSize);
	if (pid != W::GetCurrentProcessId()) {
		LOG_INFO("Write Injection through NtMapViewOfSectionHook pid %d  baseAddr %08x Size %08x", pid, *BaseAddress, *ViewSize);
		// UINT32 cast for size should be reasonable
		ProcessInjectionModule::getInstance()->AddInjectedWrite((ADDRINT)*BaseAddress, (UINT32)*ViewSize, pid);
	}
	ADDRINT base_address = *(ADDRINT *)BaseAddress;
	ProcInfo *proc_info = ProcInfo::getInstance();
	proc_info->addMappedFilesAddress(base_address);

}

void HookSyscalls::NtWriteVirtualMemoryHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtWriteVirtualMemory);
	
	W::HANDLE process = (W::HANDLE)sc->arg0;
	W::PVOID address_to_write = (W::PVOID)sc->arg1; // get the address where the syscall is writing 
	W::ULONG number_of_bytes_to_write = (W::ULONG)sc->arg3; // get how many bytes it is trying to write 
	W::DWORD injected_pid = W::GetProcessId(process);
	if (injected_pid != W::GetCurrentProcessId()) {
		LOG_INFO("Write Injection through NtWriteVirtualMemoryHook pid %d  baseAddr %08x Size %08x", injected_pid, address_to_write, number_of_bytes_to_write);
		ProcessInjectionModule::getInstance()->AddInjectedWrite((ADDRINT)address_to_write, number_of_bytes_to_write, injected_pid);
	}
	//if the target address of the write is inside a protected section modify it
	if (Config::getInstance()->DBI_SHIELD_SWRITE && ProcInfo::getInstance()->isInsideProtectedSection((ADDRINT)address_to_write)) {
		LOG_EVASION("[NtWriteVirtualMemory] - Detected write on protected memory region");
		ADDRINT new_address = (ADDRINT)malloc(number_of_bytes_to_write);
		PIN_SetSyscallArgument(ctx, SYSCALL_STANDARD_IA32_WINDOWS_FAST, 1, new_address);
	}

}

void HookSyscalls::NtCreateThreadExHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtCreateThreadEx);
#if ENABLE_PINDEMONIUM
	W::HANDLE process = (W::HANDLE)sc->arg3;
	W::DWORD injected_pid = W::GetProcessId(process);
	if (injected_pid != W::GetCurrentProcessId()) {
		ProcessInjectionModule::getInstance()->CheckInjectedExecution(injected_pid);
	}
#endif
}

void HookSyscalls::NtResumeThreadHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtResumeThread);
#if ENABLE_PINDEMONIUM
	W::HANDLE thread = (W::HANDLE)sc->arg0;
	W::DWORD injected_pid = W::GetProcessIdOfThread(thread);
	if (injected_pid != W::GetCurrentProcessId()) {
		ProcessInjectionModule::getInstance()->CheckInjectedExecution(injected_pid);
	}
#endif
}

void HookSyscalls::NtQueueApcThreadHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtQueueApcThread);
#if ENABLE_PINDEMONIUM
	W::HANDLE thread = (W::HANDLE)sc->arg0;
	W::DWORD injected_pid = W::GetProcessIdOfThread(thread);
	if (injected_pid != W::GetCurrentProcessId()) {
		ProcessInjectionModule::getInstance()->CheckInjectedExecution(injected_pid);
	}
#endif
}

// lower the results of the NtQueryPerformanceCounterHook
void HookSyscalls::NtQueryPerformanceCounterHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	/* [Original code from Arancino]
	//the first argument of the syscall is a pointer to the LARGE_INTEGER struct that will store the results ( hxxps://msdn.microsoft.com/en-us/library/bb432384(v=vs.85).aspx )
	W::PLARGE_INTEGER p_li = (W::PLARGE_INTEGER)sc->arg0;
	// cut the QuadPart, it is usually used to calculate the delta ( ex: ElapsedMicroseconds.QuadPart = EndingTime.QuadPart - StartingTime.QuadPart; )
	p_li->QuadPart = p_li->QuadPart / Config::CC_DIVISOR;
	*/
	
	ACTIVE_HOOK(EN_NtQueryPerformanceCounter);

	W::LARGE_INTEGER *li = (W::LARGE_INTEGER*)sc->arg0;
	W::UINT ll = (-li->QuadPart) / 10000LL;

	if (ll == 0 || ll == INFINITE || ll > 3900000000)
		return;

	//LOG_EVASION("[NtQueryPerformanceCounter] - %u", ll);

	ProcInfo* in = ProcInfo::getInstance();

	in->sleepMs += ll;
	in->sleepMsTick += ll;

	if (in->lastMs2 == ll) {
		in->numLastMs2++;
	}
	else {
		in->lastMs2 = ll;
		in->numLastMs2 = 0;
	}

	//reset sleep value
	if (in->numLastMs2 >= 5) {
		li->QuadPart = 0;
	}
	else {
		li->QuadPart = -TIMER * 10000LL;
	}
}

//NtOpenProcess detected
//let's change the PID that the malware wants to open with a non existing one in order to trigger an error status
//we have to use this trick because we aren't able to change the return value of the syscall yet... (the value in EAX)
void HookSyscalls::NtOpenProcessEntry(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtOpenProcess);
	
	PCLIENT_ID cid = (PCLIENT_ID)sc->arg3;
	//if the id of the process is one of interest return an error
	if (ProcInfo::getInstance()->isInterestingProcess((unsigned int)cid->UniqueProcess)) {
		LOG_EVASION("[NtOpenProcess] - access to parent process\n");
		cid->UniqueProcess = (W::HANDLE)66666;
	}
}

//The NtRequestWaitReplyPortHook allocates 4 memory pages of type MEM_MAPPED so we need to rescan the memory after it has been performed
void HookSyscalls::NtRequestWaitReplyPortHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	ACTIVE_HOOK(EN_NtRequestWaitReplyPort);
	
	LOG_INFO("Found an NtRequestWaitReplyPort");
	ProcInfo *proc_info = ProcInfo::getInstance();
	proc_info->setCurrentMappedFiles();
}

/* ALG: if i find 5 time same call in a row, i suspect that this is a VMDetect tentative
and then i empty next time until different call appears*/
void HookSyscalls::NtDelayexecutionHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtDelayExecution);

	W::LARGE_INTEGER *li = (W::LARGE_INTEGER*)sc->arg1;
	W::UINT ll = (-li->QuadPart) / 10000LL;

	if (ll == 0)
		return;

	//LOG_EVASION("[POSSIBLE EVASIVE BEHAVIOR] NtDelayExecution called! -> ns: %u", ll);

	ProcInfo* in = ProcInfo::getInstance();

	in->sleepMs += ll;
	in->sleepMsTick += ll;

	if (in->lastMs == ll) {
		in->numLastMs++;
	}
	else {
		in->lastMs = ll;
		in->numLastMs = 0;
	}

	//reset sleep value
	if (in->numLastMs >= 5) {
		li->QuadPart = 0;
	}
	else {
		li->QuadPart = -TIMER * 10000LL;
	}
}

void HookSyscalls::NtProtectVirtualMemoryHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtProtectVirtualMemory);


	ADDRINT access = sc->arg3; // DCD ADDRINT instead of W::ULONG is fine here (we only do & later)
	W::PULONG size = (W::PULONG)sc->arg2;
	ADDRINT start = *(ADDRINT*)(sc->arg1);
	ADDRINT end = start + *size;

	if ((access & PAGE_GUARD) == PAGE_GUARD) {

		GuardPageHandler *gh = GuardPageHandler::getInstance();
		if (!gh->isPagePresent(start)) {
			gh->addGuardPage(start, end);
		}

	}

}

void HookSyscalls::NtQueryDirectoryObjectHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtQueryDirectoryObject);

	POBJECT_DIRECTORY_INFORMATION found = (POBJECT_DIRECTORY_INFORMATION)sc->arg1;

	if (found == NULL) return;

	char value[100];
	Helper::toValue(value, (void*)found->Name.Buffer);

	if (strstr(value, "VBOX") != NULL) {
		LOG_EVASION("[NtQueryDO] - %s", value);
		memset(&found->Name, 0, sizeof(found->Name));
		W::UNICODE_STRING s;
		s.Buffer = L"c";
		s.Length = sizeof(s.Buffer);
		memcpy(&found->Name, &s, sizeof(s));
	}

}

void HookSyscalls::NtOpenKeyHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtOpenKey);

	OBJECT_ATTRIBUTES *oa = (OBJECT_ATTRIBUTES*)sc->arg2;
	W::PWSTR path = oa->ObjectName->Buffer;

	if (path == NULL || *path == NULL || (char*)*path == "")
		return;

	char value[PATH_BUFSIZE];
	GET_TO_UPPER(path, value, PATH_BUFSIZE);

	//cout << "NTopen " << value << endl;

	if (strstr(value, "VIRTUALBOX") != NULL || strstr(value, "VBOX") != NULL ||
		strstr(value, "GUEST ADDITION") != NULL || strstr(value, "ORACLE") != NULL ||
		strstr(value, "PCI") != NULL || strstr(value, "VIRTUAL") != NULL ||
		strstr(value, "DEVICE") != NULL || strstr(value, "DRIVER") != NULL ||
		strstr(value, "VIDEO") != NULL || strstr(value, "DESCRIPTION\\SYSTEM") != NULL ||
		strstr(value, "ENUM") != NULL) {

		LOG_EVASION("[NtOpenKey] - %s", value);
		oa->ObjectName->Buffer = L"";
		oa->ObjectName->Length = 0;
	}

}

void HookSyscalls::NtEnumerateKeyHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtEnumerateKey);

	KEY_INFORMATION_CLASS cl = (KEY_INFORMATION_CLASS)sc->arg2;

	if (cl == KeyBasicInformation) {
		PKEY_BASIC_INFORMATION str = (PKEY_BASIC_INFORMATION)sc->arg3;
		if (wcsstr(str->Name, L"VBOX") != NULL) {
			char value[PATH_BUFSIZE];
			GET_TO_UPPER(str->Name, value, PATH_BUFSIZE);
			LOG_EVASION("[NtEnumerateKey] - %s", value);
			UINT32 avLen = strlen(value);
			memset((void*)str->Name, CHAR_EK, avLen);
			((char*)(str->Name))[avLen] = 0;
		}
	}

}

void HookSyscalls::NtQueryValueKeyHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtQueryValueKey);

	KEY_VALUE_INFORMATION_CLASS cl = (KEY_VALUE_INFORMATION_CLASS)sc->arg2;

	if (cl == KeyValuePartialInformation) {
		PKEY_VALUE_PARTIAL_INFORMATION str = (PKEY_VALUE_PARTIAL_INFORMATION)sc->arg3;
		if (((W::PUNICODE_STRING)sc->arg1)->Buffer != NULL && wcsstr(((W::PUNICODE_STRING)sc->arg1)->Buffer, L"Bios") != NULL) {
			char value[PATH_BUFSIZE];
			GET_TO_UPPER(((W::PUNICODE_STRING)sc->arg1)->Buffer, value, PATH_BUFSIZE);
			LOG_EVASION("[NtQueryValueKey] - %s", value);
			((W::PUNICODE_STRING)sc->arg1)->Buffer = L"c";	//TODO other way to do this?
			((W::PUNICODE_STRING)sc->arg1)->Length = sizeof(L"c");
		}
	}

}

void HookSyscalls::NtOpenDirectoryObjectHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtOpenDirectoryObject);

	OBJECT_ATTRIBUTES *oa = (OBJECT_ATTRIBUTES*)sc->arg2;

	if (oa->ObjectName->Buffer != NULL) {}
	//wcout << "dirObj " << oa->ObjectName->Buffer << endl;

}

void HookSyscalls::NtCreateFileHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtCreateFile);

	W::OBJECT_ATTRIBUTES *Obj = (W::OBJECT_ATTRIBUTES*)sc->arg2;
	W::PUNICODE_STRING p = Obj->ObjectName;

	if (wcsstr(p->Buffer, L"VBox") != NULL || wcsstr(p->Buffer, L"vbox") != NULL ||
		wcsstr(p->Buffer, L"Oracle") != NULL || wcsstr(p->Buffer, L"Guest") != NULL ||
		wcsstr(p->Buffer, L"PhysicalDrive") != NULL) {
		char value[PATH_BUFSIZE];
		GET_TO_UPPER(p->Buffer, value, PATH_BUFSIZE); // TODO print directly!
		LOG_EVASION("[NtCreateFile] - %s", value);
		if (ProcInfo::getInstance()->createFCont >= 8 && wcsstr(p->Buffer, L"VBoxGuest") != NULL) {
			//obsidium!
			//ProcInfo::getInstance()->createFCont = 0;
			return;
		}

		W::PHANDLE handle = (W::PHANDLE)sc->arg0;
		*handle = (W::HANDLE) - 1;
	}


}

void HookSyscalls::NtGetContextThreadHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	if (Config::getInstance()->ATTACH_DEBUGGER) {
		W::CONTEXT *ct = (W::CONTEXT *)sc->arg1;
		cout << "flag: " << ct->Dr0 << " + " << ct->Dr1 << " + " << ct->Dr2 << " + " << ct->Dr3 << " + " << ct->Dr6 << " + " << ct->Dr7 << endl;
		/*
		ct->Dr0 = 1;
		ct->Dr1 = 1;
		ct->Dr2 = 1;
		ct->Dr3 = 1;
		ct->Dr6 = 1;
		ct->Dr7 = 1;
		*/
	}

}

void HookSyscalls::NtQueryAttributesFileHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtQueryAttributesFile);

	OBJECT_ATTRIBUTES *oa = (OBJECT_ATTRIBUTES*)sc->arg0;
	W::PUNICODE_STRING p = oa->ObjectName;
	//wcout << "queryattr: " << p->Buffer << endl;
	//TODO

}

void HookSyscalls::NtQueryObjectHook(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std) {

	ACTIVE_HOOK(EN_NtQueryObject);

	if (sc->arg1 == 3) { //credits Al-Khaser

		ProcInfo *pc = ProcInfo::getInstance();
		pc->ntQueryCounter = (pc->ntQueryCounter + 1) % 2;

		if (pc->ntQueryCounter != 0)
			return;

		POBJECT_ALL_INFORMATION pObjectAllInfo = (POBJECT_ALL_INFORMATION)sc->arg2;
		W::ULONG NumObjects = pObjectAllInfo->NumberOfObjects;
		W::UCHAR *pObjInfoLocation = (W::UCHAR*)pObjectAllInfo->ObjectTypeInformation;

		for (UINT i = 0; i < NumObjects; i++)
		{

			POBJECT_TYPE_INFORMATION pObjectTypeInfo = (POBJECT_TYPE_INFORMATION)pObjInfoLocation;

			if (wcscmp(L"DebugObject", pObjectTypeInfo->TypeName.Buffer) == 0) {
				if (pObjectTypeInfo->TotalNumberOfObjects > 0) {
					LOG_EVASION("[NtQueryObject] - *");
					pObjectTypeInfo->TotalNumberOfObjects = 0;
				}
			}

			pObjInfoLocation = (unsigned char*)pObjectTypeInfo->TypeName.Buffer;

			pObjInfoLocation += pObjectTypeInfo->TypeName.MaximumLength;

			W::ULONG_PTR tmp = ((W::ULONG_PTR)pObjInfoLocation) & -(int)sizeof(void*); // TODO check this

			if ((W::ULONG_PTR)tmp != (W::ULONG_PTR)pObjInfoLocation)
				tmp += sizeof(void*);
			pObjInfoLocation = ((unsigned char*)tmp);
		}


	}

}


//----------------------------- END HOOKS -----------------------------//

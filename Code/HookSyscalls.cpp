#include "HookSyscalls.h"
#include "porting.h"
#include "Config.h"
#include "Helper.h"
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

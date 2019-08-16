#pragma once
#include "pin.H"
#include "ProcInfo.h"			//Needed for memory range
#include "HookSyscalls.h"		//Needed for CLIENT_ID
#include "tls.h"

namespace W {
	#include "windows.h"
	#include "Winternl.h"
}

//Callback Handling Structures

typedef struct _PEB
{
	W::BOOLEAN InheritedAddressSpace;
	W::BOOLEAN ReadImageFileExecOptions;
	W::BOOLEAN BeingDebugged;
	union
	{
		W::BOOLEAN BitField;
		struct
		{
			W::BOOLEAN ImageUsesLargePages : 1;
			W::BOOLEAN IsProtectedProcess : 1;
			W::BOOLEAN IsLegacyProcess : 1;
			W::BOOLEAN IsImageDynamicallyRelocated : 1;
			W::BOOLEAN SkipPatchingUser32Forwarders : 1;
			W::BOOLEAN SpareBits : 3;
		};
	};
	W::HANDLE Mutant;

	W::PVOID ImageBaseAddress;
	W::PVOID Ldr;
	W::PVOID ProcessParameters;
	W::PVOID SubSystemData;
	W::PVOID ProcessHeap;
	W::PRTL_CRITICAL_SECTION FastPebLock;
	W::PVOID AtlThunkSListPtr;
	W::PVOID IFEOKey;
	union
	{
		W::ULONG CrossProcessFlags;
		struct
		{
			W::ULONG ProcessInJob : 1;
			W::ULONG ProcessInitializing : 1;
			W::ULONG ProcessUsingVEH : 1;
			W::ULONG ProcessUsingVCH : 1;
			W::ULONG ProcessUsingFTH : 1;
			W::ULONG ReservedBits0 : 27;
		};
		W::ULONG EnvironmentUpdateCount;
	};
	union
	{
		W::PVOID KernelCallbackTable;
		W::PVOID UserSharedInfoPtr;
	};
} *PPEB;

typedef struct _TEB
{
	W::NT_TIB NtTib;
	W::PVOID EnvironmentPointer;
	CLIENT_ID ClientId;
	W::PVOID ActiveRpcHandle;
	W::PVOID ThreadLocalStoragePointer;
	PPEB ProcessEnvironmentBlock;
	W::ULONG LastErrorValue;
	W::ULONG CountOfOwnedCriticalSections;
	W::PVOID CsrClientThread;
	W::PVOID Win32ThreadInfo;
}TEB, *PTEB;


class TracerContextChangeManager {
	public:
		static void tracerOnContextChange(THREADID tid, CONTEXT_CHANGE_REASON reason, const CONTEXT *orig_ctx, CONTEXT *signal_ctx, int32_t info, void*);

};
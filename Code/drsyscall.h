#ifndef DRSYSCALL_H
#define DRSYSCALL_H

namespace W {
#include "windows.h"
}

namespace DR {

#define MAX_ARGS_IN_ENTRY 18 // on Windows 17 is max known

	/* Flag indicates last entry in the additional syscall table.
	* drsys_num_t number field is used for this value.
	*/
#define SECONDARY_TABLE_ENTRY_MAX_NUMBER -1

	/* There are enumeration classes with gaps (e.g. 0-2-4-8). We use
	* special flag to handle such cases. drsys_num_t number field is
	* used for this value.
	*/
#define SECONDARY_TABLE_SKIP_ENTRY -2

	typedef unsigned int uint;
	typedef W::LONG NTSTATUS;
	typedef W::ULONG APPHELPCACHESERVICECLASS;

	/* a register value: could be of any type; size is what matters. */
#ifdef __LP64__
	typedef uint64 reg_t;
#else
	typedef uint reg_t;
#endif
	/* integer whose size is based on pointers: ptr diff, mask, etc. */
	typedef reg_t ptr_uint_t;
#ifdef __LP64__
	typedef int64 ptr_int_t;
#else
	typedef int ptr_int_t; // DCD check if I did this right
#endif


						   /** enum list **/
	typedef enum _EVENT_TYPE
	{
		NotificationEvent,
		SynchronizationEvent
	} EVENT_TYPE;

	typedef enum _TIMER_TYPE
	{
		NotificationTimer,
		SynchronizationTimer
	} TIMER_TYPE;

	//  System Information Classes for NtQuerySystemInformation
	typedef enum _SYSTEM_INFORMATION_CLASS
	{
		SystemBasicInformation,
		SystemProcessorInformation,
		SystemPerformanceInformation,
		SystemTimeOfDayInformation,
		SystemPathInformation, /// Obsolete: Use KUSER_SHARED_DATA
		SystemProcessInformation,
		SystemCallCountInformation,
		SystemDeviceInformation,
		SystemProcessorPerformanceInformation,
		SystemFlagsInformation,
		SystemCallTimeInformation,
		SystemModuleInformation,
		SystemLocksInformation,
		SystemStackTraceInformation,
		SystemPagedPoolInformation,
		SystemNonPagedPoolInformation,
		SystemHandleInformation,
		SystemObjectInformation,
		SystemPageFileInformation,
		SystemVdmInstemulInformation,
		SystemVdmBopInformation,
		SystemFileCacheInformation,
		SystemPoolTagInformation,
		SystemInterruptInformation,
		SystemDpcBehaviorInformation,
		SystemFullMemoryInformation,
		SystemLoadGdiDriverInformation,
		SystemUnloadGdiDriverInformation,
		SystemTimeAdjustmentInformation,
		SystemSummaryMemoryInformation,
		SystemMirrorMemoryInformation,
		SystemPerformanceTraceInformation,
		SystemObsolete0,
		SystemExceptionInformation,
		SystemCrashDumpStateInformation,
		SystemKernelDebuggerInformation,
		SystemContextSwitchInformation,
		SystemRegistryQuotaInformation,
		SystemExtendServiceTableInformation,
		SystemPrioritySeperation,
		SystemPlugPlayBusInformation,
		SystemDockInformation,
		SystemPowerInformationNative,
		SystemProcessorSpeedInformation,
		SystemCurrentTimeZoneInformation,
		SystemLookasideInformation,
		SystemTimeSlipNotification,
		SystemSessionCreate,
		SystemSessionDetach,
		SystemSessionInformation,
		SystemRangeStartInformation,
		SystemVerifierInformation,
		SystemAddVerifier,
		SystemSessionProcessesInformation,
		SystemLoadGdiDriverInSystemSpaceInformation,
		SystemNumaProcessorMap,
		SystemPrefetcherInformation,
		SystemExtendedProcessInformation,
		SystemRecommendedSharedDataAlignment,
		SystemComPlusPackage,
		SystemNumaAvailableMemory,
		SystemProcessorPowerInformation,
		SystemEmulationBasicInformation,
		SystemEmulationProcessorInformation,
		SystemExtendedHanfleInformation,
		SystemLostDelayedWriteInformation,
		SystemBigPoolInformation,
		SystemSessionPoolTagInformation,
		SystemSessionMappedViewInformation,
		SystemHotpatchInformation,
		SystemObjectSecurityMode,
		SystemWatchDogTimerHandler,
		SystemWatchDogTimerInformation,
		SystemLogicalProcessorInformation,
		SystemWow64SharedInformationObsolete,
		SystemRegisterFirmwareTableInformationHandler,
		SystemFirmwareTableInformation,
		SystemModuleInformationEx,
		SystemVerifierTriageInformation,
		SystemSuperfetchInformation,
		SystemMemoryListInformation,
		SystemFileCacheInformationEx,
		SystemThreadPriorityClientIdInformation,
		SystemProcessorIdleCycleTimeInformation,
		SystemVerifierCancellationInformation,
		SystemProcessorPowerInformationEx,
		SystemRefTraceInformation,
		SystemSpecialPoolInformation,
		SystemProcessIdInformation,
		SystemErrorPortInformation,
		SystemBootEnvironmentInformation,
		SystemHypervisorInformation,
		SystemVerifierInformationEx,
		SystemTimeZoneInformation,
		SystemImageFileExecutionOptionsInformation,
		SystemCoverageInformation,
		SystemPrefetchPathInformation,
		SystemVerifierFaultsInformation,
		MaxSystemInfoClass,
	} SYSTEM_INFORMATION_CLASS;

	// Profiling Sources
	typedef enum _KPROFILE_SOURCE
	{
		ProfileTime,
		ProfileAlignmentFixup,
		ProfileTotalIssues,
		ProfilePipelineDry,
		ProfileLoadInstructions,
		ProfilePipelineFrozen,
		ProfileBranchInstructions,
		ProfileTotalNonissues,
		ProfileDcacheMisses,
		ProfileIcacheMisses,
		ProfileCacheMisses,
		ProfileBranchMispredictions,
		ProfileStoreInstructions,
		ProfileFpInstructions,
		ProfileIntegerInstructions,
		Profile2Issue,
		Profile3Issue,
		Profile4Issue,
		ProfileSpecialInstructions,
		ProfileTotalCycles,
		ProfileIcacheIssues,
		ProfileDcacheAccesses,
		ProfileMemoryBarrierCycles,
		ProfileLoadLinkedIssues,
		ProfileMaximum
	} KPROFILE_SOURCE;

	typedef enum _SECTION_INHERIT {
		ViewShare = 1,
		ViewUnmap = 2
	} SECTION_INHERIT;

	typedef enum _PROCESSINFOCLASS
	{
		ProcessBasicInformation,
		ProcessQuotaLimits,
		ProcessIoCounters,
		ProcessVmCounters,
		ProcessTimes,
		ProcessBasePriority,
		ProcessRaisePriority,
		ProcessDebugPort,
		ProcessExceptionPort,
		ProcessAccessToken,
		ProcessLdtInformation,
		ProcessLdtSize,
		ProcessDefaultHardErrorMode,
		ProcessIoPortHandlers,
		ProcessPooledUsageAndLimits,
		ProcessWorkingSetWatch,
		ProcessUserModeIOPL,
		ProcessEnableAlignmentFaultFixup,
		ProcessPriorityClass,
		ProcessWx86Information,
		ProcessHandleCount,
		ProcessAffinityMask,
		ProcessPriorityBoost,
		ProcessDeviceMap,
		ProcessSessionInformation,
		ProcessForegroundInformation,
		ProcessWow64Information,
		/* added after XP+ */
		ProcessImageFileName,
		ProcessLUIDDeviceMapsEnabled,
		ProcessBreakOnTermination,
		ProcessDebugObjectHandle,
		ProcessDebugFlags,
		ProcessHandleTracing,
		ProcessIoPriority,
		ProcessExecuteFlags,
		ProcessTlsInformation,
		ProcessCookie,
		ProcessImageInformation,
		ProcessCycleTime,
		ProcessPagePriority,
		ProcessInstrumentationCallback,
		ProcessThreadStackAllocation,
		ProcessWorkingSetWatchEx,
		ProcessImageFileNameWin32,
		ProcessImageFileMapping,
		ProcessAffinityUpdateMode,
		ProcessMemoryAllocationMode,
		ProcessGroupInformation,
		ProcessTokenVirtualizationEnabled,
		ProcessConsoleHostProcess,
		ProcessWindowInformation,
		MaxProcessInfoClass
	} PROCESSINFOCLASS;

	typedef enum _THREADINFOCLASS
	{
		ThreadBasicInformation,
		ThreadTimes,
		ThreadPriority,
		ThreadBasePriority,
		ThreadAffinityMask,
		ThreadImpersonationToken,
		ThreadDescriptorTableEntry,
		ThreadEnableAlignmentFaultFixup,
		ThreadEventPair_Reusable,
		ThreadQuerySetWin32StartAddress,
		ThreadZeroTlsCell,
		ThreadPerformanceCount,
		ThreadAmILastThread,
		ThreadIdealProcessor,
		ThreadPriorityBoost,
		ThreadSetTlsArrayAddress,
		ThreadIsIoPending,
		ThreadHideFromDebugger,
		ThreadBreakOnTermination,
		ThreadSwitchLegacyState,
		ThreadIsTerminated,
		ThreadLastSystemCall,
		ThreadIoPriority,
		ThreadCycleTime,
		ThreadPagePriority,
		ThreadActualBasePriority,
		ThreadTebInformation,
		ThreadCSwitchMon,
		ThreadWow64Context,
		ThreadGroupInformation,
		ThreadUmsInformation,
		ThreadCounterProfiling,
		ThreadIdealProcessorEx,
		MaxThreadInfoClass
	} THREADINFOCLASS;

	typedef enum _OBJECT_INFORMATION_CLASS {
		ObjectBasicInformation = 0,
		ObjectTypeInformation = 2
	} OBJECT_INFORMATION_CLASS;

	typedef enum _WAIT_TYPE
	{
		WaitAll,
		WaitAny
	} WAIT_TYPE;

	typedef enum _WORKERFACTORYINFOCLASS
	{
		WorkerFactoryTimeout,
		WorkerFactoryRetryTimeout,
		WorkerFactoryIdleTimeout,
		WorkerFactoryBindingCount,
		WorkerFactoryThreadMinimum,
		WorkerFactoryThreadMaximum,
		WorkerFactoryPaused,
		WorkerFactoryBasicInformation,
		WorkerFactoryAdjustThreadGoal,
		WorkerFactoryCallbackType,
		WorkerFactoryStackInformation,
		MaxWorkerFactoryInfoClass
	} WORKERFACTORYINFOCLASS, *PWORKERFACTORYINFOCLASS;

	// Define the file information class values
	//
	// WARNING:  The order of the following values are assumed by the I/O system.
	//           Any changes made here should be reflected there as well.
	typedef enum _FILE_INFORMATION_CLASS {
		FileDirectoryInformation = 1,
		FileFullDirectoryInformation,   // 2
		FileBothDirectoryInformation,   // 3
		FileBasicInformation,           // 4
		FileStandardInformation,        // 5
		FileInternalInformation,        // 6
		FileEaInformation,              // 7
		FileAccessInformation,          // 8
		FileNameInformation,            // 9
		FileRenameInformation,          // 10
		FileLinkInformation,            // 11
		FileNamesInformation,           // 12
		FileDispositionInformation,     // 13
		FilePositionInformation,        // 14
		FileFullEaInformation,          // 15
		FileModeInformation,            // 16
		FileAlignmentInformation,       // 17
		FileAllInformation,             // 18
		FileAllocationInformation,      // 19
		FileEndOfFileInformation,       // 20
		FileAlternateNameInformation,   // 21
		FileStreamInformation,          // 22
		FilePipeInformation,            // 23
		FilePipeLocalInformation,       // 24
		FilePipeRemoteInformation,      // 25
		FileMailslotQueryInformation,   // 26
		FileMailslotSetInformation,     // 27
		FileCompressionInformation,     // 28
		FileObjectIdInformation,        // 29
		FileCompletionInformation,      // 30
		FileMoveClusterInformation,     // 31
		FileQuotaInformation,           // 32
		FileReparsePointInformation,    // 33
		FileNetworkOpenInformation,     // 34
		FileAttributeTagInformation,    // 35
		FileTrackingInformation,        // 36
		FileIdBothDirectoryInformation, // 37
		FileIdFullDirectoryInformation, // 38
		FileValidDataLengthInformation, // 39
		FileShortNameInformation,       // 40
		FileIoCompletionNotificationInformation, // 41
		FileIoStatusBlockRangeInformation,       // 42
		FileIoPriorityHintInformation,           // 43
		FileSfioReserveInformation,              // 44
		FileSfioVolumeInformation,               // 45
		FileHardLinkInformation,                 // 46
		FileProcessIdsUsingFileInformation,      // 47
		FileNormalizedNameInformation,           // 48
		FileNetworkPhysicalNameInformation,      // 49
		FileIdGlobalTxDirectoryInformation,      // 50
		FileIsRemoteDeviceInformation,           // 51
		FileAttributeCacheInformation,           // 52
		FileNumaNodeInformation,                 // 53
		FileStandardLinkInformation,             // 54
		FileRemoteProtocolInformation,           // 55
		FileMaximumInformation
	} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

	// Section Information Clasess for NtQuerySection
	typedef enum _SECTION_INFORMATION_CLASS
	{
		SectionBasicInformation,
		SectionImageInformation,
	} SECTION_INFORMATION_CLASS;

	typedef enum _TIMER_INFORMATION_CLASS
	{
		TimerBasicInformation
	} TIMER_INFORMATION_CLASS;

	typedef enum _SEMAPHORE_INFORMATION_CLASS
	{
		SemaphoreBasicInformation
	} SEMAPHORE_INFORMATION_CLASS;

	typedef enum _KEY_VALUE_INFORMATION_CLASS {
		KeyValueBasicInformation,
		KeyValueFullInformation,
		KeyValuePartialInformation,
		KeyValueFullInformationAlign64,
		KeyValuePartialInformationAlign64
	} KEY_VALUE_INFORMATION_CLASS;

	typedef enum _MEMORY_INFORMATION_CLASS
	{
		MemoryBasicInformation,
		MemoryWorkingSetList,
		MemorySectionName,
		MemoryBasicVlmInformation
	} MEMORY_INFORMATION_CLASS;

	typedef enum _DEBUGOBJECTINFOCLASS
	{
		DebugObjectUnusedInformation,
		DebugObjectKillProcessOnExitInformation
	} DEBUGOBJECTINFOCLASS, *PDEBUGOBJECTINFOCLASS;

	typedef enum _SHUTDOWN_ACTION
	{
		ShutdownNoReboot,
		ShutdownReboot,
		ShutdownPowerOff
	} SHUTDOWN_ACTION;

	// Debug Control Codes for NtSystemDebugcontrol
	typedef enum _SYSDBG_COMMAND
	{
		SysDbgQueryModuleInformation = 0,
		SysDbgQueryTraceInformation = 1,
		SysDbgSetTracepoint = 2,
		SysDbgSetSpecialCall = 3,
		SysDbgClearSpecialCalls = 4,
		SysDbgQuerySpecialCalls = 5,
		SysDbgBreakPoint = 6,
		SysDbgQueryVersion = 7,
		SysDbgReadVirtual = 8,
		SysDbgWriteVirtual = 9,
		SysDbgReadPhysical = 10,
		SysDbgWritePhysical = 11,
		SysDbgReadControlSpace = 12,
		SysDbgWriteControlSpace = 13,
		SysDbgReadIoSpace = 14,
		SysDbgWriteIoSpace = 15,
		SysDbgReadMsr = 16,
		SysDbgWriteMsr = 17,
		SysDbgReadBusData = 18,
		SysDbgWriteBusData = 19,
		SysDbgCheckLowMemory = 20,
		SysDbgEnableKernelDebugger = 21,
		SysDbgDisableKernelDebugger = 22,
		SysDbgGetAutoKdEnable = 23,
		SysDbgSetAutoKdEnable = 24,
		SysDbgGetPrintBufferSize = 25,
		SysDbgSetPrintBufferSize = 26,
		SysDbgGetKdUmExceptionEnable = 27,
		SysDbgSetKdUmExceptionEnable = 28,
		SysDbgGetTriageDump = 29,
		SysDbgGetKdBlockEnable = 30,
		SysDbgSetKdBlockEnable = 31,
		SysDbgRegisterForUmBreakInfo = 32,
		SysDbgGetUmBreakPid = 33,
		SysDbgClearUmBreakPid = 34,
		SysDbgGetUmAttachPid = 35,
		SysDbgClearUmAttachPid = 36,
	} SYSDBG_COMMAND;

	/** DynamoRIO imported Windows data types **/

	typedef struct _UNICODE_STRING {
		/* Length field is size in bytes not counting final 0 */
		W::USHORT Length;
		W::USHORT MaximumLength;
		W::PWSTR  Buffer;
	} UNICODE_STRING;
	typedef UNICODE_STRING *PUNICODE_STRING;

	typedef struct _CLIENT_ID {
		/* These are numeric ids */
		W::HANDLE UniqueProcess;
		W::HANDLE UniqueThread;
	} CLIENT_ID;
	typedef CLIENT_ID *PCLIENT_ID;

	typedef short CSHORT;
#define LPC_SIZE_T W::SIZE_T
#define LPC_CLIENT_ID CLIENT_ID

	typedef struct _PORT_MESSAGE {
		union {
			struct {
				CSHORT DataLength;
				CSHORT TotalLength;
			} s1;
			W::ULONG Length;
		} u1;
		union {
			struct {
				CSHORT Type;
				CSHORT DataInfoOffset;
			} s2;
			W::ULONG ZeroInit;
		} u2;
		union {
			LPC_CLIENT_ID ClientId;
			double DoNotUseThisField;       // Force quadword alignment
		};
		W::ULONG MessageId;
		union {
			LPC_SIZE_T ClientViewSize;          // Only valid on LPC_CONNECTION_REQUEST message
			W::ULONG CallbackId;                   // Only valid on LPC_REQUEST message
		} u3;
		//  UCHAR Data[];
	} PORT_MESSAGE, *PPORT_MESSAGE;

	typedef struct _IO_STATUS_BLOCK {
		union {
			NTSTATUS Status;
			W::PVOID Pointer;
		} StatusPointer;
		W::ULONG_PTR Information;
	} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;

	typedef struct _OBJECT_ATTRIBUTES {
		W::ULONG Length;
		W::HANDLE RootDirectory;
		PUNICODE_STRING ObjectName;
		W::ULONG Attributes;
		W::PVOID SecurityDescriptor;
		W::PVOID SecurityQualityOfService;
	} OBJECT_ATTRIBUTES;
	typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;

#if defined(USE_LPC6432)
#define LPC_CLIENT_ID CLIENT_ID64
#define LPC_SIZE_T ULONGLONG
#define LPC_PVOID ULONGLONG
#define LPC_HANDLE ULONGLONG
#else
#define LPC_CLIENT_ID CLIENT_ID
#define LPC_SIZE_T W::SIZE_T
#define LPC_PVOID W::PVOID
#define LPC_HANDLE W::HANDLE
#endif

	typedef struct _PORT_VIEW {
		W::ULONG Length;
		LPC_HANDLE SectionHandle;
		W::ULONG SectionOffset;
		LPC_SIZE_T ViewSize;
		LPC_PVOID ViewBase;
		LPC_PVOID ViewRemoteBase;
	} PORT_VIEW, *PPORT_VIEW;

	typedef struct _REMOTE_PORT_VIEW {
		W::ULONG Length;
		LPC_SIZE_T ViewSize;
		LPC_PVOID ViewBase;
	} REMOTE_PORT_VIEW, *PREMOTE_PORT_VIEW;

	typedef struct _USER_STACK {
		W::PVOID FixedStackBase;
		W::PVOID FixedStackLimit;
		W::PVOID ExpandableStackBase;
		W::PVOID ExpandableStackLimit;
		W::PVOID ExpandableStackBottom;
	} USER_STACK, *PUSER_STACK;

	typedef struct _RTL_USER_PROCESS_PARAMETERS {
		W::ULONG MaximumLength;
		W::ULONG Length;
		W::ULONG Flags;
		W::ULONG DebugFlags;
		W::PVOID ConsoleHandle;
		W::ULONG ConsoleFlags;
		W::HANDLE StdInputHandle;
		W::HANDLE StdOutputHandle;
		W::HANDLE StdErrorHandle;
		UNICODE_STRING CurrentDirectoryPath;
		W::HANDLE CurrentDirectoryHandle;
		UNICODE_STRING DllPath;
		UNICODE_STRING ImagePathName;
		UNICODE_STRING CommandLine;
		W::PVOID Environment;
		W::ULONG StartingPositionLeft;
		W::ULONG StartingPositionTop;
		W::ULONG Width;
		W::ULONG Height;
		W::ULONG CharWidth;
		W::ULONG CharHeight;
		W::ULONG ConsoleTextAttributes;
		W::ULONG WindowFlags;
		W::ULONG ShowWindowFlags;
		UNICODE_STRING WindowTitle;
		UNICODE_STRING DesktopName;
		UNICODE_STRING ShellInfo;
		UNICODE_STRING RuntimeData;
		// RTL_DRIVE_LETTER_CURDIR DLCurrentDirectory[0x20]
	} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS;

	typedef struct _thread_info_element_t { /* NOTE - this is speculative */
		ptr_uint_t flags;   /* thread_info_elm_buf_access_t | thread_info_elm_buf_type_t */
		size_t buffer_size; /* sizeof of buffer, in bytes */
		void *buffer;       /* flags determine disposition, could be IN or OUT or both */
		ptr_uint_t unknown;  /* [ observed always 0 ] */
	} thread_info_elm_t;

	typedef struct _create_proc_thread_info_t { /* NOTE - this is speculative */
		size_t struct_size; /* observed 0x34 or 0x44 (0x68 on 64-bit) = sizeof(this struct) */
							/* Observed - first thread_info_elm_t always
							* flags = 0x20005
							* buffer_size = varies (sizeof buffer string in bytes)
							* buffer = wchar * : nt path to executable i.e. "\??\c:\foo.exe" - IN */
		thread_info_elm_t nt_path_to_exe;
		/* Observed - second thread_info_elm_t always
		* flags = 0x10003
		* buffer_size = sizeof(CLIENT_ID)
		* buffer = PCLIENT_ID : OUT */
		thread_info_elm_t client_id;
		/* Observed - third thread_info_elm_t always
		* flags = 0x6
		* buffer_size = 0x30 (or 0x40 on 64-bit) == sizeof(exe_stuff_t)
		* buffer = exe_stuff_t * : IN/OUT */
		thread_info_elm_t exe_stuff;
		/* While the first three thread_info_elm_t have been present in every call I've seen
		* (and attempts to remove or re-arrange them caused the system call to fail,
		* assuming I managed to do it right), there's more variation in the later fields
		* (sometimes present, sometimes not) - most commonly there'll be nothing or just the
		* TEB * info field (flags = 0x10003) which I've seen here a lot on 32bit. */
#if 0 /* 0 sized array is non-standard extension */
		thread_info_elm_t info[];
#endif
	}  create_proc_thread_info_t;

	typedef
		VOID
		(NTAPI *PIO_APC_ROUTINE) (
			IN W::PVOID ApcContext,
			IN PIO_STATUS_BLOCK IoStatusBlock,
			IN W::ULONG Reserved
			);

	typedef struct _CHANNEL_MESSAGE {
		W::ULONG unknown;
	} CHANNEL_MESSAGE, *PCHANNEL_MESSAGE;

	typedef
		VOID
		(*PKNORMAL_ROUTINE) (
			IN W::PVOID NormalContext,
			IN W::PVOID SystemArgument1,
			IN W::PVOID SystemArgument2
			);

	typedef struct _FILE_BASIC_INFORMATION {
		W::LARGE_INTEGER CreationTime;
		W::LARGE_INTEGER LastAccessTime;
		W::LARGE_INTEGER LastWriteTime;
		W::LARGE_INTEGER ChangeTime;
		W::ULONG FileAttributes;
	} FILE_BASIC_INFORMATION, *PFILE_BASIC_INFORMATION;

	typedef struct _FILE_FULL_EA_INFORMATION {
		W::ULONG NextEntryOffset;
		W::UCHAR Flags;
		W::UCHAR EaNameLength;
		W::USHORT EaValueLength;
		W::CHAR EaName[1];
	} FILE_FULL_EA_INFORMATION, *PFILE_FULL_EA_INFORMATION;

	typedef struct _FILE_GET_EA_INFORMATION {
		W::ULONG NextEntryOffset;
		W::UCHAR EaNameLength;
		W::CHAR EaName[1];
	} FILE_GET_EA_INFORMATION, *PFILE_GET_EA_INFORMATION;

	typedef struct _FILE_NETWORK_OPEN_INFORMATION {
		W::LARGE_INTEGER CreationTime;
		W::LARGE_INTEGER LastAccessTime;
		W::LARGE_INTEGER LastWriteTime;
		W::LARGE_INTEGER ChangeTime;
		W::LARGE_INTEGER AllocationSize;
		W::LARGE_INTEGER EndOfFile;
		W::ULONG FileAttributes;
	} FILE_NETWORK_OPEN_INFORMATION, *PFILE_NETWORK_OPEN_INFORMATION;

	typedef struct _ALPC_MESSAGE_ATTRIBUTES
	{
		W::ULONG AllocatedAttributes;
		W::ULONG ValidAttributes;
	} ALPC_MESSAGE_ATTRIBUTES, *PALPC_MESSAGE_ATTRIBUTES;

	typedef struct _ALPC_PORT_ATTRIBUTES
	{
		W::ULONG Flags;
		W::SECURITY_QUALITY_OF_SERVICE SecurityQos;
		W::SIZE_T MaxMessageLength;
		W::SIZE_T MemoryBandwidth;
		W::SIZE_T MaxPoolUsage;
		W::SIZE_T MaxSectionSize;
		W::SIZE_T MaxViewSize;
		W::SIZE_T MaxTotalSectionSize;
		W::ULONG DupObjectTypes;
#ifdef __LP64__
		W::ULONG Reserved;
#endif
	} ALPC_PORT_ATTRIBUTES, *PALPC_PORT_ATTRIBUTES;

	typedef struct _ALPC_CONTEXT_ATTRIBUTES
	{
		W::PVOID PortContext;
		W::PVOID MessageContext;
		W::ULONG SequenceNumber;
		W::ULONG MessageID;
		W::ULONG CallbackID;
	} ALPC_CONTEXT_ATTRIBUTES, *PALPC_CONTEXT_ATTRIBUTES;

	typedef struct _ALPC_DATA_VIEW
	{
		W::ULONG Flags;
		W::HANDLE SectionHandle;
		W::PVOID ViewBase;
		W::SIZE_T ViewSize;
	} ALPC_DATA_VIEW, *PALPC_DATA_VIEW;

	typedef struct _ALPC_SECURITY_ATTRIBUTES
	{
		W::ULONG Flags;
		W::PSECURITY_QUALITY_OF_SERVICE SecurityQos;
		W::HANDLE ContextHandle;
		W::ULONG Reserved1;
		W::ULONG Reserved2;
	} ALPC_SECURITY_ATTRIBUTES, *PALPC_SECURITY_ATTRIBUTES;

	typedef struct _KEY_VALUE_ENTRY {
		PUNICODE_STRING ValueName;
		W::ULONG           DataLength;
		W::ULONG           DataOffset;
		W::ULONG           Type;
	} KEY_VALUE_ENTRY, *PKEY_VALUE_ENTRY;

	typedef struct _FILE_USER_QUOTA_INFORMATION {
		W::ULONG NextEntryOffset;
		W::ULONG SidLength;
		W::LARGE_INTEGER ChangeTime;
		W::LARGE_INTEGER QuotaUsed;
		W::LARGE_INTEGER QuotaThreshold;
		W::LARGE_INTEGER QuotaLimit;
		W::SID Sid[1];
	} FILE_USER_QUOTA_INFORMATION, *PFILE_USER_QUOTA_INFORMATION;

	typedef struct _FILE_QUOTA_LIST_INFORMATION {
		W::ULONG NextEntryOffset;
		W::ULONG SidLength;
		W::SID Sid[1];
	} FILE_QUOTA_LIST_INFORMATION, *PFILE_QUOTA_LIST_INFORMATION;

	// Firmware Boot File Path
	typedef struct _FILE_PATH
	{
		W::ULONG Version;
		W::ULONG Length;
		W::ULONG Type;
		W::CHAR FilePath[1];
	} FILE_PATH, *PFILE_PATH;

	typedef struct _EVENT_TRACE_HEADER {        // overlays WNODE_HEADER
		W::USHORT          Size;                   // Size of entire record
		union {
			W::USHORT      FieldTypeFlags;         // Indicates valid fields
			struct {
				W::UCHAR   HeaderType;             // Header type - internal use only
				W::UCHAR   MarkerFlags;            // Marker - internal use only
			};
		};
		union {
			W::ULONG       Version;
			struct {
				W::UCHAR   Type;                   // event type
				W::UCHAR   Level;                  // trace instrumentation level
				W::USHORT  Version;                // version of trace record
			} Class;
		};
		W::ULONG           ThreadId;               // Thread Id
		W::ULONG           ProcessId;              // Process Id
		W::LARGE_INTEGER   TimeStamp;              // time when event happens
		union {
			W::GUID        Guid;                   // Guid that identifies event
			W::ULONGLONG   GuidPtr;                // use with WNODE_FLAG_USE_GUID_PTR
		};
		union {
			struct {
				W::ULONG   KernelTime;             // Kernel Mode CPU ticks
				W::ULONG   UserTime;               // User mode CPU ticks
			};
			W::ULONG64     ProcessorTime;          // Processor Clock
			struct {
				W::ULONG   ClientContext;          // Reserved
				W::ULONG   Flags;                  // Event Flags
			};
		};
	} EVENT_TRACE_HEADER, *PEVENT_TRACE_HEADER;

	typedef enum _DBG_STATE
	{
		DbgIdle,
		DbgReplyPending,
		DbgCreateThreadStateChange,
		DbgCreateProcessStateChange,
		DbgExitThreadStateChange,
		DbgExitProcessStateChange,
		DbgExceptionStateChange,
		DbgBreakpointStateChange,
		DbgSingleStepStateChange,
		DbgLoadDllStateChange,
		DbgUnloadDllStateChange
	} DBG_STATE, *PDBG_STATE;

	typedef struct _DBGKM_CREATE_THREAD
	{
		W::ULONG SubSystemKey;
		W::PVOID StartAddress;
	} DBGKM_CREATE_THREAD, *PDBGKM_CREATE_THREAD;

	typedef struct _DBGKM_CREATE_PROCESS
	{
		W::ULONG SubSystemKey;
		W::HANDLE FileHandle;
		W::PVOID BaseOfImage;
		W::ULONG DebugInfoFileOffset;
		W::ULONG DebugInfoSize;
		DBGKM_CREATE_THREAD InitialThread;
	} DBGKM_CREATE_PROCESS, *PDBGKM_CREATE_PROCESS;

	typedef struct _DBGKM_EXIT_THREAD
	{
		NTSTATUS ExitStatus;
	} DBGKM_EXIT_THREAD, *PDBGKM_EXIT_THREAD;

	typedef struct _DBGKM_EXIT_PROCESS
	{
		NTSTATUS ExitStatus;
	} DBGKM_EXIT_PROCESS, *PDBGKM_EXIT_PROCESS;

	typedef struct _DBGKM_LOAD_DLL
	{
		W::HANDLE FileHandle;
		W::PVOID BaseOfDll;
		W::ULONG DebugInfoFileOffset;
		W::ULONG DebugInfoSize;
		W::PVOID NamePointer;
	} DBGKM_LOAD_DLL, *PDBGKM_LOAD_DLL;

	typedef struct _DBGKM_UNLOAD_DLL
	{
		W::PVOID BaseAddress;
	} DBGKM_UNLOAD_DLL, *PDBGKM_UNLOAD_DLL;

	typedef struct _DBGKM_EXCEPTION
	{
		W::EXCEPTION_RECORD ExceptionRecord;
		W::ULONG FirstChance;
	} DBGKM_EXCEPTION, *PDBGKM_EXCEPTION;

	typedef struct _DBGUI_WAIT_STATE_CHANGE
	{
		DBG_STATE NewState;
		CLIENT_ID AppClientId;
		union
		{
			struct
			{
				W::HANDLE HandleToThread;
				DBGKM_CREATE_THREAD NewThread;
			} CreateThread;
			struct
			{
				W::HANDLE HandleToProcess;
				W::HANDLE HandleToThread;
				DBGKM_CREATE_PROCESS NewProcess;
			} CreateProcessInfo;
			DBGKM_EXIT_THREAD ExitThread;
			DBGKM_EXIT_PROCESS ExitProcess;
			DBGKM_EXCEPTION Exception;
			DBGKM_LOAD_DLL LoadDll;
			DBGKM_UNLOAD_DLL UnloadDll;
		} StateInfo;
	} DBGUI_WAIT_STATE_CHANGE, *PDBGUI_WAIT_STATE_CHANGE;

	typedef struct _FILE_IO_COMPLETION_INFORMATION {
		W::PVOID KeyContext;
		W::PVOID ApcContext;
		IO_STATUS_BLOCK IoStatusBlock;
	} FILE_IO_COMPLETION_INFORMATION, *PFILE_IO_COMPLETION_INFORMATION;

	typedef struct _T2_SET_PARAMETERS_V0 {
		W::ULONG Version;
		W::ULONG Reserved;
		W::LONGLONG NoWakeTolerance;
	} T2_SET_PARAMETERS, *PT2_SET_PARAMETERS;

	// Firmware Boot Options
	typedef struct _BOOT_OPTIONS
	{
		W::ULONG Version;
		W::ULONG Length;
		W::ULONG Timeout;
		W::ULONG CurrentBootEntryId;
		W::ULONG NextBootEntryId;
		W::WCHAR HeadlessRedirection[1];
	} BOOT_OPTIONS, *PBOOT_OPTIONS;

	typedef
		VOID
		(*PTIMER_APC_ROUTINE) (
			__in W::PVOID TimerContext,
			__in W::ULONG TimerLowValue,
			__in W::LONG TimerHighValue
			);

	//--------------------------WDM.h------------------------//


	typedef struct _FILE_POSITION_INFORMATION {
		W::LARGE_INTEGER CurrentByteOffset;
	} FILE_POSITION_INFORMATION, *PFILE_POSITION_INFORMATION;

	//
	// Support to set priority hints on a filehandle.
	//

	typedef enum _IO_PRIORITY_HINT {
		IoPriorityVeryLow = 0,          // Defragging, content indexing and other background I/Os
		IoPriorityLow,                  // Prefetching for applications.
		IoPriorityNormal,               // Normal I/Os
		IoPriorityHigh,                 // Used by filesystems for checkpoint I/O
		IoPriorityCritical,             // Used by memory manager. Not available for applications.
		MaxIoPriorityTypes
	} IO_PRIORITY_HINT;

	typedef struct _FILE_IO_PRIORITY_HINT_INFORMATION {
		IO_PRIORITY_HINT   PriorityHint;
	} FILE_IO_PRIORITY_HINT_INFORMATION, *PFILE_IO_PRIORITY_HINT_INFORMATION;


	typedef enum _KEY_INFORMATION_CLASS {
		KeyBasicInformation,
		KeyNodeInformation,
		KeyFullInformation,
		KeyNameInformation,
		KeyCachedInformation,
		KeyFlagsInformation,
		KeyVirtualizationInformation,
		KeyHandleTagsInformation,
		MaxKeyInfoClass  // MaxKeyInfoClass should always be the last enum
	} KEY_INFORMATION_CLASS;

	typedef enum _KEY_SET_INFORMATION_CLASS {
		KeyWriteTimeInformation,
		KeyWow64FlagsInformation,
		KeyControlFlagsInformation,
		KeySetVirtualizationInformation,
		KeySetDebugInformation,
		KeySetHandleTagsInformation,
		MaxKeySetInfoClass  // MaxKeySetInfoClass should always be the last enum
	} KEY_SET_INFORMATION_CLASS;

	typedef enum _IO_CONTAINER_INFORMATION_CLASS {
		IoSessionStateInformation, // 0 - Session State Information
		IoMaxContainerInformationClass
	} IO_CONTAINER_INFORMATION_CLASS;

	typedef enum _TRACE_INFORMATION_CLASS {
		TraceIdClass,
		TraceHandleClass,
		TraceEnableFlagsClass,
		TraceEnableLevelClass,
		GlobalLoggerHandleClass,
		EventLoggerHandleClass,
		AllLoggerHandlesClass,
		TraceHandleByNameClass,
		LoggerEventsLostClass,
		TraceSessionSettingsClass,
		LoggerEventsLoggedClass,
		MaxTraceInformationClass
	} TRACE_INFORMATION_CLASS;


	/***************************************************************************
	* Derived independently
	*/

#if (_WIN32_WINNT < _WIN32_WINNT_WIN7) || (_MSC_VER < 1600)
	typedef enum _POWER_REQUEST_TYPE {
		PowerRequestDisplayRequired,
		PowerRequestSystemRequired,
		PowerRequestAwayModeRequired
	} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;
#endif

#if (_MSC_VER < 1500)
	typedef enum {
		SetPowerSettingValue = SystemPowerLoggingEntry + 1,
		NotifyUserPowerSetting,
		PowerInformationLevelUnused0,
		PowerInformationLevelUnused1,
		SystemVideoState,
		TraceApplicationPowerMessage,
		TraceApplicationPowerMessageEnd,
		ProcessorPerfStates,
		ProcessorIdleStates,
		ProcessorCap,
		SystemWakeSource,
		SystemHiberFileInformation,
		TraceServicePowerMessage,
		ProcessorLoad,
		PowerShutdownNotification,
		MonitorCapabilities,
#endif
#if (_MSC_VER == 1500)
		typedef enum {
		MonitorCapabilities = PowerShutdownNotification + 1,
#endif
#if (_MSC_VER <= 1500)
		SessionPowerInit,
		SessionDisplayState,
		PowerRequestCreate,
		PowerRequestAction,
		GetPowerRequestList,
		ProcessorInformationEx,
		NotifyUserModeLegacyPowerEvent,
		GroupPark,
		ProcessorIdleDomains,
		WakeTimerList,
		SystemHiberFileSize,
		PowerInformationLevelMaximum
	} POWER_INFORMATION_LEVEL;
#endif

#ifndef POWER_REQUEST_CONTEXT_SIMPLE_STRING
# define POWER_REQUEST_CONTEXT_SIMPLE_STRING    0x00000001
# define POWER_REQUEST_CONTEXT_DETAILED_STRING  0x00000002
#endif

	/* Used by NtPowerInformation.PowerRequestCreate, which is used by
	* kernel32!PowerCreateRequest
	*/
	typedef struct _POWER_REQUEST_CREATE {
		/* First two fields match those in REASON_CONTEXT */
		W::ULONG Version;
		W::DWORD Flags;
		/* XXX: it seems that REASON_CONTEXT.Reason.Detailed.* is all just
		* ignored and only the name of the module is passed to the kernel
		* (name of exe, if NULL).  Why have the array then?  Where is the
		* resource ID passed?
		*/
		UNICODE_STRING ReasonString;
	} POWER_REQUEST_CREATE;

	/* Used by NtPowerInformation.PowerRequestAction, which is used by
	* kernel32!Power{Set,Clear}Request
	*/
	typedef struct _POWER_REQUEST_ACTION {
		W::HANDLE PowerRequest;
		W::POWER_REQUEST_TYPE RequestType;
		W::BOOLEAN Unknown1;
		W::PVOID Unknown2;
	} POWER_REQUEST_ACTION;

	//----------------------------End of WDM.h-------------------------//

	//----------------------------Begin of exttypes.h------------------//


	//
	//  System Information Classes for NtQueryMutant
	//
	typedef enum _MUTANT_INFORMATION_CLASS
	{
		MutantBasicInformation,
		MutantOwnerInformation
	} MUTANT_INFORMATION_CLASS;

	//
	//  System Information Classes for NtQueryAtom
	//
	typedef enum _ATOM_INFORMATION_CLASS
	{
		AtomBasicInformation,
		AtomTableInformation,
	} ATOM_INFORMATION_CLASS;

	//
	// System Information Classes for NtSetTimerEx
	//
	typedef enum _TIMER_SET_INFORMATION_CLASS
	{
		TimerSetCoalescableTimer,
		MaxTimerInfoClass
	} TIMER_SET_INFORMATION_CLASS;

	//
	//  System Information Classes for NtQueryEvent
	//
	typedef enum _EVENT_INFORMATION_CLASS
	{
		EventBasicInformation
	} EVENT_INFORMATION_CLASS;

	// Class 26
	typedef struct _SYSTEM_GDI_DRIVER_INFORMATION
	{
		UNICODE_STRING DriverName;
		W::PVOID ImageAddress;
		W::PVOID SectionPointer;
		W::PVOID EntryPoint;
		W::PIMAGE_EXPORT_DIRECTORY ExportSectionPointer;
		W::ULONG ImageLength;
	} SYSTEM_GDI_DRIVER_INFORMATION, *PSYSTEM_GDI_DRIVER_INFORMATION;

	// Class 53
	typedef struct _SYSTEM_SESSION_PROCESS_INFORMATION
	{
		W::ULONG SessionId;
		W::ULONG SizeOfBuf;
		W::PVOID Buffer; // Same format as in SystemProcessInformation
	} SYSTEM_SESSION_PROCESS_INFORMATION, *PSYSTEM_SESSION_PROCESS_INFORMATION;

	//
	// Rtl Atom
	//
	typedef W::USHORT RTL_ATOM, *PRTL_ATOM;

	// System Information Class: SystemHandleInformation (16)
	typedef struct _SYSTEM_HANDLE_ENTRY {
		W::ULONG  OwnerPid;
		W::BYTE   ObjectType;
		W::BYTE   HandleFlags;
		W::USHORT HandleValue;
		W::PVOID  ObjectPointer;
		W::ULONG  AccessMask;
	} SYSTEM_HANDLE_ENTRY, *PSYSTEM_HANDLE_ENTRY;

	typedef struct _SYSTEM_HANDLE_INFORMATION {
		W::ULONG               Count;
		SYSTEM_HANDLE_ENTRY Handle[1];
	} SYSTEM_HANDLE_INFORMATION, *PSYSTEM_HANDLE_INFORMATION;

	//---------------------End of exttypes.h------------------//

	//
	// Information Classes for NtQueryInformationPort
	//
	typedef enum _PORT_INFORMATION_CLASS {
		PortBasicInformation
#if DEVL
		, PortDumpInformation
#endif
	} PORT_INFORMATION_CLASS;

	//----------------------Begin of iotypes.h----------------//

	//
	// I/O Completion Information Class for NtQueryIoCompletionInformation
	//
	typedef enum _IO_COMPLETION_INFORMATION_CLASS
	{
		IoCompletionBasicInformation
	} IO_COMPLETION_INFORMATION_CLASS;

	//
	// File Information Classes for NtQueryInformationFileSystem
	//
	typedef enum _FSINFOCLASS
	{
		FileFsVolumeInformation = 1,
		FileFsLabelInformation,
		FileFsSizeInformation,
		FileFsDeviceInformation,
		FileFsAttributeInformation,
		FileFsControlInformation,
		FileFsFullSizeInformation,
		FileFsObjectIdInformation,
		FileFsDriverPathInformation,
		FileFsMaximumInformation
	} FS_INFORMATION_CLASS, *PFS_INFORMATION_CLASS;

	//----------------------End of iotypes.h-----------------//

#define ALPC_MESSAGE_SECURITY_ATTRIBUTE 0x80000000
#define ALPC_MESSAGE_VIEW_ATTRIBUTE     0x40000000
#define ALPC_MESSAGE_CONTEXT_ATTRIBUTE  0x20000000
#define ALPC_MESSAGE_HANDLE_ATTRIBUTE   0x10000000

	typedef struct _ALPC_HANDLE_ATTRIBUTES
	{
		W::ULONG Flags;
		W::HANDLE Handle;
		W::ULONG ObjectType;
		W::ACCESS_MASK DesiredAccess;
	} ALPC_HANDLE_ATTRIBUTES, *PALPC_HANDLE_ATTRIBUTES;


	/***************************************************************************
	* from pdb files
	*/

	typedef enum _ALPC_PORT_INFORMATION_CLASS
	{
		AlpcBasicInformation,
		AlpcPortInformation,
		AlpcAssociateCompletionPortInformation,
		AlpcConnectedSIDInformation,
		AlpcServerInformation,
		AlpcMessageZoneInformation,
		AlpcRegisterCompletionListInformation,
		AlpcUnregisterCompletionListInformation,
		AlpcAdjustCompletionListConcurrencyCountInformation,
		AlpcRegisterCallbackInformation,
		AlpcCompletionListRundownInformation
	} ALPC_PORT_INFORMATION_CLASS;

	typedef enum _ALPC_MESSAGE_INFORMATION_CLASS
	{
		AlpcMessageSidInformation,
		AlpcMessageTokenModifiedIdInformation
	} ALPC_MESSAGE_INFORMATION_CLASS;

	//--------------Begin WinNTrecent-----------------//

	//
	// Types of objects known to the kernel transaction manager.
	//

	typedef enum _KTMOBJECT_TYPE {

		KTMOBJECT_TRANSACTION,
		KTMOBJECT_TRANSACTION_MANAGER,
		KTMOBJECT_RESOURCE_MANAGER,
		KTMOBJECT_ENLISTMENT,
		KTMOBJECT_INVALID

	} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;

	typedef enum _ENLISTMENT_INFORMATION_CLASS {
		EnlistmentBasicInformation,
		EnlistmentRecoveryInformation,
		EnlistmentCrmInformation
	} ENLISTMENT_INFORMATION_CLASS;

	typedef enum _RESOURCEMANAGER_INFORMATION_CLASS {
		ResourceManagerBasicInformation,
		ResourceManagerCompletionInformation,
	} RESOURCEMANAGER_INFORMATION_CLASS;

	// begin_wdm
	typedef enum _TRANSACTION_INFORMATION_CLASS {
		TransactionBasicInformation,
		TransactionPropertiesInformation,
		TransactionEnlistmentInformation,
		TransactionSuperiorEnlistmentInformation
		// end_wdm
		,
		// The following info-classes are intended for DTC's use only; it will be
		// deprecated, and no one else should take a dependency on it.
		TransactionBindInformation, // private and deprecated
		TransactionDTCPrivateInformation // private and deprecated
		,
		// begin_wdm
	} TRANSACTION_INFORMATION_CLASS;

	// begin_wdm
	typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS {
		TransactionManagerBasicInformation,
		TransactionManagerLogInformation,
		TransactionManagerLogPathInformation,
		TransactionManagerRecoveryInformation = 4
		// end_wdm
		,
		// The following info-classes are intended for internal use only; they
		// are considered deprecated, and no one else should take a dependency
		// on them.
		TransactionManagerOnlineProbeInformation = 3,
		TransactionManagerOldestTransactionInformation = 5
		// end_wdm

		// begin_wdm
	} TRANSACTIONMANAGER_INFORMATION_CLASS;

	//--------------End WinNTrecent-----------------//

	/**
	DynamoRIO imported data structures
	**/

	typedef struct _sysnum_t {
		/**
		* Either the sole system call number by itself (in which case \p
		* secondary will be zero), or the primary component of a two-part
		* system call number \p number.secondary.
		*
		* For MacOS, whether 32-bit or 64-bit, we normalize the system
		* call number to a positive integer with the top 8 bits set to
		* 0x1 for a Mach system call, 0x3 for Machdep, and 0x0 for BSD
		* (allowing the direct use of SYS_ constants).  Access the raw
		* eax register in the pre-syscall event to view the unmodified
		* number, whose encoding varies depending on the bitwidth and
		* interrupt vector used.
		*/
		int number;
		int secondary;   /**< Secondary component of \p number.secondary, or zero. */
						 //-> in case of secondary table this stores the size of the syscall array of interest, so that we can check if we go out of bounds
	} drsys_sysnum_t;

	typedef struct _sysinfo_arg_t {
		int param; /* ordinal of parameter */
		int size; /* >0 = abs size; <=0 = -param that holds size */
		uint flags; /* SYSARG_ flags */
					/* Meaning depends on flags.  I'd use a union but that would make
					* the syscall tables ugly w/ a ton of braces.
					* Currently used for:
					* - SYSARG_COMPLEX_TYPE: holds SYSARG_TYPE_* enum value
					* - SYSARG_SIZE_IN_ELEMENTS: holds size of array entry
					* - SYSARG_SIZE_IN_FIELD: holds offset of 4-byte size field
					* - SYSARG_INLINED: holds SYSARG_TYPE_* enum value
					* - SYSARG_HAS_TYPE: holds SYSARG_TYPE_* enum value
					*/
		int misc; //Type
		const char *type_name; /* Symbolic name of the arg type. */

	} sysinfo_arg_t;

	typedef struct _syscall_info_t {
		/* System call number: filled in dynamically, allowing us to use the static
		* fields to indicate underlying version reliance.  We read the static
		* fields before we decide to use an entry and clobber the static value with
		* the actual dynamic number.  Statically, the number field, if non-zero,
		* indicates the minimum Windows version at which this entry is valid; the
		* secondary field, if non-zero, indicates the maximum Windows version at
		* which this entry is valid.  I'd use a union but then we'd need even more
		* {} in the tables.
		*/
		drsys_sysnum_t num;
		const char *name;
		uint flags; /* SYSINFO_ flags */
		uint return_type; /* not drsys_param_type_t so we can use extended SYSARG_TYPE_* */
		int arg_count;
		/* list of args that are not inlined: though we now store inlined too for drstrace */
		sysinfo_arg_t arg[MAX_ARGS_IN_ENTRY];
		/* For custom handling w/o separate number lookup.
		* If SYSINFO_SECONDARY_TABLE is set in flags, this is instead
		* a pointer to a new syscall_info_t table.
		* (I'd use a union but that makes syscall table initializers uglier)
		*/
		drsys_sysnum_t *num_out;

	} syscall_info_t;

	/** Describes a system call parameter or memory region. */



	}

	/* Keep this in synch with param_type_names[] */
	/**
	* Indicates the data type of a parameter.
	* For the non-memarg iterators, a pointer type is implied whenever the
	* mode is DRSYS_PARAM_OUT.  Thus, a system call parameter of type DRSYS_TYPE_INT
	* and mode DRSYS_PARAM_OUT can be assumed to be a pointer to an int.
	*/
	typedef enum {
		DRSYS_TYPE_INVALID,     /**< This type field is not used for this iteration type. */
		DRSYS_TYPE_UNKNOWN,     /**< Unknown type. */

								/* Inlined */
								DRSYS_TYPE_VOID,   	    /**< Void type. */
								DRSYS_TYPE_BOOL,   	    /**< Boolean type. */
								DRSYS_TYPE_INT,    	    /**< Integer type of unspecified signedness. */
								DRSYS_TYPE_SIGNED_INT,  /**< Signed integer type. */
								DRSYS_TYPE_UNSIGNED_INT,/**< Unsigned integer type. */
								DRSYS_TYPE_SIZE_T,      /**< Size_t type */
								DRSYS_TYPE_HANDLE,      /**< Windows-only: kernel/GDI/user handle type. */
								DRSYS_TYPE_NTSTATUS,    /**< Windows-only: NTSTATUS Native API/RTL type. */
								DRSYS_TYPE_ATOM,        /**< Windows-only: ATOM type. */
								DRSYS_TYPE_LCID,        /**< Windows-only: LCID type. */
								DRSYS_TYPE_LPARAM,      /**< Windows-only: LPARAM type. */
								DRSYS_TYPE_HMODULE,     /**< Windows-only: HMODULE type. */
								DRSYS_TYPE_HFILE,       /**< Windows-only: HFILE type. */
								DRSYS_TYPE_POINTER,     /**< Pointer to an unspecified type. */

														/* Structs */
														DRSYS_TYPE_STRUCT,      /**< Unspecified structure type. */
														DRSYS_TYPE_CSTRING,     /**< Null-terminated string of characters (C string). */
														DRSYS_TYPE_CWSTRING,    /**< Null-terminated string of wide characters. */
														DRSYS_TYPE_CARRAY,      /**< Non-null-terminated string of characters. */
														DRSYS_TYPE_CWARRAY,     /**< Non-null-terminated string of wide characters. */
														DRSYS_TYPE_CSTRARRAY,   /**< Null-terminated array of C strings. */
														DRSYS_TYPE_UNICODE_STRING,      /**< UNICODE_STRING structure. */
														DRSYS_TYPE_LARGE_STRING,        /**< LARGE_STRING structure. */
														DRSYS_TYPE_OBJECT_ATTRIBUTES,   /**< OBJECT_ATTRIBUTES structure. */
														DRSYS_TYPE_SECURITY_DESCRIPTOR, /**< SECURITY_DESCRIPTOR structure. */
														DRSYS_TYPE_SECURITY_QOS,        /**< SECURITY_QUALITY_OF_SERVICE structure */
														DRSYS_TYPE_PORT_MESSAGE,        /**< PORT_MESSAGE structure. */
														DRSYS_TYPE_CONTEXT,             /**< CONTEXT structure. */
														DRSYS_TYPE_EXCEPTION_RECORD,    /**< EXCEPTION_RECORD structure. */
														DRSYS_TYPE_DEVMODEW,            /**< DEVMODEW structure. */
														DRSYS_TYPE_WNDCLASSEXW,         /**< WNDCLASSEXW structure. */
														DRSYS_TYPE_CLSMENUNAME,         /**< CLSMENUNAME structure. */
														DRSYS_TYPE_MENUITEMINFOW,       /**< MENUITEMINFOW structure. */
														DRSYS_TYPE_ALPC_PORT_ATTRIBUTES,/**< ALPC_PORT_ATTRIBUTES structure. */
														DRSYS_TYPE_ALPC_SECURITY_ATTRIBUTES,/**< ALPC_SECURITY_ATTRIBUTES structure. */
														DRSYS_TYPE_LOGFONTW,            /**< LOGFONTW structure. */
														DRSYS_TYPE_NONCLIENTMETRICSW,   /**< NONCLIENTMETRICSW structure. */
														DRSYS_TYPE_ICONMETRICSW,        /**< ICONMETRICSW structure. */
														DRSYS_TYPE_SERIALKEYSW,         /**< SERIALKEYSW structure. */
														DRSYS_TYPE_SOCKADDR,            /**< struct sockaddr. */
														DRSYS_TYPE_MSGHDR,              /**< struct msghdr. */
														DRSYS_TYPE_MSGBUF,              /**< struct msgbuf. */
														DRSYS_TYPE_LARGE_INTEGER,       /**< LARGE_INTEGER structure. */
														DRSYS_TYPE_ULARGE_INTEGER,      /**< ULARGE_INTEGER structure. */
														DRSYS_TYPE_IO_STATUS_BLOCK,     /**< IO_STATUS_BLOCK structure. */
														DRSYS_TYPE_FUNCTION,            /**< Function of unspecified signature. */
														DRSYS_TYPE_BITMAPINFO,          /**< BITMAPINFO structure. */
														DRSYS_TYPE_ALPC_CONTEXT_ATTRIBUTES,/**< ALPC_CONTEXT_ATTRIBUTES structure. */
														DRSYS_TYPE_ALPC_MESSAGE_ATTRIBUTES,/**< ALPC_MESSAGE_ATTRIBUTES structure. */
														DRSYS_TYPE_T2_SET_PARAMETERS,   /**< T2_SET_PARAMETERS structure. */

																						/* Additional types may be added in the future. Add them above. */
																						DRSYS_TYPE_LAST_PLUS_ONE,
																						DRSYS_TYPE_LAST = DRSYS_TYPE_LAST_PLUS_ONE - 1,
	} drsys_param_type_t;

	enum {
		/*****************************************/
		/* sysinfo_arg_t.flags */
		SYSARG_READ = 0x00000001,
		SYSARG_WRITE = 0x00000002,
		/* The data structure type has pointers or uninitialized fields
		* or padding and needs special processing according to the
		* SYSARG_TYPE_* code stored in sysinfo_arg_t.misc.
		*/
		SYSARG_COMPLEX_TYPE = 0x00000004,
		/* the size points at the IO_STATUS_BLOCK param */
		SYSARG_POST_SIZE_IO_STATUS = 0x00000008,
		/* (available)             = 0x00000010, */
		/* The param holding the size is a pointer b/c it's an IN OUT var.
		* This can be used in one of two ways:
		* 1) A single entry exists for the buffer/struct.  In this case, the param
		*    holding the size must be both read and write (R|WR).
		* 2) A duplicate entry exists for the buffer/struct.  Then the second can
		*    be SYSARG_LENGTH_INOUT (often "WI" in the tables) and the size param
		*    can just be written and not read (WR).
		*/
		SYSARG_LENGTH_INOUT = 0x00000020,
		/* The size is not in bytes but in elements where the size of
		* each element is in the misc field.  The misc field can
		* contain <= in which case the element size is stored in that
		* parameter number.
		* This flag trumps SYSARG_COMPLEX_TYPE, so if there is an
		* overlap then special handling must be done for the type.
		*/
		SYSARG_SIZE_IN_ELEMENTS = 0x00000040,
		/* A non-memory argument (i.e., entire value is in parameter slot). */
		SYSARG_INLINED = 0x00000080,
		/* for SYSARG_POST_SIZE_RETVAL on a duplicate entry, nothing is
		* written if the count, given in the first entry, is zero,
		* regardless of the buffer pointer value.
		*/
		SYSARG_NO_WRITE_IF_COUNT_0 = 0x00000100,
		/* Contains a type specifier */
		SYSARG_HAS_TYPE = 0x00000200,
		/* i#502-c#5 the arg should be ignored if the next arg is null */
		SYSARG_IGNORE_IF_NEXT_NULL = 0x00000400,
		/* Ignore this arg if the previous arg is NULL.
		* XXX: Unify this with SYSARG_IGNORE_IF_NEXT_NULL by storing the arg# in
		* misc once that doesn't conflict with type info.
		*/
		SYSARG_IGNORE_IF_PREV_NULL = 0x00000800,
		/* Indicates that this entry is for non-memarg iteration only:
		* this memory parameter is complex and for memarg iteration
		* it relies on handler code.
		*/
		SYSARG_NON_MEMARG = 0x00001000,
		/* Indicates that the size value from an output parameter is one smaller
		* than the actual written size (typically, a string's terminating null).
		*/
		SYSARG_SIZE_PLUS_1 = 0x00002000,

		/*****************************************/
		/* sysinfo_arg_t.size, using values that cannot be mistaken for
		* a parameter reference.
		*/
		/* <available>            = -100, */
		/* used in repeated sysinfo_arg_t entry for post-syscall size */
		SYSARG_POST_SIZE_RETVAL = -101,
		/* Size is stored as a field of size 4 bytes with an offset given by
		* sysinfo_arg_t.misc.  Can only be used by one arg per syscall.
		*/
		SYSARG_SIZE_IN_FIELD = -102,

		/*****************************************/
		/* sysinfo_arg_t.misc when flags has SYSARG_COMPLEX_TYPE */
		/* These occupy the same number-space as DRSYS_TYPE_*.
		* We have duplicate labels here for legacy code.
		* We have a separate namespace so we can use our own types
		* internally w/o exposing in the public header.
		*/
		/* The following flags are used on Windows. */
		SYSARG_TYPE_CSTRING = DRSYS_TYPE_CSTRING, /* Linux too */
		SYSARG_TYPE_CSTRING_WIDE = DRSYS_TYPE_CWSTRING,
		SYSARG_TYPE_PORT_MESSAGE = DRSYS_TYPE_PORT_MESSAGE,
		SYSARG_TYPE_CONTEXT = DRSYS_TYPE_CONTEXT,
		SYSARG_TYPE_EXCEPTION_RECORD = DRSYS_TYPE_EXCEPTION_RECORD,
		SYSARG_TYPE_SECURITY_QOS = DRSYS_TYPE_SECURITY_QOS,
		SYSARG_TYPE_SECURITY_DESCRIPTOR = DRSYS_TYPE_SECURITY_DESCRIPTOR,
		SYSARG_TYPE_UNICODE_STRING = DRSYS_TYPE_UNICODE_STRING,
		SYSARG_TYPE_OBJECT_ATTRIBUTES = DRSYS_TYPE_OBJECT_ATTRIBUTES,
		SYSARG_TYPE_LARGE_STRING = DRSYS_TYPE_LARGE_STRING,
		SYSARG_TYPE_DEVMODEW = DRSYS_TYPE_DEVMODEW,
		SYSARG_TYPE_WNDCLASSEXW = DRSYS_TYPE_WNDCLASSEXW,
		SYSARG_TYPE_CLSMENUNAME = DRSYS_TYPE_CLSMENUNAME,
		SYSARG_TYPE_MENUITEMINFOW = DRSYS_TYPE_MENUITEMINFOW,
		SYSARG_TYPE_ALPC_PORT_ATTRIBUTES = DRSYS_TYPE_ALPC_PORT_ATTRIBUTES,
		SYSARG_TYPE_ALPC_SECURITY_ATTRIBUTES = DRSYS_TYPE_ALPC_SECURITY_ATTRIBUTES,
		SYSARG_TYPE_BITMAPINFO = DRSYS_TYPE_BITMAPINFO,
		SYSARG_TYPE_ALPC_CONTEXT_ATTRIBUTES = DRSYS_TYPE_ALPC_CONTEXT_ATTRIBUTES,
		SYSARG_TYPE_ALPC_MESSAGE_ATTRIBUTES = DRSYS_TYPE_ALPC_MESSAGE_ATTRIBUTES,
		SYSARG_TYPE_T2_SET_PARAMETERS = DRSYS_TYPE_T2_SET_PARAMETERS,
		/* These are Linux-specific */
		SYSARG_TYPE_SOCKADDR = DRSYS_TYPE_SOCKADDR,
		SYSARG_TYPE_MSGHDR = DRSYS_TYPE_MSGHDR,
		SYSARG_TYPE_MSGBUF = DRSYS_TYPE_MSGBUF,
		/* Types that we map to other types.  These need unique number separate
		* from the DRSYS_TYPE_* numbers so we sequentially number from here:
		*/
		SYSARG_TYPE_UNICODE_STRING_NOLEN = DRSYS_TYPE_LAST + 1,
		/* These are used to encode type+size into return_type field */
		SYSARG_TYPE_SINT32,
		SYSARG_TYPE_UINT32,
		SYSARG_TYPE_SINT16,
		SYSARG_TYPE_UINT16,
		SYSARG_TYPE_BOOL32,
		SYSARG_TYPE_BOOL8,
		/* Be sure to update map_to_exported_type() when adding here */
	};

	typedef enum {
		DRSYS_PARAM_IN = 0x01,  /**< Input parameter. */
		DRSYS_PARAM_OUT = 0x02,  /**< Output parameter. */
								 /**
								 * May be IN or OUT.  Used only in pre-syscall to indicate the
								 * size of an entire data structure, when only some fields are
								 * actually read or writen.  Those fields will be presented as
								 * separate IN or OUT arguments which will of course overlap this
								 * one.
								 */
		DRSYS_PARAM_BOUNDS = 0x04,
		/**
		* Not used for memory iteration, only for type iteration, where
		* the type of the return value is indicated if it is other than a
		* status or error code.
		*/
		DRSYS_PARAM_RETVAL = 0x08,
		/**
		* If this flag is not set, the parameter is passed as a pointer to
		* the specified type.  If this flag is set, the parameter's value
		* is passed in.
		*/
		DRSYS_PARAM_INLINED = 0x10,
	} drsys_param_mode_t;

	enum {
		/* If not set, automated param comparison is used to find writes */
		SYSINFO_ALL_PARAMS_KNOWN = 0x00000001,
		/* When checking the sysnum vs a wrapper function, do not consider
		* removing the prefix
		*/
		SYSINFO_REQUIRES_PREFIX = 0x00000002,
		/* NtUser syscall wrappers are spread across user32.dll and imm32.dll */
		SYSINFO_IMM32_DLL = 0x00000004,
		/* Return value indicates failure only when zero */
		SYSINFO_RET_ZERO_FAIL = 0x00000008,
		/* Return value of STATUS_BUFFER_TOO_SMALL (i#486),
		* STATUS_BUFFER_OVERFLOW (i#531), or STATUS_INFO_LENGTH_MISMATCH
		* (i#932) writes final arg but no others.
		* If it turns out some syscalls distinguish between the ret values
		* we can split the flag up but seems safer to combine.
		*/
		SYSINFO_RET_SMALL_WRITE_LAST = 0x00000010,
		/* System call takes a code from one of its params that is in essence
		* a new system call number in a new sub-space.
		* The num_out field contains a pointer to a new syscall_info_t
		* array to use with the first param's code.
		* The first argument field indicates which param contains the code.
		* Any other argument fields in the initial entry are ignored.
		*/
		SYSINFO_SECONDARY_TABLE = 0x00000020,
		/* Return value indicates failure only when -1 */
		SYSINFO_RET_MINUS1_FAIL = 0x00000040,
		/* Return type varies dynamically and handler must call report_sysarg_return() */
		SYSINFO_RET_TYPE_VARIES = 0x00000080,
		/* Return value is 64-bit even in 32-bit mode */
		SYSINFO_RET_64BIT = 0x00000100,
	};

	extern DR::syscall_info_t syscall_ntdll_info[];
	extern int syscallNumber;

	//Secondary Table
	extern DR::syscall_info_t syscall_QueryKey_info[];
	extern DR::syscall_info_t syscall_EnumerateKey_info[];
	extern DR::syscall_info_t syscall_EnumerateValueKey_info[];
	extern DR::syscall_info_t syscall_QueryDirectoryFile_info[];
	extern DR::syscall_info_t syscall_QueryEvent_info[];
	extern DR::syscall_info_t syscall_QueryInformationAtom_info[];
	extern DR::syscall_info_t syscall_QueryInformationFile_info[];
	extern DR::syscall_info_t syscall_QueryInformationPort_info[];
	extern DR::syscall_info_t syscall_QueryIoCompletion_info[];
	extern DR::syscall_info_t syscall_QueryMutant_info[];
	extern DR::syscall_info_t syscall_QueryVolumeInformationFile_info[];
	extern DR::syscall_info_t syscall_SetInformationFile_info[];
	extern DR::syscall_info_t syscall_SetInformationKey_info[];
	extern DR::syscall_info_t syscall_SetInformationObject_info[];
	extern DR::syscall_info_t syscall_SetVolumeInformationFile_info[];
	extern DR::syscall_info_t syscall_AlpcQueryInformation_info[];
	extern DR::syscall_info_t syscall_AlpcSetInformation_info[];
	extern DR::syscall_info_t syscall_AlpcQueryInformationMessage_info[];
	extern DR::syscall_info_t syscall_QueryInformationEnlistment_info[];
	extern DR::syscall_info_t syscall_SetInformationEnlistment_info[];
	extern DR::syscall_info_t syscall_QueryInformationResourceManager_info[];
	extern DR::syscall_info_t syscall_SetInformationResourceManager_info[];
	extern DR::syscall_info_t syscall_QueryInformationTransaction_info[];
	extern DR::syscall_info_t syscall_SetInformationTransaction_info[];
	extern DR::syscall_info_t syscall_QueryInformationTransactionManager_info[];
	extern DR::syscall_info_t syscall_SetInformationTransactionManager_info[];
	extern DR::syscall_info_t syscall_SetTimerEx_info[];

#endif

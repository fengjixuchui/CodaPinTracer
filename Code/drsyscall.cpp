#include "drsyscall.h"

#define WIN_SIZE(x)		sizeof(W::x)
#define DR_SIZE(x)		sizeof(DR::x)


#define OK (SYSINFO_ALL_PARAMS_KNOWN)
#define UNKNOWN 0
#define WR (SYSARG_WRITE)
#define R (SYSARG_READ)
#define CT (SYSARG_COMPLEX_TYPE)
#define HT (SYSARG_HAS_TYPE)
#define WI (SYSARG_WRITE | SYSARG_LENGTH_INOUT)
#define IO (SYSARG_POST_SIZE_IO_STATUS)
#define CSTRING (SYSARG_TYPE_CSTRING)
#define RET (SYSARG_POST_SIZE_RETVAL)
#define RNTST (DRSYS_TYPE_NTSTATUS)
#define RLONG (DRSYS_TYPE_SIGNED_INT)

/** Windows versions */ // DCD taken from [dynamorio] core/lib/instrument_api.h
						/* http://msdn.microsoft.com/en-us/library/windows/desktop/ms724832(v=vs.85).aspx */
typedef enum {
	/** Windows 10 1709 major update. */
	DR_WINDOWS_VERSION_10_1709 = 104,
	/** Windows 10 1703 major update. */
	DR_WINDOWS_VERSION_10_1703 = 103,
	/** Windows 10 1607 major update. */
	DR_WINDOWS_VERSION_10_1607 = 102,
	/**
	* Windows 10 TH2 1511.  For future Windows updates that change system call
	* numbers, we'll perform our own artificial minor version number update as
	* done here, and use the YYMM version as the sub-name, as officially the OS
	* version will supposedly remain 10.0 forever.
	*/
	DR_WINDOWS_VERSION_10_1511 = 101,
	/** Windows 10 pre-TH2 */
	DR_WINDOWS_VERSION_10 = 100,
	/** Windows 8.1 */
	DR_WINDOWS_VERSION_8_1 = 63,
	/** Windows Server 2012 R2 */
	DR_WINDOWS_VERSION_2012_R2 = DR_WINDOWS_VERSION_8_1,
	/** Windows 8 */
	DR_WINDOWS_VERSION_8 = 62,
	/** Windows Server 2012 */
	DR_WINDOWS_VERSION_2012 = DR_WINDOWS_VERSION_8,
	/** Windows 7 */
	DR_WINDOWS_VERSION_7 = 61,
	/** Windows Server 2008 R2 */
	DR_WINDOWS_VERSION_2008_R2 = DR_WINDOWS_VERSION_7,
	/** Windows Vista */
	DR_WINDOWS_VERSION_VISTA = 60,
	/** Windows Server 2008 */
	DR_WINDOWS_VERSION_2008 = DR_WINDOWS_VERSION_VISTA,
	/** Windows Server 2003 */
	DR_WINDOWS_VERSION_2003 = 52,
	/** Windows XP 64-bit */
	DR_WINDOWS_VERSION_XP_X64 = DR_WINDOWS_VERSION_2003,
	/** Windows XP */
	DR_WINDOWS_VERSION_XP = 51,
	/** Windows 2000 */
	DR_WINDOWS_VERSION_2000 = 50,
	/** Windows NT */
	DR_WINDOWS_VERSION_NT = 40,
} dr_os_version_t;

#define WINNT    DR_WINDOWS_VERSION_NT
#define WIN2K    DR_WINDOWS_VERSION_2000
#define WINXP    DR_WINDOWS_VERSION_XP
#define WIN2K3   DR_WINDOWS_VERSION_2003
#define WINVISTA DR_WINDOWS_VERSION_VISTA
#define WIN7     DR_WINDOWS_VERSION_7
#define WIN8     DR_WINDOWS_VERSION_8
#define WIN81    DR_WINDOWS_VERSION_8_1
#define WIN10    DR_WINDOWS_VERSION_10
#define WIN11    DR_WINDOWS_VERSION_10_1511
#define WIN12    DR_WINDOWS_VERSION_10_1607
#define WIN13    DR_WINDOWS_VERSION_10_1703
#define WIN14    DR_WINDOWS_VERSION_10_1709

//--------------------------Secondary Table-----------------------------------//
#define ENTRY_QueryKey(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::KEY_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR, 0, typename},\
         {2, -4, WI},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
    }

/* Since _ version of structure names stored in PDBs, we use the same names here. */
DR::syscall_info_t syscall_QueryKey_info[] = {
	{ { 0,0 },"NtQueryKey.KeyBasicInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey("KeyBasicInformation", "_KEY_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryKey.KeyNodeInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey("KeyNodeInformation", "_KEY_NODE_INFORMATION")
	},
	{ { 0,0 },"NtQueryKey.KeyFullInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey("KeyFullInformation", "_KEY_FULL_INFORMATION")
	},
	{ { 0,0 },"NtQueryKey.KeyNameInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey("KeyNameInformation", "_KEY_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryKey.KeyCachedInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey("KeyCachedInformation", "_KEY_CACHED_INFORMATION")
	},
	{ { 0,0 },"NtQueryKey.KeyFlagsInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	/* Reserved */
	ENTRY_QueryKey("KeyFlagsInformation", "_KEY_FLAGS_INFORMATION")
	},
	{ { 0,0 },"NtQueryKey.KeyVirtualizationInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey("KeyVirtualizationInformation",
		"_KEY_VIRTUALIZATION_INFORMATION")
	},
	{ { 0,0 },"NtQueryKey.KeyHandleTagsInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey("KeyHandleTagsInformation", "_KEY_HANDLE_TAGS_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryKey.UNKNOWN", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryKey(NULL, NULL)
	},
};
int syscall_QueryKey_info_size = (sizeof(syscall_QueryKey_info) / sizeof(syscall_QueryKey_info[0]));

#define ENTRY_EnumerateKey(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {2, sizeof(DR::KEY_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {3, -4, WR, 0, typename},\
         {3, -5, WI},\
         {4, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {5, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_EnumerateKey_info[] = {
	{ { 0,0 },"NtEnumerateKey.KeyBasicInformation", OK, RNTST, 6,
	ENTRY_EnumerateKey("KeyBasicInformation", "_KEY_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateKey.KeyNodeInformation", OK, RNTST, 6,
	ENTRY_EnumerateKey("KeyNodeInformation", "_KEY_NODE_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateKey.KeyFullInformation", OK, RNTST, 6,
	ENTRY_EnumerateKey("KeyFullInformation", "_KEY_FULL_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateKey.KeyNameInformation", OK, RNTST, 6,
	ENTRY_EnumerateKey("KeyNameInformation", "_KEY_NAME_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateKey.KeyCachedInformation", OK, RNTST, 6,
	ENTRY_EnumerateKey("KeyCachedInformation", "_KEY_CACHED_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateKey.KeyFlagsInformation", OK, RNTST, 6,
	/* Reserved */
	ENTRY_EnumerateKey("KeyFlagsInformation", "_KEY_FLAGS_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateKey.KeyVirtualizationInformation", OK, RNTST, 6,
	ENTRY_EnumerateKey("KeyVirtualizationInformation",
		"_KEY_VIRTUALIZATION_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateKey.KeyHandleTagsInformation", OK, RNTST, 6,
	ENTRY_EnumerateKey("KeyHandleTagsInformation", "_KEY_HANDLE_TAGS_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtEnumerateKey.UNKNOWN", OK, RNTST, 6,
	ENTRY_EnumerateKey(NULL, NULL)
	},
};
int syscall_EnumerateKey_info_size = (sizeof(syscall_EnumerateKey_info) / sizeof(syscall_EnumerateKey_info[0]));

#define ENTRY_EnumerateValueKey(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {2, sizeof(DR::KEY_VALUE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {3, -4, WR, 0, typename},\
         {3, -5, WI},\
         {4, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {5, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_EnumerateValueKey_info[] = {
	{ { 0,0 },"NtEnumerateValueKey.KeyValueBasicInformation", OK, RNTST, 6,
	ENTRY_EnumerateValueKey("KeyValueBasicInformation",
	"_KEY_VALUE_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateValueKey.KeyValueFullInformation", OK, RNTST, 6,
	ENTRY_EnumerateValueKey("KeyValueFullInformation",
		"_KEY_VALUE_FULL_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateValueKey.KeyValuePartialInformation", OK, RNTST, 6,
	ENTRY_EnumerateValueKey("KeyValuePartialInformation",
		"_KEY_VALUE_PARTIAL_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateValueKey.KeyValueFullInformationAlign64", OK, RNTST, 6,
	ENTRY_EnumerateValueKey("KeyValueFullInformationAlign64",
		"_KEY_VALUE_FULL_INFORMATION")
	},
	{ { 0,0 },"NtEnumerateValueKey.KeyValuePartialInformationAlign64", OK, RNTST, 6,
	ENTRY_EnumerateValueKey("KeyValuePartialInformationAlign64",
		"_KEY_VALUE_PARTIAL_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtEnumerateValueKey.UNKNOWN", OK, RNTST, 6,
	ENTRY_EnumerateValueKey(NULL, NULL)
	},
};
int syscall_EnumerateValueKey_info_size = (sizeof(syscall_EnumerateValueKey_info) / sizeof(syscall_EnumerateValueKey_info[0]));

#define ENTRY_QueryDirectoryFile(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {2, sizeof(DR::PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION},\
         {3, sizeof(W::PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID},\
         {4, sizeof(DR::IO_STATUS_BLOCK), WR|HT, DRSYS_TYPE_IO_STATUS_BLOCK},\
         {5, -6, WR, 0, typename},\
         {6, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {7, sizeof(DR::FILE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {8, sizeof(W::BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL},\
         {9, sizeof(DR::UNICODE_STRING), R|CT, SYSARG_TYPE_UNICODE_STRING},\
         {10, sizeof(W::BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL},\
     }

DR::syscall_info_t syscall_QueryDirectoryFile_info[] = {
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtQueryDirectoryFile.FileDirectoryInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileDirectoryInformation",
	"_FILE_DIRECTORY_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileFullDirectoryInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileFullDirectoryInformation",
		"_FILE_FULL_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileBothDirectoryInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileBothDirectoryInformation",
		"_FILE_BOTH_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileBasicInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileBasicInformation",
		"_FILE_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileStandardInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileStandardInformation",
		"_FILE_STANDARD_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileInternalInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileInternalInformation",
		"_FILE_INTERNAL_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileEaInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileEaInformation",
		"_FILE_EA_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileAccessInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileAccessInformation",
		"_FILE_ACCESS_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileNameInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileNameInformation",
		"_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileRenameInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileRenameInformation",
		"_FILE_RENAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileLinkInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileLinkInformation",
		"_FILE_LINK_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileNamesInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileNamesInformation",
		"_FILE_NAMES_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileDispositionInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileDispositionInformation",
		"_FILE_DISPOSITION_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FilePositionInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FilePositionInformation",
		"_FILE_POSITION_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileFullEaInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileFullEaInformation",
		"_FILE_FULL_EA_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileModeInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileModeInformation",
		"_FILE_MODE_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileAlignmentInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileAlignmentInformation",
		"_FILE_ALIGNMENT_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileAllInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileAllInformation",
		"_FILE_ALL_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileAllocationInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileAllocationInformation",
		"_FILE_ALLOCATION_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileEndOfFileInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileEndOfFileInformation",
		"_FILE_END_OF_FILE_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileAlternateNameInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileAlternateNameInformation",
		"_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileStreamInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileStreamInformation",
		"_FILE_STREAM_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FilePipeInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FilePipeInformation",
		"_FILE_PIPE_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FilePipeLocalInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FilePipeLocalInformation",
		"_FILE_PIPE_LOCAL_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FilePipeRemoteInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FilePipeRemoteInformation",
		"_FILE_PIPE_REMOTE_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileMailslotQueryInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileMailslotQueryInformation",
		"_FILE_MAILSLOT_QUERY_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileMailslotSetInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileMailslotSetInformation",
		"_FILE_MAILSLOT_SET_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileCompressionInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileCompressionInformation",
		"_FILE_COMPRESSION_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileObjectIdInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileObjectIdInformation",
		"_FILE_OBJECTID_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileCompletionInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileCompletionInformation",
		"_FILE_COMPLETION_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileMoveClusterInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileMoveClusterInformation",
		"_FILE_MOVE_CLUSTER_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileQuotaInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileQuotaInformation", "_FILE_QUOTA_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileReparsePointInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileReparsePointInformation",
		"_FILE_REPARSE_POINT_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileNetworkOpenInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileNetworkOpenInformation",
		"_FILE_NETWORK_OPEN_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileAttributeTagInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileAttributeTagInformation",
		"_FILE_ATTRIBUTE_TAG_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileTrackingInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileTrackingInformation",
		"_FILE_TRACKING_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileIdBothDirectoryInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileIdBothDirectoryInformation",
		"_FILE_ID_BOTH_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileIdFullDirectoryInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileIdFullDirectoryInformation",
		"_FILE_ID_FULL_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileValidDataLengthInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileValidDataLengthInformation",
		"_FILE_VALID_DATA_LENGTH_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileShortNameInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileShortNameInformation",
		"_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileIoCompletionNotificationInformation", OK, RNTST, 11,
	/* Reserved */
	ENTRY_QueryDirectoryFile("FileIoCompletionNotificationInformation",
		"_FILE_IO_COMPLETION_NOTIFICATION_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileIoStatusBlockRangeInformation", OK, RNTST, 11,
	/* Reserved */
	ENTRY_QueryDirectoryFile("FileIoStatusBlockRangeInformation",
		"_FILE_IO_STATUS_BLOCK_RANGE_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileIoPriorityHintInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileIoPriorityHintInformation",
		"_FILE_IO_PRIORITY_HINT_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileSfioReserveInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileSfioReserveInformation",
		"_FILE_SFIO_RESERVE_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileSfioVolumeInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileSfioVolumeInformation",
		"_FILE_SFIO_VOLUME_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileHardLinkInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileHardLinkInformation",
		"_FILE_LINKS_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileProcessIdsUsingFileInformation", OK, RNTST, 11,
	/* Reserved */
	ENTRY_QueryDirectoryFile("FileProcessIdsUsingFileInformation",
		"_FILE_PROCESS_IDS_USING_FILE_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileNormalizedNameInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileNormalizedNameInformation",
		"_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileNetworkPhysicalNameInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileNetworkPhysicalNameInformation",
		"_FILE_NETWORK_PHYSICAL_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileIdGlobalTxDirectoryInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileIdGlobalTxDirectoryInformation",
		"_FILE_ID_GLOBAL_TX_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileIsRemoteDeviceInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileIsRemoteDeviceInformation",
		"_FILE_IS_REMOTE_DEVICE_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileAttributeCacheInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileAttributeCacheInformation",
		"_FILE_ATTRIBUTE_CACHE_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileNumaNodeInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileNumaNodeInformation",
		"_FILE_NUMA_NODE_INFORMATION")
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileStandardLinkInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileStandardLinkInformation",
		"_FILE_STANDARD_LINK_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileRemoteProtocolInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileRemoteProtocolInformation",
		"_FILE_REMOTE_PROTOCOL_INFORMATION") /* Reserved */
	},
	{ { 0,0 },"NtQueryDirectoryFile.FileReplaceCompletionInformation", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile("FileReplaceCompletionInformation",
		"_FILE_COMPLETION_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryDirectoryFile.UNKNOWN", OK, RNTST, 11,
	ENTRY_QueryDirectoryFile(NULL, NULL)
	},
};
int syscall_QueryDirectoryFile_info_size = (sizeof(syscall_QueryDirectoryFile_info) / sizeof(syscall_QueryDirectoryFile_info[0]));

#define ENTRY_QueryEvent(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::EVENT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR, 0, typename},\
         {2, -4, WI},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryEvent_info[] = {
	{ { 0,0 },"NtQueryEvent.EventBasicInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryEvent("EventBasicInformation", "_EVENT_BASIC_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryEvent.UNKNOWN", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryEvent(NULL, NULL)
	},
};
int syscall_QueryEvent_info_size = (sizeof(syscall_QueryEvent_info) / sizeof(syscall_QueryEvent_info[0]));

#define ENTRY_QueryInformationAtom(classname, typename)\
     {\
         {0, sizeof(W::ATOM), SYSARG_INLINED, DRSYS_TYPE_ATOM},\
         {1, sizeof(DR::ATOM_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR, 0, typename},\
         {2, -4, WI},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryInformationAtom_info[] = {
	{ { 0,0 },"NtQueryInformationAtom.AtomBasicInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryInformationAtom("AtomBasicInformation", "_ATOM_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationAtom.AtomTableInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryInformationAtom("AtomTableInformation", "_ATOM_TABLE_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryInformationAtom.UNKNOWN", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryInformationAtom(NULL, NULL)
	},
};
int syscall_QueryInformationAtom_info_size = (sizeof(syscall_QueryInformationAtom_info) / sizeof(syscall_QueryInformationAtom_info[0]));

#define ENTRY_QueryInformationFile(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::IO_STATUS_BLOCK), WR|HT, DRSYS_TYPE_IO_STATUS_BLOCK},\
         {2, -3, WR, 0, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(DR::FILE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
     }

DR::syscall_info_t syscall_QueryInformationFile_info[] = {
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtQueryInformationFile.FileDirectoryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileDirectoryInformation", "_FILE_DIRECTORY_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileFullDirectoryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileFullDirectoryInformation", "_FILE_FULL_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileBothDirectoryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileBothDirectoryInformation", "_FILE_BOTH_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileBasicInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileBasicInformation", "_FILE_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileStandardInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileStandardInformation", "_FILE_STANDARD_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileInternalInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileInternalInformation", "_FILE_INTERNAL_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileEaInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileEaInformation", "_FILE_EA_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileAccessInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileAccessInformation", "_FILE_ACCESS_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileNameInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileRenameInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileRenameInformation", "_FILE_RENAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileLinkInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileLinkInformation", "_FILE_LINK_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileNamesInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileNamesInformation", "_FILE_NAMES_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileDispositionInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileDispositionInformation", "_FILE_DISPOSITION_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FilePositionInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FilePositionInformation", "_FILE_POSITION_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileFullEaInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileFullEaInformation", "_FILE_FULL_EA_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileModeInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileModeInformation", "_FILE_MODE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileAlignmentInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileAlignmentInformation", "_FILE_ALIGNMENT_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileAllInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileAllInformation", "_FILE_ALL_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileAllocationInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileAllocationInformation", "_FILE_ALLOCATION_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileEndOfFileInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileEndOfFileInformation", "_FILE_END_OF_FILE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileAlternateNameInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileAlternateNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileStreamInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileStreamInformation", "_FILE_STREAM_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FilePipeInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FilePipeInformation", "_FILE_PIPE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FilePipeLocalInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FilePipeLocalInformation", "_FILE_PIPE_LOCAL_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FilePipeRemoteInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FilePipeRemoteInformation", "_FILE_PIPE_REMOTE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileMailslotQueryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileMailslotQueryInformation", "_FILE_MAILSLOT_QUERY_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileMailslotSetInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileMailslotSetInformation", "_FILE_MAILSLOT_SET_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileCompressionInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileCompressionInformation", "_FILE_COMPRESSION_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileObjectIdInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileObjectIdInformation", "_FILE_OBJECTID_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileCompletionInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileCompletionInformation", "_FILE_COMPLETION_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileMoveClusterInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileMoveClusterInformation", "_FILE_MOVE_CLUSTER_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileQuotaInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileQuotaInformation", "_FILE_QUOTA_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileReparsePointInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileReparsePointInformation", "_FILE_REPARSE_POINT_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileNetworkOpenInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileNetworkOpenInformation", "_FILE_NETWORK_OPEN_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileAttributeTagInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileAttributeTagInformation", "_FILE_ATTRIBUTE_TAG_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileTrackingInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileTrackingInformation", "_FILE_TRACKING_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileIdBothDirectoryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileIdBothDirectoryInformation", "_FILE_ID_BOTH_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileIdFullDirectoryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileIdFullDirectoryInformation", "_FILE_ID_FULL_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileValidDataLengthInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileValidDataLengthInformation", "_FILE_VALID_DATA_LENGTH_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileShortNameInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileShortNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileIoCompletionNotificationInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileIoCompletionNotificationInformation", "_FILE_IO_COMPLETION_NOTIFICATION_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileIoStatusBlockRangeInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileIoStatusBlockRangeInformation", "_FILE_IO_STATUS_BLOCK_RANGE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileIoPriorityHintInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileIoPriorityHintInformation", "_FILE_IO_PRIORITY_HINT_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileSfioReserveInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileSfioReserveInformation", "_FILE_SFIO_RESERVE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileSfioVolumeInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileSfioVolumeInformation", "_FILE_SFIO_VOLUME_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileHardLinkInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileHardLinkInformation", "_FILE_LINKS_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileProcessIdsUsingFileInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileProcessIdsUsingFileInformation", "_FILE_PROCESS_IDS_USING_FILE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileNormalizedNameInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileNormalizedNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileNetworkPhysicalNameInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileNetworkPhysicalNameInformation", "_FILE_NETWORK_PHYSICAL_NAME_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileIdGlobalTxDirectoryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileIdGlobalTxDirectoryInformation", "_FILE_ID_GLOBAL_TX_DIR_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileIsRemoteDeviceInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileIsRemoteDeviceInformation", "_FILE_IS_REMOTE_DEVICE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileAttributeCacheInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileAttributeCacheInformation", "_FILE_ATTRIBUTE_CACHE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileNumaNodeInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileNumaNodeInformation", "_FILE_NUMA_NODE_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileStandardLinkInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileStandardLinkInformation", "_FILE_STANDARD_LINK_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileRemoteProtocolInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileRemoteProtocolInformation", "_FILE_REMOTE_PROTOCOL_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationFile.FileReplaceCompletionInformation", OK, RNTST, 5,
	ENTRY_QueryInformationFile("FileReplaceCompletionInformation", "_FILE_COMPLETION_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryInformationFile.UNKNOWN", OK, RNTST, 5,
	ENTRY_QueryInformationFile(NULL, NULL)
	},
};
int syscall_QueryInformationFile_info_size = (sizeof(syscall_QueryInformationFile_info) / sizeof(syscall_QueryInformationFile_info[0]));

#define ENTRY_QueryInformationPort(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::PORT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR, 0, typename},\
         {2, -4, WI},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryInformationPort_info[] = {
	{ { 0,0 },"NtQueryInformationPort.PortBasicInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryInformationPort("PortBasicInformation", "_PORT_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationPort.PortDumpInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryInformationPort("PortDumpInformation", "_PORT_DUMP_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryInformationPort.UNKNOWN", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryInformationPort(NULL, NULL)
	},
};
int syscall_QueryInformationPort_info_size = (sizeof(syscall_QueryInformationPort_info) / sizeof(syscall_QueryInformationPort_info[0]));


#define ENTRY_QueryIoCompletion(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::IO_COMPLETION_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR, 0, typename},\
         {2, -4, WI},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryIoCompletion_info[] = {
	{ { 0,0 },"NtQueryIoCompletion.IoCompletionBasicInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryIoCompletion("IoCompletionBasicInformation", "_IO_COMPLETION_BASIC_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryIoCompletion.UNKNOWN", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryIoCompletion(NULL, NULL)
	},
};
int syscall_QueryIoCompletion_info_size = (sizeof(syscall_QueryIoCompletion_info) / sizeof(syscall_QueryIoCompletion_info[0]));

#define ENTRY_QueryMutant(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::MUTANT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR, 0, typename},\
         {2, -4, WI},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryMutant_info[] = {
	{ { 0,0 },"NtQueryMutant.MutantBasicInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryMutant("MutantBasicInformation", "_MUTANT_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryMutant.MutantOwnerInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryMutant("MutantOwnerInformation", "_MUTANT_OWNER_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryMutant.UNKNOWN", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	ENTRY_QueryMutant(NULL, NULL)
	},
};
int syscall_QueryMutant_info_size = (sizeof(syscall_QueryMutant_info) / sizeof(syscall_QueryMutant_info[0]));

#define ENTRY_QueryVolumeInformationFile(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::IO_STATUS_BLOCK), WR|HT, DRSYS_TYPE_IO_STATUS_BLOCK},\
         {2, -3, WR, 0, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(DR::FS_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
     }

DR::syscall_info_t syscall_QueryVolumeInformationFile_info[] = {
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsVolumeInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsVolumeInformation", "_FILE_FS_VOLUME_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsLabelInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsLabelInformation", "_FILE_FS_LABEL_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsSizeInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsSizeInformation", "_FILE_FS_SIZE_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsDeviceInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsDeviceInformation", "_FILE_FS_DEVICE_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsAttributeInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsAttributeInformation", "_FILE_FS_ATTRIBUTE_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsControlInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsControlInformation", "_FILE_FS_CONTROL_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsFullSizeInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsFullSizeInformation", "_FILE_FS_FULL_SIZE_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsObjectIdInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsObjectIdInformation", "_FILE_FS_OBJECTID_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsDriverPathInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsDriverPathInformation", "_FILE_FS_DRIVER_PATH_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsVolumeFlagsInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsVolumeFlagsInformation", "_FILE_FS_VOLUME_FLAGS_INFORMATION")
	},
	{ { 0,0 },"NtQueryVolumeInformationFile.FileFsSectorSizeInformation", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile("FileFsSectorSizeInformation", "_FILE_FS_SECTOR_SIZE_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryVolumeInformationFile.UNKNOWN", OK, RNTST, 5,
	ENTRY_QueryVolumeInformationFile(NULL, NULL)
	},
};
int syscall_QueryVolumeInformationFile_info_size = (sizeof(syscall_QueryVolumeInformationFile_info) / sizeof(syscall_QueryVolumeInformationFile_info[0]));

#define ENTRY_SetInformationFile(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::IO_STATUS_BLOCK), WR|HT, DRSYS_TYPE_IO_STATUS_BLOCK},\
         {2, -3, SYSARG_NON_MEMARG, 0, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(DR::FILE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
     }

DR::drsys_sysnum_t sysnum_SetInformationFile = { -1,0 };
DR::syscall_info_t syscall_SetInformationFile_info[] = {
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtSetInformationFile.FileDirectoryInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileDirectoryInformation", "_FILE_DIRECTORY_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileFullDirectoryInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileFullDirectoryInformation", "_FILE_FULL_DIR_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileBothDirectoryInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileBothDirectoryInformation", "_FILE_BOTH_DIR_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileBasicInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileBasicInformation", "_FILE_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileStandardInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileStandardInformation", "_FILE_STANDARD_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileInternalInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileInternalInformation", "_FILE_INTERNAL_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileEaInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileEaInformation", "_FILE_EA_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileAccessInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileAccessInformation", "_FILE_ACCESS_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileNameInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileRenameInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileRenameInformation", "_FILE_RENAME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileLinkInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileLinkInformation", "_FILE_LINK_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileNamesInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileNamesInformation", "_FILE_NAMES_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileDispositionInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileDispositionInformation", "_FILE_DISPOSITION_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FilePositionInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FilePositionInformation", "_FILE_POSITION_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileFullEaInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileFullEaInformation", "_FILE_FULL_EA_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileModeInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileModeInformation", "_FILE_MODE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileAlignmentInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileAlignmentInformation", "_FILE_ALIGNMENT_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileAllInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileAllInformation", "_FILE_ALL_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileAllocationInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileAllocationInformation", "_FILE_ALLOCATION_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileEndOfFileInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileEndOfFileInformation", "_FILE_END_OF_FILE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileAlternateNameInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileAlternateNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileStreamInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileStreamInformation", "_FILE_STREAM_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FilePipeInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FilePipeInformation", "_FILE_PIPE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FilePipeLocalInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FilePipeLocalInformation", "_FILE_PIPE_LOCAL_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FilePipeRemoteInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FilePipeRemoteInformation", "_FILE_PIPE_REMOTE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileMailslotQueryInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileMailslotQueryInformation", "_FILE_MAILSLOT_QUERY_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileMailslotSetInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileMailslotSetInformation", "_FILE_MAILSLOT_SET_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileCompressionInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileCompressionInformation", "_FILE_COMPRESSION_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileObjectIdInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileObjectIdInformation", "_FILE_OBJECTID_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileCompletionInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileCompletionInformation", "_FILE_COMPLETION_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileMoveClusterInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileMoveClusterInformation", "_FILE_MOVE_CLUSTER_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileQuotaInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileQuotaInformation", "_FILE_QUOTA_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileReparsePointInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileReparsePointInformation", "_FILE_REPARSE_POINT_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileNetworkOpenInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileNetworkOpenInformation", "_FILE_NETWORK_OPEN_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileAttributeTagInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileAttributeTagInformation", "_FILE_ATTRIBUTE_TAG_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileTrackingInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileTrackingInformation", "_FILE_TRACKING_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileIdBothDirectoryInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileIdBothDirectoryInformation", "_FILE_ID_BOTH_DIR_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileIdFullDirectoryInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileIdFullDirectoryInformation", "_FILE_ID_FULL_DIR_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileValidDataLengthInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileValidDataLengthInformation", "_FILE_VALID_DATA_LENGTH_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileShortNameInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileShortNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileIoCompletionNotificationInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileIoCompletionNotificationInformation", "_FILE_IO_COMPLETION_NOTIFICATION_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileIoStatusBlockRangeInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileIoStatusBlockRangeInformation", "_FILE_IO_STATUS_BLOCK_RANGE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileIoPriorityHintInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileIoPriorityHintInformation", "_FILE_IO_PRIORITY_HINT_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileSfioReserveInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileSfioReserveInformation", "_FILE_SFIO_RESERVE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileSfioVolumeInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileSfioVolumeInformation", "_FILE_SFIO_VOLUME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileHardLinkInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileHardLinkInformation", "_FILE_LINKS_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileProcessIdsUsingFileInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileProcessIdsUsingFileInformation", "_FILE_PROCESS_IDS_USING_FILE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileNormalizedNameInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileNormalizedNameInformation", "_FILE_NAME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileNetworkPhysicalNameInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileNetworkPhysicalNameInformation", "_FILE_NETWORK_PHYSICAL_NAME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileIdGlobalTxDirectoryInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileIdGlobalTxDirectoryInformation", "_FILE_ID_GLOBAL_TX_DIR_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileIsRemoteDeviceInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileIsRemoteDeviceInformation", "_FILE_IS_REMOTE_DEVICE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileAttributeCacheInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileAttributeCacheInformation", "_FILE_ATTRIBUTE_CACHE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileNumaNodeInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileNumaNodeInformation", "_FILE_NUMA_NODE_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileStandardLinkInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileStandardLinkInformation", "_FILE_STANDARD_LINK_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileRemoteProtocolInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileRemoteProtocolInformation", "_FILE_REMOTE_PROTOCOL_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationFile.FileReplaceCompletionInformation", OK, RNTST, 5,
	ENTRY_SetInformationFile("FileReplaceCompletionInformation", "_FILE_COMPLETION_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetInformationFile.UNKNOWN", OK, RNTST, 5,
	ENTRY_SetInformationFile(NULL, NULL), &sysnum_SetInformationFile
	},
};
int syscall_SetInformationFile_info_size = (sizeof(syscall_SetInformationFile_info) / sizeof(syscall_SetInformationFile_info[0]));

#define ENTRY_SetInformationKey(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::KEY_SET_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R, 0, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_SetInformationKey_info[] = {
	{ { 0,0 },"NtSetInformationKey.KeyWriteTimeInformation", OK, RNTST, 4,
	ENTRY_SetInformationKey("KeyWriteTimeInformation", "_KEY_WRITE_TIME_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationKey.KeyWow64FlagsInformation", OK, RNTST, 4,
	ENTRY_SetInformationKey("KeyWow64FlagsInformation", "_KEY_WOW64_FLAGS_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationKey.KeyControlFlagsInformation", OK, RNTST, 4,
	ENTRY_SetInformationKey("KeyControlFlagsInformation", "KEY_CONTROL_FLAGS_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationKey.KeySetVirtualizationInformation", OK, RNTST, 4,
	ENTRY_SetInformationKey("KeySetVirtualizationInformation", "_KEY_SET_VIRTUALIZATION_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationKey.KeySetDebugInformation", OK, RNTST, 4,
	ENTRY_SetInformationKey("KeySetDebugInformation", NULL)
	},
	{ { 0,0 },"NtSetInformationKey.KeySetHandleTagsInformation", OK, RNTST, 4,
	ENTRY_SetInformationKey("KeySetHandleTagsInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetInformationKey.UNKNOWN", OK, RNTST, 4,
	ENTRY_SetInformationKey(NULL, NULL)
	},
};
int syscall_SetInformationKey_info_size = (sizeof(syscall_SetInformationKey_info) / sizeof(syscall_SetInformationKey_info[0]));

#define ENTRY_SetInformationObject(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::OBJECT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R, 0, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_SetInformationObject_info[] = {
	{ { 0,0 },"NtSetInformationObject.ObjectBasicInformation", OK, RNTST, 4,
	ENTRY_SetInformationObject("ObjectBasicInformation", "_PUBLIC_OBJECT_BASIC_INFORMATION")
	},
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtSetInformationObject.ObjectTypeInformation", OK, RNTST, 4,
	ENTRY_SetInformationObject("ObjectTypeInformation", "_PUBLIC_OBJECT_TYPE_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetInformationObject.UNKNOWN", OK, RNTST, 4,
	ENTRY_SetInformationObject(NULL, NULL)
	},
};
int syscall_SetInformationObject_info_size = (sizeof(syscall_SetInformationObject_info) / sizeof(syscall_SetInformationObject_info[0]));

#define ENTRY_SetVolumeInformationFile(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::IO_STATUS_BLOCK), WR|HT, DRSYS_TYPE_IO_STATUS_BLOCK},\
         {2, -3, R, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(DR::FS_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
     }

DR::syscall_info_t syscall_SetVolumeInformationFile_info[] = {
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsVolumeInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsVolumeInformation", "_FILE_FS_VOLUME_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsLabelInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsLabelInformation", "_FILE_FS_LABEL_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsSizeInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsSizeInformation", "_FILE_FS_SIZE_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsDeviceInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsDeviceInformation", "_FILE_FS_DEVICE_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsAttributeInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsAttributeInformation", "_FILE_FS_ATTRIBUTE_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsControlInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsControlInformation", "_FILE_FS_CONTROL_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsFullSizeInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsFullSizeInformation", "_FILE_FS_FULL_SIZE_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsObjectIdInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsObjectIdInformation", "_FILE_FS_OBJECTID_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsDriverPathInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsDriverPathInformation", "_FILE_FS_DRIVER_PATH_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsVolumeFlagsInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsVolumeFlagsInformation", "_FILE_FS_VOLUME_FLAGS_INFORMATION")
	},
	{ { 0,0 },"NtSetVolumeInformationFile.FileFsSectorSizeInformation", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile("FileFsSectorSizeInformation", "_FILE_FS_SECTOR_SIZE_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetVolumeInformationFile.UNKNOWN", OK, RNTST, 5,
	ENTRY_SetVolumeInformationFile(NULL, NULL)
	},
};
int syscall_SetVolumeInformationFile_info_size = (sizeof(syscall_SetVolumeInformationFile_info) / sizeof(syscall_SetVolumeInformationFile_info[0]));

#define ENTRY_AlpcQueryInformation(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::ALPC_PORT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR|HT, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_AlpcQueryInformation_info[] = {
	{ { 0,0 },"NtAlpcQueryInformation.AlpcBasicInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcBasicInformation", "_ALPC_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcPortInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcPortInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcAssociateCompletionPortInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcAssociateCompletionPortInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcConnectedSIDInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcConnectedSIDInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcServerInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcServerInformation", "_ALPC_SERVER_INFORMATION")
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcMessageZoneInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcMessageZoneInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcRegisterCompletionListInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcRegisterCompletionListInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcUnregisterCompletionListInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcUnregisterCompletionListInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcAdjustCompletionListConcurrencyCountInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcAdjustCompletionListConcurrencyCountInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcRegisterCallbackInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcRegisterCallbackInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformation.AlpcCompletionListRundownInformation", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation("AlpcCompletionListRundownInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtAlpcQueryInformation.UNKNOWN", OK, RNTST, 5,
	ENTRY_AlpcQueryInformation(NULL, NULL)
	},
};
int syscall_AlpcQueryInformation_info_size = (sizeof(syscall_AlpcQueryInformation_info) / sizeof(syscall_AlpcQueryInformation_info[0]));

#define ENTRY_AlpcSetInformation(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::ALPC_PORT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R|HT, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_AlpcSetInformation_info[] = {
	{ { 0,0 },"NtAlpcSetInformation.AlpcBasicInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcBasicInformation", "_ALPC_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcPortInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcPortInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcAssociateCompletionPortInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcAssociateCompletionPortInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcConnectedSIDInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcConnectedSIDInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcServerInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcServerInformation", "_ALPC_SERVER_INFORMATION")
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcMessageZoneInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcMessageZoneInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcRegisterCompletionListInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcRegisterCompletionListInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcUnregisterCompletionListInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcUnregisterCompletionListInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcAdjustCompletionListConcurrencyCountInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcAdjustCompletionListConcurrencyCountInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcRegisterCallbackInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcRegisterCallbackInformation", NULL)
	},
	{ { 0,0 },"NtAlpcSetInformation.AlpcCompletionListRundownInformation", OK, RNTST, 4,
	ENTRY_AlpcSetInformation("AlpcCompletionListRundownInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtAlpcSetInformation.UNKNOWN", OK, RNTST, 4,
	ENTRY_AlpcSetInformation(NULL, NULL)
	},
};
int syscall_AlpcSetInformation_info_size = (sizeof(syscall_AlpcSetInformation_info) / sizeof(syscall_AlpcSetInformation_info[0]));

#define ENTRY_AlpcQueryInformationMessage(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::PORT_MESSAGE), R|CT, SYSARG_TYPE_PORT_MESSAGE},\
         {2, sizeof(DR::ALPC_MESSAGE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {3, -4, WR|HT, DRSYS_TYPE_STRUCT, typename},\
         {4, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {5, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_AlpcQueryInformationMessage_info[] = {
	{ { 0,0 },"NtAlpcQueryInformationMessage.AlpcMessageSidInformation", OK, RNTST, 6,
	ENTRY_AlpcQueryInformationMessage("AlpcMessageSidInformation", NULL)
	},
	{ { 0,0 },"NtAlpcQueryInformationMessage.AlpcMessageTokenModifiedIdInformation", OK, RNTST, 6,
	ENTRY_AlpcQueryInformationMessage("AlpcMessageTokenModifiedIdInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtAlpcQueryInformationMessage.UNKNOWN", OK, RNTST, 6,
	ENTRY_AlpcQueryInformationMessage(NULL, NULL)
	},
};
int syscall_AlpcQueryInformationMessage_info_size = (sizeof(syscall_AlpcQueryInformationMessage_info) / sizeof(syscall_AlpcQueryInformationMessage_info[0]));

#define ENTRY_QueryInformationEnlistment(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::ENLISTMENT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR|HT, DRSYS_TYPE_STRUCT, typename},\
         {2, -4, WI|HT, DRSYS_TYPE_STRUCT},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryInformationEnlistment_info[] = {
	{ { 0,0 },"NtQueryInformationEnlistment.EnlistmentBasicInformation", OK, RNTST, 5,
	ENTRY_QueryInformationEnlistment("EnlistmentBasicInformation", "_ENLISTMENT_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationEnlistment.EnlistmentRecoveryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationEnlistment("EnlistmentRecoveryInformation", NULL)
	},
	{ { 0,0 },"NtQueryInformationEnlistment.EnlistmentCrmInformation", OK, RNTST, 5,
	ENTRY_QueryInformationEnlistment("EnlistmentCrmInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryInformationEnlistment.UNKNOWN", OK, RNTST, 5,
	ENTRY_QueryInformationEnlistment(NULL, NULL)
	},
};
int syscall_QueryInformationEnlistment_info_size = (sizeof(syscall_QueryInformationEnlistment_info) / sizeof(syscall_QueryInformationEnlistment_info[0]));

#define ENTRY_SetInformationEnlistment(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::ENLISTMENT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R|HT, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_SetInformationEnlistment_info[] = {
	{ { 0,0 },"NtSetInformationEnlistment.EnlistmentBasicInformation", OK, RNTST, 4,
	ENTRY_SetInformationEnlistment("EnlistmentBasicInformation", "_ENLISTMENT_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationEnlistment.EnlistmentRecoveryInformation", OK, RNTST, 4,
	ENTRY_SetInformationEnlistment("EnlistmentRecoveryInformation", NULL)
	},
	{ { 0,0 },"NtSetInformationEnlistment.EnlistmentCrmInformation", OK, RNTST, 4,
	ENTRY_SetInformationEnlistment("EnlistmentCrmInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetInformationEnlistment.UNKNOWN", OK, RNTST, 4,
	ENTRY_SetInformationEnlistment(NULL, NULL)
	},
};
int syscall_SetInformationEnlistment_info_size = (sizeof(syscall_SetInformationEnlistment_info) / sizeof(syscall_SetInformationEnlistment_info[0]));

#define ENTRY_QueryInformationResourceManager(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::RESOURCEMANAGER_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR|HT, DRSYS_TYPE_STRUCT, typename},\
         {2, -4, WI|HT, DRSYS_TYPE_STRUCT},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryInformationResourceManager_info[] = {
	{ { 0,0 },"NtQueryInformationResourceManager.ResourceManagerBasicInformation", OK, RNTST, 5,
	ENTRY_QueryInformationResourceManager("ResourceManagerBasicInformation",
	"_RESOURCEMANAGER_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationResourceManager.ResourceManagerCompletionInformation", OK, RNTST, 5,
	ENTRY_QueryInformationResourceManager("ResourceManagerCompletionInformation",
		"_RESOURCEMANAGER_COMPLETION_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryInformationResourceManager.UNKNOWN", OK, RNTST, 5,
	ENTRY_QueryInformationResourceManager(NULL, NULL)
	},
};
int syscall_QueryInformationResourceManager_info_size = (sizeof(syscall_QueryInformationResourceManager_info) / sizeof(syscall_QueryInformationResourceManager_info[0]));

#define ENTRY_SetInformationResourceManager(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::RESOURCEMANAGER_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R|HT, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_SetInformationResourceManager_info[] = {
	{ { 0,0 },"NtSetInformationResourceManager.ResourceManagerBasicInformation", OK, RNTST, 4,
	ENTRY_SetInformationResourceManager("ResourceManagerBasicInformation",
	"_RESOURCEMANAGER_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationResourceManager.ResourceManagerCompletionInformation", OK, RNTST, 4,
	ENTRY_SetInformationResourceManager("ResourceManagerCompletionInformation",
		"_RESOURCEMANAGER_COMPLETION_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetInformationResourceManager.UNKNOWN", OK, RNTST, 4,
	ENTRY_SetInformationResourceManager(NULL, NULL)
	},
};
int syscall_SetInformationResourceManager_info_size = (sizeof(syscall_SetInformationResourceManager_info) / sizeof(syscall_SetInformationResourceManager_info[0]));

#define ENTRY_QueryInformationTransaction(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::TRANSACTION_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR|HT, DRSYS_TYPE_STRUCT, typename},\
         {2, -4, WI|HT, DRSYS_TYPE_STRUCT},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryInformationTransaction_info[] = {
	{ { 0,0 },"NtQueryInformationTransaction.TransactionBasicInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransaction("TransactionBasicInformation", "_TRANSACTION_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationTransaction.TransactionPropertiesInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransaction("TransactionPropertiesInformation",
		"_TRANSACTION_PROPERTIES_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationTransaction.TransactionEnlistmentInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransaction("TransactionEnlistmentInformation", NULL)
	},
	{ { 0,0 },"NtQueryInformationTransaction.TransactionSuperiorEnlistmentInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransaction("TransactionSuperiorEnlistmentInformation",
		"_TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationTransaction.TransactionBindInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransaction("TransactionBindInformation", "_TRANSACTION_BIND_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationTransaction.TransactionDTCPrivateInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransaction("TransactionDTCPrivateInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryInformationTransaction.UNKNOWN", OK, RNTST, 5,
	ENTRY_QueryInformationTransaction(NULL, NULL)
	},
};
int syscall_QueryInformationTransaction_info_size = (sizeof(syscall_QueryInformationTransaction_info) / sizeof(syscall_QueryInformationTransaction_info[0]));

#define ENTRY_SetInformationTransaction(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::TRANSACTION_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R|HT, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_SetInformationTransaction_info[] = {
	{ { 0,0 },"NtSetInformationTransaction.TransactionBasicInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransaction("TransactionBasicInformation", "_TRANSACTION_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationTransaction.TransactionPropertiesInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransaction("TransactionPropertiesInformation",
		"_TRANSACTION_PROPERTIES_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationTransaction.TransactionEnlistmentInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransaction("TransactionEnlistmentInformation", NULL)
	},
	{ { 0,0 },"NtSetInformationTransaction.TransactionSuperiorEnlistmentInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransaction("TransactionSuperiorEnlistmentInformation",
		"_TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationTransaction.TransactionBindInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransaction("TransactionBindInformation", "_TRANSACTION_BIND_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationTransaction.TransactionDTCPrivateInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransaction("TransactionDTCPrivateInformation", NULL)
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetInformationTransaction.UNKNOWN", OK, RNTST, 4,
	ENTRY_SetInformationTransaction(NULL, NULL)
	},
};
int syscall_SetInformationTransaction_info_size = (sizeof(syscall_SetInformationTransaction_info) / sizeof(syscall_SetInformationTransaction_info[0]));

#define ENTRY_QueryInformationTransactionManager(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::TRANSACTIONMANAGER_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, WR|HT, DRSYS_TYPE_STRUCT, typename},\
         {2, -4, WI|HT, DRSYS_TYPE_STRUCT},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {4, sizeof(W::ULONG), WR|HT, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_QueryInformationTransactionManager_info[] = {
	{ { 0,0 },"NtQueryInformationTransactionManager.TransactionManagerBasicInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransactionManager("TransactionManagerBasicInformation",
	"_TRANSACTIONMANAGER_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationTransactionManager.TransactionManagerLogInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransactionManager("TransactionManagerLogInformation",
		"_TRANSACTIONMANAGER_LOG_INFORMATION")
	},
	{ { 0,0 },"NtQueryInformationTransactionManager.TransactionManagerLogPathInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransactionManager("TransactionManagerLogPathInformation",
		"_TRANSACTIONMANAGER_LOGPATH_INFORMATION")
	},
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtQueryInformationTransactionManager.TransactionManagerRecoveryInformation", OK, RNTST, 5,
	ENTRY_QueryInformationTransactionManager("TransactionManagerRecoveryInformation",
		"_TRANSACTIONMANAGER_RECOVERY_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtQueryInformationTransactionManager.UNKNOWN", OK, RNTST, 5,
	ENTRY_QueryInformationTransactionManager(NULL, NULL)
	},
};
int syscall_QueryInformationTransactionManager_info_size = (sizeof(syscall_QueryInformationTransactionManager_info) / sizeof(syscall_QueryInformationTransactionManager_info[0]));

#define ENTRY_SetInformationTransactionManager(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
         {1, sizeof(DR::TRANSACTIONMANAGER_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R|HT, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_SetInformationTransactionManager_info[] = {
	{ { 0,0 },"NtSetInformationTransactionManager.TransactionManagerBasicInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransactionManager("TransactionManagerBasicInformation",
	"_TRANSACTIONMANAGER_BASIC_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationTransactionManager.TransactionManagerLogInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransactionManager("TransactionManagerLogInformation",
		"_TRANSACTIONMANAGER_LOG_INFORMATION")
	},
	{ { 0,0 },"NtSetInformationTransactionManager.TransactionManagerLogPathInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransactionManager("TransactionManagerLogPathInformation",
		"_TRANSACTIONMANAGER_LOGPATH_INFORMATION")
	},
	{ SECONDARY_TABLE_SKIP_ENTRY },
	{ { 0,0 },"NtSetInformationTransactionManager.TransactionManagerRecoveryInformation", OK, RNTST, 4,
	ENTRY_SetInformationTransactionManager("TransactionManagerRecoveryInformation",
		"_TRANSACTIONMANAGER_RECOVERY_INFORMATION")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { 0,0 },"NtSetInformationTransactionManager.UNKNOWN", OK, RNTST, 4,
	ENTRY_SetInformationTransactionManager(NULL, NULL)
	},
};
int syscall_SetInformationTransactionManager_info_size = (sizeof(syscall_SetInformationTransactionManager_info) / sizeof(syscall_SetInformationTransactionManager_info[0]));

#define ENTRY_SetTimerEx(classname, typename)\
     {\
         {0, sizeof(W::HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE},\
         {1, sizeof(DR::TIMER_SET_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT, classname},\
         {2, -3, R|WR|HT, DRSYS_TYPE_STRUCT, typename},\
         {3, sizeof(W::ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT},\
     }

DR::syscall_info_t syscall_SetTimerEx_info[] = {
	{ { WIN7,0 },"NtSetTimerEx.TimerSetCoalescableTimer", OK, RNTST, 4,
	ENTRY_SetTimerEx("TimerSetCoalescableTimer", "_TIMER_SET_COALESCABLE_TIMER")
	},
	{ SECONDARY_TABLE_ENTRY_MAX_NUMBER },
	{ { WIN7,0 },"NtSetTimerEx.UNKNOWN", OK, RNTST, 4,
	ENTRY_SetTimerEx(NULL, NULL)
	},
};
int syscall_SetTimerEx_info_size = (sizeof(syscall_SetTimerEx_info) / sizeof(syscall_SetTimerEx_info[0]));

//--------------------End of secondary table----------------------------

//--------------------Begin of primary table----------------------------

/* A non-SYSARG_INLINED type is by default DRSYS_TYPE_STRUCT, unless
* a different type is specified with |HT.
* So a truly unknown memory type must be explicitly marked DRSYS_TYPE_UNKNOWN.
*/
DR::syscall_info_t syscall_ntdll_info[] = {
	/***************************************************/
	/* Base set from Windows NT, Windows 2000, and Windows XP */
	{ { 0,0 },"NtAcceptConnectPort", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 4, DR_SIZE(PORT_VIEW), R | WR },
		{ 5, DR_SIZE(REMOTE_PORT_VIEW), R | WR },
	}
	},
	{ { 0,0 },"NtAccessCheck", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(GENERIC_MAPPING), R },
		{ 4, WIN_SIZE(PRIVILEGE_SET), WR },
		{ 5, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ACCESS_MASK), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, DR_SIZE(NTSTATUS), WR | HT, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtAccessCheckAndAuditAlarm", OK, RNTST, 11,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 5, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(GENERIC_MAPPING), R },
		{ 7, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 8, WIN_SIZE(ACCESS_MASK), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, DR_SIZE(NTSTATUS), WR | HT, DRSYS_TYPE_NTSTATUS },
		{ 10, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtAccessCheckByType", OK, RNTST, 11,
	{
		{ 0, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 1, WIN_SIZE(SID), R },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(OBJECT_TYPE_LIST), R },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(GENERIC_MAPPING), R },
		{ 7, WIN_SIZE(PRIVILEGE_SET), R },
		{ 8, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(ACCESS_MASK), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 10, DR_SIZE(NTSTATUS), WR | HT, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtAccessCheckByTypeAndAuditAlarm", OK, RNTST, 16,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 5, WIN_SIZE(SID), R },
		{ 6, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(AUDIT_EVENT_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(OBJECT_TYPE_LIST), R },
		{ 10, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 11, WIN_SIZE(GENERIC_MAPPING), R },
		{ 12, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 13, WIN_SIZE(ACCESS_MASK), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 14, DR_SIZE(NTSTATUS), WR | HT, DRSYS_TYPE_NTSTATUS },
		{ 15, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtAccessCheckByTypeResultList", OK, RNTST, 11,
	{
		{ 0, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 1, WIN_SIZE(SID), R },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(OBJECT_TYPE_LIST), R },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(GENERIC_MAPPING), R },
		{ 7, WIN_SIZE(PRIVILEGE_SET), R },
		{ 8, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(ACCESS_MASK), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 10, DR_SIZE(NTSTATUS), WR | HT, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtAccessCheckByTypeResultListAndAuditAlarm", OK, RNTST, 16,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 5, WIN_SIZE(SID), R },
		{ 6, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(AUDIT_EVENT_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(OBJECT_TYPE_LIST), R },
		{ 10, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 11, WIN_SIZE(GENERIC_MAPPING), R },
		{ 12, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 13, WIN_SIZE(ACCESS_MASK), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 14, DR_SIZE(NTSTATUS), WR | HT, DRSYS_TYPE_NTSTATUS },
		{ 15, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtAccessCheckByTypeResultListAndAuditAlarmByHandle", OK, RNTST, 17,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 5, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 6, WIN_SIZE(SID), R },
		{ 7, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(AUDIT_EVENT_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 9, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 10, WIN_SIZE(OBJECT_TYPE_LIST), R },
		{ 11, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 12, WIN_SIZE(GENERIC_MAPPING), R },
		{ 13, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 14, WIN_SIZE(ACCESS_MASK), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 15, DR_SIZE(NTSTATUS), WR | HT, DRSYS_TYPE_NTSTATUS },
		{ 16, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtAddAtom", OK, RNTST, 3,
	{
		{ 0, -1, R | HT, DRSYS_TYPE_CWSTRING },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ATOM), WR | HT, DRSYS_TYPE_ATOM },
	}
	},
	{ { 0,0 },"NtAddBootEntry", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtAddDriverEntry", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtAdjustGroupsToken", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 2, WIN_SIZE(TOKEN_GROUPS), R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, -3, WR },
		{ 4, -5, WI },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtAdjustPrivilegesToken", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 2, WIN_SIZE(TOKEN_PRIVILEGES), R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, -3, WR },
		{ 4, -5, WI },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtAlertResumeThread", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtAlertThread", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtAllocateLocallyUniqueId", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(LUID), WR },
	}
	},
	{ { 0,0 },"NtAllocateUserPhysicalPages", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtAllocateUuids", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(LARGE_INTEGER), WR | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(UCHAR), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtAllocateVirtualMemory", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "MEM_COMMIT" },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "PAGE_NOACCESS" },
	}
	},
	{ { 0,0 },"NtApphelpCacheControl", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(APPHELPCACHESERVICECLASS), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtAreMappedFilesTheSame", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
	}
	},
	{ { 0,0 },"NtAssignProcessToJobObject", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCallbackReturn", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,WINVISTA },"NtCancelDeviceWakeupRequest", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCancelIoFile", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
	}
	},
	{ { 0,0 },"NtCancelTimer", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtClearEvent", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtClose", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCloseObjectAuditAlarm", OK, RNTST, 3,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtCompactKeys", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCompareTokens", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtCompleteConnectPort", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCompressKey", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	/* Arg#4 is IN OUT for Nebbett, but not for Metasploit.
	* Arg#6 is of a user-defined format and since IN/OUT but w/ only one
	* capacity/size on IN can easily have capacity be larger than IN size:
	* xref i#494.  Be on the lookout for other false positives.
	*/
	{ { 0,0 },"NtConnectPort", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, WIN_SIZE(SECURITY_QUALITY_OF_SERVICE), R | CT, SYSARG_TYPE_SECURITY_QOS },
		{ 3, DR_SIZE(PORT_VIEW), R | WR },
		{ 4, DR_SIZE(REMOTE_PORT_VIEW), WR },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, -7, R | WI },
		{ 7, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtContinue", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(CONTEXT), R | CT, SYSARG_TYPE_CONTEXT },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,WINXP },"NtCreateChannel", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtCreateDebugObject", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtCreateDirectoryObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtCreateEvent", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(EVENT_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 4, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtCreateEventPair", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtCreateFile", OK, RNTST, 11,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 4, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "FILE_ATTRIBUTE_READONLY" },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "FILE_SHARE_READ" },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "FILE_SUPERSEDE" },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "FILE_DIRECTORY_FILE" },
		{ 9, -10, R },
		{ 10, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateIoCompletion", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateJobObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtCreateJobSet", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(JOB_SET_ARRAY), R },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateKey", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "REG_OPTION_RESERVED" },
		{ 6, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateKeyedEvent", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateMailslotFile", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtCreateMutant", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtCreateNamedPipeFile", OK, RNTST, 14,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 9, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 10, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 11, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 12, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 13, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtCreatePagingFile", OK, RNTST, 4,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(ULARGE_INTEGER), R | HT, DRSYS_TYPE_ULARGE_INTEGER },
		{ 2, WIN_SIZE(ULARGE_INTEGER), R | HT, DRSYS_TYPE_ULARGE_INTEGER },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreatePort", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateProcess", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 4, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 5, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 6, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 7, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCreateProcessEx", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 6, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 7, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateProfile", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, DR_SIZE(KPROFILE_SOURCE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateSection", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "PAGE_NOACCESS" },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "SEC_FILE" },
		{ 6, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCreateSemaphore", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(LONG), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 4, WIN_SIZE(LONG), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateSymbolicLinkObject", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtCreateThread", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 4, DR_SIZE(CLIENT_ID), WR },
		{ 5, WIN_SIZE(CONTEXT), R | CT, SYSARG_TYPE_CONTEXT },
		{ 6, DR_SIZE(USER_STACK), R },
		{ 7, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}, NULL // DCD &sysnum_CreateThread
	},
	{ { 0,0 },"NtCreateThreadEx", OK, RNTST, 11,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 4, WIN_SIZE(PTHREAD_START_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 5, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 6, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		/* 10 is handled manually */
	}, NULL // DCD &sysnum_CreateThreadEx
	},
	{ { 0,0 },"NtCreateTimer", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(TIMER_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateToken", OK, RNTST, 13,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(TOKEN_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 4, WIN_SIZE(LUID), R },
		{ 5, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 6, WIN_SIZE(TOKEN_USER), R },
		{ 7, WIN_SIZE(TOKEN_GROUPS), R },
		{ 8, WIN_SIZE(TOKEN_PRIVILEGES), R },
		{ 9, WIN_SIZE(TOKEN_OWNER), R },
		{ 10, WIN_SIZE(TOKEN_PRIMARY_GROUP), R },
		{ 11, WIN_SIZE(TOKEN_DEFAULT_DACL), R },
		{ 12, WIN_SIZE(TOKEN_SOURCE), R },
	}
	},
	{ { 0,0 },"NtCreateUserProcess", OK, RNTST, 11,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 5, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 8, DR_SIZE(RTL_USER_PROCESS_PARAMETERS), R },
		/*XXX i#98: arg 9 is in/out but not completely known*/
		{ 10, DR_SIZE(create_proc_thread_info_t), R/*rest handled manually*/, },
	}, NULL // DCD &sysnum_CreateUserProcess
	},
	{ { 0,0 },"NtCreateWaitablePort", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtDebugActiveProcess", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtDebugContinue", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(CLIENT_ID), R },
		{ 2, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtDelayExecution", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtDeleteAtom", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(ATOM), SYSARG_INLINED, DRSYS_TYPE_ATOM },
	}
	},
	{ { 0,0 },"NtDeleteBootEntry", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtDeleteDriverEntry", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtDeleteFile", OK, RNTST, 1,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtDeleteKey", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtDeleteObjectAuditAlarm", OK, RNTST, 3,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtDeleteValueKey", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtDeviceIoControlFile", UNKNOWN/*to do param cmp for unknown ioctl codes*/, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		/*param6 handled manually*/
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, -9, WR },
		{ 9, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_DeviceIoControlFile
	},
	{ { 0,0 },"NtDisplayString", OK, RNTST, 1,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtDuplicateObject", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 4, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "OBJ_INHERIT" },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "DUPLICATE_CLOSE_SOURCE" },
	}
	},
	{ { 0,0 },"NtDuplicateToken", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 4, WIN_SIZE(TOKEN_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 5, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtEnumerateBootEntries", OK, RNTST, 2,
	{
		{ 0, -1, WI },
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtEnumerateDriverEntries", OK, RNTST, 2,
	{
		{ 0, -1, WI },
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_EnumerateKey_info_size },"NtEnumerateKey", OK | SYSINFO_SECONDARY_TABLE, RNTST, 6,
	{
		{ 2, }
	}, (DR::drsys_sysnum_t *)syscall_EnumerateKey_info
	},
	{ { 0,0 },"NtEnumerateSystemEnvironmentValuesEx", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, -2, WI },
		{ 2, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_EnumerateValueKey_info_size },"NtEnumerateValueKey", OK | SYSINFO_SECONDARY_TABLE, RNTST, 6,
	{
		{ 2, }
	}, (DR::drsys_sysnum_t *)syscall_EnumerateValueKey_info
	},
	{ { 0,0 },"NtExtendSection", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtFilterToken", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(TOKEN_GROUPS), R },
		{ 3, WIN_SIZE(TOKEN_PRIVILEGES), R },
		{ 4, WIN_SIZE(TOKEN_GROUPS), R },
		{ 5, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtFindAtom", OK, RNTST, 3,
	{
		{ 0, -1, R | HT, DRSYS_TYPE_CWSTRING },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ATOM), WR | HT, DRSYS_TYPE_ATOM },
	}
	},
	{ { 0,0 },"NtFlushBuffersFile", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
	}
	},
	{ { 0,0 },"NtFlushInstructionCache", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtFlushKey", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtFlushVirtualMemory", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG_PTR), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
	}
	},
	{ { 0,0 },"NtFlushWriteBuffer", OK, RNTST, 0, },
	{ { 0,0 },"NtFreeUserPhysicalPages", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtFreeVirtualMemory", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "MEM_COMMIT" },
	}
	},
	{ { 0,0 },"NtFsControlFile", OK, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		/* The "{6, -7, R}" param can have padding inside it and is special-cased */
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, -9, WR },
		{ 9, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_FsControlFile
	},
	{ { 0,0 },"NtGetContextThread", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(CONTEXT), WR | CT, SYSARG_TYPE_CONTEXT },
	}
	},
	{ { 0,0 },"NtGetCurrentProcessorNumber", OK, RNTST, 0, },
	{ { 0,0 },"NtGetDevicePowerState", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(DEVICE_POWER_STATE), WR | HT, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,WIN7 },"NtGetPlugPlayEvent", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, -3, WR },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	/* BufferEntries is #elements, not #bytes */
	{ { 0,0 },"NtGetWriteWatch", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, -5, WI | SYSARG_SIZE_IN_ELEMENTS, sizeof(void*) },
		{ 5, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtImpersonateAnonymousToken", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtImpersonateClientOfPort", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
	}
	},
	{ { 0,0 },"NtImpersonateThread", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(SECURITY_QUALITY_OF_SERVICE), R | CT, SYSARG_TYPE_SECURITY_QOS },
	}
	},
	{ { 0,0 },"NtInitializeRegistry", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtInitiatePowerAction", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(POWER_ACTION), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 1, WIN_SIZE(SYSTEM_POWER_STATE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtIsProcessInJob", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtIsSystemResumeAutomatic", OK, RNTST, 0, },
	{ { 0,WINXP },"NtListenChannel", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(CHANNEL_MESSAGE), WR },
	}
	},
	{ { 0,0 },"NtListenPort", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), WR | CT, SYSARG_TYPE_PORT_MESSAGE },
	}
	},
	{ { 0,0 },"NtLoadDriver", OK, RNTST, 1,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtLoadKey", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtLoadKey2", OK, RNTST, 3,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtLoadKeyEx", OK, RNTST, 4,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtLockFile", OK, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, WIN_SIZE(ULARGE_INTEGER), R | HT, DRSYS_TYPE_ULARGE_INTEGER },
		{ 6, WIN_SIZE(ULARGE_INTEGER), R | HT, DRSYS_TYPE_ULARGE_INTEGER },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 9, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtLockProductActivationKeys", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtLockRegistryKey", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtLockVirtualMemory", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtMakePermanentObject", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtMakeTemporaryObject", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtMapCMFModule", OK, RNTST, 6,
	{
		/* XXX DRi#415 not all known */
		{ 4, WIN_SIZE(PVOID), WR | HT, DRSYS_TYPE_POINTER },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtMapUserPhysicalPages", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
		{ 1, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtMapUserPhysicalPagesScatter", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(PVOID), R | HT, DRSYS_TYPE_POINTER },
		{ 1, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtMapViewOfSection", OK, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(PVOID), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(LARGE_INTEGER), R | WR | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 6, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, DR_SIZE(SECTION_INHERIT), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "MEM_COMMIT" },
		{ 9, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "PAGE_NOACCESS" },
	}
	},
	{ { 0,0 },"NtModifyBootEntry", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtModifyDriverEntry", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtNotifyChangeDirectoryFile", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, WIN_SIZE(FILE_NOTIFY_INFORMATION), WR },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtNotifyChangeKey", OK, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "REG_NOTIFY_CHANGE_NAME" },
		{ 6, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 7, -8, R },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtNotifyChangeMultipleKeys", OK, RNTST, 12,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 4, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 5, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 6, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 9, -10, R },
		{ 10, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 11, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,WINXP },"NtOpenChannel", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenDirectoryObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenEvent", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenEventPair", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenFile", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "FILE_SHARE_READ" },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "FILE_DIRECTORY_FILE" },
	}
	},
	{ { 0,0 },"NtOpenIoCompletion", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenJobObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenKey", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenKeyEx", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "REG_OPTION_RESERVED" },
	}
	},
	{ { 0,0 },"NtOpenKeyedEvent", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenMutant", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenObjectAuditAlarm", OK, RNTST, 12,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		/* XXX: not a regular HANDLE?  ditto NtAccessCheck* */
		{ 1, WIN_SIZE(PVOID), R | HT, DRSYS_TYPE_UNKNOWN },
		{ 2, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
		{ 5, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 6, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(PRIVILEGE_SET), R },
		{ 9, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 10, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 11, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtOpenProcess", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(CLIENT_ID), R },
	}
	},
	{ { 0,0 },"NtOpenProcessToken", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtOpenProcessTokenEx", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "OBJ_INHERIT" },
		{ 3, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtOpenSection", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenSemaphore", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenSymbolicLinkObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenThread", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(CLIENT_ID), R },
	}
	},
	{ { 0,0 },"NtOpenThreadToken", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 3, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtOpenThreadTokenEx", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "OBJ_INHERIT" },
		{ 4, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtOpenTimer", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtPlugPlayControl", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, -2, WR },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
	}
	},
	{ { 0,0 },"NtPowerInformation", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(POWER_INFORMATION_LEVEL), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		/* Some info classes do not need to define every field of the input buffer
		* (i#1247), necessitating special-casing instead of listing "{1, -2, R}" here.
		* We still list an entry (w/ default struct type) for non-memarg iterator.
		*/
		{ 1, -2, SYSARG_NON_MEMARG, },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, WR },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_PowerInformation
	},
	{ { 0,0 },"NtPrivilegeCheck", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PRIVILEGE_SET), R },
		{ 2, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtPrivilegedServiceAuditAlarm", OK, RNTST, 5,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(PRIVILEGE_SET), R },
		{ 4, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtPrivilegeObjectAuditAlarm", OK, RNTST, 6,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(PRIVILEGE_SET), R },
		{ 5, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtProtectVirtualMemory", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "PAGE_NOACCESS" },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtPulseEvent", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryAttributesFile", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, DR_SIZE(FILE_BASIC_INFORMATION), WR },
	}
	},
	{ { 0,0 },"NtQueryBootEntryOrder", OK, RNTST, 2,
	{
		{ 0, -1, WI | SYSARG_SIZE_IN_ELEMENTS, WIN_SIZE(ULONG) },
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryBootOptions", OK, RNTST, 2,
	{
		{ 0, -1, WI },
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT }
	}
	},
	{ { 0,0 },"NtQueryDebugFilterState", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryDefaultLocale", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 1, WIN_SIZE(LCID), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryDefaultUILanguage", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(LANGID), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_QueryDirectoryFile_info_size },"NtQueryDirectoryFile", OK | SYSINFO_SECONDARY_TABLE, RNTST, 11,
	{
		{ 7, }
	},(DR::drsys_sysnum_t *)syscall_QueryDirectoryFile_info
	},
	{ { 0,0 },"NtQueryDirectoryObject", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, -2, WR },
		{ 1, -6, WI },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 4, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 5, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryDriverEntryOrder", OK, RNTST, 2,
	{
		{ 0, -1, WI | SYSARG_SIZE_IN_ELEMENTS, WIN_SIZE(ULONG) },
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryEaFile", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 2, DR_SIZE(FILE_FULL_EA_INFORMATION), WR },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 5, DR_SIZE(FILE_GET_EA_INFORMATION), R },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,syscall_QueryEvent_info_size },"NtQueryEvent", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryEvent_info
	},
	{ { 0,0 },"NtQueryFullAttributesFile", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, DR_SIZE(FILE_NETWORK_OPEN_INFORMATION), WR },
	}
	},
	{ { 0,syscall_QueryInformationAtom_info_size },"NtQueryInformationAtom", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryInformationAtom_info
	},
	{ { 0,syscall_QueryInformationFile_info_size },"NtQueryInformationFile", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 4, }
	}, (DR::drsys_sysnum_t *)syscall_QueryInformationFile_info
	},
	{ { 0,0 },"NtQueryInformationJobObject", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(JOBOBJECTINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_QueryInformationPort_info_size },"NtQueryInformationPort", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryInformationPort_info
	},
	{ { 0,0 },"NtQueryInformationProcess", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PROCESSINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryInformationThread", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(THREADINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_QueryInformationThread
	},
	{ { 0,0 },"NtQueryInformationToken", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(TOKEN_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryInstallUILanguage", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(LANGID), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryIntervalProfile", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(KPROFILE_SOURCE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_QueryIoCompletion_info_size },"NtQueryIoCompletion", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryIoCompletion_info
	},
	{ { 0,syscall_QueryKey_info_size },"NtQueryKey", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryKey_info
	},
	{ { 0,0 },"NtQueryMultipleValueKey", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(KEY_VALUE_ENTRY), R | WR },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, WI },
		{ 4, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_QueryMutant_info_size },"NtQueryMutant", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryMutant_info
	},
	{ { 0,0 },"NtQueryObject", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(OBJECT_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,WINNT },"NtQueryOleDirectoryFile", OK, RNTST, 11,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, -6, WR },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, DR_SIZE(FILE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 9, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 10, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtQueryOpenSubKeys", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryOpenSubKeysEx", OK, RNTST, 4,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryPerformanceCounter", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(LARGE_INTEGER), WR | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 1, WIN_SIZE(LARGE_INTEGER), WR | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtQueryPortInformationProcess", OK, RNTST, 0, },
	{ { 0,0 },"NtQueryQuotaInformationFile", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 2, DR_SIZE(FILE_USER_QUOTA_INFORMATION), WR },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 5, DR_SIZE(FILE_QUOTA_LIST_INFORMATION), R },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(SID), R },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtQuerySection", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(SECTION_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQuerySecurityObject", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(SECURITY_INFORMATION), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "OWNER_SECURITY_INFORMATION" },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQuerySemaphore", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(SEMAPHORE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	/* No double entry for 3rd param needed b/c the written size is in
	* .Length of the UNICODE_STRING as well as returned in the param:
	*/
	{ { 0,0 },"NtQuerySymbolicLinkObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), WR | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQuerySystemEnvironmentValue", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 4,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, -2, WR },
		{ 1, -3, WI },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQuerySystemEnvironmentValueEx", OK, RNTST, 5,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(GUID), R },
		{ 2, -3, WI },
		{ 3, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	/* One info class reads data, which is special-cased */
	{ { 0,0 },"NtQuerySystemInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 4,
	{
		{ 0, DR_SIZE(SYSTEM_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 1, -2, WR },
		{ 1, -3, WI },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_QuerySystemInformation
	},
	{ { 0,0 },"NtQuerySystemTime", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(LARGE_INTEGER), WR | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtQueryTimer", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(TIMER_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryTimerResolution", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryValueKey", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, DR_SIZE(KEY_VALUE_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 3, -4, WR },
		{ 3, -5, WI },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryVirtualMemory", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
		{ 2, DR_SIZE(MEMORY_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 3, -4, WR },
		{ 3, -5, WI },
		{ 4, WIN_SIZE(SIZE_T), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(SIZE_T), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_QueryVirtualMemory
	},
	{ { 0,syscall_QueryVolumeInformationFile_info_size },"NtQueryVolumeInformationFile", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 4, }
	}, (DR::drsys_sysnum_t *)syscall_QueryVolumeInformationFile_info
	},
	{ { 0,0 },"NtQueueApcThread", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PKNORMAL_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
	}
	},
	{ { 0,0 },"NtRaiseException", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(EXCEPTION_RECORD), R | CT, SYSARG_TYPE_EXCEPTION_RECORD },
		{ 1, WIN_SIZE(CONTEXT), R | CT, SYSARG_TYPE_CONTEXT },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtRaiseHardError", OK, RNTST, 6,
	{
		{ 0, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG_PTR), R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtReadFile", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, -6, WR | HT, DRSYS_TYPE_VOID },
		{ 5, -4,(WR | IO) | HT, DRSYS_TYPE_VOID },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 8, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtReadFileScatter", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, WIN_SIZE(FILE_SEGMENT_ELEMENT), R },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 8, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtReadRequestData", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, WR },
		{ 3, -5, WI },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtReadVirtualMemory", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, -3, WR | HT, DRSYS_TYPE_VOID },
		{ 2, -4, WI | HT, DRSYS_TYPE_VOID },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtRegisterThreadTerminatePort", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtReleaseKeyedEvent", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 3, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtReleaseMutant", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtReleaseSemaphore", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LONG), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, WIN_SIZE(LONG), WR | HT, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,0 },"NtRemoveIoCompletion", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, sizeof(void*), WR | HT, DRSYS_TYPE_VOID },/* see i#1536 */
		{ 3, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 4, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtRemoveProcessDebug", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtRenameKey", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtReplaceKey", OK, RNTST, 3,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtReplyPort", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
	}
	},
	{ { 0,0 },"NtReplyWaitReceivePort", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), WR | HT, DRSYS_TYPE_UNKNOWN /* XXX: what type is this? */ },
		{ 2, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 3, DR_SIZE(PORT_MESSAGE), WR | CT, SYSARG_TYPE_PORT_MESSAGE },
	}
	},
	{ { 0,0 },"NtReplyWaitReceivePortEx", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), WR | HT, DRSYS_TYPE_UNKNOWN /* XXX: what type is this? */ },
		{ 2, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 3, DR_SIZE(PORT_MESSAGE), WR | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 4, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtReplyWaitReplyPort", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), R | WR | CT, SYSARG_TYPE_PORT_MESSAGE },
	}
	},
	{ { 0,WINXP },"NtReplyWaitSendChannel", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(CHANNEL_MESSAGE), WR },
	}
	},
	{ { 0,WINVISTA },"NtRequestDeviceWakeup", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtRequestPort", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
	}
	},
	{ { 0,0 },"NtRequestWaitReplyPort", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
#if 1
		/* FIXME PR 406356: suppressing undefined read I see on every app at process
		* termination on w2k3 vm (though not on wow64 laptop) where the last 16
		* bytes are not filled in (so only length and type are).  Length indicates
		* there is data afterward which we try to handle specially.
		*/
		{ 1, 8, R },
#else
		{ 1, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
#endif
		{ 2, DR_SIZE(PORT_MESSAGE), WR | CT, SYSARG_TYPE_PORT_MESSAGE },
	}
	},
	{ { 0,WINVISTA },"NtRequestWakeupLatency", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(LATENCY_TIME), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,0 },"NtResetEvent", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtResetWriteWatch", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtRestoreKey", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtResumeProcess", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtResumeThread", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSaveKey", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSaveKeyEx", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSaveMergedKeys", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSecureConnectPort", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, WIN_SIZE(SECURITY_QUALITY_OF_SERVICE), R | CT, SYSARG_TYPE_SECURITY_QOS },
		{ 3, DR_SIZE(PORT_VIEW), R | WR },
		{ 4, WIN_SIZE(SID), R },
		{ 5, DR_SIZE(REMOTE_PORT_VIEW), R | WR },
		{ 6, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, -8, R | WI },
		{ 8, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,WINXP },"NtSendWaitReplyChannel", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, DR_SIZE(CHANNEL_MESSAGE), WR },
	}
	},
	{ { 0,0 },"NtSetBootEntryOrder", OK, RNTST, 2,
	{
		{ 0, -1, R | SYSARG_SIZE_IN_ELEMENTS, WIN_SIZE(ULONG) },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetBootOptions", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(BOOT_OPTIONS), R },
	}
	},
	{ { 0,WINXP },"NtSetContextChannel", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSetContextThread", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(CONTEXT), R | CT, SYSARG_TYPE_CONTEXT },
	}
	},
	{ { 0,0 },"NtSetDebugFilterState", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtSetDefaultHardErrorPort", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSetDefaultLocale", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 1, WIN_SIZE(LCID), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetDefaultUILanguage", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(LANGID), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetEaFile", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 2, DR_SIZE(FILE_FULL_EA_INFORMATION), R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetEvent", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetEventBoostPriority", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSetHighEventPair", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSetHighWaitLowEventPair", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,WINNT },"NtSetHighWaitLowThread", OK, RNTST, 0 },
	{ { 0,0 },"NtSetInformationDebugObject", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(DEBUGOBJECTINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_SetInformationFile_info_size },"NtSetInformationFile", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 4, }
	}, (DR::drsys_sysnum_t *)syscall_SetInformationFile_info
	},
	{ { 0,0 },"NtSetInformationJobObject", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(JOBOBJECTINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_SetInformationKey_info_size },"NtSetInformationKey", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_SetInformationKey_info
	},
	{ { 0,syscall_SetInformationObject_info_size },"NtSetInformationObject", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_SetInformationObject_info
	},
	{ { 0,0 },"NtSetInformationProcess", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PROCESSINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		/* Some info classes have part of the passed-in size as OUT (i#1228),
		* necessitating special-casing instead of listing "{2, -3, R}" here.
		* We still list an entry (w/ default struct type) for non-memarg iterator.
		*/
		{ 2, -3, SYSARG_NON_MEMARG, },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_SetInformationProcess
	},
	{ { 0,0 },"NtSetInformationThread", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(THREADINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetInformationToken", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(TOKEN_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetIntervalProfile", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, DR_SIZE(KPROFILE_SOURCE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetIoCompletion", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		/* XXX i#1536: We fill it as inlined VOID* based on our own research
		* but different sources describe this arg in different ways.
		*/
		{ 2, sizeof(void*), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 3, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetLdtEntries", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(LDT_ENTRY), SYSARG_INLINED, DRSYS_TYPE_STRUCT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(LDT_ENTRY), SYSARG_INLINED, DRSYS_TYPE_STRUCT },
	}
	},
	{ { 0,0 },"NtSetLowEventPair", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSetLowWaitHighEventPair", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,WINNT },"NtSetLowWaitHighThread", OK, RNTST, 0, },
	{ { 0,0 },"NtSetQuotaInformationFile", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 2, DR_SIZE(FILE_USER_QUOTA_INFORMATION), R },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetSecurityObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(SECURITY_INFORMATION), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(SECURITY_DESCRIPTOR), R | CT, SYSARG_TYPE_SECURITY_DESCRIPTOR },
	}
	},
	{ { 0,0 },"NtSetSystemEnvironmentValue", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtSetSystemEnvironmentValueEx", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(GUID), R },
	}
	},
	/* Some info classes write data as well, which is special-cased */
	{ { 0,0 },"NtSetSystemInformation", OK, RNTST, 3,
	{
		{ 0, DR_SIZE(SYSTEM_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 1, -2, R },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_SetSystemInformation
	},
	{ { 0,0 },"NtSetSystemPowerState", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(POWER_ACTION), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 1, WIN_SIZE(SYSTEM_POWER_STATE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetSystemTime", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 1, WIN_SIZE(LARGE_INTEGER), WR | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtSetThreadExecutionState", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(EXECUTION_STATE), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(EXECUTION_STATE), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetTimer", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 2, DR_SIZE(PTIMER_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 4, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 5, WIN_SIZE(LONG), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 6, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtSetTimerResolution", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 2, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetUuidSeed", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(UCHAR), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSetValueKey", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "REG_NONE" },
		{ 4, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,syscall_SetVolumeInformationFile_info_size },"NtSetVolumeInformationFile", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 4, }
	},(DR::drsys_sysnum_t *)syscall_SetVolumeInformationFile_info
	},
	{ { 0,0 },"NtShutdownSystem", OK, RNTST, 1,
	{
		{ 0, DR_SIZE(SHUTDOWN_ACTION), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,0 },"NtSignalAndWaitForSingleObject", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 3, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtStartProfile", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtStopProfile", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSuspendProcess", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtSuspendThread", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtSystemDebugControl", OK, RNTST, 6,
	{
		{ 0, DR_SIZE(SYSDBG_COMMAND), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, -2, R },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, WR },
		{ 3, -5, WI },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtTerminateJobObject", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtTerminateProcess", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtTerminateThread", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtTestAlert", OK, RNTST, 0 },
	/* unlike TraceEvent API routine, syscall takes size+flags as
	* separate params, and struct observed to be all uninit, so we
	* assume struct is all OUT
	*/
	{ { 0,0 },"NtTraceEvent", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, DR_SIZE(EVENT_TRACE_HEADER), WR },
	}
	},
	{ { 0,0 },"NtTranslateFilePath", OK, RNTST, 4,
	{
		{ 0, DR_SIZE(FILE_PATH), R },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(FILE_PATH), WR },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtUnloadDriver", OK, RNTST, 1,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtUnloadKey", OK, RNTST, 1,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtUnloadKey2", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtUnloadKeyEx", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtUnlockFile", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 2, WIN_SIZE(ULARGE_INTEGER), R | HT, DRSYS_TYPE_ULARGE_INTEGER },
		{ 3, WIN_SIZE(ULARGE_INTEGER), R | HT, DRSYS_TYPE_ULARGE_INTEGER },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtUnlockVirtualMemory", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtUnmapViewOfSection", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
	}
	},
	{ { 0,0 },"NtVdmControl", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
	}
	},
	{ { 0,WINNT },"NtW32Call", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		/* FIXME: de-ref w/o corresponding R to check definedness: but not enough
		* info to understand exactly what's going on here
		*/
		{ 3, -4, WI | HT, DRSYS_TYPE_VOID },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWaitForDebugEvent", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 2, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 3, DR_SIZE(DBGUI_WAIT_STATE_CHANGE), WR },
	}
	},
	{ { 0,0 },"NtWaitForKeyedEvent", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 3, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtWaitForMultipleObjects", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(HANDLE), R | HT, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(WAIT_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 4, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtWaitForMultipleObjects32", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(HANDLE), R | HT, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(WAIT_TYPE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 3, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 4, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtWaitForSingleObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
		{ 2, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtWaitHighEventPair", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtWaitLowEventPair", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtWriteFile", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, -6, R | HT, DRSYS_TYPE_VOID },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 8, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWriteFileGather", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PIO_APC_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 5, WIN_SIZE(FILE_SEGMENT_ELEMENT), R },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 8, WIN_SIZE(ULONG), R | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWriteRequestData", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, R },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWriteVirtualMemory", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
		{ 2, -3, R | HT, DRSYS_TYPE_VOID },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtYieldExecution", OK, RNTST, 0, },

	/***************************************************/
	/* added in Windows 2003 */
	{ { 0,0 },"NtSetDriverEntryOrder", OK, RNTST, 2,
	{
		{ 0, -1, R | SYSARG_SIZE_IN_ELEMENTS, WIN_SIZE(ULONG) },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},

	/* FIXME i#1089: fill in info on all the inlined args for the
	* syscalls below here.
	*/

	/***************************************************/
	/* added in Windows XP64 WOW64 */
	{ { 0,0 },"NtWow64CsrClientConnectToServer", UNKNOWN, RNTST, 5, },
	{ { 0,0 },"NtWow64CsrNewThread", OK, RNTST, 0, },
	{ { 0,0 },"NtWow64CsrIdentifyAlertableThread", OK, RNTST, 0, },
	{ { 0,0 },"NtWow64CsrClientCallServer", UNKNOWN, RNTST, 4, },
	{ { 0,0 },"NtWow64CsrAllocateCaptureBuffer", OK, RNTST, 2, },
	{ { 0,0 },"NtWow64CsrFreeCaptureBuffer", OK, RNTST, 1, },
	{ { 0,0 },"NtWow64CsrAllocateMessagePointer", UNKNOWN, RNTST, 3, },
	{ { 0,0 },"NtWow64CsrCaptureMessageBuffer", UNKNOWN, RNTST, 4, },
	{ { 0,0 },"NtWow64CsrCaptureMessageString", UNKNOWN, RNTST, 5, },
	{ { 0,0 },"NtWow64CsrSetPriorityClass", OK, RNTST, 2,
	{
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWow64CsrGetProcessId", OK, RNTST, 0, },
	{ { 0,0 },"NtWow64DebuggerCall", OK, RNTST, 5, },
	/* args seem to be identical to NtQuerySystemInformation */
	{ { 0,0 },"NtWow64GetNativeSystemInformation", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 4,
	{
		{ 0, DR_SIZE(SYSTEM_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 1, -2, WR },
		{ 1, -3, WI },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_QuerySystemInformationWow64
	},
	{ { 0,0 },"NtWow64QueryInformationProcess64", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 5,
	{
		{ 2, -3, WR },
		{ 2, -4, WI },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWow64ReadVirtualMemory64", UNKNOWN, RNTST, 7, },
	{ { 0,WIN10 },"NtWow64QueryVirtualMemory64", UNKNOWN, RNTST, 8, },

	/***************************************************/
	/* added in Windows Vista SP0 */
	/* XXX: add min OS version: but we have to distinguish the service packs! */
	{ { 0,0 },"NtAcquireCMFViewOwnership", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(ULONGLONG), WR | HT, DRSYS_TYPE_STRUCT },
		{ 1, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
		{ 2, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtAlpcAcceptConnectPort", OK, RNTST, 9,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 4, DR_SIZE(ALPC_PORT_ATTRIBUTES), R | CT, SYSARG_TYPE_ALPC_PORT_ATTRIBUTES },
		{ 5, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 6, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 7, DR_SIZE(ALPC_MESSAGE_ATTRIBUTES), R | WR | HT, DRSYS_TYPE_STRUCT },
		{ 8, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtAlpcCancelMessage", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(ALPC_CONTEXT_ATTRIBUTES), R | CT, SYSARG_TYPE_ALPC_CONTEXT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtAlpcConnectPort", OK, RNTST, 11,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(ALPC_PORT_ATTRIBUTES), R | CT, SYSARG_TYPE_ALPC_PORT_ATTRIBUTES },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT, "ALPC_SYNC_CONNECTION" },
		{ 5, WIN_SIZE(SID), R | HT, DRSYS_TYPE_STRUCT },
		{ 6, -7, WI | HT, SYSARG_TYPE_PORT_MESSAGE },
		{ 7, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, DR_SIZE(ALPC_MESSAGE_ATTRIBUTES), R | WR | HT, DRSYS_TYPE_STRUCT },
		{ 9, DR_SIZE(ALPC_MESSAGE_ATTRIBUTES), R | WR | HT, DRSYS_TYPE_STRUCT },
		{ 10, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtAlpcCreatePort", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 2, DR_SIZE(ALPC_PORT_ATTRIBUTES), R | CT, SYSARG_TYPE_ALPC_PORT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtAlpcCreatePortSection", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtAlpcCreateResourceReserve", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(SIZE_T), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtAlpcCreateSectionView", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(ALPC_DATA_VIEW), R | WR | HT, DRSYS_TYPE_STRUCT },
	}
	},
	{ { 0,0 },"NtAlpcCreateSecurityContext", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(ALPC_SECURITY_ATTRIBUTES), R | WR | CT, SYSARG_TYPE_ALPC_SECURITY_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtAlpcDeletePortSection", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtAlpcDeleteResourceReserve", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	/* XXX: ok for shadowing purposes, but we should look at tracking
	* the allocation once we understand NtAlpcCreateSectionView
	*/
	{ { 0,0 },"NtAlpcDeleteSectionView", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
	}
	},
	{ { 0,0 },"NtAlpcDeleteSecurityContext", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtAlpcDisconnectPort", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtAlpcImpersonateClientOfPort", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
	}
	},
	{ { 0,0 },"NtAlpcOpenSenderProcess", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtAlpcOpenSenderThread", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PORT_MESSAGE), R | CT, SYSARG_TYPE_PORT_MESSAGE },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,syscall_AlpcQueryInformation_info_size },"NtAlpcQueryInformation", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_AlpcQueryInformation_info
	},
	{ { 0,syscall_AlpcQueryInformationMessage_info_size },"NtAlpcQueryInformationMessage", OK | SYSINFO_SECONDARY_TABLE, RNTST, 6,
	{
		{ 2, }
	}, (DR::drsys_sysnum_t *)syscall_AlpcQueryInformationMessage_info
	},
	{ { 0,0 },"NtAlpcRevokeSecurityContext", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	/* FIXME i#98:
	* + #2 should be {2, DR_SIZE(PORT_MESSAGE), R|CT, SYSARG_TYPE_PORT_MESSAGE}
	* + #4 should be {4, -5, R|WI|HT, SYSARG_TYPE_PORT_MESSAGE}
	* The issue is w/ synchronous calls where the same PORT_MESSAGE buffer is used
	* for both receive/send.
	*/
	{ { 0,0 },"NtAlpcSendWaitReceivePort", UNKNOWN, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(PORT_MESSAGE), SYSARG_NON_MEMARG, SYSARG_TYPE_PORT_MESSAGE },
		{ 3, DR_SIZE(ALPC_MESSAGE_ATTRIBUTES), R | WR | CT, DRSYS_TYPE_ALPC_MESSAGE_ATTRIBUTES },
		{ 4, -5, WI | HT, SYSARG_TYPE_PORT_MESSAGE },
		{ 5, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, DR_SIZE(ALPC_MESSAGE_ATTRIBUTES), R | WR | CT, DRSYS_TYPE_ALPC_MESSAGE_ATTRIBUTES },
		{ 7, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,syscall_AlpcSetInformation_info_size },"NtAlpcSetInformation", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_AlpcSetInformation_info
	},
	{ { 0,0 },"NtCancelIoFileEx", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), R | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 2, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
	}
	},
	{ { 0,0 },"NtCancelSynchronousIoFile", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(IO_STATUS_BLOCK), R | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
		{ 2, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
	}
	},
	{ { 0,0 },"NtClearAllSavepointsTransaction", UNKNOWN, RNTST, 1, },
	{ { 0,0 },"NtClearSavepointTransaction", UNKNOWN, RNTST, 2, },
	{ { 0,0 },"NtCommitComplete", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtCommitEnlistment", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtCommitTransaction", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtCreateEnlistment", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 4, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(NOTIFICATION_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
	}
	},
	{ { 0,0 },"NtCreateKeyTransacted", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 7, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreatePrivateNamespace", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtCreateResourceManager", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(GUID), R | HT, DRSYS_TYPE_STRUCT },
		{ 4, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtCreateTransaction", OK, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(GUID), R | HT, DRSYS_TYPE_STRUCT },
		{ 4, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 9, DR_SIZE(UNICODE_STRING), R | HT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { 0,0 },"NtCreateTransactionManager", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtCreateWorkerFactory", OK, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 4, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 5, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 6, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 8, WIN_SIZE(SIZE_T), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(SIZE_T), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtDeletePrivateNamespace", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtEnumerateTransactionObject", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(KTMOBJECT_TYPE), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, -3, R | WR | HT, DRSYS_TYPE_STRUCT },
		{ 2, -4, WI | HT, DRSYS_TYPE_STRUCT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtFlushInstallUILanguage", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(LANGID), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtFlushProcessWriteBuffers", OK, RNTST, 0, },
	{ { 0,0 },"NtFreezeRegistry", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtFreezeTransactions", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtGetMUIRegistryInfo", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, -1, WI | HT, DRSYS_TYPE_STRUCT },
	}
	},
	{ { 0,0 },"NtGetNextProcess", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtGetNextThread", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtGetNlsSectionPtr", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 3, WIN_SIZE(PVOID), WR | HT, DRSYS_TYPE_POINTER },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtGetNotificationResourceManager", OK, RNTST, 7,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, -2, WR | HT, DRSYS_TYPE_STRUCT },
		{ 1, -4, WI | HT, DRSYS_TYPE_STRUCT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG_PTR), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtInitializeNlsFiles", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(PVOID), WR | HT, DRSYS_TYPE_POINTER },
		{ 1, WIN_SIZE(LCID), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(LARGE_INTEGER), WR | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtIsUILanguageComitted", OK, RNTST, 0, },
	{ { 0,0 },"NtListTransactions", UNKNOWN, RNTST, 3, },
	{ { 0,0 },"NtMarshallTransaction", UNKNOWN, RNTST, 6, },
	{ { 0,0 },"NtOpenEnlistment", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(GUID), R | HT, DRSYS_TYPE_STRUCT },
		{ 4, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenKeyTransacted", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtOpenPrivateNamespace", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtOpenResourceManager", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 3, WIN_SIZE(GUID), R | HT, DRSYS_TYPE_STRUCT },
		{ 4, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenSession", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { 0,0 },"NtOpenTransaction", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, WIN_SIZE(GUID), R | HT, DRSYS_TYPE_STRUCT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtOpenTransactionManager", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 4, WIN_SIZE(GUID), R | HT, DRSYS_TYPE_STRUCT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtPrepareComplete", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtPrepareEnlistment", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtPrePrepareComplete", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtPrePrepareEnlistment", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtPropagationComplete", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -2, R | HT, DRSYS_TYPE_STRUCT },
	}
	},
	{ { 0,0 },"NtPropagationFailed", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
	}
	},
	{ { 0,0 },"NtPullTransaction", UNKNOWN, RNTST, 7, },
	{ { 0,syscall_QueryInformationEnlistment_info_size },"NtQueryInformationEnlistment", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryInformationEnlistment_info
	},
	{ { 0,syscall_QueryInformationResourceManager_info_size },"NtQueryInformationResourceManager", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryInformationResourceManager_info
	},
	{ { 0,syscall_QueryInformationTransaction_info_size },"NtQueryInformationTransaction", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_QueryInformationTransaction_info
	},
	{ { 0,syscall_QueryInformationTransactionManager_info_size },"NtQueryInformationTransactionManager", OK | SYSINFO_SECONDARY_TABLE, RNTST, 5,
	{
		{ 1, }
	},  (DR::drsys_sysnum_t *)syscall_QueryInformationTransactionManager_info
	},
	{ { 0,0 },"NtQueryInformationWorkerFactory", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(WORKERFACTORYINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, WR | HT, DRSYS_TYPE_STRUCT },
		{ 2, -4, WI | HT, DRSYS_TYPE_STRUCT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtQueryLicenseValue", UNKNOWN, RNTST, 5, },
	{ { 0,0 },"NtReadOnlyEnlistment", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtRecoverEnlistment", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
	}
	},
	{ { 0,0 },"NtRecoverResourceManager", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtRecoverTransactionManager", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtRegisterProtocolAddressInformation", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(CRM_PROTOCOL_ID), R | HT, DRSYS_TYPE_STRUCT },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -2, R | HT, DRSYS_TYPE_STRUCT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtReleaseCMFViewOwnership", OK, RNTST, 0, },
	{ { 0,0 },"NtReleaseWorkerFactoryWorker", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { 0,0 },"NtRemoveIoCompletionEx", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, -2, WR | SYSARG_SIZE_IN_ELEMENTS, DR_SIZE(FILE_IO_COMPLETION_INFORMATION) },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, sizeof(void*), WR | HT, DRSYS_TYPE_VOID },/* see i#1536 */
		{ 4, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 5, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtRollbackComplete", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	},
	},
	{ { 0,0 },"NtRollbackEnlistment", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtRollbackSavepointTransaction", UNKNOWN, RNTST, 2, },
	{ { 0,0 },"NtRollbackTransaction", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), SYSARG_INLINED, DRSYS_TYPE_BOOL },
	}
	},
	{ { 0,0 },"NtRollforwardTransactionManager", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtSavepointComplete", UNKNOWN, RNTST, 2, },
	{ { 0,0 },"NtSavepointTransaction", UNKNOWN, RNTST, 3, },
	{ { 0,syscall_SetInformationEnlistment_info_size },"NtSetInformationEnlistment", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_SetInformationEnlistment_info
	},
	{ { 0,syscall_SetInformationResourceManager_info_size },"NtSetInformationResourceManager", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_SetInformationResourceManager_info
	},
	{ { 0,syscall_SetInformationTransaction_info_size },"NtSetInformationTransaction", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_SetInformationTransaction_info
	},
	{ { 0,syscall_SetInformationTransactionManager_info_size },"NtSetInformationTransactionManager", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_SetInformationTransactionManager_info
	},
	{ { 0,0 },"NtSetInformationWorkerFactory", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(WORKERFACTORYINFOCLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 2, -3, R | HT, DRSYS_TYPE_STRUCT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtShutdownWorkerFactory", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LONG), R | WR | HT, DRSYS_TYPE_SIGNED_INT },
	}
	},
	{ { 0,0 },"NtSinglePhaseReject", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
	}
	},
	{ { 0,0 },"NtStartTm", OK, RNTST, 0, },
	{ { 0,0 },"NtThawRegistry", OK, RNTST, 0, },
	{ { 0,0 },"NtThawTransactions", OK, RNTST, 0, },
	{ { 0,0 },"NtTraceControl", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		/* The "{1, -2, R|HT, DRSYS_TYPE_STRUCT}" entry is specially handled */
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, WR | HT, DRSYS_TYPE_STRUCT },
		{ 3, -5, WI | HT, DRSYS_TYPE_STRUCT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_TraceControl
	},
	{ { 0,WIN7 },"NtWaitForWorkViaWorkerFactory", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(FILE_IO_COMPLETION_INFORMATION), WR | HT, DRSYS_TYPE_STRUCT },
	}
	},
	{ { WIN8,WIN8 },"NtWaitForWorkViaWorkerFactory", UNKNOWN, RNTST, 4, },
	{ { WIN81,0 },  "NtWaitForWorkViaWorkerFactory", UNKNOWN, RNTST, 5, },
	{ { 0,0 },"NtWorkerFactoryWorkerReady", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},

	/***************************************************/
	/* added in Windows Vista SP1 */
	/* XXX: add min OS version: but we have to distinguish the service packs! */
	{ { 0,0 },"NtRenameTransactionManager", OK, RNTST, 2,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, WIN_SIZE(GUID), R | HT, DRSYS_TYPE_STRUCT },
	}
	},
	{ { 0,0 },"NtReplacePartitionUnit", OK, RNTST, 3,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 1, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWow64CsrVerifyRegion", OK, RNTST, 2, },
	{ { 0,0 },"NtWow64WriteVirtualMemory64", OK, RNTST, 7,
	{
		{ 6, WIN_SIZE(ULONGLONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { 0,0 },"NtWow64CallFunction64", OK, RNTST, 7,
	{
		{ 3, -2, R },
		{ 5, -4, WR },
		{ 6, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},

	/***************************************************/
	/* added in Windows 7 */
	{ { WIN7,0 },"NtAllocateReserveObject", OK, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
	}
	},
	{ { WIN7,0 },"NtCreateProfileEx", OK, RNTST, 10,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_POINTER },
		{ 3, WIN_SIZE(SIZE_T), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, -6, R | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 7, DR_SIZE(KPROFILE_SOURCE), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 8, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 9, WIN_SIZE(GROUP_AFFINITY), R | HT, DRSYS_TYPE_STRUCT },
	}
	},
	{ { WIN7,0 },"NtDisableLastKnownGood", OK, RNTST, 0, },
	{ { WIN7,0 },"NtDrawText", OK, RNTST, 1,
	{
		{ 0, DR_SIZE(UNICODE_STRING), R | CT, SYSARG_TYPE_UNICODE_STRING },
	}
	},
	{ { WIN7,0 },"NtEnableLastKnownGood", OK, RNTST, 0, },
	{ { WIN7,0 },"NtNotifyChangeSession", OK, RNTST, 8,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, -7, R },
		{ 7, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { WIN7,0 },"NtOpenKeyTransactedEx", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), WR | HT, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ACCESS_MASK), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, DR_SIZE(OBJECT_ATTRIBUTES), R | CT, SYSARG_TYPE_OBJECT_ATTRIBUTES },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},
	{ { WIN7,0 },"NtQuerySecurityAttributesToken", UNKNOWN, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		/* XXX i#1537: Arg requires special handler function. */
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, WR | HT, DRSYS_TYPE_STRUCT },
		{ 3, -5, WI | HT, DRSYS_TYPE_STRUCT },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	/* One info class reads data, which is special-cased */
	{ { WIN7,0 },"NtQuerySystemInformationEx", OK | SYSINFO_RET_SMALL_WRITE_LAST, RNTST, 6,
	{
		{ 0, DR_SIZE(SYSTEM_INFORMATION_CLASS), SYSARG_INLINED, DRSYS_TYPE_SIGNED_INT },
		{ 1, -2, R },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, -4, WR },
		{ 3, -5, WI },
		{ 4, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), WR | HT, DRSYS_TYPE_UNSIGNED_INT },
	}, NULL // DCD &sysnum_QuerySystemInformationEx
	},
	{ { WIN7,0 },"NtQueueApcThreadEx", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, DR_SIZE(PKNORMAL_ROUTINE), SYSARG_INLINED, DRSYS_TYPE_FUNCTION },
		{ 3, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 5, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
	}
	},
	{ { WIN7,0 },"NtSerializeBoot", OK, RNTST, 0, },
	{ { WIN7,0 },"NtSetIoCompletionEx", OK, RNTST, 6,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 3, sizeof(void*), SYSARG_INLINED, DRSYS_TYPE_VOID },
		{ 4, DR_SIZE(NTSTATUS), SYSARG_INLINED, DRSYS_TYPE_NTSTATUS },
		{ 5, WIN_SIZE(ULONG_PTR), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	{ { WIN7,syscall_SetTimerEx_info_size },"NtSetTimerEx", OK | SYSINFO_SECONDARY_TABLE, RNTST, 4,
	{
		{ 1, }
	}, (DR::drsys_sysnum_t *)syscall_SetTimerEx_info
	},
	{ { WIN7,0 },"NtUmsThreadYield", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_VOID },
	}
	},
	{ { WIN7,0 },"NtWow64GetCurrentProcessorNumberEx", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(PROCESSOR_NUMBER), WR },
	}
	},
	{ { WIN7,WIN7 },"NtWow64InterlockedPopEntrySList", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(SLIST_HEADER), R | WR },
	}
	},

	/***************************************************/
	/* Added in Windows 8 */
	/* FIXME i#1153: fill in details */
	{ { WIN8,0 },"NtAddAtomEx", UNKNOWN, RNTST, 4, },
	{ { WIN8,0 },"NtAdjustTokenClaimsAndDeviceGroups", UNKNOWN, RNTST, 16, },
	{ { WIN8,0 },"NtAlertThreadByThreadId", UNKNOWN, RNTST, 1, },
	{ { WIN8,0 },"NtAlpcConnectPortEx", UNKNOWN, RNTST, 11, },
	{ { WIN8,0 },"NtAssociateWaitCompletionPacket", UNKNOWN, RNTST, 8, },
	{ { WIN8,0 },"NtCancelWaitCompletionPacket", UNKNOWN, RNTST, 2, },
	{ { WIN8,0 },"NtCreateDirectoryObjectEx", UNKNOWN, RNTST, 5, },
	{ { WIN8,0 },"NtCreateIRTimer", UNKNOWN, RNTST, 2, },
	{ { WIN8,0 },"NtCreateLowBoxToken", UNKNOWN, RNTST, 9, },
	{ { WIN8,0 },"NtCreateTokenEx", UNKNOWN, RNTST, 17, },
	{ { WIN8,0 },"NtCreateWaitCompletionPacket", UNKNOWN, RNTST, 3, },
	{ { WIN8,0 },"NtCreateWnfStateName", UNKNOWN, RNTST, 7, },
	{ { WIN8,0 },"NtDeleteWnfStateData", UNKNOWN, RNTST, 2, },
	{ { WIN8,0 },"NtDeleteWnfStateName", UNKNOWN, RNTST, 1, },
	{ { WIN8,0 },"NtFilterBootOption", UNKNOWN, RNTST, 5, },
	{ { WIN8,0 },"NtFilterTokenEx", UNKNOWN, RNTST, 14, },
	{ { WIN8,0 },"NtFlushBuffersFileEx", OK, RNTST, 5,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 2, -3, R | HT, DRSYS_TYPE_STRUCT },
		{ 3, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 4, DR_SIZE(IO_STATUS_BLOCK), WR | HT, DRSYS_TYPE_IO_STATUS_BLOCK },
	}
	},
	{ { WIN8,0 },"NtGetCachedSigningLevel", UNKNOWN, RNTST, 6, },
	{ { WIN8,0 },"NtQueryWnfStateData", UNKNOWN, RNTST, 6, },
	{ { WIN8,0 },"NtQueryWnfStateNameInformation", UNKNOWN, RNTST, 5, },
	{ { WIN8,0 },"NtSetCachedSigningLevel", UNKNOWN, RNTST, 5, },
	{ { WIN8,0 },"NtSetInformationVirtualMemory", UNKNOWN, RNTST, 6, },
	{ { WIN8,0 },"NtSetIRTimer", UNKNOWN, RNTST, 2, },
	{ { WIN8,0 },"NtSubscribeWnfStateChange", UNKNOWN, RNTST, 4, },
	{ { WIN8,0 },"NtUnmapViewOfSectionEx", UNKNOWN, RNTST, 3,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(PVOID), SYSARG_INLINED, DRSYS_TYPE_UNKNOWN },
		/* FIXME i#1153: what is the 3rd arg?  Observed to be 0. */
	}
	},
	{ { WIN8,0 },"NtUnsubscribeWnfStateChange", UNKNOWN, RNTST, 1, },
	{ { WIN8,0 },"NtUpdateWnfStateData", UNKNOWN, RNTST, 7, },
	{ { WIN8,0 },"NtWaitForAlertByThreadId", UNKNOWN, RNTST, 2, },
	{ { WIN8,WIN8 },"NtWaitForWnfNotifications", UNKNOWN, RNTST, 2, },
	{ { WIN8,0 },"NtWow64AllocateVirtualMemory64", UNKNOWN, RNTST, 7,
	{
		/* XXX: I'm asuming the base and size pointers point at 64-bit values */
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(ULONGLONG), R | WR | HT, DRSYS_TYPE_POINTER },
		{ 2, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		/* FIXME i#1153: what is 4th arg?  Top of ZeroBits?*/
		{ 4, WIN_SIZE(ULONGLONG), R | WR | HT, DRSYS_TYPE_UNSIGNED_INT },
		{ 5, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
		{ 6, WIN_SIZE(ULONG), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},

	/***************************************************/
	/* Added in Windows 8.1 */
	/* FIXME i#1360: fill in details */
	{ { WIN81,0 },"NtCancelTimer2", OK, RNTST, 2,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(BOOLEAN), WR | HT, DRSYS_TYPE_BOOL },
	}
	},
	{ { WIN81,0 },"NtCreateTimer2", UNKNOWN, RNTST, 5, },
	{ { WIN81,0 },"NtGetCompleteWnfStateSubscription", UNKNOWN, RNTST, 6, },
	{ { WIN81,0 },"NtSetTimer2", OK, RNTST, 4,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
		{ 1, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 2, WIN_SIZE(LARGE_INTEGER), R | HT, DRSYS_TYPE_LARGE_INTEGER },
		{ 3, DR_SIZE(T2_SET_PARAMETERS), R | CT, SYSARG_TYPE_T2_SET_PARAMETERS },
	}
	},
	{ { WIN81,0 },"NtSetWnfProcessNotificationEvent", UNKNOWN, RNTST, 1,
	{
		{ 0, WIN_SIZE(HANDLE), SYSARG_INLINED, DRSYS_TYPE_HANDLE },
	}
	},

	/***************************************************/
	/* Added in Windows 10 */
	/* FIXME i#1750: fill in details */
	{ { WIN10,0 },"NtAlpcImpersonateClientContainerOfPort", UNKNOWN, RNTST, 3, },
	{ { WIN10,0 },"NtCompareObjects", UNKNOWN, RNTST, 2, },
	{ { WIN10,0 },"NtCreatePartition", UNKNOWN, RNTST, 5, },
	{ { WIN10,0 },"NtGetCurrentProcessorNumberEx", UNKNOWN, RNTST, 1, },
	{ { WIN10,0 },"NtManagePartition", UNKNOWN, RNTST, 5, },
	{ { WIN10,0 },"NtOpenPartition", UNKNOWN, RNTST, 3, },
	{ { WIN10,0 },"NtRevertContainerImpersonation", UNKNOWN, RNTST, 0, },
	{ { WIN10,0 },"NtSetInformationSymbolicLink", UNKNOWN, RNTST, 4, },
	{ { WIN10,0 },"NtWow64IsProcessorFeaturePresent", OK, RNTST, 1,
	{
		{ 0, WIN_SIZE(DWORD), SYSARG_INLINED, DRSYS_TYPE_UNSIGNED_INT },
	}
	},
	/* Added in Windows 10 1511 */
	/* FIXME i#1750: fill in details */
	{ { WIN11,0 },"NtCreateEnclave", UNKNOWN, RNTST, 9, },
	{ { WIN11,0 },"NtInitializeEnclave", UNKNOWN, RNTST, 5, },
	{ { WIN11,0 },"NtLoadEnclaveData", UNKNOWN, RNTST, 9, },
	/* Added in Windows 10 1607 */
	/* FIXME i#1750: fill in details */
	{ { WIN12,0 },"NtCommitRegistryTransaction", UNKNOWN, RNTST, 2, },
	{ { WIN12,0 },"NtCreateRegistryTransaction", UNKNOWN, RNTST, 4, },
	{ { WIN12,0 },"NtOpenRegistryTransaction", UNKNOWN, RNTST, 3, },
	{ { WIN12,0 },"NtQuerySecurityPolicy", UNKNOWN, RNTST, 6, },
	{ { WIN12,0 },"NtRollbackRegistryTransaction", UNKNOWN, RNTST, 2, },
	{ { WIN12,0 },"NtSetCachedSigningLevel2", UNKNOWN, RNTST, 6, },
	/* Added in Windows 10 1703 */
	/* FIXME i#1750: fill in details */
	{ { WIN13,0 },"NtAcquireProcessActivityReference", UNKNOWN, RNTST, 3, },
	{ { WIN13,0 },"NtCompareSigningLevels", UNKNOWN, RNTST, 2, },
	{ { WIN13,0 },"NtConvertBetweenAuxiliaryCounterAndPerformanceCounter,NONE,", UNKNOWN, RNTST, 1, },
	{ { WIN13,0 },"NtLoadHotPatch", UNKNOWN, RNTST, 2, },
	{ { WIN13,0 },"NtQueryAuxiliaryCounterFrequency", UNKNOWN, RNTST, 1, },
	{ { WIN13,0 },"NtQueryInformationByName", UNKNOWN, RNTST, 5, },
	/* Added in Windows 10 1709 */
	/* FIXME i#1750: fill in details */
	{ { WIN14,0 },"NtCallEnclave", UNKNOWN, RNTST, 4, },
	{ { WIN14,0 },"NtNotifyChangeDirectoryFileEx", UNKNOWN, RNTST, 10, },
	{ { WIN14,0 },"NtQueryDirectoryFileEx", UNKNOWN, RNTST, 10, },
	{ { WIN14,0 },"NtTerminateEnclave", UNKNOWN, RNTST, 2, },
};
int syscallNumber = (sizeof(syscall_ntdll_info) / sizeof(syscall_ntdll_info[0]));

#include "../Pyrebox_libcalls.h"

libcall_info_t clfsw32_info[] = {
	{ "HandleLogFull",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReadLogArchiveMetadata",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvArchiveContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cbOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cbBytesToRead", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbReadBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "pcbBytesRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CloseAndResetLogFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TerminateLogArchive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvArchiveContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ReserveAndAppendLog",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "rgWriteEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_WRITE_ENTRY", 64, IN },
		{2, "cWriteEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "plsnUndoNext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{4, "plsnPrevious", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{5, "cReserveRecords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "rgcbReservation", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{7, "fFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{9, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "GetLogReservationInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pcbRecordNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pcbUserReservation", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{3, "pcbCommitReservation", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "LsnNull",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "TerminateReadLog",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvCursorContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsnCreate",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct, "_CLS_LSN", 64, INOUT },
		{0, "cidContainer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "offBlock", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cRecord", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateLogFile",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszLogFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwShareMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "psaLogFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{4, "fCreateDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "fFlagsAndAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsnGreater",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "plsn1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{1, "plsn2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "DeregisterManageableLogClient",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetEndOfLog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "plsnEnd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{2, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "RemoveLogContainer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszContainerPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fForce", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "LsnIncrement",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct, "_CLS_LSN", 64, INOUT },
		{0, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "AdvanceLogBase",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "plsnBase", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{2, "fFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "InstallLogPolicy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLFS_MGMT_POLICY", 192, IN },
	}
	},
	{ "LsnBlockOffset",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "ScanLogContainers",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcxScan", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_SCAN_CONTEXT", 256, INOUT },
		{1, "eScanMode", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "LsnInvalid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "LsnContainer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "ValidateLog",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszLogFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "psaLogFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{2, "pinfoBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_INFORMATION", 960, INOUT },
		{3, "pcbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetLogIoStatistics",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvStatsBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "cbStatsBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "eStatsClass", NKT_DBOBJCLASS_Enumeration, "_CLFS_IOSTATS_CLASS", 32, IN },
		{4, "pcbStatsWritten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "AddLogContainerSet",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cContainer", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "pcbContainer", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{3, "rgwszContainerPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{4, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FlushLogToLsn",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshalContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "plsnFlush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{2, "plsnLastFlushed", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{3, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "DeleteLogByHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PrepareLogArchive",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszBaseLogFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "plsnLow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{4, "plsnHigh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{5, "pcActualLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "poffBaseLogFileData", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{7, "pcbBaseLogFileLength", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{8, "plsnBase", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{9, "plsnLast", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{10, "plsnCurrentArchiveTail", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{11, "ppvArchiveContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "QueryLogPolicy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ePolicyType", NKT_DBOBJCLASS_Enumeration, "_CLFS_MGMT_POLICY_TYPE", 32, IN },
		{2, "pPolicyBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLFS_MGMT_POLICY", 192, INOUT },
		{3, "pcbPolicyBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "LsnRecordSequence",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "GetLogFileInformation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pinfoBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_INFORMATION", 960, INOUT },
		{2, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RemoveLogContainerSet",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cContainer", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "rgwszContainerPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "fForce", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "TruncateLog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "plsnEnd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{2, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "CreateLogContainerScanContext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cFromContainer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cContainers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "eScanMode", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "pcxScan", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_SCAN_CONTEXT", 256, INOUT },
		{5, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "SetLogFileSizeWithPolicy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pDesiredSize", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{2, "pResultingSize", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "ReadLogRestartArea",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ppvRestartBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{2, "pcbRestartBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{4, "ppvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{5, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "RegisterManageableLogClient",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCallbacks", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LOG_MANAGEMENT_CALLBACKS", 128, IN },
	}
	},
	{ "ReadPreviousLogRestartArea",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvReadContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ppvRestartBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{2, "pcbRestartBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "plsnRestart", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{4, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "CreateLogMarshallingArea",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pfnAllocBuffer", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pfnFreeBuffer", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pvBlockAllocContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbMarshallingBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "cMaxWriteBuffers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "cMaxReadBuffers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ppvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "GetLogContainerName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cidLogicalContainer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwstrContainerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "cLenContainerName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcActualLenContainerName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FreeReservedLog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "cReservedRecords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbAdjustment", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "DeleteLogMarshallingArea",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetLogArchiveTail",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "plsnArchiveTail", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{2, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "AddLogContainer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcbContainer", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{2, "pwszContainerPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "AllocReservedLog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "cReservedRecords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbAdjustment", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "DeleteLogFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszLogFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetNextLogArchiveExtent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvArchiveContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "rgadExtent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_ARCHIVE_DESCRIPTOR", 4736, INOUT },
		{2, "cDescriptors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcDescriptorsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetLogArchiveMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eMode", NKT_DBOBJCLASS_Enumeration, "_CLFS_LOG_ARCHIVE_MODE", 32, IN },
	}
	},
	{ "LsnLess",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "plsn1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{1, "plsn2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "ReserveAndAppendLogAligned",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "rgWriteEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_WRITE_ENTRY", 64, IN },
		{2, "cWriteEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cbEntryAlignment", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "plsnUndoNext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{5, "plsnPrevious", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{6, "cReserveRecords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "rgcbReservation", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{8, "fFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "plsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{10, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "RemoveLogPolicy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ePolicyType", NKT_DBOBJCLASS_Enumeration, "_CLFS_MGMT_POLICY_TYPE", 32, IN },
	}
	},
	{ "AlignReservedLog",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "cReservedRecords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgcbReservation", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{3, "pcbAlignReservation", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "ReadLogNotification",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pNotification", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLFS_MGMT_NOTIFICATION", 192, INOUT },
		{2, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "ReadLogRecord",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "plsnFirst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{2, "eContextMode", NKT_DBOBJCLASS_Enumeration, "_CLFS_CONTEXT_MODE", 32, IN },
		{3, "ppvReadBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{4, "pcbReadBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "peRecordType", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{6, "plsnUndoNext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{7, "plsnPrevious", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{8, "ppvReadContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{9, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "RegisterForLogWriteNotification",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbThreshold", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WriteLogRestartArea",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "pvRestartBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cbRestartBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "plsnBase", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{4, "fFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcbWritten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "plsnNext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{7, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "ReadNextLogRecord",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvReadContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "ppvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{2, "pcbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "peRecordType", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "plsnUser", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{5, "plsnUndoNext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{6, "plsnPrevious", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{7, "plsnRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, INOUT },
		{8, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "DumpLogRecords",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszLogFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fRecordType", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "plsnStart", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{3, "plsnEnd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{4, "pstrmOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_iobuf", 256, IN },
		{5, "pfnPrintRecord", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pfnAllocBlock", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "pfnFreeBlock", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "pvBlockAllocContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{9, "cbBlock", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "cMaxBlocks", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsnEqual",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "plsn1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{1, "plsn2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
	}
	},
	{ "LogTailAdvanceFailure",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReason", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlushLogBuffers",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvMarshal", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
};

int clfsw32arraySize = (sizeof(clfsw32_info) / sizeof(clfsw32_info[0]));
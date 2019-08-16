#include "../Pyrebox_libcalls.h"

libcall_info_t txfw32_info[] = {
	{ "TxfLogReadRecords",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TxfLogContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "BytesUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "RecordCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TxfLogCreateRangeReadContext",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LogPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "BeginningLsn", NKT_DBOBJCLASS_Struct, "_CLS_LSN", 64, IN },
		{2, "EndingLsn", NKT_DBOBJCLASS_Struct, "_CLS_LSN", 64, IN },
		{3, "BeginningVirtualClock", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{4, "EndingVirtualClock", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{5, "RecordTypeMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "TxfLogContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "TxfGetThreadMiniVersionForCreate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "MiniVersion", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "TxfReadMetadataInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TxfFileId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TXF_ID", 128, IN },
		{2, "LastLsn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLS_LSN", 64, IN },
		{3, "TransactionState", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "LockingTransaction", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "TxfLogRecordGetGenericType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RecordBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RecordBufferLengthInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "GenericType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "VirtualClock", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
	}
	},
	{ "TxfLogDestroyReadContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TxfLogContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "TxfLogRecordGetFileName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RecordBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RecordBufferLengthInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "NameBufferLengthInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "TxfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TXF_ID", 128, IN },
	}
	},
	{ "TxfSetThreadMiniVersionForCreate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "MiniVersion", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "TxfLogCreateFileReadContext",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LogPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "BeginningLsn", NKT_DBOBJCLASS_Struct, "_CLS_LSN", 64, IN },
		{2, "EndingLsn", NKT_DBOBJCLASS_Struct, "_CLS_LSN", 64, IN },
		{3, "TxfFileId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TXF_ID", 128, IN },
		{4, "TxfLogContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
};

int txfw32arraySize = (sizeof(txfw32_info) / sizeof(txfw32_info[0]));
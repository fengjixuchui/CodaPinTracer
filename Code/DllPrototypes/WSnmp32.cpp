#include "../Pyrebox_libcalls.h"

libcall_info_t WSnmp32_info[] = {
	{ "SnmpGetVendorInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vendorInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiVENDORINFO", 1568, INOUT },
	}
	},
	{ "SnmpRecvMsg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "srcEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "dstEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "context", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "PDU", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpFreeVbl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vbl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpRegister",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "srcEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dstEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "context", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "notification", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, IN },
		{5, "state", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpFreePdu",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "PDU", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpSetRetry",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPolicyRetry", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpStrToOid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dstOID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, INOUT },
	}
	},
	{ "SnmpListen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpGetRetry",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPolicyRetry", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "nActualRetry", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpSendMsg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "srcEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dstEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "context", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PDU", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpCleanup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SnmpGetPduData",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "PDU", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PDU_type", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "request_id", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "error_status", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "error_index", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "varbindlist", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpGetTimeout",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPolicyTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "nActualTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpOidCompare",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "xOID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, IN },
		{1, "yOID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, IN },
		{2, "maxlen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpStartup",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nMajorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "nMinorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "nLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "nTranslateMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "nRetransmitMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpSetPduData",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "PDU", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PDU_type", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "request_id", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "non_repeaters", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "max_repetitions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "varbindlist", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SnmpGetLastError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpEntityToStr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "entity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "SnmpSetTimeout",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPolicyTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpStrToEntity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SnmpListenEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nUseEntityAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpCancelMsg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "reqId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpDecodeMsg",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "srcEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "dstEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "context", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pdu", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "msgBufDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOCTETS", 64, IN },
	}
	},
	{ "SnmpDuplicatePdu",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PDU", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpStrToContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "string", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOCTETS", 64, IN },
	}
	},
	{ "SnmpCreatePdu",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PDU_type", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "request_id", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "error_status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "error_index", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "varbindlist", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpDuplicateVbl",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "vbl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpCreateSession",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lpClientData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SnmpCreateVbl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiVALUE", 96, IN },
	}
	},
	{ "SnmpGetVb",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vbl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, INOUT },
		{3, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiVALUE", 96, INOUT },
	}
	},
	{ "SnmpContextToStr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "context", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "string", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOCTETS", 64, INOUT },
	}
	},
	{ "SnmpSetTranslateMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nTranslateMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpOidToStr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "srcOID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "SnmpFreeDescriptor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "syntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "descriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOCTETS", 64, IN },
	}
	},
	{ "SnmpGetTranslateMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nTranslateMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpCountVbl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vbl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpOpen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpCleanupEx",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SnmpSetPort",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPort", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpEncodeMsg",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "srcEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dstEntity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "context", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pdu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "msgBufDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOCTETS", 64, INOUT },
	}
	},
	{ "SnmpDeleteVb",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vbl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpGetRetransmitMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nRetransmitMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpFreeEntity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "entity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpSetVb",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vbl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, IN },
		{3, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiVALUE", 96, IN },
	}
	},
	{ "SnmpClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpStartupEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nMajorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "nMinorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "nLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "nTranslateMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "nRetransmitMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpSetRetransmitMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nRetransmitMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpOidCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "srcOID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, IN },
		{1, "dstOID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "smiOID", 64, INOUT },
	}
	},
	{ "SnmpFreeContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "context", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int WSnmp32arraySize = (sizeof(WSnmp32_info) / sizeof(WSnmp32_info[0]));
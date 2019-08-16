#include "../Pyrebox_libcalls.h"

libcall_info_t SnmpAPI_info[] = {
	{ "SnmpSvcSetLogLevel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "nLogLevel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpUtilDbgPrint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "nLogLevel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "szFormat", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SnmpUtilMemAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "nBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpUtilPrintOid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Oid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
	}
	},
	{ "SnmpUtilIdsToA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "Ids", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "IdLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpUtilOctetsFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pOctets", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, IN },
	}
	},
	{ "SnmpUtilOidFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pOid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
	}
	},
	{ "SnmpUtilOctetsNCmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOctets1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, IN },
		{1, "pOctets2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, IN },
		{2, "nChars", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpUtilOidCmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOid1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
		{1, "pOid2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
	}
	},
	{ "SnmpSvcGetUptime",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SnmpUtilPrintAsnAny",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pAny", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnAny", 128, IN },
	}
	},
	{ "SnmpUtilVarBindListFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pVbl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBindList", 64, INOUT },
	}
	},
	{ "SnmpUtilOidCpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOidDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, INOUT },
		{1, "pOidSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
	}
	},
	{ "SnmpUtilMemFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pMem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SnmpUtilMemReAlloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pMem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "nBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpUtilVarBindListCpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVblDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBindList", 64, INOUT },
		{1, "pVblSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBindList", 64, IN },
	}
	},
	{ "SnmpUtilOidToA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "Oid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
	}
	},
	{ "SnmpUtilVarBindFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pVb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBind", 192, IN },
	}
	},
	{ "SnmpUtilVarBindCpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVbDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBind", 192, INOUT },
		{1, "pVbSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBind", 192, IN },
	}
	},
	{ "SnmpUtilOidNCmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOid1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
		{1, "pOid2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
		{2, "nSubIds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpUtilOctetsCmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOctets1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, IN },
		{1, "pOctets2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, IN },
	}
	},
	{ "SnmpUtilOctetsCpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOctetsDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, INOUT },
		{1, "pOctetsSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, IN },
	}
	},
	{ "SnmpUtilAsnAnyFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pAny", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnAny", 128, IN },
	}
	},
	{ "SnmpSvcSetLogType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "nLogType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpUtilOidAppend",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOidDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, INOUT },
		{1, "pOidSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
	}
	},
	{ "SnmpUtilAsnAnyCpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAnyDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnAny", 128, INOUT },
		{1, "pAnySrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnAny", 128, IN },
	}
	},
};

int SnmpAPIarraySize = (sizeof(SnmpAPI_info) / sizeof(SnmpAPI_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t MgmtAPI_info[] = {
	{ "SnmpMgrOidToStr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "oid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, IN },
		{1, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
	}
	},
	{ "SnmpMgrGetTrapEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "enterprise", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, INOUT },
		{1, "agentAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, INOUT },
		{2, "sourceAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, INOUT },
		{3, "genericTrap", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "specificTrap", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "community", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, INOUT },
		{6, "timeStamp", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "variableBindings", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBindList", 64, INOUT },
	}
	},
	{ "SnmpMgrRequest",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "requestType", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "variableBindings", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBindList", 64, INOUT },
		{3, "errorStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "errorIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpMgrCtl",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwCtlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpvInBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbInBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpvOUTBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "cbOUTBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{6, "lpcbBytesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SnmpMgrOpen",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "lpAgentAddress", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpAgentCommunity", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nTimeOut", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nRetries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SnmpMgrGetTrap",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "enterprise", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, INOUT },
		{1, "IPAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnOctetString", 96, INOUT },
		{2, "genericTrap", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "specificTrap", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "timeStamp", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "variableBindings", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SnmpVarBindList", 64, INOUT },
	}
	},
	{ "SnmpMgrClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "session", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SnmpMgrStrToOid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "oid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AsnObjectIdentifier", 64, INOUT },
	}
	},
	{ "SnmpMgrTrapListen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phTrapAvailable", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
};

int MgmtAPIarraySize = (sizeof(MgmtAPI_info) / sizeof(MgmtAPI_info[0]));
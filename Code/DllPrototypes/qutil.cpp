#include "../Pyrebox_libcalls.h"

libcall_info_t qutil_info[] = {
	{ "FreeNetworkSoH",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "networkSoh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagNetworkSoH", 64, IN },
	}
	},
	{ "UninitializeNapAgentNotifier",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "type", NKT_DBOBJCLASS_Enumeration, "tagNapNotifyType", 32, IN },
	}
	},
	{ "AllocFixupInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fixupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagFixupInfo", 160, IN },
		{1, "countResultCodes", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "FreeIsolationInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "isolationInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagIsolationInfo", 160, IN },
	}
	},
	{ "FreeIsolationInfoEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "isolationInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagIsolationInfoEx", 192, IN },
	}
	},
	{ "InitializeNapAgentNotifier",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "type", NKT_DBOBJCLASS_Enumeration, "tagNapNotifyType", 32, IN },
		{1, "hNotifyEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DllGetClassObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FreeConnections",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "connections", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagConnections", 64, IN },
	}
	},
	{ "FreeSoHAttributeValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "type", NKT_DBOBJCLASS_Enumeration, "tagSoHAttributeType", 32, IN },
		{1, "value", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagSoHAttributeValue", 96, IN },
	}
	},
	{ "FreeFixupInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "fixupInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFixupInfo", 160, IN },
	}
	},
	{ "AllocConnections",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "connections", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagConnections", 64, IN },
		{1, "connectionsCount", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "FreeCountedString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "countedString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCountedString", 64, IN },
	}
	},
	{ "FreeSoH",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "soh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSoH", 64, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "FreeNapComponentRegistrationInfoArray",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "count", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "info", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagNapComponentRegistrationInfo", 640, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "FreeSystemHealthAgentState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "state", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSystemHealthAgentState", 288, IN },
	}
	},
	{ "AllocCountedString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "countedString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagCountedString", 64, IN },
		{1, "string", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FreePrivateData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "privateData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPrivateData", 64, IN },
	}
	},
};

int qutilarraySize = (sizeof(qutil_info) / sizeof(qutil_info[0]));
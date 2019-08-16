#include "../Pyrebox_libcalls.h"

libcall_info_t DhcpCSvc_info[] = {
	{ "McastApiStartup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Version", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DhcpGetOriginalSubnetMask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sAdapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwSubnetMask", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DhcpDeRegisterParamChange",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Event", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DhcpCApiInitialize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Version", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "McastRequestAddress",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AddrFamily", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pRequestID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_CLIENT_UID", 64, IN },
		{2, "pScopeCtx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_SCOPE_CTX", 384, IN },
		{3, "pAddrRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_LEASE_REQUEST", 320, IN },
		{4, "pAddrResponse", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_LEASE_RESPONSE", 256, INOUT },
	}
	},
	{ "McastReleaseAddress",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AddrFamily", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pRequestID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_CLIENT_UID", 64, IN },
		{2, "pReleaseRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_LEASE_REQUEST", 320, IN },
	}
	},
	{ "McastEnumerateScopes",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AddrFamily", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "ReQuery", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pScopeList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_SCOPE_ENTRY", 608, INOUT },
		{3, "pScopeLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pScopeCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpCApiCleanup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "DhcpEnumClasses",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClassInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLASS_INFO_ARRAY", 64, INOUT },
		{5, "nRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "nTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpRequestParams",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "AdapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ClassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPCAPI_CLASSID", 96, IN },
		{4, "SendParams", NKT_DBOBJCLASS_Struct, "_DHCPCAPI_PARAMS_ARARAY", 64, IN },
		{5, "RecdParams", NKT_DBOBJCLASS_Struct, "_DHCPCAPI_PARAMS_ARARAY", 64, INOUT },
		{6, "Buffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "pSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "RequestIdStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpRegisterParamChange",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "AdapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ClassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPCAPI_CLASSID", 96, IN },
		{4, "Params", NKT_DBOBJCLASS_Struct, "_DHCPCAPI_PARAMS_ARARAY", 64, IN },
		{5, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "McastApiCleanup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "DhcpRemoveDNSRegistrations",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DhcpUndoRequestParams",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "AdapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "RequestIdStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "McastGenUID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pRequestID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_CLIENT_UID", 64, IN },
	}
	},
	{ "McastRenewAddress",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AddrFamily", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pRequestID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_CLIENT_UID", 64, IN },
		{2, "pRenewRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_LEASE_REQUEST", 320, IN },
		{3, "pRenewResponse", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MCAST_LEASE_RESPONSE", 256, INOUT },
	}
	},
};

int DhcpCSvcarraySize = (sizeof(DhcpCSvc_info) / sizeof(DhcpCSvc_info[0]));
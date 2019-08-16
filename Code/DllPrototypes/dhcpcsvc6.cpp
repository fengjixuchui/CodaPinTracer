#include "../Pyrebox_libcalls.h"

libcall_info_t dhcpcsvc6_info[] = {
	{ "Dhcpv6RequestPrefix",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "adapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6CAPI_CLASSID", 96, IN },
		{2, "prefixleaseInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6PrefixLeaseInformation", 512, INOUT },
		{3, "pdwTimeToWait", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "Dhcpv6RequestParams",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "forceNewInform", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "adapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "classId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6CAPI_CLASSID", 96, IN },
		{4, "recdParams", NKT_DBOBJCLASS_Struct, "_DHCPV6CAPI_PARAMS_ARRAY", 64, IN },
		{5, "buffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "pSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "Dhcpv6ReleasePrefix",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "adapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "classId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6CAPI_CLASSID", 96, IN },
		{2, "leaseInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6PrefixLeaseInformation", 512, IN },
	}
	},
	{ "Dhcpv6RenewPrefix",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "adapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6CAPI_CLASSID", 96, IN },
		{2, "prefixleaseInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6PrefixLeaseInformation", 512, INOUT },
		{3, "pdwTimeToWait", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "bValidatePrefix", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int dhcpcsvc6arraySize = (sizeof(dhcpcsvc6_info) / sizeof(dhcpcsvc6_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t drttransport_info[] = {
	{ "DrtDeleteIpv6UdpTransport",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTransport", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DrtCreateIpv6UdpTransport",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "drt_scope_tag", 32, IN },
		{1, "dwScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwLocalityThreshold", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pwPort", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "phTransport", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
};

int drttransportarraySize = (sizeof(drttransport_info) / sizeof(drttransport_info[0]));
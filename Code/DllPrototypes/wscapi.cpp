#include "../Pyrebox_libcalls.h"

libcall_info_t wscapi_info[] = {
	{ "WscUnRegisterChanges",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hRegistrationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WscRegisterForChanges",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "phCallbackRegistration", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "lpCallbackAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WscGetSecurityProviderHealth",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Providers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pHealth", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_WSC_SECURITY_PROVIDER_HEALTH", 32, IN },
	}
	},
};

int wscapiarraySize = (sizeof(wscapi_info) / sizeof(wscapi_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t drtprov_info[] = {
	{ "DrtCreateDerivedKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pLocalCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "drt_data_tag", 64, IN },
	}
	},
	{ "DrtDeletePnrpBootstrapResolver",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pResolver", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "drt_bootstrap_provider_tag", 256, IN },
	}
	},
	{ "DrtDeleteDnsBootstrapResolver",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pResolver", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "drt_bootstrap_provider_tag", 256, IN },
	}
	},
	{ "DrtDeleteDerivedKeySecurityProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pSecurityProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "drt_security_provider_tag", 448, IN },
	}
	},
	{ "DrtCreateDnsBootstrapResolver",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "port", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pwszAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppModule", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "drt_bootstrap_provider_tag", 256, IN },
	}
	},
	{ "DrtCreateDerivedKeySecurityProvider",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRootCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pLocalCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{2, "ppSecurityProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "drt_security_provider_tag", 448, IN },
	}
	},
	{ "DrtDeleteNullSecurityProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pSecurityProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "drt_security_provider_tag", 448, IN },
	}
	},
	{ "DrtCreateNullSecurityProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppSecurityProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "drt_security_provider_tag", 448, IN },
	}
	},
	{ "DrtCreatePnrpBootstrapResolver",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fPublish", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pwzPeerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwzCloudName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pwzPublishingIdentity", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ppResolver", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "drt_bootstrap_provider_tag", 256, IN },
	}
	},
};

int drtprovarraySize = (sizeof(drtprov_info) / sizeof(drtprov_info[0]));
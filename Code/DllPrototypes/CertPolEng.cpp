#include "../Pyrebox_libcalls.h"

libcall_info_t CertPolEng_info[] = {
	{ "PstGetTrustAnchors",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pTargetName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "cCriteria", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgpCriteria", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SELECT_CRITERIA", 96, IN },
		{3, "ppTrustedIssuers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgContext_IssuerListInfoEx", 64, IN },
	}
	},
	{ "PstValidate",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pTargetName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "bIsClient", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pRequestedIssuancePolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_USAGE_MATCH", 96, IN },
		{3, "phAdditionalCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{5, "pProvGUID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "PstGetCertificates",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pTargetName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "cCriteria", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgpCriteria", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_SELECT_CRITERIA", 96, IN },
		{3, "bIsClient", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pdwCertChainContextCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ppCertChainContexts", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN_CONTEXT", 448, IN },
	}
	},
	{ "PstMapCertificate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "pTokenInformationType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_LSA_TOKEN_INFORMATION_TYPE", 32, IN },
		{2, "ppTokenInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "PstGetUserNameForCertificate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCertContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "UserName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
	}
	},
	{ "PstAcquirePrivateKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
	}
	},
};

int CertPolEngarraySize = (sizeof(CertPolEng_info) / sizeof(CertPolEng_info[0]));
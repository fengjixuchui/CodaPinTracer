#include "../Pyrebox_libcalls.h"

libcall_info_t CryptNet_info[] = {
	{ "CryptInstallCancelRetrieval",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfnCancel", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CryptCancelAsyncRetrieval",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAsyncRetrieval", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptUninstallCancelRetrieval",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptGetTimeValidObject",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszTimeValidOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pvPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pIssuer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{3, "pftValidFor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{7, "pCredentials", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_CREDENTIALS", 96, IN },
		{8, "pExtraInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO", 224, INOUT },
	}
	},
	{ "CryptFlushTimeValidObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszFlushTimeValidOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pvPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pIssuer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptGetObjectUrl",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszUrlOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pvPara", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pUrlArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_URL_ARRAY", 64, INOUT },
		{4, "pcbUrlArray", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pUrlInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_URL_INFO", 128, INOUT },
		{6, "pcbUrlInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptRetrieveObjectByUrlA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszObjectOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwRetrievalFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{5, "hAsyncRetrieve", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pCredentials", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_CREDENTIALS", 96, IN },
		{7, "pvVerify", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "pAuxInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_RETRIEVE_AUX_INFO", 320, IN },
	}
	},
	{ "CryptRetrieveObjectByUrlW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszObjectOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwRetrievalFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{5, "hAsyncRetrieve", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pCredentials", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_CREDENTIALS", 96, IN },
		{7, "pvVerify", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "pAuxInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_RETRIEVE_AUX_INFO", 320, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
};

int CryptNetarraySize = (sizeof(CryptNet_info) / sizeof(CryptNet_info[0]));
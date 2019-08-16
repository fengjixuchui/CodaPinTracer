#include "../Pyrebox_libcalls.h"

libcall_info_t WinTrust_info[] = {
	{ "WintrustGetRegPolicyFlags",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pdwPolicyFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WintrustSetRegPolicyFlags",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwPolicyFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATPutAttrInfo",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCatMember", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, IN },
		{2, "pwszReferenceTag", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwAttrTypeAndAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CryptCATPutCatAttrInfo",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszReferenceTag", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwAttrTypeAndAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "WintrustLoadFunctionPointers",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pgActionID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "pPfns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_FUNCTIONS", 512, INOUT },
	}
	},
	{ "IsCatalogFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CryptCATAdminCalcHashFromFileHandle",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcbHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pbHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WTHelperGetProvCertFromChain",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_CERT", 480, INOUT },
		{0, "pSgnr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_SGNR", 352, IN },
		{1, "idxCert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WintrustGetDefaultForUsage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszUsageOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "psUsage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_DEFUSAGE", 224, IN },
	}
	},
	{ "OpenPersonalTrustDBDialogEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CryptCATAdminEnumCatalogFromHash",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hCatAdmin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "phPrevCatInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CryptSIPVerifyIndirectData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "pIndirectData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_INDIRECT_DATA_", 256, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CryptCATEnumerateAttr",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCatMember", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, IN },
		{2, "pPrevAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, IN },
	}
	},
	{ "CryptCATEnumerateMember",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPrevMember", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, IN },
	}
	},
	{ "WTHelperGetProvSignerFromChain",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_SGNR", 352, INOUT },
		{0, "pProvData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_DATA", 1088, IN },
		{1, "idxSigner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fCounterSigner", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "idxCounterSigner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WintrustSetDefaultIncludePEPageHashes",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "fIncludePEPageHashes", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATPersistStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSIPPutSignedDataMsg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "cbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "CryptCATAdminReleaseCatalogContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCatAdmin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hCatInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinVerifyTrust",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pgActionID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "pWVTData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptCATCatalogInfoFromContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCatInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psCatInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CATALOG_INFO_", 4192, INOUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATAdminReleaseContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCatAdmin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATAllocSortedMemberInfo",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszReferenceTag", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CryptCATAdminAddCatalog",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hCatAdmin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszCatalogFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwszSelectBaseName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATGetMemberInfo",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszReferenceTag", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CryptCATAdminAcquireContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCatAdmin", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "pgSubsystem", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATStoreFromHandle",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATSTORE_", 320, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATCDFEnumCatAttributes",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "pCDF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATCDF_", 224, IN },
		{1, "pPrevAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, IN },
		{2, "pfnParseError", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptSIPRemoveSignedDataMsg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptSIPCreateIndirectData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "pcbIndirectData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pIndirectData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_INDIRECT_DATA_", 256, INOUT },
	}
	},
	{ "WinVerifyTrustEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pgActionID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "pWinTrustData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINTRUST_DATA", 416, IN },
	}
	},
	{ "WTHelperGetProvPrivateDataFromChain",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_PRIVDATA", 224, INOUT },
		{0, "pProvData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_DATA", 1088, IN },
		{1, "pgProviderID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "CryptCATGetCatAttrInfo",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszReferenceTag", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WTHelperCertCheckValidSignature",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProvData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_DATA", 1088, IN },
	}
	},
	{ "CryptCATFreeSortedMemberInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCatMember", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, IN },
	}
	},
	{ "CryptCATCDFEnumAttributes",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "pCDF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATCDF_", 224, IN },
		{1, "pMember", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, IN },
		{2, "pPrevAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, IN },
		{3, "pfnParseError", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptCATCDFOpen",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATCDF_", 224, INOUT },
		{0, "pwszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pfnParseError", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "WTHelperCertIsSelfSigned",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwEncoding", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_INFO", 896, IN },
	}
	},
	{ "CryptSIPGetSignedDataMsg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSubjectInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SIP_SUBJECTINFO_", 640, IN },
		{1, "pdwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pbSignedDataMsg", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "FindCertsByIssuer",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCertChains", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CHAIN", 288, IN },
		{1, "pcbCertChains", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pcCertChains", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pbEncodedIssuerName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbEncodedIssuerName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pwszPurpose", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATAdminResolveCatalogPath",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCatAdmin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszCatalogFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "psCatInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CATALOG_INFO_", 4192, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WintrustRemoveActionID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pgActionID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "CryptCATHandleFromStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pCatStore", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATSTORE_", 320, IN },
	}
	},
	{ "CryptCATAdminRemoveCatalog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCatAdmin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszCatalogFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATEnumerateCatAttr",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPrevAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, IN },
	}
	},
	{ "CryptCATClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenPersonalTrustDBDialog",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATPutMemberInfo",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwszReferenceTag", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pgSubjectType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "dwCertVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "cbSIPIndirectData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pbSIPIndirectData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "WTHelperProvDataFromStateData",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_DATA", 1088, INOUT },
		{0, "hStateData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATAdminPauseServiceForBackup",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fResume", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WintrustAddActionID",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pgActionID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "fdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psProvInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_REGISTER_ACTIONID", 800, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CryptCATOpen",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pwszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fdwOpenFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hProv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwPublicVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwEncodingType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptCATGetAttrInfo",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATATTRIBUTE_", 192, INOUT },
		{0, "hCatalog", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCatMember", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, IN },
		{2, "pwszReferenceTag", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WintrustAddDefaultForUsage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszUsageOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "psDefUsage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_PROVIDER_REGDEFUSAGE", 160, IN },
	}
	},
	{ "CryptCATCDFClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCDF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATCDF_", 224, IN },
	}
	},
	{ "CryptCATCDFEnumMembers",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, INOUT },
		{0, "pCDF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATCDF_", 224, IN },
		{1, "pPrevMember", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CRYPTCATMEMBER_", 512, IN },
		{2, "pfnParseError", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
};

int WinTrustarraySize = (sizeof(WinTrust_info) / sizeof(WinTrust_info[0]));
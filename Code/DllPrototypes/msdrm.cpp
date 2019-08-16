#include "../Pyrebox_libcalls.h"

libcall_info_t msdrm_info[] = {
	{ "DRMGetApplicationSpecificData",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "puNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "puValueLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "wszValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMDuplicateEnvironmentHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hToCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMGetInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszAttribute", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "peEncoding", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_DRMENCODINGTYPE", 32, INOUT },
		{3, "pcBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMCheckSecurity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMGetUnboundLicenseObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszSubObjectType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "iIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phSubQuery", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMCreateUser",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "wszUserId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "wszUserIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "phUser", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMEnumerateLicense",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSession", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfSharedFlag", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "puCertificateDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "wszCertificateData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetUserInfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puUserNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "wszUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "puUserIdLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "wszUserId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "puUserIdTypeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "wszUserIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetServiceLocation",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uServiceType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uServiceLocation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wszIssuanceLicense", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "puServiceURLLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "wszServiceURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetUnboundLicenseAttribute",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszAttributeType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "iWhich", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "peEncoding", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_DRMENCODINGTYPE", 32, INOUT },
		{4, "pcBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMGetNameAndDescription",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pulcid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "puNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "puDescriptionLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "wszDescription", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMAddLicense",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLicenseStorage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wszLicense", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DRMGetOwnerLicense",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puOwnerLicenseLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "wszOwnerLicense", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMCreateClientSession",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "uCallbackVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wszGroupIDProviderType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszGroupID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "phClient", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMSetIntervalTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cDays", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMVerify",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pcAttestedData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "wszAttestedData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "peType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_DRMATTESTTYPE", 32, INOUT },
		{4, "pcPrincipal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "wszPrincipal", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "pcManifest", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "wszManifest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DRMDuplicateHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hToCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMDecrypt",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptoProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cNumInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pcNumOutBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pbOutData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMCloseSession",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSession", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMGetUnboundLicenseObjectCount",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszSubObjectType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pcSubObjects", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMRegisterRevocationList",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszRevocationList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DRMGetCertificateChainCount",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszChain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pcCertCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMCreateRight",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszRightName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pstFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{2, "pstUntil", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{3, "cExtendedInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pwszExtendedInfoName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "pwszExtendedInfoValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{6, "phRight", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMGetTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eTimerIdType", NKT_DBOBJCLASS_Enumeration, "_DRMTIMETYPE", 32, IN },
		{2, "poTimeObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, INOUT },
	}
	},
	{ "DRMLoadLibrary",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eSpecification", NKT_DBOBJCLASS_Enumeration, "_DRMSPECTYPE", 32, IN },
		{2, "wszLibraryProvider", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "phLibrary", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMConstructCertificateChain",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cCertificates", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgwszCertificates", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "pcChain", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "wszChain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetRightInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hRight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puRightNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "wszRightName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "pstFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, INOUT },
		{4, "pstUntil", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, INOUT },
	}
	},
	{ "DRMEncrypt",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptoProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cNumInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pcNumOutBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pbOutData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMGetUserRights",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phRight", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMAddRightWithUser",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hRight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMCreateBoundLicense",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DRMBOUNDLICENSEPARAMS", 384, IN },
		{2, "wszLicenseChain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "phBoundLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "phErrorLog", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMGetUsagePolicy",16,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "peUsagePolicyType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_DRM_USAGEPOLICY_TYPE", 32, INOUT },
		{3, "pfExclusion", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "puNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{6, "puMinVersionLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "wszMinVersion", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{8, "puMaxVersionLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "wszMaxVersion", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{10, "puPublicKeyLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{11, "wszPublicKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{12, "puDigestAlgorithmLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{13, "wszDigestAlgorithm", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{14, "pcbDigest", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{15, "pbDigest", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMRepair",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DRMInitEnvironment",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "eSecurityProviderType", NKT_DBOBJCLASS_Enumeration, "_DRMSECURITYPROVIDERTYPE", 32, IN },
		{1, "eSpecification", NKT_DBOBJCLASS_Enumeration, "_DRMSPECTYPE", 32, IN },
		{2, "wszSecurityProvider", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszManifestCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "wszMachineCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "phEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "phDefaultLibrary", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMDuplicateSession",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSessionIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phSessionOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMAcquireIssuanceLicenseTemplate",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cTemplates", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pwszTemplateIds", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "wszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DRMGetIssuanceLicenseInfo",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pstTimeFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, INOUT },
		{2, "pstTimeUntil", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, INOUT },
		{3, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "puDistributionPointNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "wszDistributionPointName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{6, "puDistributionPointURLLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "wszDistributionPointURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{8, "phOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pfOfficial", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMSetGlobalOptions",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "eGlobalOptions", NKT_DBOBJCLASS_Enumeration, "_DRMGLOBALOPTIONS", 32, IN },
		{1, "pvdata", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwlen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMCloseQueryHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQuery", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMGetRevocationPoint",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puIdLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "wszId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "puIdTypeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "wszIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "puURLLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "wszRL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "pstFrequency", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, INOUT },
		{8, "puNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{10, "puPublicKeyLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{11, "wszPublicKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMRegisterProtectedWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMCreateLicenseStorageSession",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hDefaultLibrary", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wszIssuanceLicense", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "phLicenseStorage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMSetUsagePolicy",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eUsagePolicyType", NKT_DBOBJCLASS_Enumeration, "_DRM_USAGEPOLICY_TYPE", 32, IN },
		{2, "fDelete", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "fExclusion", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "wszMinVersion", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "wszMaxVersion", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "wszPublicKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "wszDigestAlgorithm", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "pbDigest", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{10, "cbDigest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMAttest",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnablingPrincipal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "eType", NKT_DBOBJCLASS_Enumeration, "_DRMATTESTTYPE", 32, IN },
		{3, "pcAttestedBlob", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "wszAttestedBlob", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMDuplicatePubHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hPubIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phPubOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMCloseEnvironmentHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMAcquireAdvisories",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLicenseStorage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszLicense", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "wszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DRMSetNameAndDescription",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fDelete", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "wszDescription", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DRMGetUnboundLicenseAttributeCount",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszAttributeType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pcAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMDeconstructCertificateChain",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszChain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iWhich", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcCert", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "wszCert", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetProcAddress",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLibrary", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszProcName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppfnProcAddress", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "DRMGetIntervalTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcDays", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DRMGetBoundLicenseAttribute",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszAttribute", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "iWhich", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "peEncoding", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_DRMENCODINGTYPE", 32, INOUT },
		{4, "pcBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMClosePubHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hPub", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMSetMetaData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszContentId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "wszContentIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszSKUId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "wszSKUIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "wszContentType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "wszContentName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DRMIsActivated",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pActServInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DRM_ACTSERV_INFO", 96, IN },
	}
	},
	{ "DRMCreateIssuanceLicense",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstTimeFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{1, "pstTimeUntil", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{2, "wszReferralInfoName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszReferralInfoURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "hOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "wszIssuanceLicense", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "hBoundLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "phIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
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
	{ "DRMGetClientVersion",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDRMClientVersionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DRM_CLIENT_VERSION_INFO", 12448, IN },
	}
	},
	{ "DRMGetSignedIssuanceLicense",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbSymKey", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbSymKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "wszSymKeyType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "wszClientLicensorCertificate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "wszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DRMGetRightExtendedInfo",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hRight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "puExtendedInfoNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "wszExtendedInfoName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "puExtendedInfoValueLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "wszExtendedInfoValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetBoundLicenseObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszSubObjectType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "iWhich", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phSubObject", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMCreateEnablingPrincipal",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hLibrary", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wszObject", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pidPrincipal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DRMID", 96, IN },
		{4, "wszCredentials", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "phEnablingPrincipal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMSetRevocationPoint",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fDelete", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wszId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "wszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pstFrequency", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{6, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "wszPublicKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DRMGetSecurityProvider",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puTypeLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "wszType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "puPathLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "wszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetEnvironmentInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszAttribute", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "peEncoding", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_DRMENCODINGTYPE", 32, INOUT },
		{3, "pcBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMGetMetaData",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puContentIdLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "wszContentId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "puContentIdTypeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "wszContentIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "puSKUIdLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "wszSKUId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{7, "puSKUIdTypeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "wszSKUIdType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{9, "puContentTypeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{10, "wszContentType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{11, "puContentNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{12, "wszContentName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMActivate",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uLangID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pActServInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DRM_ACTSERV_INFO", 96, IN },
		{4, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "hParentWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMDecode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszAlgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "wszEncodedString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "puDecodedDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pbDecodedData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "DRMAcquireLicense",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSession", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wszGroupIdentityCredential", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszRequestedRights", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "wszCustomData", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "wszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DRMClearAllRights",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMIsWindowProtected",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pfProtected", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMCloseHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMSetApplicationSpecificData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fDelete", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DRMRegisterContent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fRegister", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DRMEncode",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszAlgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "uDataLen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbDecodedData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "puEncodedStringLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "wszEncodedString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMGetUsers",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "phUser", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DRMGetIssuanceLicenseTemplate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puIssuanceLicenseTemplateLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "wszIssuanceLicenseTemplate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DRMCreateEnablingBitsDecryptor",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBoundLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszRight", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hAuxLib", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wszAuxPlug", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "phDecryptor", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DRMGetSignedIssuanceLicenseEx",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEnv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hIssuanceLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbSymKey", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cbSymKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "wszSymKeyType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "hEnablingPrincipal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "hBoundLicenseCLC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{10, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DRMDeleteLicense",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSession", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszLicenseId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DRMGetBoundLicenseAttributeCount",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszAttribute", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pcAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMParseUnboundLicense",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wszCertificate", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "phQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DRMGetBoundLicenseObjectCount",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hQueryRoot", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszSubObjectType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pcSubObjects", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DRMCreateEnablingBitsEncryptor",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBoundLicense", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszRight", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hAuxLib", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wszAuxPlug", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "phEncryptor", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
};

int msdrmarraySize = (sizeof(msdrm_info) / sizeof(msdrm_info[0]));
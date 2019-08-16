#include "../Pyrebox_libcalls.h"

libcall_info_t Secur32_info[] = {
	{ "DeleteSecurityContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
	}
	},
	{ "DeleteSecurityPackageA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DeleteSecurityPackageW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "InitializeSecurityContextW",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{2, "pszTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fContextReq", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Reserved1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "TargetDataRep", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{7, "Reserved2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "phNewContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{9, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{10, "pfContextAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{11, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "TranslateNameA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "lpAccountName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "AccountNameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{2, "DesiredNameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{3, "lpTranslatedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TranslateNameW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "lpAccountName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "AccountNameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{2, "DesiredNameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{3, "lpTranslatedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SaslIdentifyPackageA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
		{1, "PackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoA", 160, INOUT },
	}
	},
	{ "SaslIdentifyPackageW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
		{1, "PackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoW", 160, INOUT },
	}
	},
	{ "SspiPrepareForCredRead",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pszTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pCredmanCredentialType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "ppszCredmanTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "LsaEnumerateLogonSessions",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LogonSessionCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "LogonSessionList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_LUID", 64, INOUT },
	}
	},
	{ "SetContextAttributesA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetContextAttributesW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ApplyControlToken",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
	}
	},
	{ "SaslSetContextOption",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ContextHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "Option", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EncryptMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "fQOP", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{3, "MessageSeqNo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SaslGetContextOption",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ContextHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "Option", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{4, "Needed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "LsaLogonUser",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LsaHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "OriginName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{2, "LogonType", NKT_DBOBJCLASS_Enumeration, "_SECURITY_LOGON_TYPE", 32, IN },
		{3, "AuthenticationPackage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AuthenticationInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "AuthenticationInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "LocalGroups", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_GROUPS", 96, IN },
		{7, "SourceContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TOKEN_SOURCE", 128, IN },
		{8, "ProfileBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{9, "ProfileBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{10, "LogonId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID", 64, INOUT },
		{11, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{12, "Quotas", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QUOTA_LIMITS", 256, INOUT },
		{13, "SubStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetUserNameExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "NameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{1, "lpNameBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FreeCredentialsHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
	}
	},
	{ "ChangeAccountPasswordA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszDomainName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszAccountName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pszOldPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pszNewPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "bImpersonating", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
	}
	},
	{ "ChangeAccountPasswordW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszDomainName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszAccountName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszOldPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pszNewPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "bImpersonating", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
	}
	},
	{ "SspiExcludePackage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pszPackageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppNewAuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "QuerySecurityPackageInfoW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppPackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoW", 160, INOUT },
	}
	},
	{ "LsaFreeReturnBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SspiEncodeAuthIdentityAsStrings",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ppszUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "ppszDomainName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{3, "ppszPackedCredentialsString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "EnumerateSecurityPackagesA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcPackages", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "ppPackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoA", 160, IN },
	}
	},
	{ "EnumerateSecurityPackagesW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcPackages", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "ppPackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoW", 160, IN },
	}
	},
	{ "SspiUnmarshalAuthIdentity",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthIdentityLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "AuthIdentityByteArray", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ppAuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VerifySignature",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "pMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
		{2, "MessageSeqNo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfQOP", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetCredentialsAttributesA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCredentialsAttributesW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImportSecurityContextA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackage", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pPackedContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBuffer", 96, IN },
		{2, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
	}
	},
	{ "ImportSecurityContextW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pPackedContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBuffer", 96, IN },
		{2, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
	}
	},
	{ "InitializeSecurityContextA",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{2, "pszTargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fContextReq", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Reserved1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "TargetDataRep", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{7, "Reserved2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "phNewContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{9, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{10, "pfContextAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{11, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "SspiValidateAuthIdentity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SspiDecryptAuthIdentity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EncryptedAuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "GetComputerObjectNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "NameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{1, "lpNameBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SspiMarshalAuthIdentity",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AuthIdentityLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "AuthIdentityByteArray", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
	}
	},
	{ "SaslEnumerateProfilesA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{1, "ProfileCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SaslEnumerateProfilesW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{1, "ProfileCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ExportSecurityContext",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "fFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pPackedContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBuffer", 96, INOUT },
		{3, "pToken", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "SspiEncryptAuthIdentity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "SaslGetProfilePackageA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "PackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoA", 160, INOUT },
	}
	},
	{ "AcceptSecurityContext",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{2, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
		{3, "fContextReq", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TargetDataRep", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phNewContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{6, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{7, "pfContextAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "AddSecurityPackageA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_PACKAGE_OPTIONS", 160, IN },
	}
	},
	{ "AddSecurityPackageW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_PACKAGE_OPTIONS", 160, IN },
	}
	},
	{ "QueryCredentialsAttributesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "GetUserNameExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "NameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{1, "lpNameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SspiIsAuthIdentityEncrypted",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "EncryptedAuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LsaDeregisterLogonProcess",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LsaHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsaRegisterPolicyChangeNotification",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_POLICY_NOTIFICATION_INFORMATION_CLASS", 32, IN },
		{1, "NotificationEventHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsaUnregisterPolicyChangeNotification",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InformationClass", NKT_DBOBJCLASS_Enumeration, "_POLICY_NOTIFICATION_INFORMATION_CLASS", 32, IN },
		{1, "NotificationEventHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LsaGetLogonSessionData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LogonId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LUID", 64, IN },
		{1, "ppLogonSessionData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SECURITY_LOGON_SESSION_DATA", 1472, INOUT },
	}
	},
	{ "LsaCallAuthenticationPackage",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LsaHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "AuthenticationPackage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ProtocolSubmitBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "SubmitBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ProtocolReturnBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{5, "ReturnBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ProtocolStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "AddCredentialsA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCredentials", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "pszPrincipal", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszPackage", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fCredentialUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pAuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pGetKeyFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pvGetKeyArgument", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
	}
	},
	{ "AddCredentialsW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCredentials", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "pszPrincipal", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszPackage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fCredentialUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pAuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pGetKeyFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pvGetKeyArgument", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
	}
	},
	{ "GetComputerObjectNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "NameFormat", NKT_DBOBJCLASS_Enumeration, "EXTENDED_NAME_FORMAT", 32, IN },
		{1, "lpNameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "LsaLookupAuthenticationPackage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LsaHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PackageName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{2, "AuthenticationPackage", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "QuerySecurityContextToken",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "SaslGetProfilePackageW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoW", 160, INOUT },
	}
	},
	{ "InitSecurityInterfaceW",0,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_FUNCTION_TABLE_W", 960, INOUT },
	}
	},
	{ "MakeSignature",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "fQOP", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{3, "MessageSeqNo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "QueryContextAttributesA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "QueryContextAttributesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "SspiPrepareForCredWrite",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pszTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pCredmanCredentialType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "ppszCredmanTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{4, "ppszCredmanUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{5, "ppCredentialBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{6, "pCredentialBlobSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RevertSecurityContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
	}
	},
	{ "InitSecurityInterfaceA",0,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_FUNCTION_TABLE_A", 960, INOUT },
	}
	},
	{ "SspiCopyAuthIdentity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AuthDataCopy", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "LsaRegisterLogonProcess",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LogonProcessName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{1, "LsaHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "SecurityMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SspiGetTargetHostName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszHostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "QuerySecurityPackageInfoA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPackageName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ppPackageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_SecPkgInfoA", 160, INOUT },
	}
	},
	{ "SspiZeroAuthIdentity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "AuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SaslAcceptSecurityContext",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{2, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
		{3, "fContextReq", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TargetDataRep", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phNewContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{6, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{7, "pfContextAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "ImpersonateSecurityContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
	}
	},
	{ "SspiLocalFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "DataBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "QueryCredentialsAttributesA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "ulAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "FreeContextBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvContextBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CompleteAuthToken",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "pToken", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
	}
	},
	{ "SspiEncodeStringsAsAuthIdentity",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszDomainName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszPackedCredentialsString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ppAuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "SspiCompareAuthIdentities",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthIdentity1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AuthIdentity2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "SameSuppliedUser", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "SameSuppliedIdentity", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "SaslInitializeSecurityContextA",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{2, "pszTargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fContextReq", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Reserved1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "TargetDataRep", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
		{7, "Reserved2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "phNewContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{9, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{10, "pfContextAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{11, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "SspiFreeAuthIdentity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "AuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AcquireCredentialsHandleA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPrincipal", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszPackage", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "fCredentialUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvLogonId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pAuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pGetKeyFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pvGetKeyArgument", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{8, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "AcquireCredentialsHandleW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPrincipal", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszPackage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fCredentialUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvLogonId", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pAuthData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pGetKeyFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pvGetKeyArgument", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{8, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "DecryptMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "pMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{2, "MessageSeqNo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfQOP", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SaslInitializeSecurityContextW",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phCredential", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{1, "phContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, IN },
		{2, "pszTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fContextReq", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Reserved1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "TargetDataRep", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, IN },
		{7, "Reserved2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "phNewContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecHandle", 64, INOUT },
		{9, "pOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SecBufferDesc", 96, INOUT },
		{10, "pfContextAttr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{11, "ptsExpiry", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "LsaConnectUntrusted",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LsaHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
};

int Secur32arraySize = (sizeof(Secur32_info) / sizeof(Secur32_info[0]));
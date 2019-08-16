#include "../Pyrebox_libcalls.h"

libcall_info_t Urlmon_info[] = {
	{ "CoInternetQueryInfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "QueryOptions", NKT_DBOBJCLASS_Enumeration, "_tagQUERYOPTION", 32, IN },
		{2, "dwQueryFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInternetGetSecurityUrl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppwszSecUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "psuAction", NKT_DBOBJCLASS_Enumeration, "_tagPSUACTION", 32, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterMediaTypeClass",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "ctypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgszTypes", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "rgclsID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsValidURL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "szURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MkParseDisplayNameEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "szDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pchEaten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "CopyStgMedium",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcstgmedSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
		{1, "pstgmedDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
	}
	},
	{ "FaultInIEFeature",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pClassSpec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_wtypes_0000_0001_0001", 288, IN },
		{2, "pQuery", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagQUERYCONTEXT", 256, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CreateUri",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzURI", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppURI", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUri", 32, IN },
	}
	},
	{ "CoInternetIsFeatureEnabledForIUri",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FeatureEntry", NKT_DBOBJCLASS_Enumeration, "_tagINTERNETFEATURELIST", 32, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pIUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{3, "pSecMgr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IInternetSecurityManagerEx2", 32, IN },
	}
	},
	{ "IEInstallScope",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdwScope", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateIUriBuilder",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppIUriBuilder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUriBuilder", 32, INOUT },
	}
	},
	{ "CoInternetIsFeatureEnabled",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FeatureEntry", NKT_DBOBJCLASS_Enumeration, "_tagINTERNETFEATURELIST", 32, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInternetGetProtocolFlags",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CompatFlagsFromClsid",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "pdwCompatFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pdwMiscStatusFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetSoftwareUpdateAdvertisementState",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szDistUnit", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwAdState", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAdvertisedVersionMS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwAdvertisedVersionLS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInternetGetSecurityUrlEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{1, "ppSecUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUri", 32, IN },
		{2, "psuAction", NKT_DBOBJCLASS_Enumeration, "_tagPSUACTION", 32, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HlinkGoBack",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "RevokeBindStatusCallback",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "pBSCb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "CreateURLMonikerEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMkCtx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "szURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateUriFromMultiByteString",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszANSIInputUri", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwEncodingFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwCreateFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUri", 32, IN },
	}
	},
	{ "CreateFormatEnumerator",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cfmtetc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgfmtetc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{2, "ppenumfmtetc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumFORMATETC", 32, INOUT },
	}
	},
	{ "CreateUriWithFragment",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzURI", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwzFragment", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppURI", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUri", 32, INOUT },
	}
	},
	{ "HlinkNavigateString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "szTarget", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RegisterMediaTypes",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ctypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgszTypes", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "rgcfTypes", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "HlinkNavigateMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pmkTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
	}
	},
	{ "RegisterBindStatusCallback",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "pBSCb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{2, "ppBSCBPrev", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IBindStatusCallback", 32, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyBindInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcbiSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagBINDINFO", 672, IN },
		{1, "pbiDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagBINDINFO", 672, IN },
	}
	},
	{ "CoInternetParseIUri",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{1, "ParseAction", NKT_DBOBJCLASS_Enumeration, "_tagPARSEACTION", 32, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pwzResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cchResult", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcchResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ObtainUserAgentString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszUAOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IsAsyncMoniker",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
	}
	},
	{ "CoInternetGetSession",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwSessionMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppIInternetSession", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IInternetSession", 32, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSoftwareUpdateInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szDistUnit", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "psdi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagSOFTDISTINFO", 416, IN },
	}
	},
	{ "AsyncInstallDistributionUnit",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szDistUnit", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "szTYPE", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szExt", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwFileVersionMS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFileVersionLS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "szURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{7, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rgszTypes", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "rgcfTypes", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoInternetCompareUrl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzUrl1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwzUrl2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UrlMkSetSessionOption",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UrlMkGetSessionOption",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwBufferLengthOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateURLMoniker",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMkCtx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "szURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "CoInternetCreateSecurityManager",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSP", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IServiceProvider", 32, IN },
		{1, "ppSM", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IInternetSecurityManager", 32, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInternetCombineIUri",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBaseUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{1, "pRelativeUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{2, "dwCombineFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppCombinedUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUri", 32, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "URLOpenBlockingStreamA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 32, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "URLOpenBlockingStreamW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 32, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "RevokeFormatEnumerator",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "pEFetc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IEnumFORMATETC", 32, IN },
	}
	},
	{ "CreateAsyncBindCtx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pBSCb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{2, "pEFetc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IEnumFORMATETC", 32, IN },
		{3, "ppBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IBindCtx", 32, INOUT },
	}
	},
	{ "HlinkGoForward",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "CoInternetCombineUrl",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzBaseUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwzRelativeUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwCombineFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cchResult", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcchResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInternetSetFeatureEnabled",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FeatureEntry", NKT_DBOBJCLASS_Enumeration, "_tagINTERNETFEATURELIST", 32, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindMediaTypeClass",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "szType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pclsID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
		{3, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "CreateURLMonikerEx2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMkCtx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "pUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{2, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInternetParseUrl",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ParseAction", NKT_DBOBJCLASS_Enumeration, "_tagPARSEACTION", 32, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pszResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cchResult", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcchResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReleaseBindInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pbindinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagBINDINFO", 672, IN },
	}
	},
	{ "CompareSecurityIds",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbSecurityId1", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwLen1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbSecurityId2", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwLen2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInstall",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pClassSpec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_wtypes_0000_0001_0001", 288, IN },
		{3, "pQuery", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagQUERYCONTEXT", 256, IN },
		{4, "pszCodeBase", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoInternetIsFeatureZoneElevationEnabled",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFromURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "szToURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pSecMgr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IInternetSecurityManager", 32, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetComponentIDFromCLSSPEC",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pClassspec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_wtypes_0000_0001_0001", 288, IN },
		{1, "ppszComponentID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
	}
	},
	{ "CoInternetCreateZoneManager",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSP", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IServiceProvider", 32, IN },
		{1, "ppZM", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IInternetZoneManager", 32, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "URLDownloadToCacheFileA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cchFileName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "URLDownloadToCacheFileW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchFileName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "CoInternetCombineUrlEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBaseUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUri", 32, IN },
		{1, "pwzRelativeUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwCombineFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppCombinedUri", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUri", 32, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClassURL",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pClsID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "DllInstall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bInstall", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszCmdLine", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoInternetIsFeatureEnabledForUrl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FeatureEntry", NKT_DBOBJCLASS_Enumeration, "_tagINTERNETFEATURELIST", 32, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pSecMgr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IInternetSecurityManager", 32, IN },
	}
	},
	{ "RegisterFormatEnumerator",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "pEFetc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IEnumFORMATETC", 32, IN },
		{2, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HlinkSimpleNavigateToMoniker",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmkTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "szLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szTargetFrameName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{4, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{5, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{6, "grfHLNF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "URLOpenStreamA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "URLOpenStreamW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "URLDownloadToFileA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "URLDownloadToFileW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "CoGetClassObjectFromURL",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rCLASSID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "szCODE", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFileVersionMS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFileVersionLS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szTYPE", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pBindCtx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{6, "dwClsContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{9, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "GetClassFileOrMime",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szMime", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "URLOpenPullStreamA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "URLOpenPullStreamW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WriteHitLogging",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpLogginginfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagHIT_LOGGING_INFO", 352, IN },
	}
	},
	{ "FindMimeFromData",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "pwzUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pwzMimeProposed", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "dwMimeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ppwzMimeOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{7, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateAsyncBindCtxEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBSCb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{3, "pEnum", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IEnumFORMATETC", 32, IN },
		{4, "ppBC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IBindCtx", 32, IN },
		{5, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsLoggingEnabledA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszUrl", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "IsLoggingEnabledW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszUrl", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "HlinkSimpleNavigateToString",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szTarget", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "szLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szTargetFrameName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{4, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{5, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{6, "grfHLNF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int UrlmonarraySize = (sizeof(Urlmon_info) / sizeof(Urlmon_info[0]));
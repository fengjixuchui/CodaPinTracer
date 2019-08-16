#include "../Pyrebox_libcalls.h"

libcall_info_t HLink_info[] = {
	{ "HlinkUpdateStackItem",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pihlframe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkFrame", 32, IN },
		{1, "pihlbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkBrowseContext", 32, IN },
		{2, "uHLID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pimkTrgt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{4, "pwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pwzFriendlyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "HlinkCreateShortcut",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "grfHLSHORTCUTF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pihl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlink", 32, IN },
		{2, "pwzDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pwzFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ppwzShortcutFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HlinkResolveShortcutToString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzShortcutFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppwzTarget", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "ppwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "HlinkClone",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pihl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlink", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pihlsiteForClone", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkSite", 32, IN },
		{3, "dwSiteData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "HlinkCreateFromData",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "piDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "pihlsite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkSite", 32, IN },
		{2, "dwSiteData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "piunkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "HlinkResolveStringForData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzReference", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pibc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{3, "cFmtetc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "rgFmtetc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{5, "pibsc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{6, "pimkBase", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
	}
	},
	{ "HlinkGetSpecialReference",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uReference", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppwzReference", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "HlinkResolveShortcut",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzShortcutFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pihlsite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkSite", 32, IN },
		{2, "dwSiteData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "piunkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "OleSaveToStreamEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "piunk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pistm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{2, "fClearDirty", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HlinkCreateShortcutFromString",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "grfHLSHORTCUTF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwzTarget", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pwzDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pwzFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ppwzShortcutFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HlinkNavigate",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pihl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlink", 32, IN },
		{1, "pihlframe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkFrame", 32, IN },
		{2, "grfHLNF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{4, "pibsc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{5, "pihlbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkBrowseContext", 32, IN },
	}
	},
	{ "HlinkCreateBrowseContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "piunkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "HlinkResolveShortcutToMoniker",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzShortcutFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppimkTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, IN },
		{2, "ppwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "HlinkTranslateURL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppwzTranslatedURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "HlinkIsShortcut",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "HlinkNavigateToStringReference",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzTarget", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pihlsite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkSite", 32, IN },
		{3, "dwSiteData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pihlframe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkFrame", 32, IN },
		{5, "grfHLNF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pibc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{7, "pibsc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{8, "pihlbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkBrowseContext", 32, IN },
	}
	},
	{ "HlinkCreateFromString",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzTarget", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwzFriendlyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pihlsite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkSite", 32, IN },
		{4, "dwSiteData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "piunkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{6, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{7, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "HlinkCreateExtensionServices",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzAdditionalHeaders", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "phwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszUsername", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "piunkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{5, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "HlinkGetValueFromParams",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzParams", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwzName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppwzValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "HlinkPreprocessMoniker",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pibc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "pimkIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{2, "ppimkOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, IN },
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
	{ "HlinkCreateShortcutFromMoniker",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "grfHLSHORTCUTF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pimkTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{2, "pwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pwzDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pwzFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ppwzShortcutFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HlinkOnNavigate",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pihlframe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkFrame", 32, IN },
		{1, "pihlbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkBrowseContext", 32, IN },
		{2, "grfHLNF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pimkTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{4, "pwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pwzFriendlyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "puHLID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "HlinkQueryCreateFromData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "piDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
	}
	},
	{ "HlinkSetSpecialReference",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uReference", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwzReference", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "HlinkCreateFromMoniker",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pimkTrgt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "pwzLocation", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwzFriendlyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pihlsite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkSite", 32, IN },
		{4, "dwSiteData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "piunkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{6, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{7, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "HlinkOnRenameDocument",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pihlbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IHlinkBrowseContext", 32, IN },
		{2, "pimkOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{3, "pimkNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
	}
	},
	{ "HlinkParseDisplayName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pibc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "pwzDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fNoForceAbs", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pcchEaten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ppimk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "HlinkResolveMonikerForData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pimkReference", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pibc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{3, "cFmtetc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "rgFmtetc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{5, "pibsc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{6, "pimkBase", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
	}
	},
};

int HLinkarraySize = (sizeof(HLink_info) / sizeof(HLink_info[0]));
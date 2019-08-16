#include "../Pyrebox_libcalls.h"

libcall_info_t Ole32_info[] = {
	{ "OleCreateLinkToFileEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 32, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoRegisterPSClsid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "OleCreateDefaultHandler",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "lplpObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "OleFlushClipboard",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "HWND_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CLSIDFromProgID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszProgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "SetConvertStg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "fConvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateILockBytesOnHGlobal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hGlobal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fDeleteOnRelease", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pplkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ILockBytes", 32, IN },
	}
	},
	{ "ReadClassStg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "MkParseDisplayName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindCtx", 32, IN },
		{1, "szUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pchEaten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "STGMEDIUM_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
	}
	},
	{ "STGMEDIUM_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
	}
	},
	{ "FreePropVariantArray",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cVariants", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgvars", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "CoDisableCallCancellation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "HPALETTE_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "HMENU_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateFileMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "CreateDataAdviseHolder",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppDAHolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDataAdviseHolder", 32, INOUT },
	}
	},
	{ "CoAllowSetForegroundWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "lpvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "HRGN_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateObjrefMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "GetHGlobalFromStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "phglobal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "HACCEL_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleCreate",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoSetCancelObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "ProgIDFromCLSID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lplpszProgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "CLIPFORMAT_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ReleaseStgMedium",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
	}
	},
	{ "CreateStdProgressIndicator",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pIbscCaller", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IBindStatusCallback", 32, IN },
		{3, "ppIbsc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IBindStatusCallback", 32, IN },
	}
	},
	{ "ReadClassStm",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "CoCreateFreeThreadedMarshaler",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppunkMarshal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, INOUT },
	}
	},
	{ "HDC_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "HACCEL_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "STGMEDIUM_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
	}
	},
	{ "CoCreateInstanceEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "dwClsCtx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pServerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COSERVERINFO", 128, IN },
		{4, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMULTI_QI", 96, INOUT },
	}
	},
	{ "CoGetContextToken",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MonikerRelativePathTo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmkSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "pmkDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{2, "ppmkRelPath", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
		{3, "dwReserved", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleSetMenuDescriptor",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "holemenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwndFrame", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hwndActiveObject", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpFrame", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleInPlaceFrame", 32, IN },
		{4, "lpActiveObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleInPlaceActiveObject", 32, IN },
	}
	},
	{ "CoMarshalInterThreadInterfaceInStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "ppStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 32, INOUT },
	}
	},
	{ "CoInitializeEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwCoInit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StgOpenPropStg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppPropStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 32, IN },
	}
	},
	{ "RevokeDragDrop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoQueryProxyBlanket",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pwAuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pAuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "pServerPrincName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{4, "pAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "pAuthInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{7, "pCapabilites", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "StgSetTimes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pctime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{2, "patime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{3, "pmtime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "OleConvertOLESTREAMToIStorage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpolestream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 32, IN },
		{1, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{2, "ptd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDVTARGETDEVICE", 128, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "HWND_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CLSIDFromString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "HACCEL_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleSetContainedObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fContained", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReadFmtUserTypeStg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "pcf", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lplpszUserType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "OleGetIconOfClass",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpszLabel", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fUseTypeAsLabel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StgCreateDocfileOnILockBytes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 32, IN },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 32, IN },
	}
	},
	{ "CoBuildVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CoLoadLibrary",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszLibName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bAutoFree", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CLIPFORMAT_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OleQueryCreateFromData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcDataObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
	}
	},
	{ "NdrProxyForwardingFunction3",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction4",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction5",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction6",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction7",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction8",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction9",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "OleRegGetMiscStatus",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwAspect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "OleInitialize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoGetCurrentLogicalThreadId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "HWND_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleDestroyMenuDescriptor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "holemenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrProxyForwardingFunction11",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "OleCreateEmbeddingHelper",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pCF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IClassFactory", 32, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "lplpObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "OleRun",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "NdrProxyForwardingFunction21",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "CoUninitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "HRGN_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoDisconnectContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleCreateLink",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmkLinkSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient17",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "CoGetInterfaceAndReleaseStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoDisconnectObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleSaveToStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPersistStream", 32, IN },
		{1, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "OleConvertOLESTREAMToIStorageEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "polestm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 32, IN },
		{1, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{2, "pcfFormat", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "plwWidth", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "plHeight", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "pmedium", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
	}
	},
	{ "CoUnmarshalInterface",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoGetInterceptorFromTypeInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "iidIntercepted", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "typeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 32, IN },
		{3, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RegisterDragDrop",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pDropTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDropTarget", 32, IN },
	}
	},
	{ "StgPropertyLengthAsVariant",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pProp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, IN },
		{1, "cbProp", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "bReserved", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "HDC_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleSetClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
	}
	},
	{ "CoGetMarshalSizeMax",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pulSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "dwDestContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvDestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "mshlflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ObjectStublessClient3",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient4",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient5",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient6",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient7",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient8",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient9",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "CoInitialize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoTaskMemAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoGetObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pBindOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBIND_OPTS", 128, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoGetSystemSecurityPermissions",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "comSDType", NKT_DBOBJCLASS_Enumeration, "tagCOMSD", 32, IN },
		{1, "ppSD", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "OleDraw",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "dwAspect", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hdcDraw", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lprcBounds", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "OleCreateFromFile",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{5, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{6, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{7, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "OleDoAutoConvert",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "pClsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "HGLOBAL_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "StgCreateDocfile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 32, IN },
	}
	},
	{ "OleCreateEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 32, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "SNB_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoGetMalloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwMemContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMalloc", 32, INOUT },
	}
	},
	{ "CoImpersonateClient",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CoResumeClassObjects",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CoGetPSClsid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pClsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "HGLOBAL_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "StgOpenAsyncDocfileOnIFillLockBytes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pflb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IFillLockBytes", 32, IN },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "asyncFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 32, IN },
	}
	},
	{ "CoCreateGuid",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "OleCreateFromData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoReleaseMarshalData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "OleCreateLinkFromData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "StgConvertPropertyToVariant",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "pprop", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, IN },
		{1, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
{ 0 },
	}
	},
	{ "FmtIdToPropStgName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "oszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "HGLOBAL_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleRegEnumFormatEtc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwDirection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppenum", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumFORMATETC", 32, INOUT },
	}
	},
	{ "CoGetDefaultContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "aptType", NKT_DBOBJCLASS_Enumeration, "_APTTYPE", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "OleBuildVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CoReleaseServerProcess",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "OleQueryLinkFromData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcDataObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
	}
	},
	{ "CoGetApartmentType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAptType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_APTTYPE", 32, INOUT },
		{1, "pAptQualifier", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_APTTYPEQUALIFIER", 32, INOUT },
	}
	},
	{ "PropVariantClear",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "HRGN_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ObjectStublessClient20",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient28",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient29",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "OleCreateFromDataEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 32, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "OleGetClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDataObject", 32, INOUT },
	}
	},
	{ "OleUninitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "OleSetAutoConvert",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "clsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "CoAddRefServerProcess",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CreateDataCache",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoRevokeMallocSpy",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CoRegisterInitializeSpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSpy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IInitializeSpy", 32, IN },
		{1, "puliCookie", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, INOUT },
	}
	},
	{ "CoTestCancel",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "IIDFromString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpiid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "GetClassFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "HICON_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoGetCancelObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppUnk", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CreateBindCtx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppbc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IBindCtx", 32, INOUT },
	}
	},
	{ "CoQueryAuthenticationServices",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcAuthSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "asAuthSvc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSOLE_AUTHENTICATION_SERVICE", 128, INOUT },
	}
	},
	{ "CoUnmarshalHresult",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "phresult", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "HBITMAP_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoMarshalHresult",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "hresult", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateClassMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "CreatePointerMoniker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "STGMEDIUM_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
	}
	},
	{ "HMENU_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateItemMoniker",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDelim", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "CoTreatAsClass",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "clsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "CoGetTreatAsClass",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pClsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "OleCreateLinkFromDataEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 32, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoRegisterChannelHook",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExtensionUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pChannelHook", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IChannelHook", 32, IN },
	}
	},
	{ "GetHGlobalFromILockBytes",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 32, IN },
		{1, "phglobal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoMarshalInterface",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "dwDestContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvDestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "mshlflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HICON_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoSuspendClassObjects",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CLSIDFromProgIDEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszProgID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "PropStgNameToFmtId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "oszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pfmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "CLIPFORMAT_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "IsAccelerator",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAccel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cAccelEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
		{3, "lpwCmd", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "CoWaitForMultipleHandles",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "lpdwindex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "HMENU_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoGetStdMarshalEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "smexflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppUnkInner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, INOUT },
	}
	},
	{ "GetConvertStg",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
	}
	},
	{ "StringFromGUID2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HWND_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "StringFromIID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lplpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "CoSwitchCallContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pNewObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppOldObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, INOUT },
	}
	},
	{ "OleIsRunning",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleObject", 32, IN },
	}
	},
	{ "HDC_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "HBITMAP_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleMetafilePictFromIconAndLabel",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszLabel", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszSourceFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "iIconIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoGetCallerTID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpdwTID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CoCreateInstance",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "dwClsContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "WriteFmtUserTypeStg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "cf", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lpszUserType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SNB_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoFileTimeNow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, INOUT },
	}
	},
	{ "CoRegisterSurrogate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSurrogate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ISurrogate", 32, IN },
	}
	},
	{ "ObjectStublessClient10",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient11",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient12",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient13",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient14",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient15",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient16",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient18",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient19",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient21",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient22",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient23",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient24",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient25",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient26",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient27",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient30",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient31",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "ObjectStublessClient32",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "CLIPFORMAT_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoRegisterMallocSpy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMallocSpy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMallocSpy", 32, IN },
	}
	},
	{ "WriteClassStg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "WriteClassStm",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "CoCopyProxy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppCopy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, INOUT },
	}
	},
	{ "HPALETTE_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateErrorInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateErrorInfo", 32, IN },
	}
	},
	{ "OleRegGetUserType",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwFormOfType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszUserType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "StgIsStorageFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OleLoadFromStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "iidInterface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "OleRegEnumVerbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppenum", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumOLEVERB", 32, INOUT },
	}
	},
	{ "HGLOBAL_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoQueryClientBlanket",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "pAuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pServerPrincName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{3, "pAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "pPrivs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{6, "pCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
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
	{ "HACCEL_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleConvertIStorageToOLESTREAMEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "cfFormat", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pmedium", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGMEDIUM", 96, IN },
		{6, "polestm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 32, IN },
	}
	},
	{ "OleCreateFromFileEx",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{8, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 32, IN },
		{9, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{10, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{11, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{12, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "OleConvertIStorageToOLESTREAM",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "lpolestream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OLESTREAM", 32, IN },
	}
	},
	{ "CoIsOle1Class",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "CoGetCallContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppInterface", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DoDragDrop",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "pDropSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDropSource", 32, IN },
		{2, "dwOKEffects", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwEffect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CoGetCurrentProcess",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "OleDuplicateData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cfFormat", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HMENU_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "StgCreateStorageEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "stgfmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "grfAttrs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pStgOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGOPTIONS", 96, IN },
		{5, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{7, "ppObjectOpen", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "PropVariantCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{1, "pvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "OleNoteObjectVisible",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fVisible", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoGetInstanceFromFile",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pServerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COSERVERINFO", 128, IN },
		{1, "pClsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "dwClsCtx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pwszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMULTI_QI", 96, INOUT },
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
	{ "StgGetIFillLockBytesOnFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppflb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IFillLockBytes", 32, IN },
	}
	},
	{ "NdrProxyForwardingFunction10",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction12",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction13",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction14",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction15",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction16",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction17",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction18",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction19",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction20",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction22",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction23",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction24",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction25",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction26",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction27",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction28",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction29",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction30",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction31",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrProxyForwardingFunction32",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "HICON_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "StringFromCLSID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "lplpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "SNB_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoTaskMemFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "StgOpenStorageOnILockBytes",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 32, IN },
		{1, "pstgPriority", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{2, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "snbExclude", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{4, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 32, IN },
	}
	},
	{ "StgCreatePropSetStg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStorage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppPropSetStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertySetStorage", 32, IN },
	}
	},
	{ "CoRevertToSelf",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CoTaskMemRealloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRunningObjectTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pprot", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRunningObjectTable", 32, INOUT },
	}
	},
	{ "StgCreatePropStg",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppPropStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 32, IN },
	}
	},
	{ "OleLockRunning",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnknown", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fLock", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fLastUnlockCloses", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StgConvertVariantToProperty",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, INOUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{1, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "pprop", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, IN },
		{3, "pcb", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "fReserved", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{6, "pcIndirect", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoRegisterClassObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "dwClsContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpdwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "HBITMAP_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "perrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IErrorInfo", 32, IN },
	}
	},
	{ "MonikerCommonPrefixWith",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmkThis", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "pmkOther", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{2, "ppmkCommon", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "CoGetClassObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwClsContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "GetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IErrorInfo", 32, IN },
	}
	},
	{ "CoRegisterMessageFilter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMessageFilter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMessageFilter", 32, IN },
		{1, "lplpMessageFilter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMessageFilter", 32, INOUT },
	}
	},
	{ "CoGetObjectContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "OleSave",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPersistStorage", 32, IN },
		{1, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{2, "fSameAsLoad", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleGetIconOfFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fUseFileAsLabel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoFileTimeToDosDateTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "lpDosDate", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "lpDosTime", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "CreateOleAdviseHolder",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppOAHolder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IOleAdviseHolder", 32, INOUT },
	}
	},
	{ "CoFreeLibrary",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HPALETTE_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoIsHandlerConnected",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "PropVariantChangeType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppropvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
		{1, "propvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{2, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "OleIsCurrentClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
	}
	},
	{ "SNB_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CoInvalidateRemoteMachineBindings",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OleCreateStaticFromData",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoCancelCall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoSetProxyBlanket",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "dwAuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pServerPrincName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pAuthInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "dwCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoInitializeSecurity",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSecDesc", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cAuthSvc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "asAuthSvc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSOLE_AUTHENTICATION_SERVICE", 128, IN },
		{3, "pReserved1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "dwAuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwImpLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pAuthList", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "dwCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "pReserved3", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CoEnableCallCancellation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "BindMoniker",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "grfOpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iidResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "HICON_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CoGetStandardMarshal",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "dwDestContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvDestContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "mshlflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppMarshal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMarshal", 32, INOUT },
	}
	},
	{ "StgIsStorageILockBytes",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "plkbyt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 32, IN },
	}
	},
	{ "StgOpenStorageEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "stgfmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "grfAttrs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pStgOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSTGOPTIONS", 96, IN },
		{5, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{7, "ppObjectOpen", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "CreateGenericComposite",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmkFirst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "pmkRest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{2, "ppmkComposite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "StgOpenStorage",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwcsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pstgPriority", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{2, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "snbExclude", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{4, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppstgOpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStorage", 32, IN },
	}
	},
	{ "OleGetAutoConvert",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidOld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pClsidNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "HPALETTE_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleLoad",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{3, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoFreeUnusedLibraries",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "OleCreateLinkToFile",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{4, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{5, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{6, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DcomChannelSetHResult",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pulReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "appsHR", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoFreeUnusedLibrariesEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "dwUnloadDelay", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CoGetInstanceFromIStorage",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pServerInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COSERVERINFO", 128, IN },
		{1, "pClsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "dwClsCtx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pstg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{5, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMULTI_QI", 96, INOUT },
	}
	},
	{ "CoDosDateTimeToFileTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nDosDate", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "nDosTime", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lpFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, INOUT },
	}
	},
	{ "CreateAntiMoniker",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppmk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMoniker", 32, INOUT },
	}
	},
	{ "CoLockObjectExternal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fLock", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fLastUnlockReleases", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleCreateMenuDescriptor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmenuCombined", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMenuWidths", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOleMenuGroupWidths", 192, IN },
	}
	},
	{ "OleTranslateAccelerator",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpFrame", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleInPlaceFrame", 32, IN },
		{1, "lpFrameInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOIFI", 160, IN },
		{2, "lpmsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "CoFreeAllLibraries",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "HDC_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateStreamOnHGlobal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hGlobal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fDeleteOnRelease", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "ppstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 32, IN },
	}
	},
	{ "CoRevokeInitializeSpy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uliCookie", NKT_DBOBJCLASS_Union, "_ULARGE_INTEGER", 64, IN },
	}
	},
	{ "OleCreateLinkEx",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmkLinkSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMoniker", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "renderopt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "rgAdvf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "rgFormatEtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFORMATETC", 160, IN },
		{7, "lpAdviseSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAdviseSink", 32, IN },
		{8, "rgdwConnection", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "pClientSite", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleClientSite", 32, IN },
		{10, "pStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{11, "ppvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "HRGN_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "StgGetIFillLockBytesOnILockBytes",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pilb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ILockBytes", 32, IN },
		{1, "ppflb", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IFillLockBytes", 32, IN },
	}
	},
	{ "CoGetInterceptor",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "iidIntercepted", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "iid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CoRevokeClassObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HBITMAP_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int Ole32arraySize = (sizeof(Ole32_info) / sizeof(Ole32_info[0]));
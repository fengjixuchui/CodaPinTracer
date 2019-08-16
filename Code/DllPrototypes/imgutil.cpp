#include "../Pyrebox_libcalls.h"

libcall_info_t imgutil_info[] = {
	{ "IdentifyMIMEType",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbBytes", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "nBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DecodeImage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "pMap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMapMIMEToCLSID", 32, IN },
		{2, "pEventSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "CreateDDrawSurfaceOnDIB",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hbmDib", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppSurface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectDrawSurface", 32, IN },
	}
	},
	{ "SniffStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pInStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "pnFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "ppOutStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 32, IN },
	}
	},
	{ "DecodeImageEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "pMap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMapMIMEToCLSID", 32, IN },
		{2, "pEventSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "pszMIMETypeParam", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetMaxMIMEIDBytes",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pnMaxBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
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
	{ "CreateMIMEMap",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppMap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMapMIMEToCLSID", 32, IN },
	}
	},
	{ "ComputeInvCMAP",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRGBColors", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBQUAD", 32, IN },
		{1, "nColors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInvTable", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DitherTo8",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDestBits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "nDestPitch", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pSrcBits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "nSrcPitch", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bfidSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "prgbDestColors", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBQUAD", 32, IN },
		{6, "prgbSrcColors", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBQUAD", 32, IN },
		{7, "pbDestInvMap", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{12, "lDestTrans", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{13, "lSrcTrans", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
};

int imgutilarraySize = (sizeof(imgutil_info) / sizeof(imgutil_info[0]));
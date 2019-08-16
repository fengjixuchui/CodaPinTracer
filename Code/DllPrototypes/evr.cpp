#include "../Pyrebox_libcalls.h"

libcall_info_t evr_info[] = {
	{ "MFIsFormatYUV",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFConvertColorInfoFromDXVA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pToFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, INOUT },
		{1, "dwFromDXVA", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFCreateVideoSampleFromSurface",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnkSurface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppSample", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSample", 32, INOUT },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCreateVideoPresenter",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "riidDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppVideoPresenter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "MFGetStrideForBitmapInfoHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pStride", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFCreateVideoMixerAndPresenter",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMixerOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pPresenterOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "riidMixer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppvVideoMixer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{4, "riidPresenter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppvVideoPresenter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "MFInitVideoFormat",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, INOUT },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "_MFStandardVideoFormat", 32, IN },
	}
	},
	{ "MFCreateVideoMediaTypeFromBitMapInfoHeader",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbmihBitMapInfoHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{1, "dwPixelAspectRatioX", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwPixelAspectRatioY", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InterlaceMode", NKT_DBOBJCLASS_Enumeration, "_MFVideoInterlaceMode", 32, IN },
		{4, "VideoFlags", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "qwFramesPerSecondNumerator", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "qwFramesPerSecondDenominator", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{7, "dwMaxBitRate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, IN },
	}
	},
	{ "MFGetUncompressedVideoFormat",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
	}
	},
	{ "MFCreateVideoMediaTypeFromVideoInfoHeader",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoInfoHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagKS_VIDEOINFOHEADER", 704, IN },
		{1, "cbVideoInfoHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwPixelAspectRatioX", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwPixelAspectRatioY", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "InterlaceMode", NKT_DBOBJCLASS_Enumeration, "_MFVideoInterlaceMode", 32, IN },
		{5, "VideoFlags", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "pSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{7, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, IN },
	}
	},
	{ "MFCreateVideoMediaTypeFromVideoInfoHeader2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoInfoHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagKS_VIDEOINFOHEADER2", 896, IN },
		{1, "cbVideoInfoHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AdditionalVideoFlags", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{3, "pSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, IN },
	}
	},
	{ "MFCreateVideoMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
		{1, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, INOUT },
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
	{ "MFConvertColorInfoToDXVA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdwToDXVA", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "pFromFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
	}
	},
	{ "MFConvertFromFP16Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDest", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "pSrc", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFInitVideoFormat_RGB",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
		{1, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "D3Dfmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFCreateVideoMixer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "riidDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "MFCreateDXSurfaceBuffer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "punkSurface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "fBottomUpWhenLinear", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ppBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaBuffer", 32, IN },
	}
	},
	{ "MFConvertToFP16Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDest", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pSrc", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFGetPlaneSize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwPlaneSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFCreateVideoMediaTypeFromSubtype",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAMSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, INOUT },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCreateVideoSampleAllocator",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppSampleAllocator", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCopyImage",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDest", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lDestStride", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pSrc", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lSrcStride", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwWidthInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int evrarraySize = (sizeof(evr_info) / sizeof(evr_info[0]));
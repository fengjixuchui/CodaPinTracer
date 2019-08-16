#include "../Pyrebox_libcalls.h"

libcall_info_t Mfplat_info[] = {
	{ "MFStartup",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Version", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFCreateAudioMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAudioFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{1, "ppIAudioMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFAudioMediaType", 32, INOUT },
	}
	},
	{ "MFCreateTransformActivate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, INOUT },
	}
	},
	{ "MFTRegister",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidMFT", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{1, "guidCategory", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{2, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cInputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pInputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{6, "cOutputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pOutputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{8, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
	}
	},
	{ "MFDeserializeAttributesFromStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "MFInitMediaTypeFromVideoInfoHeader2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pVIH2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVIDEOINFOHEADER2", 896, IN },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "MFTEnum",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidCategory", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInputType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{3, "pOutputType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{4, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{5, "ppclsidMFT", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_GUID", 128, INOUT },
		{6, "pcMFTs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFEndRegisterWorkQueueWithMMCSS",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncResult", 32, IN },
		{1, "pdwTaskId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "MFTRegisterLocal",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pClassFactory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IClassFactory", 32, IN },
		{1, "guidCategory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cInputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pInputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{6, "cOutputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pOutputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
	}
	},
	{ "MFConvertColorInfoFromDXVA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pToFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, INOUT },
		{1, "dwFromDXVA", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFFrameRateToAverageTimePerFrame",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "unNumerator", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "unDenominator", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "punAverageTimePerFrame", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "MFCreateVideoMediaTypeFromBitMapInfoHeaderEx",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbmihBitMapInfoHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{1, "cbBitMapInfoHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwPixelAspectRatioX", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwPixelAspectRatioY", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "InterlaceMode", NKT_DBOBJCLASS_Enumeration, "_MFVideoInterlaceMode", 32, IN },
		{5, "VideoFlags", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "dwFramesPerSecondNumerator", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwFramesPerSecondDenominator", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "dwMaxBitRate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, INOUT },
	}
	},
	{ "MFCreateTempFile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AccessMode", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0001", 32, IN },
		{1, "OpenMode", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0002", 32, IN },
		{2, "fFlags", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0003", 32, IN },
		{3, "ppIByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFByteStream", 32, IN },
	}
	},
	{ "MFAddPeriodicCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "pdwKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFGetSystemTime",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, INOUT },
	}
	},
	{ "MFPutWorkItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwQueue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncCallback", 32, IN },
		{2, "pState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "MFCreateMediaBufferWrapper",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaBuffer", 32, IN },
		{1, "cbOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaBuffer", 32, INOUT },
	}
	},
	{ "MFTUnregister",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidMFT", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
	}
	},
	{ "MFCalculateBitmapImageSize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBMIH", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{1, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbImageSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "pbKnown", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFCreateEventQueue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppMediaEventQueue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaEventQueue", 32, IN },
	}
	},
	{ "MFBeginRegisterWorkQueueWithMMCSS",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwWorkQueueId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwTaskId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pDoneCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncCallback", 32, IN },
		{4, "pDoneState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "MFCreateMFByteStreamOnStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "ppByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFByteStream", 32, INOUT },
	}
	},
	{ "MFCreateMediaTypeFromRepresentation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidRepresentation", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{1, "pvRepresentation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ppIMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaType", 32, INOUT },
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
	{ "MFInitMediaTypeFromVideoInfoHeader",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pVIH", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVIDEOINFOHEADER", 704, IN },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "MFCreateSourceResolver",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppISourceResolver", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSourceResolver", 32, INOUT },
	}
	},
	{ "MFCreateLegacyMediaBufferOnMFMediaBuffer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSample", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFSample", 32, IN },
		{1, "pMFMediaBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaBuffer", 32, IN },
		{2, "cbOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppMediaBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMediaBuffer", 32, IN },
	}
	},
	{ "MFCreateStreamDescriptor",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwStreamIdentifier", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cMediaTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "apMediaTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaType", 32, IN },
		{3, "ppDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFStreamDescriptor", 32, IN },
	}
	},
	{ "MFWrapMediaType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOrig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "MajorType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "SubType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppWrap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaType", 32, IN },
	}
	},
	{ "MFValidateMediaTypeSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FormatType", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{1, "pBlock", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFCreateAlignedMemoryBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cbMaxLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbAligment", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaBuffer", 32, IN },
	}
	},
	{ "MFUnlockWorkQueue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwWorkQueue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFInitAMMediaTypeFromMFMediaType",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "guidFormatBlockType", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{2, "pAMType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
	}
	},
	{ "MFLockPlatform",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCreateMemoryBuffer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cbMaxLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaBuffer", 32, IN },
	}
	},
	{ "MFEndUnregisterWorkQueueWithMMCSS",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncResult", 32, IN },
	}
	},
	{ "MFTUnregisterLocal",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pClassFactory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IClassFactory", 32, IN },
	}
	},
	{ "MFCreateMediaEvent",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "met", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "guidExtendedType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "hrStatus", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pvValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{4, "ppEvent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaEvent", 32, IN },
	}
	},
	{ "MFInitVideoFormat",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, INOUT },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "_MFStandardVideoFormat", 32, IN },
	}
	},
	{ "MFSerializePresentationDescriptor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFPresentationDescriptor", 32, IN },
		{1, "pcbData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "ppbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "MFInitMediaTypeFromMFVideoFormat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pMFVF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFCreateMediaType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaType", 32, IN },
	}
	},
	{ "MFCreateAMMediaTypeFromMFMediaType",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "guidFormatBlockType", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{2, "ppAMType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_AMMediaType", 576, IN },
	}
	},
	{ "MFTEnumEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidCategory", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInputType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{3, "pOutputType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{4, "pppMFTActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IMFActivate", 32, INOUT },
		{5, "pnumMFTActivate", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "MFInitAttributesFromBlob",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "pBuf", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFGetAttributesAsBlobSize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "pcbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFCancelCreateFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCancelCookie", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
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
	{ "MFCreateSystemTimeSource",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppSystemTimeSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPresentationTimeSource", 32, IN },
	}
	},
	{ "MFInitMediaTypeFromMPEG1VideoInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pMP1VI", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMPEG1VIDEOINFO", 832, IN },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "MFGetUncompressedVideoFormat",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
	}
	},
	{ "MFGetTimerPeriodicity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Periodicity", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
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
	{ "MFCompareFullToPartialMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFTypeFull", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pMFTypePartial", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
	}
	},
	{ "MFGetAttributesAsBlob",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "pBuf", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFCreateVideoMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVideoFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
		{1, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, INOUT },
	}
	},
	{ "MFTGetInfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidMFT", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
		{1, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "ppInputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, INOUT },
		{3, "pcInputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "ppOutputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, INOUT },
		{5, "pcOutputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ppAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFAttributes", 32, INOUT },
	}
	},
	{ "MFBeginUnregisterWorkQueueWithMMCSS",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwWorkQueueId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pDoneCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncCallback", 32, IN },
		{2, "pDoneState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "MFBeginCreateFile",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AccessMode", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0001", 32, IN },
		{1, "OpenMode", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0002", 32, IN },
		{2, "fFlags", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0003", 32, IN },
		{3, "pwszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncCallback", 32, IN },
		{5, "pState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{6, "ppCancelCookie", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, INOUT },
	}
	},
	{ "MFAverageTimePerFrameToFrameRate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "unAverageTimePerFrame", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "punNumerator", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "punDenominator", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFllMulDiv",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, INOUT },
		{0, "a", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "b", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "d", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
	}
	},
	{ "MFLockWorkQueue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwWorkQueue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFCreateAsyncResult",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncCallback", 32, IN },
		{2, "punkState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "ppAsyncResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFAsyncResult", 32, IN },
	}
	},
	{ "MFInitMediaTypeFromWaveFormatEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pWaveFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFConvertColorInfoToDXVA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdwToDXVA", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "pFromFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MFVIDEOFORMAT", 1408, IN },
	}
	},
	{ "MFSerializeAttributesToStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pStm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "MFCancelWorkItem",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Key", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "MFGetPluginControl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppPluginControl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPluginControl", 32, INOUT },
	}
	},
	{ "MFInitMediaTypeFromAMMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pAMType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
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
	{ "CreatePropertyStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppStore", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStore", 32, INOUT },
	}
	},
	{ "MFGetWorkQueueMMCSSTaskId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwWorkQueueId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwTaskId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFCreatePresentationDescriptor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cStreamDescriptors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apStreamDescriptors", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFStreamDescriptor", 32, IN },
		{2, "ppPresentationDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPresentationDescriptor", 32, IN },
	}
	},
	{ "MFEndCreateFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncResult", 32, IN },
		{1, "ppFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFByteStream", 32, INOUT },
	}
	},
	{ "MFUnlockPlatform",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCreateSample",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppIMFSample", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSample", 32, IN },
	}
	},
	{ "MFCreateAttributes",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppMFAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFAttributes", 32, INOUT },
		{1, "cInitialSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFTRegisterLocalByCLSID",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clisdMFT", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "guidCategory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cInputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pInputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
		{6, "cOutputTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pOutputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "__MIDL___MIDL_itf_mfobjects_0000_0008_0003", 256, IN },
	}
	},
	{ "MFHeapFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "MFHeapAlloc",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "line", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "eat", NKT_DBOBJCLASS_Enumeration, "_EAllocationType", 32, IN },
	}
	},
	{ "MFCreateCollection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppIMFCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFCollection", 32, INOUT },
	}
	},
	{ "MFScheduleWorkItem",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncCallback", 32, IN },
		{1, "pState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "Timeout", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "pKey", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "MFAllocateWorkQueue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdwWorkQueue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
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
	{ "MFRemovePeriodicCallback",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFGetWorkQueueMMCSSClass",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwWorkQueueId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "pcchClass", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
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
	{ "MFTUnregisterLocalByCLSID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidMFT", NKT_DBOBJCLASS_Struct, "_GUID", 128, IN },
	}
	},
	{ "MFInvokeCallback",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsyncResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncResult", 32, IN },
	}
	},
	{ "MFCreateWaveFormatExFromMFMediaType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "ppWF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tWAVEFORMATEX", 144, IN },
		{2, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MFShutdown",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCalculateImageSize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "unWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "unHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbImageSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFPutWorkItemEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwQueue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncResult", 32, IN },
	}
	},
	{ "MFGetMFTMerit",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFT", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, INOUT },
		{1, "cbVerifier", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "verifier", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "merit", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MFUnwrapMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pWrap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "ppOrig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaType", 32, IN },
	}
	},
	{ "MFInitMediaTypeFromMPEG2VideoInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pMP2VI", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMPEG2VIDEOINFO", 1088, IN },
		{2, "cbBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "MFDeserializePresentationDescriptor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ppPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPresentationDescriptor", 32, IN },
	}
	},
	{ "MFScheduleWorkItemEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAsyncResult", 32, IN },
		{1, "Timeout", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "pKey", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "MFCreateVideoMediaTypeFromSubtype",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAMSubtype", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppIVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFVideoMediaType", 32, INOUT },
	}
	},
	{ "MFCreateMFVideoFormatFromMFMediaType",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMFType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "ppMFVF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MFVIDEOFORMAT", 1408, INOUT },
		{2, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
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
	{ "MFCreateFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AccessMode", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0001", 32, IN },
		{1, "OpenMode", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0002", 32, IN },
		{2, "fFlags", NKT_DBOBJCLASS_Enumeration, "__MIDL___MIDL_itf_mfobjects_0000_0017_0003", 32, IN },
		{3, "pwszFileURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ppIByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFByteStream", 32, IN },
	}
	},
	{ "MFAllocateWorkQueueEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "WorkQueueType", NKT_DBOBJCLASS_Enumeration, "MFASYNC_WORKQUEUE_TYPE", 32, IN },
		{1, "pdwWorkQueue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
};

int MfplatarraySize = (sizeof(Mfplat_info) / sizeof(Mfplat_info[0]));
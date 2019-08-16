#include "../Pyrebox_libcalls.h"

libcall_info_t Mf_info[] = {
	{ "MFCreateTopologyNode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NodeType", NKT_DBOBJCLASS_Enumeration, "MF_TOPOLOGY_TYPE", 32, IN },
		{1, "ppNode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFTopologyNode", 32, INOUT },
	}
	},
	{ "MFGetSupportedMimeTypes",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPropVarMimeTypeArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCreateASFProfileFromPresentationDescriptor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFPresentationDescriptor", 32, IN },
		{1, "ppIProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFASFProfile", 32, IN },
	}
	},
	{ "MFCreatePMPMediaSession",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pConfiguration", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{2, "ppMediaSession", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSession", 32, IN },
		{3, "ppEnablerActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, IN },
	}
	},
	{ "MFCreateDeviceSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "ppSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSource", 32, INOUT },
	}
	},
	{ "MFCreateSequencerSegmentOffset",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hnsOffset", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "pvarSegmentOffset", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "MFCreateSourceResolver",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppISourceResolver", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSourceResolver", 32, INOUT },
	}
	},
	{ "MFCreatePresentationDescriptorFromASFProfile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFASFProfile", 32, IN },
		{1, "ppIPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPresentationDescriptor", 32, IN },
	}
	},
	{ "MFShutdownObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "MFCreateRemoteDesktopPlugin",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppPlugin", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFRemoteDesktopPlugin", 32, IN },
	}
	},
	{ "MFCreateASFMultiplexer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppIMultiplexer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFASFMultiplexer", 32, IN },
	}
	},
	{ "MFCreateASFIndexerByteStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIContentByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{1, "cbIndexStartOffset", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "pIIndexByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFByteStream", 32, INOUT },
	}
	},
	{ "MFCreateASFStreamSelector",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIASFProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFASFProfile", 32, IN },
		{1, "ppSelector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFASFStreamSelector", 32, IN },
	}
	},
	{ "MFCreateASFStreamingMediaSinkActivate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pByteStreamActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFActivate", 32, IN },
		{1, "pContentInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFASFContentInfo", 32, IN },
		{2, "ppIActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, IN },
	}
	},
	{ "MFCreateAggregateSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSourceCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFCollection", 32, IN },
		{1, "ppAggSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSource", 32, INOUT },
	}
	},
	{ "MFCreateWMAEncoderActivate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pEncodingConfigurationProperties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
		{2, "ppActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, IN },
	}
	},
	{ "MFCreateASFContentInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppIContentInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFASFContentInfo", 32, IN },
	}
	},
	{ "MFCreatePMPServer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwCreationFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppPMPServer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPMPServer", 32, INOUT },
	}
	},
	{ "MFCreateASFMediaSink",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{1, "ppIMediaSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSink", 32, IN },
	}
	},
	{ "MFRequireProtectedEnvironment",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPresentationDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFPresentationDescriptor", 32, IN },
	}
	},
	{ "MFCreateStandardQualityManager",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppQualityManager", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFQualityManager", 32, INOUT },
	}
	},
	{ "MFCreateVideoRenderer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riidRenderer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppVideoRenderer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "MFCreateASFProfile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppIProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFASFProfile", 32, IN },
	}
	},
	{ "MFCreatePresentationClock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppPresentationClock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPresentationClock", 32, IN },
	}
	},
	{ "MFEnumDeviceSources",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "pppSourceActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IMFActivate", 32, IN },
		{2, "pcSourceActivate", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "MFCreateTranscodeProfile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppTranscodeProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFTranscodeProfile", 32, INOUT },
	}
	},
	{ "MFGetSupportedSchemes",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPropVarSchemeArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "MFCreateCredentialCache",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppCache", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFNetCredentialCache", 32, IN },
	}
	},
	{ "MFCreateProxyLocator",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszProtocol", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pProxyConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
		{2, "ppProxyLocator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFNetProxyLocator", 32, INOUT },
	}
	},
	{ "MFCreateSampleGrabberSinkActivate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIMFMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pIMFSampleGrabberSinkCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFSampleGrabberSinkCallback", 32, IN },
		{2, "ppIActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, IN },
	}
	},
	{ "MFCreateMPEG4MediaSink",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{1, "pVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{2, "pAudioMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{3, "ppIMediaSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSink", 32, INOUT },
	}
	},
	{ "MFCreateTranscodeSinkActivate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, INOUT },
	}
	},
	{ "MFGetService",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "guidService", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "MFCreate3GPMediaSink",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{1, "pVideoMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{2, "pAudioMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{3, "ppIMediaSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSink", 32, INOUT },
	}
	},
	{ "MFCreateTranscodeTopology",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaSource", 32, IN },
		{1, "pwszOutputFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFTranscodeProfile", 32, IN },
		{3, "ppTranscodeTopo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFTopology", 32, INOUT },
	}
	},
	{ "MFCreateSimpleTypeHandler",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaTypeHandler", 32, INOUT },
	}
	},
	{ "MFCreateNetSchemePlugin",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppvHandler", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "MFCreateASFSplitter",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppISplitter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFASFSplitter", 32, IN },
	}
	},
	{ "MFCreateASFMediaSinkActivate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pContentInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFASFContentInfo", 32, IN },
		{2, "ppIActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, IN },
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
	{ "MFCreateAudioRendererActivate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, INOUT },
	}
	},
	{ "MFTranscodeGetAudioOutputAvailableTypes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidSubType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwMFTFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pCodecConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{3, "ppAvailableTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFCollection", 32, INOUT },
	}
	},
	{ "MFCreateSampleCopierMFT",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppCopierMFT", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFTransform", 32, INOUT },
	}
	},
	{ "MFCreateASFStreamingMediaSink",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pIByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{1, "ppIMediaSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSink", 32, IN },
	}
	},
	{ "MFCreateMP3MediaSink",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pTargetByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{1, "ppMediaSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSink", 32, INOUT },
	}
	},
	{ "MFCreateMediaSession",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pConfiguration", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "ppMediaSession", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSession", 32, IN },
	}
	},
	{ "MFCreateTopology",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppTopo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFTopology", 32, IN },
	}
	},
	{ "MFGetTopoNodeCurrentType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pNode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFTopologyNode", 32, IN },
		{1, "dwStreamIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fOutput", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ppType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaType", 32, INOUT },
	}
	},
	{ "MFCreateTopoLoader",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFTopoLoader", 32, IN },
	}
	},
	{ "MFCreateDeviceSourceActivate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "ppActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, IN },
	}
	},
	{ "MFCreateWMVEncoderActivate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMediaType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaType", 32, IN },
		{1, "pEncodingConfigurationProperties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
		{2, "ppActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, IN },
	}
	},
	{ "CreateNamedPropertyStore",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppStore", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "INamedPropertyStore", 32, INOUT },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCreateVideoRendererActivate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndVideo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppActivate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFActivate", 32, INOUT },
	}
	},
	{ "MFCreateASFIndexer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppIIndexer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFASFIndexer", 32, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFCreateSequencerSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pReserved", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppSequencerSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSequencerSource", 32, IN },
	}
	},
	{ "MFCreateAudioRenderer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAudioAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{1, "ppSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFMediaSink", 32, INOUT },
	}
	},
};

int MfarraySize = (sizeof(Mf_info) / sizeof(Mf_info[0]));
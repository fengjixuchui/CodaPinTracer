#include "../Pyrebox_libcalls.h"

libcall_info_t wsdapi_info[] = {
	{ "WSDCreateUdpAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDUdpAddress", 32, IN },
	}
	},
	{ "WSDXMLBuildAnyForSingleElement",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pElementName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_NAME", 64, IN },
		{1, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppAny", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WSDXML_ELEMENT", 224, IN },
	}
	},
	{ "WSDUriEncode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "source", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchSource", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "destOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "cchDestOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WSDXMLAddSibling",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pFirst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_ELEMENT", 224, IN },
		{1, "pSecond", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_ELEMENT", 224, IN },
	}
	},
	{ "WSDCreateDiscoveryProvider",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{1, "ppProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDiscoveryProvider", 32, INOUT },
	}
	},
	{ "WSDCreateUdpMessageParameters",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppTxParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDUdpMessageParameters", 32, INOUT },
	}
	},
	{ "WSDUriDecode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "source", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchSource", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "destOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "cchDestOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WSDCreateDeviceHost2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszLocalId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{2, "pConfigParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSD_CONFIG_PARAM", 96, IN },
		{3, "dwConfigParamCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppDeviceHost", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDDeviceHost", 32, INOUT },
	}
	},
	{ "WSDCreateDeviceProxy2",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszDeviceId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszLocalId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{3, "pConfigParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSD_CONFIG_PARAM", 96, IN },
		{4, "dwConfigParamCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppDeviceProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDDeviceProxy", 32, INOUT },
	}
	},
	{ "WSDCreateDeviceHostAdvanced",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszLocalId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{2, "ppHostAddresses", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDAddress", 32, IN },
		{3, "dwHostAddressCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppDeviceHost", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDDeviceHost", 32, INOUT },
	}
	},
	{ "WSDXMLAddChild",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_ELEMENT", 224, IN },
		{1, "pChild", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_ELEMENT", 224, IN },
	}
	},
	{ "WSDAttachLinkedMemory",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pParent", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pChild", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WSDCreateDeviceProxy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszDeviceId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszLocalId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{3, "ppDeviceProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDDeviceProxy", 32, INOUT },
	}
	},
	{ "WSDGenerateFault",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszCode", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszSubCode", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszReason", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pszDetail", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{5, "ppFault", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WSD_SOAP_FAULT", 160, INOUT },
	}
	},
	{ "WSDCreateDiscoveryProvider2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{1, "pConfigParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSD_CONFIG_PARAM", 96, IN },
		{2, "dwConfigParamCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDiscoveryProvider", 32, INOUT },
	}
	},
	{ "WSDCreateDiscoveryPublisher2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{1, "pConfigParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSD_CONFIG_PARAM", 96, IN },
		{2, "dwConfigParamCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppPublisher", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDiscoveryPublisher", 32, INOUT },
	}
	},
	{ "WSDCreateDeviceProxyAdvanced",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszDeviceId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pDeviceAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDAddress", 32, IN },
		{2, "pszLocalId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{4, "ppDeviceProxy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDDeviceProxy", 32, INOUT },
	}
	},
	{ "WSDCreateOutboundAttachment",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppAttachment", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDOutboundAttachment", 32, IN },
	}
	},
	{ "WSDXMLCleanupElement",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAny", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_ELEMENT", 224, IN },
	}
	},
	{ "WSDXMLGetNameFromBuiltinNamespace",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszNamespace", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WSDXML_NAME", 64, IN },
	}
	},
	{ "WSDGetConfigurationOption",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pVoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cbOutBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSDCreateDiscoveryPublisher",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{1, "ppPublisher", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDiscoveryPublisher", 32, INOUT },
	}
	},
	{ "WSDAllocateLinkedMemory",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pParent", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSDCreateHttpAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppAdress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDHttpAddress", 32, IN },
	}
	},
	{ "WSDFreeLinkedMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pVoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WSDGenerateFaultEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_NAME", 64, IN },
		{1, "pSubCode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_NAME", 64, IN },
		{2, "pReasons", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSD_LOCALIZED_STRING_LIST", 64, IN },
		{3, "pszDetail", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ppFault", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WSD_SOAP_FAULT", 160, INOUT },
	}
	},
	{ "WSDXMLCreateContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDXMLContext", 32, INOUT },
	}
	},
	{ "WSDSetConfigurationOption",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pVoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cbInBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSDCreateHttpMessageParameters",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppTxParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDHttpMessageParameters", 32, IN },
	}
	},
	{ "WSDXMLGetValueFromAny",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszNamespace", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pAny", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSDXML_ELEMENT", 224, IN },
		{3, "ppszValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "WSDDetachLinkedMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pVoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WSDCreateDeviceHost",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszLocalId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWSDXMLContext", 32, IN },
		{2, "ppDeviceHost", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWSDDeviceHost", 32, INOUT },
	}
	},
};

int wsdapiarraySize = (sizeof(wsdapi_info) / sizeof(wsdapi_info[0]));
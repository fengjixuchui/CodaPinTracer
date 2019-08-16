#include "../Pyrebox_libcalls.h"

libcall_info_t eappcfg_info[] = {
	{ "EapHostPeerQueryInteractiveUIInputFields",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwSizeofUIContextData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pUIContextData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pEapInteractiveUIData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_INTERACTIVE_UI_DATA", 160, IN },
		{5, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
		{6, "ppvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "EapHostPeerCredentialsXml2Blob",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pCredentialsDoc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IXMLDOMNode", 32, IN },
		{2, "dwSizeOfConfigIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pConfigIn", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pdwSizeOfCredentialsOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ppCredentialsOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{6, "pEapMethodType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_METHOD_TYPE", 128, IN },
		{7, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerQueryUIBlobFromInteractiveUIInputFields",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwSizeofUIContextData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pUIContextData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pEapInteractiveUIData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_INTERACTIVE_UI_DATA", 160, IN },
		{5, "pdwSizeOfDataFromInteractiveUI", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "ppDataFromInteractiveUI", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{7, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
		{8, "ppvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "EapHostPeerFreeErrorMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerQueryCredentialInputFields",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hUserImpersonationToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eapMethodType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwEapConnDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbEapConnData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pEapConfigInputFieldArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_CONFIG_INPUT_FIELD_ARRAY", 96, IN },
		{6, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerGetMethods",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pEapMethodInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_METHOD_INFO_ARRAY", 64, IN },
		{1, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerFreeMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "EapHostPeerInvokeIdentityUI",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eapMethodType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwSizeofConnectionData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pConnectionData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "dwSizeofUserData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pUserData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "pdwSizeOfUserDataOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "ppUserDataOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{10, "ppwszIdentity", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{11, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
		{12, "ppvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "EapHostPeerInvokeInteractiveUI",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSizeofUIContextData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pUIContextData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pdwSizeOfDataFromInteractiveUI", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ppDataFromInteractiveUI", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerConfigBlob2Xml",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eapMethodType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{2, "dwSizeOfConfigIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pConfigIn", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "ppConfigDoc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IXMLDOMDocument2", 32, IN },
		{5, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerQueryUserBlobFromCredentialInputFields",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hUserImpersonationToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eapMethodType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwEapConnDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbEapConnData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pEapConfigInputFieldArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_CONFIG_INPUT_FIELD_ARRAY", 96, IN },
		{6, "pdwUserBlobSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "ppbUserBlob", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{8, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerGetMethodProperties",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "eapMethodType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{3, "hUserImpersonationToken", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwEapConnDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbEapConnData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "dwUserDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pbUserData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "pMethodPropertyArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_METHOD_PROPERTY_ARRAY", 64, IN },
		{9, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerConfigXml2Blob",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pConfigDoc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IXMLDOMNode", 32, IN },
		{2, "pdwSizeOfConfigOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppConfigOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{4, "pEapMethodType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_METHOD_TYPE", 128, IN },
		{5, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerInvokeConfigUI",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "eapMethodType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{3, "dwSizeOfConfigIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pConfigIn", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pdwSizeOfConfigOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "ppConfigOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{7, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
};

int eappcfgarraySize = (sizeof(eappcfg_info) / sizeof(eappcfg_info[0]));
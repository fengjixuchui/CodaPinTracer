#include "../Pyrebox_libcalls.h"

libcall_info_t eappprxy_info[] = {
	{ "EapHostPeerSetResponseAttributes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pAttribs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_ATTRIBUTES", 64, IN },
		{2, "pEapOutput", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "tagEapHostPeerResponseAction", 32, IN },
		{3, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerGetUIContext",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwSizeOfUIContextData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "ppUIContextData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerUninitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "EapHostPeerGetAuthStatus",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "authParam", NKT_DBOBJCLASS_Enumeration, "tagEapHostPeerAuthParams", 32, IN },
		{2, "pcbAuthData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppAuthData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{4, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerFreeRuntimeMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "EapHostPeerGetSendPacket",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcbSendPacket", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "ppSendPacket", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerBeginSession",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eapType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{2, "pAttributeArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_ATTRIBUTES", 64, IN },
		{3, "hTokenImpersonateUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwSizeofConnectionData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pConnectionData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "dwSizeofUserData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pUserData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "dwMaxSendPacketSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "pConnectionId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{10, "func", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{11, "pContextData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{12, "pSessionId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{13, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerFreeEapError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerGetResponseAttributes",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pAttribs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EAP_ATTRIBUTES", 64, IN },
		{2, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerProcessReceivedPacket",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbReceivePacket", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pReceivePacket", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pEapOutput", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "tagEapHostPeerResponseAction", 32, IN },
		{4, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerGetIdentity",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "eapMethodType", NKT_DBOBJCLASS_Struct, "_EAP_METHOD_TYPE", 128, IN },
		{3, "dwSizeofConnectionData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pConnectionData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "dwSizeofUserData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pUserData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "hTokenImpersonateUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "pfInvokeUI", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "pdwSizeOfUserDataOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{10, "ppUserDataOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{11, "ppwszIdentity", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{12, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
		{13, "ppvReserved", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "EapHostPeerEndSession",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerGetResult",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "reason", NKT_DBOBJCLASS_Enumeration, "tagEapHostPeerMethodResultReason", 32, IN },
		{2, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagEapHostPeerMethodResult", 384, IN },
		{3, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerSetUIContext",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSizeOfUIContextData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pUIContextData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pEapOutput", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "tagEapHostPeerResponseAction", 32, IN },
		{4, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerClearConnection",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pConnectionId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppEapError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_EAP_ERROR", 640, IN },
	}
	},
	{ "EapHostPeerInitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
};

int eappprxyarraySize = (sizeof(eappprxy_info) / sizeof(eappprxy_info[0]));
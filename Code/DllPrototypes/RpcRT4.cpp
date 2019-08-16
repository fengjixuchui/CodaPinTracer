#include "../Pyrebox_libcalls.h"

libcall_info_t RpcRT4_info[] = {
	{ "NdrConvert2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NumberParams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrCorrelationFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "NdrPartialIgnoreServerInitialize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrSimpleStructMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcObjectSetType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "TypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "RpcSmClientFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pNodeToFree", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrMesTypeAlignSize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{2, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UuidCreateNil",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NilUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "MesHandleFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrConvert",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcServerInqAddressChangeFn",0,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "RpcCancelThreadEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Thread", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Timeout", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "I_RpcServerInqLocalConnAddress",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "AddressFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrFixedArrayMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrClientCall",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Union, "_CLIENT_CALL_RETURN", 32, INOUT },
		{0, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerInqCallAttributesA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RpcCallAttributes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "RpcServerInqCallAttributesW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RpcCallAttributes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "NdrStubCall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pThis", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pChannel", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{3, "pdwStubPhase", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcSsAllocate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcRevertToSelfEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcSend",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "RpcErrorGetNumberOfRecords",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EnumHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_ERROR_ENUM_HANDLE", 96, IN },
		{1, "Records", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "NdrFixedArrayBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcErrorEndEnumeration",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EnumHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_ERROR_ENUM_HANDLE", 96, IN },
	}
	},
	{ "NdrFixedArrayMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcBindingServerFromClient",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "I_RpcExceptionFilter",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExceptionCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcServerRegisterIf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MgrTypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "MgrEpv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcStringBindingComposeA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjUuid", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ProtSeq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NetworkAddr", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Endpoint", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Options", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "StringBinding", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcStringBindingComposeW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjUuid", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ProtSeq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NetworkAddr", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Endpoint", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Options", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "StringBinding", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "I_RpcBindingInqWireIdForSnego",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "WireId", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NDRSContextUnmarshall2",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "DataRepresentation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "CtxGuard", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrInterfacePointerUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "MesEncodeDynBufferHandleCreate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{1, "pEncodedSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrNonConformantStringUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcMgmtInqDefaultProtectLevel",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrProxyErrorHandler",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwExceptionCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcSmSetClientAllocFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientAlloc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ClientFree", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UuidCompare",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "Uuid2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "Status", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcServerSubscribeForNotification",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Notification", NKT_DBOBJCLASS_Enumeration, "_RPC_NOTIFICATIONS", 32, IN },
		{2, "NotificationType", NKT_DBOBJCLASS_Enumeration, "_RPC_NOTIFICATION_TYPES", 32, IN },
		{3, "NotificationInfo", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_NOTIFICATION_INFO", 128, IN },
	}
	},
	{ "RpcAsyncInitializeHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
		{1, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcMgmtEpEltInqBegin",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EpBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "InquiryType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{3, "VersOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{5, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcSmDestroyClientContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ContextHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "CStdStubBuffer_Disconnect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
	}
	},
	{ "RpcSsSwapClientAllocFree",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ClientAlloc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ClientFree", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "OldClientAlloc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "OldClientFree", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrConformantStringMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CStdStubBuffer_Invoke",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPCOLEMESSAGE", 352, IN },
		{2, "pRpcChannelBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcChannelBuffer", 32, IN },
	}
	},
	{ "NdrStubForwardingFunction",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pChannel", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcChannelBuffer", 32, IN },
		{2, "pmsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, INOUT },
		{3, "pdwStubPhase", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "NdrRpcSsEnableAllocate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "RpcSsGetThreadHandle",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "NdrEncapsulatedUnionMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcSmGetThreadHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "I_RpcBindingInqMarshalledTargetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MarshalledTargetInfoSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "MarshalledTargetInfo", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcBindingFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcEpUnregister",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BindingVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{2, "UuidVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "NdrEncapsulatedUnionBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrClientCall2",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Union, "_CLIENT_CALL_RETURN", 32, INOUT },
		{0, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcMgmtEpUnregister",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EpBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{2, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "RpcSsGetContextBinding",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ContextHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcSsEnableAllocate",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "UuidEqual",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "Uuid2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "Status", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrConformantStructBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrComplexArrayFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrAllocate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "Len", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrDcomAsyncStubCall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pThis", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pChannel", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcChannelBuffer", 32, IN },
		{2, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{3, "pdwStubPhase", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "I_RpcGetExtendedError",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "I_RpcReallocPipeBuffer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "NewSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrUserMarshalSimpleTypeConvert",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "pBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FormatChar", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrSimpleStructFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerRegisterAuthInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "GetKeyFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "Arg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcReceive",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcServerUseAllProtseqsEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "RpcServerUseAllProtseqsIf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrXmitOrRepAsMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcMgmtEpEltInqDone",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrConformantVaryingStructMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerTestCancel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "NdrConformantVaryingStructUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrByteCountPointerUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcSsSetThreadHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Id", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrConformantVaryingStructBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcIfInqId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RpcIfHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "RpcIfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
	}
	},
	{ "I_RpcBindingIsClientLocal",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ClientLocalFlag", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrDcomAsyncClientCall",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Union, "_CLIENT_CALL_RETURN", 32, INOUT },
		{0, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrServerCall",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "RpcEpResolveBinding",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrPartialIgnoreServerUnmarshall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NDRSContextMarshall2",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "CContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, IN },
		{2, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "userRunDownIn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CtxGuard", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DceErrorInqTextA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RpcStatus", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "ErrorText", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DceErrorInqTextW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RpcStatus", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "ErrorText", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcAsyncGetCallStatus",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
	}
	},
	{ "NdrConformantVaryingArrayFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcAsyncCancelCall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
		{1, "fAbort", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrSimpleStructBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNetworkIsProtseqValidA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "MesEncodeFixedBufferHandleCreate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pEncodedSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "I_RpcRecordCalloutFailure",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "RpcStatus", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "CallOutState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RDR_CALLOUT_STATE", 704, IN },
		{2, "DllName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "UuidFromStringA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "StringUuid", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "UuidFromStringW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "StringUuid", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "NdrFixedArrayUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "UuidHash",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "Status", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcProtseqVectorFreeA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProtseqVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RPC_PROTSEQ_VECTORA", 64, IN },
	}
	},
	{ "I_RpcNsInterfaceUnexported",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "RpcInterfaceInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SERVER_INTERFACE", 544, IN },
	}
	},
	{ "MesEncodeIncrementalHandleCreate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "UserState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AllocFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "WriteFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrVaryingArrayMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcMgmtInqServerPrincNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcMgmtInqServerPrincNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcExceptionFilter",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExceptionCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrConformantStructMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrPartialIgnoreClientMarshall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrVaryingArrayBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcFreeBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "RpcBindingVectorFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RPC_BINDING_VECTOR", 64, IN },
	}
	},
	{ "NdrConformantArrayMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNetworkIsProtseqValidW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "NdrRangeUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "I_RpcMgmtEnableDedicatedThreadPool",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "I_RpcGetCurrentCallHandle",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "RpcSmFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NodeToFree", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrMesTypeFree2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pPicklingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_TYPE_PICKLING_INFO", 160, IN },
		{2, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcBindingReset",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrMesTypeDecode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{2, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrSendReceive",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pBufferEnd", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrConformantArrayBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcSsDontSerializeContext",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "I_RpcBindingInqSecurityContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "SecurityContextHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcBindingInqAuthClientA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Privs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcBindingInqAuthClientW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Privs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcBindingCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SourceBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DestinationBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "I_RpcServerSetAddressChangeFn",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAddressChangeFn", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrFreeBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "NdrClientInitialize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{2, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "ProcNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrServerContextMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ContextHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, IN },
		{2, "RundownRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "NdrEncapsulatedUnionFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcServerInqRemoteConnAddress",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "AddressFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcBindingInqAuthInfoA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcBindingInqAuthInfoW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrPointerMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NDRCContextMarshall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "CContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcSmAllocate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrNsSendReceive",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pBufferEnd", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pAutoHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcBindingInqOption",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "option", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pOptionValue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcBindingSetAuthInfoA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcBindingSetAuthInfoW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "I_RpcBindingInqTransportType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrProxyInitialize",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{2, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{3, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{4, "ProcNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcServerCompleteSecurityCallback",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcMgmtInqStats",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "RPC_STATS_VECTOR", 64, IN },
	}
	},
	{ "RpcServerUseProtseqEpW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Endpoint", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcSmEnableAllocate",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "NDRSContextUnmarshall",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, INOUT },
		{0, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DataRepresentation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrNonConformantStringBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrServerInitializeNew",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{2, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
	}
	},
	{ "RpcBindingCreateA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Template", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_HANDLE_TEMPLATE_V1_A", 320, IN },
		{1, "Security", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_HANDLE_SECURITY_V1_A", 192, IN },
		{2, "Options", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_HANDLE_OPTIONS_V1", 128, IN },
		{3, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "RpcBindingCreateW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Template", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_HANDLE_TEMPLATE_V1_W", 320, IN },
		{1, "Security", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_HANDLE_SECURITY_V1_W", 192, IN },
		{2, "Options", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_HANDLE_OPTIONS_V1", 128, IN },
		{3, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "NdrConformantStructFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcSsSetClientAllocFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ClientAlloc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ClientFree", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UuidCreate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "RpcBindingSetAuthInfoExA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "SecurityQos", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SECURITY_QOS", 128, IN },
	}
	},
	{ "RpcBindingSetAuthInfoExW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "SecurityQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SECURITY_QOS", 128, IN },
	}
	},
	{ "I_UuidCreate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "NdrMesTypeAlignSize2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pPicklingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_TYPE_PICKLING_INFO", 160, IN },
		{2, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcGetBufferWithObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "ObjectUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "MesDecodeBufferHandleCreate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Buffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcStringFreeA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "String", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "NdrServerInitializeMarshall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "NdrMesTypeEncode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{2, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrComplexStructMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrNonConformantStringMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcBindingInqDynamicEndpointA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DynamicEndpoint", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "I_RpcBindingInqDynamicEndpointW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DynamicEndpoint", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcServerUseProtseqA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcServerUseProtseqW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrGetBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "BufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcBindingInqLocalClientPID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Pid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrMesProcEncodeDecode",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{2, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcNegotiateTransferSyntax",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "RpcServerUseProtseqEpExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Endpoint", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "RpcServerUseProtseqEpExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Endpoint", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "RpcUserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "AsyncHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcServerUseProtseqIfExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "RpcServerUseProtseqIfExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "I_RpcGetBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "NdrRpcSmClientAllocate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrRpcSsDisableAllocate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "NdrInterfacePointerFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcObjectInqType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "TypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "RpcBindingFromStringBindingA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "StringBinding", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcBindingFromStringBindingW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "StringBinding", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrNonEncapsulatedUnionFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcNsInterfaceExported",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "RpcInterfaceInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SERVER_INTERFACE", 544, IN },
	}
	},
	{ "RpcSmSwapClientAllocFree",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientAlloc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ClientFree", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "OldClientAlloc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "OldClientFree", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrMesTypeEncode2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pPicklingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_TYPE_PICKLING_INFO", 160, IN },
		{2, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrCorrelationInitialize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "CacheSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcErrorGetNextRecord",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EnumHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_ERROR_ENUM_HANDLE", 96, IN },
		{1, "CopyStrings", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "ErrorInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_EXTENDED_ERROR_INFO", 896, INOUT },
	}
	},
	{ "NdrSimpleStructUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcMgmtEpEltInqNextA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{1, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{2, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "ObjectUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "Annotation", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcMgmtEpEltInqNextW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{1, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{2, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "ObjectUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "Annotation", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "NDRCContextBinding",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "CContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcMapWin32Status",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcRevertToSelf",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "NdrByteCountPointerFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcAsyncAbortCall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
		{1, "ExceptionCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UuidToStringA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "StringUuid", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "UuidToStringW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "StringUuid", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "CStdStubBuffer_DebugServerQueryInterface",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "I_RpcServerInqTransportType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrServerInitialize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{2, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
	}
	},
	{ "NdrContextHandleSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrNonEncapsulatedUnionMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcMgmtSetComTimeout",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrVaryingArrayUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "I_RpcConnectionInqSockBuffSize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RecvBuffSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "SendBuffSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrServerInitializePartial",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{2, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "RequestedBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrUserMarshalMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrDllCanUnloadNow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPSFactoryBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCStdPSFactoryBuffer", 128, IN },
	}
	},
	{ "I_RpcTurnOnEEInfoPropagation",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "NdrClearOutParameters",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ArgAddr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrNonEncapsulatedUnionBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrAsyncServerCall",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "I_RpcBindingInqSecurityContextKeyInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "KeyInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcErrorResetEnumeration",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EnumHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_ERROR_ENUM_HANDLE", 96, IN },
	}
	},
	{ "NdrConformantStringMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcErrorStartEnumeration",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EnumHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_ERROR_ENUM_HANDLE", 96, IN },
	}
	},
	{ "NdrServerContextUnmarshall",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "RpcNsBindingInqEntryNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcNsBindingInqEntryNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcErrorAddRecord",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ErrorInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_EXTENDED_ERROR_INFO", 896, IN },
	}
	},
	{ "RpcTestCancel",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "NdrConformantArrayUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrComplexArrayMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrComplexStructMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrVaryingArrayFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "MesIncrementalHandleReset",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "UserState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "AllocFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "WriteFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "ReadFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "Operation", NKT_DBOBJCLASS_Enumeration, "MIDL_ES_CODE", 32, IN },
	}
	},
	{ "NdrConformantStringBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcAllocate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrServerCall2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "NdrNonEncapsulatedUnionMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerUnregisterIf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MgrTypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "WaitForCallsToComplete", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrComplexStructBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrUserMarshalFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrAsyncClientCall",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Union, "_CLIENT_CALL_RETURN", 32, INOUT },
		{0, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcServerRegisterForwardFunction",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pForwardFunction", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CStdStubBuffer_IsIIDSupported",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "NdrConformantStructMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrUserMarshalMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrComplexArrayMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerYield",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "RpcServerInqIf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MgrTypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "MgrEpv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "MesDecodeIncrementalHandleCreate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "UserState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ReadFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "I_RpcPauseExecution",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Milliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcObjectSetInqFn",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryFn", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcServerCheckClientRestriction",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrUserMarshalBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrComplexArrayBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrOleFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "NodeToFree", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcServerListen",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MinimumCallThreads", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DontWait", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcBindingSetOption",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "option", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "optionValue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrCStdStubBuffer2_Release",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pPSF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSFactoryBuffer", 32, IN },
	}
	},
	{ "I_RpcOpenClientProcess",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClientProcess", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrRpcSmClientFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "NodeToFree", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcSsDestroyClientContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ContextHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrCorrelationPass",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "RpcServerInqDefaultPrincNameA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcServerInqDefaultPrincNameW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "I_RpcServerUseProtseq2W",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NetworkAddress", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Policy", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcSsContextLockShared",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ServerBindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "NdrServerInitializeUnmarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{2, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "RpcNetworkInqProtseqsW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProtseqVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RPC_PROTSEQ_VECTORW", 64, IN },
	}
	},
	{ "NdrVaryingArrayMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcBindingInqAuthClientExA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Privs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcBindingInqAuthClientExW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Privs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrConformantVaryingArrayMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrPointerMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrXmitOrRepAsMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerRegisterIf2",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MgrTypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "MgrEpv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "MaxRpcSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "IfCallbackFn", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NDRSContextMarshallEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "CContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, IN },
		{2, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "userRunDownIn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "NDRSContextUnmarshallEx",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "DataRepresentation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "I_RpcAsyncSetHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
	}
	},
	{ "NdrConformantVaryingArrayMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "MesBufferHandleReset",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "HandleStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Operation", NKT_DBOBJCLASS_Enumeration, "MIDL_ES_CODE", 32, IN },
		{3, "pBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{4, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pEncodedSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcProtseqVectorFreeW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProtseqVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RPC_PROTSEQ_VECTORW", 64, IN },
	}
	},
	{ "NDRSContextMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "CContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, IN },
		{1, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "userRunDownIn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "RpcSsDontSerializeContext",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrConformantVaryingArrayBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcStringBindingParseA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "StringBinding", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ObjUuid", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "NetworkAddr", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{4, "Endpoint", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "NetworkOptions", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcStringBindingParseW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "StringBinding", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ObjUuid", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "NetworkAddr", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{4, "Endpoint", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "NetworkOptions", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "I_RpcConnectionSetSockBuffSize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RecvBuffSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SendBuffSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrPointerBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrXmitOrRepAsBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerRegisterAuthInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "GetKeyFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "Arg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrSimpleTypeUnmarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FormatChar", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrConformantVaryingStructFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrInterfacePointerMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrFullPointerXlatInit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FULL_PTR_XLAT_TABLES", 128, INOUT },
		{0, "NumberOfPointers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "XlatSide", NKT_DBOBJCLASS_Enumeration, "XLAT_SIDE", 32, IN },
	}
	},
	{ "RpcServerRegisterIfEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MgrTypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "MgrEpv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "IfCallback", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcBindingCreateNP",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ServerName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ServiceName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NetworkOptions", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "I_RpcNsBindingSetEntryNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcNsBindingSetEntryNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "NdrEncapsulatedUnionMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcServerUseProtseqEp2A",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NetworkAddress", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Endpoint", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "Policy", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcServerUseProtseqEp2W",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NetworkAddress", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Endpoint", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "Policy", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrByteCountPointerMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrServerUnmarshall",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pChannel", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{2, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{3, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{4, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pParamList", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcSsDisableAllocate",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "RpcSmDisableAllocate",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "I_RpcServerStartService",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Endpoint", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcServerUnsubscribeForNotification",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Notification", NKT_DBOBJCLASS_Enumeration, "_RPC_NOTIFICATIONS", 32, IN },
		{2, "NotificationsQueued", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RpcImpersonateClient",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcMgmtSetCancelTimeout",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Timeout", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "I_RpcFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Object", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
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
	{ "NdrMesTypeDecode2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pPicklingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_TYPE_PICKLING_INFO", 160, IN },
		{2, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrComplexStructFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "UuidIsNil",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "Status", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcMgmtStopServerListening",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcSmSetThreadHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Id", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrXmitOrRepAsFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrClientInitializeNew",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{2, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "ProcNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrContextHandleInitialize",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CStdStubBuffer_QueryInterface",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "RpcMgmtEnableIdleCleanup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "RpcBindingSetObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ObjectUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "I_RpcBindingCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SourceBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DestinationBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrNonEncapsulatedUnionUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "IUnknown_Release_Proxy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "NdrGetUserMarshalInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "InformationLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pMarshalInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_NDR_USER_MARSHAL_INFO", 352, IN },
	}
	},
	{ "RpcBindingInqAuthInfoExA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "RpcQosVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "SecurityQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SECURITY_QOS", 128, IN },
	}
	},
	{ "RpcBindingInqAuthInfoExW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ServerPrincName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "AuthnLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "AuthnSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "AuthIdentity", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "AuthzSvc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "RpcQosVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "SecurityQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SECURITY_QOS", 128, IN },
	}
	},
	{ "RpcServerUseAllProtseqsIfEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "NdrDllRegisterProxy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pProxyFileList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagProxyFileInfo", 320, IN },
		{2, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "NdrConformantVaryingStructMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrConformantStringUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcMgmtInqIfIds",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "IfIdVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "RPC_IF_ID_VECTOR", 64, IN },
	}
	},
	{ "NdrStubInitialize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{2, "pStubDescriptor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{3, "pRpcChannelBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcChannelBuffer", 32, IN },
	}
	},
	{ "RpcBindingBind",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
		{1, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcGetAuthorizationContextForClient",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ClientBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ImpersonateOnReturn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "Reserved1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pExpirationTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{4, "Reserved2", NKT_DBOBJCLASS_Struct, "_LUID", 64, IN },
		{5, "Reserved3", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Reserved4", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "pAuthzClientContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "NdrMesSimpleTypeDecode",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Size", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
	}
	},
	{ "RpcBindingInqObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ObjectUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "NdrComplexStructUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrProxyFreeBuffer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "RpcRaiseException",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "exception", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CStdStubBuffer_DebugServerRelease",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrClientContextUnmarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pContextHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "BindHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrDllGetClassObject",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{3, "pProxyFileList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagProxyFileInfo", 320, IN },
		{4, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{5, "pPSFactoryBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCStdPSFactoryBuffer", 128, IN },
	}
	},
	{ "RpcServerInqBindings",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RPC_BINDING_VECTOR", 64, IN },
	}
	},
	{ "RpcErrorSaveErrorInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EnumHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_ERROR_ENUM_HANDLE", 96, IN },
		{1, "ErrorBlob", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{2, "BlobSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MesInqProcEncodingId",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pInterfaceId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SYNTAX_IDENTIFIER", 160, IN },
		{2, "pProcNum", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NdrSimpleStructMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcIfIdVectorFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfIdVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "RPC_IF_ID_VECTOR", 64, IN },
	}
	},
	{ "NdrCreateServerInterfaceFromStub",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStub", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pServerIf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_SERVER_INTERFACE", 544, IN },
	}
	},
	{ "RpcBindingUnbind",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrUserMarshalUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrComplexArrayUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcMgmtInqComTimeout",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcMgmtStatsVectorFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "StatsVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "RPC_STATS_VECTOR", 64, IN },
	}
	},
	{ "I_RpcSendReceive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "CStdStubBuffer_Connect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pUnkServer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "RpcEpRegisterA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BindingVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{2, "UuidVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
		{3, "Annotation", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcEpRegisterW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BindingVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{2, "UuidVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
		{3, "Annotation", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "NDRCContextUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pCContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{1, "hBinding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pBuff", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "DataRepresentation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrRpcSsDefaultFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "NodeToFree", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrConformantArrayFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrConformantStructUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrConformantArrayMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcMgmtSetServerStackSize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ThreadStackSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrMesSimpleTypeAlignSize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcErrorClearInformation",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "NdrMesSimpleTypeEncode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{2, "pObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Size", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
	}
	},
	{ "NdrInterfacePointerMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrNonConformantStringMemorySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerUseAllProtseqs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcServerUseProtseq2A",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NetworkAddress", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Policy", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrInterfacePointerBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "I_RpcClearMutex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Mutex", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcCertGeneratePrincipalNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Context", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcCertGeneratePrincipalNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Context", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "NdrProxyGetBuffer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
	}
	},
	{ "RpcServerUseProtseqEpA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Endpoint", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcServerUseProtseqExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "RpcServerUseProtseqExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Policy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_POLICY", 96, IN },
	}
	},
	{ "UuidCreateSequential",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Uuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "NdrConformantVaryingArrayUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "I_RpcBindingHandleToAsyncHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "AsyncHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrPointerUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NdrRpcSmSetClientToOsf",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
	}
	},
	{ "NdrXmitOrRepAsUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcMgmtWaitServerListen",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "NdrMapCommAndFaultStatus",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pCommStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pFaultStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "Status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcServerInqBindingHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "I_RpcBindingToStaticStringBindingW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "StringBinding", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcErrorLoadErrorInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ErrorBlob", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BlobSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnumHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRPC_ERROR_ENUM_HANDLE", 96, INOUT },
	}
	},
	{ "CStdStubBuffer_CountRefs",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
	}
	},
	{ "RpcServerUseProtseqIfA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcServerUseProtseqIfW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Protseq", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MaxCalls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RpcNetworkInqProtseqsA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProtseqVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RPC_PROTSEQ_VECTORA", 64, IN },
	}
	},
	{ "RpcAsyncCompleteCall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
		{1, "Reply", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CStdStubBuffer_AddRef",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
	}
	},
	{ "RpcEpRegisterNoReplaceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BindingVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{2, "UuidVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
		{3, "Annotation", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcEpRegisterNoReplaceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BindingVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{2, "UuidVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
		{3, "Annotation", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "NdrStubCall2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pThis", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pChannel", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pRpcMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, INOUT },
		{3, "pdwStubPhase", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RpcSsFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "NodeToFree", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "IUnknown_AddRef_Proxy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "RpcStringFreeW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "String", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcMgmtSetAuthorizationFn",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthorizationFn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "NdrClientContextMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ContextHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "fCheck", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrGetDcomProtocolVersion",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pVersion", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_VERSION", 32, IN },
	}
	},
	{ "NdrNsGetBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "BufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcRequestMutex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Mutex", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrMesProcEncodeDecode2",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Union, "_CLIENT_CALL_RETURN", 32, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_DESC", 640, IN },
		{2, "pFormatString", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrDllUnregisterProxy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pProxyFileList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagProxyFileInfo", 320, IN },
		{2, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "NdrProxySendReceive",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
	}
	},
	{ "I_RpcIfInqTransferSyntaxes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RpcIfHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TransferSyntaxes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_TRANSFER_SYNTAX", 160, IN },
		{2, "TransferSyntaxSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "TransferSyntaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RpcFreeAuthorizationContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAuthzClientContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "IUnknown_QueryInterface_Proxy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NdrOleAllocate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcMgmtIsServerListening",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcFreePipeBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "NdrCStdStubBuffer_Release",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pPSF", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSFactoryBuffer", 32, IN },
	}
	},
	{ "NdrServerContextNewUnmarshall",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrRpcSsDefaultAllocate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NdrPartialIgnoreClientBufferSize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "I_RpcDeleteMutex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Mutex", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrFullPointerXlatFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pXlatTables", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FULL_PTR_XLAT_TABLES", 128, IN },
	}
	},
	{ "NdrByteCountPointerBufferSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrServerContextNewMarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ContextHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, 0, 96, IN },
		{2, "RundownRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NdrSimpleTypeMarshall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FormatChar", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcAsyncAbortCall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
		{1, "ExceptionCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcAsyncRegisterInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAsync", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_ASYNC_STATE", 544, IN },
	}
	},
	{ "NdrEncapsulatedUnionUnmarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "ppMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fMustAlloc", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RpcCancelThread",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Thread", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrStubGetBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "This", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcStubBuffer", 32, IN },
		{1, "pRpcChannelBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRpcChannelBuffer", 32, IN },
		{2, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, INOUT },
	}
	},
	{ "NdrPointerFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcServerUnregisterIfEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MgrTypeUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "RundownContextHandles", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "I_RpcSessionStrictContextHandle",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "RpcSsContextLockExclusive",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ServerBindingHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NdrServerMarshall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pThis", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pChannel", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{3, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcBindingToStringBindingA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "StringBinding", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcBindingToStringBindingW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "StringBinding", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "NdrFixedArrayFree",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pStubMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIDL_STUB_MESSAGE", 1760, IN },
		{1, "pMemory", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pFormat", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
};

int RpcRT4arraySize = (sizeof(RpcRT4_info) / sizeof(RpcRT4_info[0]));
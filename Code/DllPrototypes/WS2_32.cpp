#include "../Pyrebox_libcalls.h"

libcall_info_t WS2_32_info[] = {
	{ "WSAProviderCompleteAsyncCall",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAsyncCall", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iRetCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSARecvDisconnect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpInboundDisconnectData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, INOUT },
	}
	},
	{ "getprotobyname",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "protoent", 96, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "WSAAccept",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{2, "addrlen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "lpfnCondition", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwCallbackData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAAsyncGetProtoByName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "buflen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "__WSAFDIsSet",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "fd_set", 2080, IN },
	}
	},
	{ "WSASetBlockingHook",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "lpBlockFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "accept",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{2, "addrlen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "send",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSANSPIoctl",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLookup", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpvInBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbInBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpvOutBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbOutBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpcbBytesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "lpCompletion", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSACOMPLETION", 128, IN },
	}
	},
	{ "WSASendTo",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, IN },
		{2, "dwBufferCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNumberOfBytesSent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpTo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{6, "iTolen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{8, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "WSASocketW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "af", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "type", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "protocol", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, IN },
		{4, "g", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAddrInfoExA",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNspId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "hints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfoexA", 352, IN },
		{5, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "addrinfoexA", 352, INOUT },
		{6, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
		{7, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{8, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "lpNameHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetAddrInfoExW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNspId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "hints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfoexW", 352, IN },
		{5, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "addrinfoexW", 352, INOUT },
		{6, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
		{7, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{8, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "lpHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WSAAdvertiseProvider",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "puuidProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "pNSPv2Routine", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_NSPV2_ROUTINE", 320, IN },
	}
	},
	{ "WSAUnadvertiseProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "puuidProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "WSCInstallProviderAndChains",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpszProviderDllPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszLspName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwServiceFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpProtocolInfoList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, IN },
		{5, "dwNumberOfEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpdwCatalogEntryId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InetPtonW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszAddrString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pAddrBuf", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "WSCGetProviderPath",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpszProviderDllPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "lpProviderDllPathLen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAWaitForMultipleEvents",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "cEvents", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lphEvents", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "fWaitAll", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fAlertable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "inet_pton",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pszAddrString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pAddrBuf", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "WSALookupServiceBeginA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpqsRestrictions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAQuerySetA", 480, IN },
		{1, "dwControlFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lphLookup", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSALookupServiceBeginW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpqsRestrictions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAQuerySetW", 480, IN },
		{1, "dwControlFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lphLookup", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAAsyncGetHostByAddr",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "addr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "type", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{6, "buflen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSASetEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ntohs",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "netshort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "connect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{2, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "htons",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "hostshort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "getnameinfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSockaddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "SockaddrLength", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pNodeBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "NodeBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pServiceBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "ServiceBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WPUCompleteOverlappedRequest",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{2, "dwError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cbTransferred", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WSCGetProviderInfo",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "InfoType", NKT_DBOBJCLASS_Enumeration, "_WSC_PROVIDER_INFO_TYPE", 32, IN },
		{2, "Info", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "InfoSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSCGetApplicationCategory",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PathLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Extra", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ExtraLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pPermittedLspCategories", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetAddrInfoExA",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pAddresses", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SOCKET_ADDRESS", 64, INOUT },
		{3, "dwAddressCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBlob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BLOB", 64, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpNspId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{8, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
		{9, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{10, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{11, "lpNameHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetAddrInfoExW",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pAddresses", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SOCKET_ADDRESS", 64, INOUT },
		{3, "dwAddressCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBlob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BLOB", 64, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpNspId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{8, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
		{9, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{10, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{11, "lpNameHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAGetServiceClassInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpServiceClassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpdwBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpServiceClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAServiceClassInfoW", 128, INOUT },
	}
	},
	{ "WSAHtonl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hostlong", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpnetlong", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAHtons",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hostshort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lpnetshort", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "select",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nfds", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "readfds", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "fd_set", 2080, INOUT },
		{2, "writefds", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "fd_set", 2080, INOUT },
		{3, "exceptfds", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "fd_set", 2080, INOUT },
		{4, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
	}
	},
	{ "WSCUpdateProvider",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpszProviderDllPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpProtocolInfoList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, IN },
		{3, "dwNumberOfEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAAddressToStringA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpsaAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "dwAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOA", 2976, IN },
		{3, "lpszAddressString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "lpdwAddressStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAAddressToStringW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpsaAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "dwAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, IN },
		{3, "lpszAddressString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "lpdwAddressStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FreeAddrInfoExW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pAddrInfoEx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfoexW", 352, IN },
	}
	},
	{ "WSAIsBlocking",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "sendto",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "to", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{5, "tolen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSCInstallProvider",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpszProviderDllPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpProtocolInfoList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, IN },
		{3, "dwNumberOfEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAInstallServiceClassA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAServiceClassInfoA", 128, IN },
	}
	},
	{ "WSAInstallServiceClassW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAServiceClassInfoW", 128, IN },
	}
	},
	{ "gethostbyaddr",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "hostent", 128, INOUT },
		{0, "addr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "type", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAGetServiceClassNameByClassIdW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceClassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpszServiceClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSACreateEvent",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WSAAsyncSelect",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lEvent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAConnectByNameA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nodename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "servicename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "LocalAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "LocalAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{5, "RemoteAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "RemoteAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{7, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
		{8, "Reserved", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "WSAConnectByNameW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nodename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "servicename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "LocalAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "LocalAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{5, "RemoteAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "RemoteAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{7, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
		{8, "Reserved", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "WSCWriteProviderOrder",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpwdCatalogEntryId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "dwNumberOfEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FreeAddrInfoEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pAddrInfoEx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfoexA", 352, IN },
	}
	},
	{ "WSCSetApplicationCategory",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PathLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Extra", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ExtraLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PermittedLspCategories", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pPrevPermLspCat", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAEventSelect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hEventObject", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lNetworkEvents", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "socket",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "af", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "type", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "protocol", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSCWriteNameSpaceOrder",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "dwNumberOfEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "inet_addr",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "cp", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "WSAGetQOSByName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpQOSName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, INOUT },
		{2, "lpQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QualityOfService", 576, INOUT },
	}
	},
	{ "ntohl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "netlong", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAGetServiceClassNameByClassIdA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceClassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpszServiceClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "shutdown",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "how", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAUnhookBlockingHook",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WSAStringToAddressA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AddressString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "AddressFamily", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOA", 2976, IN },
		{3, "lpAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{4, "lpAddressLength", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAStringToAddressW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AddressString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "AddressFamily", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, IN },
		{3, "lpAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{4, "lpAddressLength", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "recv",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAGetOverlappedResult",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{2, "lpcbTransfer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "fWait", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAAsyncGetServByName",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "proto", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "buflen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "getaddrinfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pNodeName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pHints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfo", 256, IN },
		{3, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "addrinfo", 256, IN },
	}
	},
	{ "WSADuplicateSocketA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOA", 2976, INOUT },
	}
	},
	{ "WSCInstallNameSpaceEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszIdentifier", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{5, "lpProviderSpecific", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BLOB", 64, IN },
	}
	},
	{ "WSCEnumProtocols",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpiProtocols", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "lpProtocolBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, INOUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FreeAddrInfoW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pAddrInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfoW", 256, IN },
	}
	},
	{ "WSADuplicateSocketW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, INOUT },
	}
	},
	{ "WSAAsyncGetHostByName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "buflen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSASend",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, IN },
		{2, "dwBufferCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNumberOfBytesSent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{6, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "WSACancelAsyncRequest",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAsyncTaskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAEnumProtocolsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpiProtocols", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "lpProtocolBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOA", 2976, INOUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAEnumProtocolsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpiProtocols", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "lpProtocolBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOW", 5024, INOUT },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "recvfrom",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "from", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{5, "fromlen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSASendMsg",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAMSG", 224, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNumberOfBytesSent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{5, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "WSAEnumNameSpaceProvidersW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "lpnspBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSANAMESPACE_INFOW", 256, INOUT },
	}
	},
	{ "WSCUnInstallNameSpace",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "WSAConnect",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{2, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpCallerData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, IN },
		{4, "lpCalleeData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, INOUT },
		{5, "lpSQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QualityOfService", 576, IN },
		{6, "lpGQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QualityOfService", 576, IN },
	}
	},
	{ "WSAPoll",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fdArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "pollfd", 64, INOUT },
		{1, "fds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "timeout", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "getservbyname",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "servent", 128, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "proto", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "WSAEnumNameSpaceProvidersExA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "lpnspBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSANAMESPACE_INFOEXA", 320, INOUT },
	}
	},
	{ "WSAEnumNameSpaceProvidersExW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "lpnspBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSANAMESPACE_INFOEXW", 320, INOUT },
	}
	},
	{ "getsockopt",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "level", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "optname", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "optval", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "optlen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSAIoctl",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIoControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpvInBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbInBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpvOutBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "cbOutBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpcbBytesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{8, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "WSAResetEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "gethostbyname",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "hostent", 128, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "WSAAsyncGetProtoByNumber",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "number", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "buflen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSARemoveServiceClass",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceClassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "WSALookupServiceEnd",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLookup", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "setsockopt",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "level", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "optname", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "optval", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "optlen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAAsyncGetServByPort",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "port", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "proto", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "buflen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ioctlsocket",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cmd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "argp", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "getprotobynumber",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "protoent", 96, INOUT },
		{0, "number", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSCSetProviderInfo",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "InfoType", NKT_DBOBJCLASS_Enumeration, "_WSC_PROVIDER_INFO_TYPE", 32, IN },
		{2, "Info", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "InfoSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSCDeinstallProvider",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpErrno", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "freeaddrinfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pAddrInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfo", 256, IN },
	}
	},
	{ "htonl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hostlong", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAEnumNetworkEvents",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hEventObject", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpNetworkEvents", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSANETWORKEVENTS", 352, INOUT },
	}
	},
	{ "GetAddrInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pNodeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pHints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "addrinfoW", 256, IN },
		{3, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "addrinfoW", 256, INOUT },
	}
	},
	{ "WSAGetServiceClassInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpServiceClassId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpdwBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpServiceClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAServiceClassInfoA", 128, INOUT },
	}
	},
	{ "WSASetLastError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "iError", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNameInfoW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSockaddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "SockaddrLength", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pNodeBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "NodeBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pServiceBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "ServiceBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSCInstallNameSpace",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszIdentifier", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "WSAGetLastError",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WSACleanup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WSANtohl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "netlong", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lphostlong", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSANtohs",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "netshort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "lphostshort", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "getpeername",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{2, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WSASendDisconnect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpOutboundDisconnectData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, IN },
	}
	},
	{ "WSASocketA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "af", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "type", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "protocol", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpProtocolInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAPROTOCOL_INFOA", 2976, IN },
		{4, "g", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "gethostname",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{1, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSALookupServiceNextA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLookup", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwControlFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "lpqsResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAQuerySetA", 480, INOUT },
	}
	},
	{ "WSALookupServiceNextW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLookup", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwControlFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "lpqsResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAQuerySetW", 480, INOUT },
	}
	},
	{ "WSACancelBlockingCall",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "bind",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{2, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "getsockname",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{2, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "getservbyport",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "servent", 128, INOUT },
		{0, "port", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "proto", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "listen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "backlog", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAConnectByList",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SocketAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SOCKET_ADDRESS_LIST", 96, IN },
		{2, "LocalAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "LocalAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{4, "RemoteAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "RemoteAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{6, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timeval", 64, IN },
		{7, "Reserved", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "WSAJoinLeaf",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{2, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpCallerData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, IN },
		{4, "lpCalleeData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, INOUT },
		{5, "lpSQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QualityOfService", 576, IN },
		{6, "lpGQOS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QualityOfService", 576, IN },
		{7, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSASetServiceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpqsRegInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAQuerySetA", 480, IN },
		{1, "essoperation", NKT_DBOBJCLASS_Enumeration, "_WSAESETSERVICEOP", 32, IN },
		{2, "dwControlFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSASetServiceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpqsRegInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSAQuerySetW", 480, IN },
		{1, "essoperation", NKT_DBOBJCLASS_Enumeration, "_WSAESETSERVICEOP", 32, IN },
		{2, "dwControlFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSAStartup",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wVersionRequested", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "lpWSAData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "WSAData", 3200, INOUT },
	}
	},
	{ "WSAEnumNameSpaceProvidersA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "lpnspBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSANAMESPACE_INFOA", 256, INOUT },
	}
	},
	{ "WSAProviderConfigChange",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpNotificationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{2, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "InetNtopW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pAddr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pStringBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "StringBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSCEnableNSProvider",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpProviderId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "fEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSACloseEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "inet_ntoa",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "in", NKT_DBOBJCLASS_Struct, "in_addr", 32, IN },
	}
	},
	{ "inet_ntop",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pAddr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pStringBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "StringBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSARecv",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, INOUT },
		{2, "dwBufferCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNumberOfBytesRecvd", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{6, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "closesocket",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WSARecvFrom",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WSABUF", 64, INOUT },
		{2, "dwBufferCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNumberOfBytesRecvd", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{6, "lpFromlen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{8, "lpCompletionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
};

int WS2_32arraySize = (sizeof(WS2_32_info) / sizeof(WS2_32_info[0]));
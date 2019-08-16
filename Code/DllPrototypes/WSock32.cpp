#include "../Pyrebox_libcalls.h"

libcall_info_t WSock32_info[] = {
	{ "getprotobyname",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "protoent", 96, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
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
	{ "TransmitFile",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSocket", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nNumberOfBytesToWrite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nNumberOfBytesPerSend", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{5, "lpTransmitBuffers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRANSMIT_FILE_BUFFERS", 128, IN },
		{6, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "gethostbyaddr",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "hostent", 128, INOUT },
		{0, "addr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "type", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
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
	{ "GetAddressByNameA",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpiProtocols", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "dwResolution", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpServiceAsyncInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_ASYNC_INFO", 96, IN },
		{6, "lpCsaddrBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "lpAliasBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{9, "lpdwAliasBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetAddressByNameW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpServiceType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpiProtocols", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "dwResolution", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpServiceAsyncInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_ASYNC_INFO", 96, IN },
		{6, "lpCsaddrBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "lpAliasBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "lpdwAliasBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
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
	{ "inet_addr",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "cp", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetServiceA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwProperties", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "lpdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpServiceAsyncInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_ASYNC_INFO", 96, IN },
	}
	},
	{ "GetServiceW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwProperties", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "lpdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpServiceAsyncInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_ASYNC_INFO", 96, IN },
	}
	},
	{ "ntohl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "netlong", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumProtocolsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpiProtocols", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "lpProtocolBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EnumProtocolsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpiProtocols", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "lpProtocolBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpdwBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
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
	{ "recv",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
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
	{ "WSACancelAsyncRequest",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAsyncTaskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "getservbyname",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "servent", 128, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "proto", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetNameByTypeA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNameByTypeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
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
	{ "GetTypeByNameA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpServiceType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "GetTypeByNameW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpServiceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpServiceType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
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
	{ "WSARecvEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "len", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
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
	{ "htonl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hostlong", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetServiceW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOperation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpServiceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_INFOW", 352, IN },
		{4, "lpServiceAsyncInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_ASYNC_INFO", 96, IN },
		{5, "lpdwStatusFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WSASetLastError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "iError", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
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
	{ "getpeername",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, INOUT },
		{2, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "gethostname",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{1, "namelen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AcceptEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sListenSocket", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "sAcceptSocket", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpOutputBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwReceiveDataLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwLocalAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwRemoteAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpdwBytesReceived", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "lpOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
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
	{ "WSAStartup",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wVersionRequested", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "lpWSAData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "WSAData", 3200, INOUT },
	}
	},
	{ "GetAcceptExSockaddrs",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "lpOutputBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwReceiveDataLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwLocalAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwRemoteAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "LocalSockaddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "sockaddr", 128, INOUT },
		{5, "LocalSockaddrLength", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "RemoteSockaddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "sockaddr", 128, INOUT },
		{7, "RemoteSockaddrLength", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "inet_ntoa",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "in", NKT_DBOBJCLASS_Struct, "in_addr", 32, IN },
	}
	},
	{ "SetServiceA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwNameSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOperation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpServiceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_INFOA", 352, IN },
		{4, "lpServiceAsyncInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SERVICE_ASYNC_INFO", 96, IN },
		{5, "lpdwStatusFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "closesocket",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "s", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int WSock32arraySize = (sizeof(WSock32_info) / sizeof(WSock32_info[0]));
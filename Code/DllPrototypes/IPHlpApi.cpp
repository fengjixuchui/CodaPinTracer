#include "../Pyrebox_libcalls.h"

libcall_info_t IPHlpApi_info[] = {
	{ "GetUdpStatistics",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Stats", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDPSTATS", 160, IN },
	}
	},
	{ "GetIpNetTable2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPNET_TABLE2", 768, INOUT },
	}
	},
	{ "GetPerTcpConnectionEStats",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_LH", 160, IN },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, IN },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Ros", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{6, "RosVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "RosSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "Rod", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{9, "RodVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "RodSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIpErrorString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ErrorCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Buffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, IN },
	}
	},
	{ "DeleteIpNetEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pArpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETROW_LH", 192, IN },
	}
	},
	{ "GetBestInterface",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwDestAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwBestIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetRTTAndHopCount",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DestIpAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "HopCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "MaxHops", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RTT", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "IpRenewAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AdapterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_INDEX_MAP", 2080, IN },
	}
	},
	{ "GetIpForwardTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIpForwardTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDTABLE", 480, INOUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RestoreMediaSense",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{1, "lpdwEnableCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ConvertLengthToIpv4Mask",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MaskLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Mask", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetPerAdapterInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "IfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPerAdapterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_PER_ADAPTER_INFO_W2KSP1", 416, INOUT },
		{2, "pOutBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DeletePersistentTcpPortReservation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "StartPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "NumberOfPorts", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetUnicastIpAddressTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_UNICASTIPADDRESS_TABLE", 704, INOUT },
	}
	},
	{ "GetNetworkParams",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pFixedInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FIXED_INFO_W2KSP1", 4672, INOUT },
		{1, "pOutBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CancelIPChangeNotify",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "notifyOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "GetExtendedUdpTable",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pUdpTable", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ulAf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TableClass", NKT_DBOBJCLASS_Enumeration, "_UDP_TABLE_CLASS", 32, IN },
		{5, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIfTable2Ex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Level", NKT_DBOBJCLASS_Enumeration, "_MIB_IF_TABLE_LEVEL", 32, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IF_TABLE2", 10880, INOUT },
	}
	},
	{ "FreeMibTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Memory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetOwnerModuleFromPidAndInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ulPid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pInfo", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{2, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{3, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, INOUT },
	}
	},
	{ "SetIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, IN },
	}
	},
	{ "NotifyRouteChange",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "IcmpSendEcho2Ex",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "SourceAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "DestinationAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "RequestData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "RequestSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{8, "RequestOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ip_option_information", 64, IN },
		{9, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{10, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NotifyTeredoPortChange",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CreateIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, IN },
	}
	},
	{ "GetIpPathEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPPATH_ROW", 1088, INOUT },
	}
	},
	{ "IcmpCloseHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBestRoute2",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SourceAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, IN },
		{3, "DestinationAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, IN },
		{4, "AddressSortOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "BestRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, INOUT },
		{6, "BestSourceAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, INOUT },
	}
	},
	{ "GetTcpStatisticsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPSTATS_LH", 480, IN },
		{1, "Family", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ConvertInterfaceLuidToGuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "GetCurrentThreadCompartmentId",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetMulticastIpAddressTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_MULTICASTIPADDRESS_TABLE", 448, INOUT },
	}
	},
	{ "DeleteIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, IN },
	}
	},
	{ "EnableRouter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "ConvertInterfaceIndexToLuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, INOUT },
	}
	},
	{ "SetPerTcpConnectionEStats",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_LH", 160, IN },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, IN },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIpInterfaceTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPINTERFACE_TABLE", 1408, INOUT },
	}
	},
	{ "IpReleaseAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AdapterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_INDEX_MAP", 2080, IN },
	}
	},
	{ "LookupPersistentTcpPortReservation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "StartPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "NumberOfPorts", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "GetAdapterOrderMap",0,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_ORDER_MAP", 64, INOUT },
	}
	},
	{ "GetAdaptersInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AdapterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_INFO", 5184, IN },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetIpPathTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPPATH_TABLE", 1152, INOUT },
	}
	},
	{ "DeleteAnycastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ANYCASTIPADDRESS_ROW", 384, IN },
	}
	},
	{ "GetInterfaceInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIfTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_INTERFACE_INFO", 2112, IN },
		{1, "dwOutBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetTcpEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pTcpRow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_LH", 160, IN },
	}
	},
	{ "ConvertInterfaceLuidToAlias",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceAlias", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTcpTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "TcpTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPTABLE", 192, IN },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, INOUT },
	}
	},
	{ "GetTcp6Table",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "TcpTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6TABLE", 448, INOUT },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlushIpPathTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetMulticastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_MULTICASTIPADDRESS_ROW", 384, INOUT },
	}
	},
	{ "DeleteIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, IN },
	}
	},
	{ "GetIpInterfaceEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPINTERFACE_ROW", 1344, INOUT },
	}
	},
	{ "NotifyIpInterfaceChange",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FlushIpNetTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetIpTTL",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nTTL", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetFriendlyIfIndex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "IfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ConvertInterfaceAliasToLuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceAlias", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, INOUT },
	}
	},
	{ "CancelMibChangeNotify2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ConvertInterfaceGuidToLuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, INOUT },
	}
	},
	{ "SetIpNetEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pArpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETROW_LH", 192, IN },
	}
	},
	{ "NhpAllocateAndGetInterfaceInfoFromStack",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ppTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ip_interface_name_info_w2ksp1", 352, IN },
		{1, "pdwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "hHeap", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIpStatisticsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPSTATS_LH", 736, IN },
		{1, "Family", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ConvertInterfaceNameToLuidA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, INOUT },
	}
	},
	{ "ConvertInterfaceNameToLuidW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, INOUT },
	}
	},
	{ "GetTcpTable2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "TcpTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPTABLE2", 256, INOUT },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBestRoute",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwDestAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSourceAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBestRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, INOUT },
	}
	},
	{ "LookupPersistentUdpPortReservation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "StartPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "NumberOfPorts", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "SetIpStatisticsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPSTATS_LH", 736, IN },
		{1, "Family", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAdapterIndex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "AdapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "IfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "NotifyStableUnicastIpAddressTable",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_UNICASTIPADDRESS_TABLE", 704, INOUT },
		{2, "CallerCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetExtendedTcpTable",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pTcpTable", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ulAf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TableClass", NKT_DBOBJCLASS_Enumeration, "_TCP_TABLE_CLASS", 32, IN },
		{5, "Reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "if_nametoindex",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetIcmpStatisticsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ICMP_EX_XPSP1", 16512, IN },
		{1, "Family", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, IN },
	}
	},
	{ "SetIpStatistics",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIpStats", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPSTATS_LH", 736, IN },
	}
	},
	{ "GetOwnerModuleFromUdp6Entry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pUdpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDP6ROW_OWNER_MODULE", 1408, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "FlushIpNetTable2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNetworkInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NetworkGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "SiteId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "NetworkName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBestInterfaceEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pDestAddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "pdwBestIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ConvertIpv4MaskToLength",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Mask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "MaskLength", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "IcmpParseReplies",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ResolveNeighbor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "NetworkAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "PhysicalAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "PhysicalAddressLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetIpNetTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "IpNetTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETTABLE", 224, IN },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitializeUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, IN },
	}
	},
	{ "CreatePersistentTcpPortReservation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "StartPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "NumberOfPorts", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "GetIfTable2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IF_TABLE2", 10880, INOUT },
	}
	},
	{ "GetOwnerModuleFromUdpEntry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pUdpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDPROW_OWNER_MODULE", 1280, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "IcmpCreateFile",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetIcmpStatistics",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ICMP", 832, IN },
	}
	},
	{ "SetIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Route", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, IN },
	}
	},
	{ "SetSessionCompartmentId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteProxyArpEntry",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAnycastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ANYCASTIPADDRESS_ROW", 384, INOUT },
	}
	},
	{ "IcmpSendEcho2",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "DestinationAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "RequestData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "RequestSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{7, "RequestOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ip_option_information", 64, IN },
		{8, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{9, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetInvertedIfStackTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_INVERTEDIFSTACK_TABLE", 96, INOUT },
	}
	},
	{ "GetIpForwardTable2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IPFORWARD_TABLE2", 896, INOUT },
	}
	},
	{ "if_indextoname",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "GetIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, INOUT },
	}
	},
	{ "ConvertInterfaceLuidToNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ConvertInterfaceLuidToNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTcpStatistics",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPSTATS_LH", 480, IN },
	}
	},
	{ "SetPerTcp6ConnectionEStats",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6ROW", 416, IN },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, IN },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUdpStatisticsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDPSTATS", 160, IN },
		{1, "Family", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIpAddrTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIpAddrTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPADDRTABLE", 224, INOUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTcp6Table2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "TcpTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6TABLE2", 512, INOUT },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSessionCompartmentId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "SessionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Icmp6CreateFile",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ResolveIpNetEntry2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, INOUT },
		{1, "SourceAddress", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SOCKADDR_INET", 224, IN },
	}
	},
	{ "GetAdaptersAddresses",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "AdapterAddresses", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_ADAPTER_ADDRESSES_LH", 3008, INOUT },
		{4, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SendARP",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "DestIP", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SrcIP", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pMacAddr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "PhyAddrLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetIfTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIfTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IFTABLE", 6912, INOUT },
		{1, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "bOrder", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateProxyArpEntry",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, IN },
	}
	},
	{ "SetIpNetEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNET_ROW2", 704, INOUT },
	}
	},
	{ "CreateIpNetEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pArpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPNETROW_LH", 192, IN },
	}
	},
	{ "DeleteUnicastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UNICASTIPADDRESS_ROW", 640, IN },
	}
	},
	{ "GetAnycastIpAddressTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_ANYCASTIPADDRESS_TABLE", 448, INOUT },
	}
	},
	{ "GetPerTcp6ConnectionEStats",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6ROW", 416, IN },
		{1, "EstatsType", NKT_DBOBJCLASS_Enumeration, "TCP_ESTATS_TYPE", 32, IN },
		{2, "Rw", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "RwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "RwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Ros", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{6, "RosVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "RosSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "Rod", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{9, "RodVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "RodSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitializeIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, IN },
	}
	},
	{ "GetTeredoPort",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Port", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DeleteIPAddress",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "NTEContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIfEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIfRow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IFROW", 6880, INOUT },
	}
	},
	{ "GetOwnerModuleFromTcp6Entry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pTcpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCP6ROW_OWNER_MODULE", 1536, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "NotifyRouteChange2",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AddressFamily", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetIpStatistics",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Statistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPSTATS_LH", 736, IN },
	}
	},
	{ "ConvertInterfaceLuidToIndex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InterfaceLuid", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_NET_LUID_LH", 64, IN },
		{1, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DisableMediaSense",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "pOverLapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "NotifyUnicastIpAddressChange",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Family", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "CallerContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "InitialNotification", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "NotificationHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetNetworkInformation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NetworkGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NetworkName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetIfEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IF_ROW2", 10816, IN },
	}
	},
	{ "GetOwnerModuleFromTcpEntry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pTcpEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_TCPROW_OWNER_MODULE", 1280, IN },
		{1, "Class", NKT_DBOBJCLASS_Enumeration, "_TCPIP_OWNER_MODULE_INFO_CLASS", 32, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CreateIpForwardEntry2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARD_ROW2", 832, IN },
	}
	},
	{ "GetUniDirectionalAdapterInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIPIfInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IP_UNIDIRECTIONAL_ADAPTER_ADDRESS", 64, INOUT },
		{1, "dwOutBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "Icmp6SendEcho2",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "SourceAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr_in6", 224, IN },
		{5, "DestinationAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr_in6", 224, IN },
		{6, "RequestData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "RequestSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{8, "RequestOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ip_option_information", 64, IN },
		{9, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{10, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreatePersistentUdpPortReservation",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "StartPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "NumberOfPorts", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Token", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "GetIfStackTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MIB_IFSTACK_TABLE", 96, INOUT },
	}
	},
	{ "CreateAnycastIpAddressEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_ANYCASTIPADDRESS_ROW", 384, IN },
	}
	},
	{ "DeleteIpForwardEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPFORWARDROW", 448, IN },
	}
	},
	{ "Icmp6ParseReplies",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetIpInterfaceEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPINTERFACE_ROW", 1344, INOUT },
	}
	},
	{ "InitializeIpInterfaceEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Row", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPINTERFACE_ROW", 1344, IN },
	}
	},
	{ "GetUdp6Table",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Udp6Table", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDP6TABLE", 224, INOUT },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IcmpSendEcho",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "IcmpHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestinationAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RequestData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "RequestSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "RequestOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ip_option_information", 64, IN },
		{5, "ReplyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{6, "ReplySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetIfEntry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pIfRow", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IFROW", 6880, IN },
	}
	},
	{ "CreateSortedAddressPairs",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SourceAddressList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr_in6", 224, IN },
		{1, "SourceAddressCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DestinationAddressList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr_in6", 224, IN },
		{3, "DestinationAddressCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AddressSortOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "SortedAddressPairList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_sockaddr_in6_pair", 64, INOUT },
		{6, "SortedAddressPairCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetNumberOfInterfaces",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pdwNumIf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "NotifyAddrChange",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "UnenableRouter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pOverlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{1, "lpdwEnableCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetCurrentThreadCompartmentId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "CompartmentId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddIPAddress",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Address", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IpMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "IfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "NTEContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "NTEInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetUdpTable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "UdpTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_UDPTABLE", 96, IN },
		{1, "SizePointer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Order", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeletePersistentUdpPortReservation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "StartPort", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "NumberOfPorts", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
};

int IPHlpApiarraySize = (sizeof(IPHlpApi_info) / sizeof(IPHlpApi_info[0]));
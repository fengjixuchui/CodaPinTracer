#include "../Pyrebox_libcalls.h"

libcall_info_t Rtm_info[] = {
	{ "MgmGroupEnumerationStart",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "metEnumType", NKT_DBOBJCLASS_Enumeration, "_MGM_ENUM_TYPES", 32, IN },
		{2, "phEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MgmGetNextMfeStats",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pimmStart", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPMCAST_MFE", 608, IN },
		{1, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "pdwNumEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MgmDeRegisterMProtocol",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmReleaseRouteInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ROUTE_INFO", 320, IN },
	}
	},
	{ "RtmGetDestInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ProtocolId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "DestInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, INOUT },
	}
	},
	{ "RtmReferenceHandles",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NumHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RtmHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtmGetEntityInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntityHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EntityInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ENTITY_INFO", 128, INOUT },
	}
	},
	{ "RtmBlockMethods",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TargetHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TargetType", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "BlockingFlag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateTable",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpInterface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "lpAllocateBuffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpAllocateMore", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpFreeBuffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "ulTableType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ulPropTagIndexColumn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpSPropTagArrayColumns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SPropTagArray", 64, IN },
		{8, "lppTableData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITableData", 32, IN },
	}
	},
	{ "RtmGetEntityMethods",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntityHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumMethods", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "ExptMethods", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "MgmTakeInterfaceOwnership",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwIfNextHopAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmGetChangedDests",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumDests", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "ChangedDests", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, INOUT },
	}
	},
	{ "RtmUpdateAndUnlockRoute",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TimeToLive", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RouteListHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "NotifyType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ChangeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmGetRouteInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RouteInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ROUTE_INFO", 320, INOUT },
		{3, "DestAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, INOUT },
	}
	},
	{ "RtmRegisterEntity",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmEntityInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ENTITY_INFO", 128, IN },
		{1, "ExportMethods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ENTITY_EXPORT_METHODS", 64, IN },
		{2, "EventCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ReserveOpaquePointer", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "RtmRegProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_REGN_PROFILE", 128, INOUT },
		{5, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmDeleteRouteList",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteListHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmGetMostSpecificDestination",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{2, "ProtocolId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "DestInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, INOUT },
	}
	},
	{ "MgmGetMfeStats",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pimm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPMCAST_MFE", 608, IN },
		{1, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmDeregisterEntity",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmConvertNetAddressToIpv6AddressAndLength",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pNetAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{1, "pAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, IN },
		{2, "pLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwAddressSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmGetEnumRoutes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumRoutes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "RouteHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MgmGroupEnumerationEnd",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmGetListEnumRoutes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumRoutes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "RouteHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmAddRouteToDest",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "DestAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{3, "RouteInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ROUTE_INFO", 320, IN },
		{4, "TimeToLive", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "RouteListHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "NotifyType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "ChangeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MgmGetFirstMfe",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "pdwNumEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MgmGetProtocolOnInterface",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIfNextHopAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwIfProtocolId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "pdwIfComponentId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmHoldDestination",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "HoldTime", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmCreateRouteList",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteListHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmGetNextHopInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NextHopHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NextHopInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NEXTHOP_INFO", 320, INOUT },
	}
	},
	{ "RtmLockRoute",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Exclusive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "LockRoute", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "RoutePointer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RTM_ROUTE_INFO", 320, INOUT },
	}
	},
	{ "RtmReleaseNextHopInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NextHopInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NEXTHOP_INFO", 320, IN },
	}
	},
	{ "RtmCreateRouteEnum",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "EnumFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "StartDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{5, "MatchingFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "CriteriaRoute", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ROUTE_INFO", 320, IN },
		{7, "CriteriaInterface", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "RtmEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MgmGetNextMfe",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pimmStart", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPMCAST_MFE", 608, IN },
		{1, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "pdwNumEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmDeleteEnumHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmIsMarkedForChangeNotification",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "DestMarked", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmGetEnumNextHops",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumNextHops", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "NextHopHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmDeleteNextHop",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NextHopHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NextHopInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NEXTHOP_INFO", 320, IN },
	}
	},
	{ "RtmDeleteRouteToDest",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ChangeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmGetOpaqueInformationPointer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OpaqueInfoPointer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "MgmGetMfe",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pimm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MIB_IPMCAST_MFE", 608, IN },
		{1, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "MgmRegisterMProtocol",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "prpiInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ROUTING_PROTOCOL_CONFIG", 320, IN },
		{1, "dwProtocolId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwComponentId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "phProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmInvokeMethod",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntityHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Input", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ENTITY_METHOD_INPUT", 96, IN },
		{3, "OutputSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Output", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ENTITY_METHOD_OUTPUT", 128, INOUT },
	}
	},
	{ "RtmGetRoutePointer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RoutePointer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RTM_ROUTE_INFO", 320, INOUT },
	}
	},
	{ "MgmGroupEnumerationGetNext",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "pdwNumEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmConvertIpv6AddressAndLengthToNetAddress",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pNetAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{1, "Address", NKT_DBOBJCLASS_Struct, "in6_addr", 128, IN },
		{2, "dwLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwAddressSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmReleaseEntityInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntityInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ENTITY_INFO", 128, IN },
	}
	},
	{ "RtmMarkDestForChangeNotification",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "MarkDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmCreateNextHopEnum",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NetAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{3, "RtmEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmReleaseDestInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, IN },
	}
	},
	{ "RtmFindNextHop",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NextHopInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NEXTHOP_INFO", 320, IN },
		{2, "NextHopHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "NextHopPointer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RTM_NEXTHOP_INFO", 320, INOUT },
	}
	},
	{ "MgmAddGroupMembershipEntry",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSourceAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwSourceMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwGroupAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwGroupMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwIfNextHopIPAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmReleaseEntities",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NumEntities", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EntityHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtmGetEnumDests",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumDests", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "DestInfos", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, INOUT },
	}
	},
	{ "RtmGetLessSpecificDestination",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ProtocolId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "DestInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, INOUT },
	}
	},
	{ "MgmDeleteGroupMembershipEntry",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwSourceAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwSourceMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwGroupAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwGroupMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwIfNextHopIPAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MgmGetFirstMfeStats",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "pbBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "pdwNumEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmCreateRouteListEnum",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteListHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RtmEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MgmReleaseInterfaceOwnership",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProtocol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIfIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwIfNextHopAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmAddNextHop",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NextHopInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NEXTHOP_INFO", 320, IN },
		{2, "NextHopHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "ChangeFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmCreateDestEnum",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnumFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "NetAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{4, "ProtocolId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "RtmEnumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmReleaseDests",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NumDests", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DestInfos", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, IN },
	}
	},
	{ "RtmDeregisterFromChangeNotification",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmGetRegisteredEntities",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NumEntities", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "EntityHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "EntityInfos", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ENTITY_INFO", 128, INOUT },
	}
	},
	{ "RtmGetExactMatchRoute",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{2, "MatchingFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RouteInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_ROUTE_INFO", 320, INOUT },
		{4, "InterfaceIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmLockNextHop",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NextHopHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Exclusive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "LockNextHop", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "NextHopPointer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RTM_NEXTHOP_INFO", 320, INOUT },
	}
	},
	{ "RtmLockDestination",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Exclusive", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "LockDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtmIsBestRoute",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "BestInViews", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmGetChangeStatus",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DestHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ChangeStatus", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmReleaseNextHops",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NumNextHops", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NextHopHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtmInsertInRouteList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RouteListHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumRoutes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RouteHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtmGetNextHopPointer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NextHopHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NextHopPointer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RTM_NEXTHOP_INFO", 320, INOUT },
	}
	},
	{ "RtmRegisterForChangeNotification",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NotifyFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "NotifyContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtmReleaseRoutes",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NumRoutes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RouteHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtmGetExactMatchDestination",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_NET_ADDRESS", 160, IN },
		{2, "ProtocolId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "TargetViews", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "DestInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, INOUT },
	}
	},
	{ "RtmIgnoreChangedDests",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumDests", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ChangedDests", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtmReleaseChangedDests",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "RtmRegHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "NumDests", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ChangedDests", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RTM_DEST_INFO", 512, IN },
	}
	},
};

int RtmarraySize = (sizeof(Rtm_info) / sizeof(Rtm_info[0]));
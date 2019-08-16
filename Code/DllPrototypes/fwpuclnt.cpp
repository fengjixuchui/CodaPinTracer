#include "../Pyrebox_libcalls.h"

libcall_info_t fwpuclnt_info[] = {
	{ "FwpmCalloutDeleteByKey0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "FwpmNetEventCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_NET_EVENT_ENUM_TEMPLATE0_", 192, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmCalloutSubscriptionsGet0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_CALLOUT_SUBSCRIPTION0_", 192, IN },
		{2, "numEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaContextEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_CONTEXT0_", 128, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaContextEnum1",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_CONTEXT1_", 128, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpsAleEndpointEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPS_ALE_ENDPOINT_PROPERTIES0_", 768, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextSubscriptionsGet0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT_SUBSCRIPTION0_", 192, IN },
		{2, "numEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_ENUM_TEMPLATE0_", 64, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmFilterSubscriptionsGet0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_FILTER_SUBSCRIPTION0_", 192, IN },
		{2, "numEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerUnsubscribeChanges0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IPsecSaContextDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_SUBLAYER0_", 352, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderUnsubscribeChanges0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmGetAppIdFromFileName0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "fileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "appId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWP_BYTE_BLOB_", 64, IN },
	}
	},
	{ "FwpmProviderEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER0_", 320, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderSetSecurityInfoByKey0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmTransactionAbort0",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmFilterSetSecurityInfoByKey0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmCalloutEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_CALLOUT0_", 480, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_ENUM_TEMPLATE0_", 32, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaContextUpdate0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "newValues", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_CONTEXT1_", 128, IN },
	}
	},
	{ "IPsecSaContextAddInbound1",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "inboundBundle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_BUNDLE1_", 768, IN },
	}
	},
	{ "FwpmNetEventUnsubscribe0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eventsHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerGetSecurityInfoByKey0",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{7, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmFilterGetByKey0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "filter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_FILTER0_", 1216, IN },
	}
	},
	{ "FwpmProviderSubscribeChanges0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "subscription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_SUBSCRIPTION0_", 192, IN },
		{2, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextDeleteByKey0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "IPsecSaContextCreate0",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "outboundTraffic", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_TRAFFIC0_", 448, IN },
		{2, "inboundFilterId", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{3, "id", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "IPsecSaContextCreate1",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "outboundTraffic", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_TRAFFIC1_", 576, IN },
		{2, "virtualIfTunnelInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_VIRTUAL_IF_TUNNEL_INFO0_", 128, IN },
		{3, "inboundFilterId", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{4, "id", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "FwpmCalloutUnsubscribeChanges0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerSubscriptionsGet0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_SUBLAYER_SUBSCRIPTION0_", 192, IN },
		{2, "numEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmFilterSubscribeChanges0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "subscription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_FILTER_SUBSCRIPTION0_", 192, IN },
		{2, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmFilterGetSecurityInfoByKey0",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{7, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmNetEventsSetSecurityInfo0",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{3, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "IPsecSaContextGetSpi0",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "getSpi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_GETSPI0_", 576, IN },
		{3, "inboundSpi", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaContextGetSpi1",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "getSpi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_GETSPI1_", 704, IN },
		{3, "inboundSpi", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmCalloutGetSecurityInfoByKey0",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{7, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmFreeMemory0",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "p", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmNetEventsGetSecurityInfo0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "IPsecDospStateCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_DOSP_STATE_ENUM_TEMPLATE0_", 272, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpsAleEndpointGetSecurityInfo0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmCalloutDeleteById0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmIPsecTunnelAdd0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "mainModePolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT0_", 448, IN },
		{3, "tunnelPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT0_", 448, IN },
		{4, "numFilterConditions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "filterConditions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_FILTER_CONDITION0_", 224, IN },
		{6, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FwpmSubLayerDeleteByKey0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "IkeextSaGetById0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "sa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IKEEXT_SA_DETAILS0_", 1216, IN },
	}
	},
	{ "IkeextSaGetById1",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "saLookupContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "sa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IKEEXT_SA_DETAILS1_", 1280, IN },
	}
	},
	{ "IPsecSaContextSetSpi0",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "getSpi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_GETSPI1_", 704, IN },
		{3, "inboundSpi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSessionCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_SESSION_ENUM_TEMPLATE0_", 64, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextSetSecurityInfoByKey0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmProviderContextGetById0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "providerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_PROVIDER_CONTEXT0_", 448, IN },
	}
	},
	{ "FwpmLayerDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IPsecDospStateEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IPSEC_DOSP_STATE0_", 448, IN },
		{4, "numEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmLayerGetSecurityInfoByKey0",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{7, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmProviderGetSecurityInfoByKey0",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{7, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmCalloutDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmProviderDeleteByKey0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "FwpsAleEndpointCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPS_ALE_ENDPOINT_ENUM_TEMPLATE0_", 320, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaContextAddOutbound0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "outboundBundle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_BUNDLE0_", 576, IN },
	}
	},
	{ "IPsecSaContextAddOutbound1",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "outboundBundle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_BUNDLE1_", 768, IN },
	}
	},
	{ "FwpmLayerSetSecurityInfoByKey0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmProviderAdd0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "provider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER0_", 320, IN },
		{2, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FwpmIPsecTunnelDeleteByKey0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "FwpmSystemPortsSubscribe0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "sysPortsHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaContextGetById0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "saContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPSEC_SA_CONTEXT0_", 128, IN },
	}
	},
	{ "IPsecSaContextGetById1",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "saContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPSEC_SA_CONTEXT1_", 128, IN },
	}
	},
	{ "IPsecSaDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSystemPortsGet0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "sysPorts", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_SYSTEM_PORTS0_", 64, IN },
	}
	},
	{ "FwpmProviderContextAdd0",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "providerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT0_", 448, IN },
		{2, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "id", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "FwpmProviderContextAdd1",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "providerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT1_", 448, IN },
		{2, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "id", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "IkeextGetStatistics0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ikeextStatistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IKEEXT_STATISTICS0_", 8928, IN },
	}
	},
	{ "IkeextGetStatistics1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ikeextStatistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IKEEXT_STATISTICS1_", 13280, IN },
	}
	},
	{ "FwpmLayerEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_LAYER0_", 448, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmCalloutAdd0",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "callout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_CALLOUT0_", 480, IN },
		{2, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmTransactionCommit0",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT0_", 448, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextEnum1",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT1_", 448, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmNetEventSubscriptionsGet0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_NET_EVENT_SUBSCRIPTION0_", 192, IN },
		{2, "numEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerAdd0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "subLayer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_SUBLAYER0_", 352, IN },
		{2, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "IPsecSaContextDeleteById0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FwpmProviderContextUnsubscribeChanges0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmLayerGetById0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "layer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_LAYER0_", 448, IN },
	}
	},
	{ "FwpmSessionEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_SESSION0_", 384, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpsAleEndpointDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmCalloutCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_CALLOUT_ENUM_TEMPLATE0_", 160, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpsAleEndpointGetById0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "endpointId", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPS_ALE_ENDPOINT_PROPERTIES0_", 768, IN },
	}
	},
	{ "FwpmProviderContextCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT_ENUM_TEMPLATE0_", 64, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextDeleteById0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FwpmLayerCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_LAYER_ENUM_TEMPLATE0_", 64, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmEngineClose0",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmProviderSubscriptionsGet0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_SUBSCRIPTION0_", 192, IN },
		{2, "numEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmSystemPortsUnsubscribe0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "sysPortsHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmProviderGetByKey0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "provider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_PROVIDER0_", 320, IN },
	}
	},
	{ "IPsecDospSetSecurityInfo0",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{3, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmEngineSetSecurityInfo0",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{3, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "IPsecSaDbSetSecurityInfo0",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{3, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "IPsecDospGetSecurityInfo0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmEngineGetSecurityInfo0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "IPsecSaDbGetSecurityInfo0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmNetEventEnum1",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_NET_EVENT1_", 1088, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmNetEventSubscribe0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "subscription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_NET_EVENT_SUBSCRIPTION0_", 192, IN },
		{2, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "eventsHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmCalloutGetById0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "callout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_CALLOUT0_", 480, IN },
	}
	},
	{ "FwpmProviderContextGetByKey0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "providerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_PROVIDER_CONTEXT0_", 448, IN },
	}
	},
	{ "FwpmFilterDeleteByKey0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "FwpmFilterCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_FILTER_ENUM_TEMPLATE0_", 384, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IkeextSaCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IKEEXT_SA_ENUM_TEMPLATE0_", 192, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmNetEventDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmCalloutSubscribeChanges0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "subscription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_CALLOUT_SUBSCRIPTION0_", 192, IN },
		{2, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextSubscribeChanges0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "subscription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT_SUBSCRIPTION0_", 192, IN },
		{2, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmCalloutSetSecurityInfoByKey0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmProviderContextGetByKey1",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "providerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_PROVIDER_CONTEXT1_", 448, IN },
	}
	},
	{ "FwpmFilterEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_FILTER0_", 1216, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecDospStateDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IPsecSaContextAddInbound0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "inboundBundle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_BUNDLE0_", 576, IN },
	}
	},
	{ "IPsecDospGetStatistics0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "idpStatistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_DOSP_STATISTICS0_", 1152, IN },
	}
	},
	{ "FwpmFilterGetById0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "filter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_FILTER0_", 1216, IN },
	}
	},
	{ "FwpmNetEventEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "FWPM_NET_EVENT0_", 640, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaEnum1",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_DETAILS1_", 1600, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IPsecSaEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_DETAILS0_", 1152, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpsOpenToken0",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "modifiedId", NKT_DBOBJCLASS_Struct, "_LUID", 64, IN },
		{2, "desiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "accessToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextGetById1",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "providerContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_PROVIDER_CONTEXT1_", 448, IN },
	}
	},
	{ "IkeextSaDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmLayerGetByKey0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "layer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_LAYER0_", 448, IN },
	}
	},
	{ "FwpmSessionDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmEngineGetOption0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "option", NKT_DBOBJCLASS_Enumeration, "FWPM_ENGINE_OPTION_", 32, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWP_VALUE0_", 64, IN },
	}
	},
	{ "FwpmFilterUnsubscribeChanges0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IPsecGetStatistics0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ipsecStatistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_STATISTICS0_", 1600, IN },
	}
	},
	{ "IPsecGetStatistics1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ipsecStatistics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_STATISTICS1_", 1728, IN },
	}
	},
	{ "FwpmFilterAdd0",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "filter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_FILTER0_", 1216, IN },
		{2, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "id", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "FwpmSubLayerSubscribeChanges0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "subscription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_SUBLAYER_SUBSCRIPTION0_", 192, IN },
		{2, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "changeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmCalloutGetByKey0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "callout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_CALLOUT0_", 480, IN },
	}
	},
	{ "IPsecSaContextCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPSEC_SA_CONTEXT_ENUM_TEMPLATE0_", 128, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmEngineSetOption0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "option", NKT_DBOBJCLASS_Enumeration, "FWPM_ENGINE_OPTION_", 32, IN },
		{2, "newValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWP_VALUE0_", 64, IN },
	}
	},
	{ "IPsecSaContextExpire0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "IkeextSaDbSetSecurityInfo0",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{3, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "IkeextSaDbGetSecurityInfo0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "IkeextSaDeleteById0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FwpmTransactionBegin0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmIPsecTunnelAdd1",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "mainModePolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT1_", 448, IN },
		{3, "tunnelPolicy", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_PROVIDER_CONTEXT1_", 448, IN },
		{4, "numFilterConditions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "filterConditions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_FILTER_CONDITION0_", 224, IN },
		{6, "keyModKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{7, "sd", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FwpmSubLayerGetByKey0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "subLayer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "FWPM_SUBLAYER0_", 352, IN },
	}
	},
	{ "IkeextSaEnum0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IKEEXT_SA_DETAILS0_", 1216, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IkeextSaEnum1",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numEntriesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "entries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IKEEXT_SA_DETAILS1_", 1280, IN },
		{4, "numEntriesReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerSetSecurityInfoByKey0",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmEngineOpen0",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "serverName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "authnService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "authIdentity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SEC_WINNT_AUTH_IDENTITY_W", 224, IN },
		{3, "session", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_SESSION0_", 384, IN },
		{4, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FwpmProviderContextGetSecurityInfoByKey0",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sidOwner", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "sidGroup", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{6, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_ACL", 64, IN },
		{7, "securityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "FwpmFilterDeleteById0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FwpsAleEndpointSetSecurityInfo0",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "securityInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "sidOwner", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{3, "sidGroup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID", 96, IN },
		{4, "dacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{5, "sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
	}
	},
	{ "FwpmFilterDestroyEnumHandle0",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FwpmSubLayerCreateEnumHandle0",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "engineHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "enumTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FWPM_SUBLAYER_ENUM_TEMPLATE0_", 32, IN },
		{2, "enumHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int fwpuclntarraySize = (sizeof(fwpuclnt_info) / sizeof(fwpuclnt_info[0]));
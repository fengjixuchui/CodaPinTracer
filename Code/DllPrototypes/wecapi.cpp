#include "../Pyrebox_libcalls.h"

libcall_info_t wecapi_info[] = {
	{ "EcGetSubscriptionProperty",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Subscription", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EC_SUBSCRIPTION_PROPERTY_ID", 32, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PropertyValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EC_VARIANT", 128, IN },
		{5, "PropertyValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EcOpenSubscription",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "SubscriptionName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcSetObjectArrayProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectArray", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EC_SUBSCRIPTION_PROPERTY_ID", 32, IN },
		{2, "ArrayIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PropertyValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EC_VARIANT", 128, IN },
	}
	},
	{ "EcDeleteSubscription",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SubscriptionName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcInsertObjectArrayElement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectArray", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ArrayIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Object", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcGetSubscriptionRunTimeStatus",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SubscriptionName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "StatusInfoId", NKT_DBOBJCLASS_Enumeration, "_EC_SUBSCRIPTION_RUNTIME_STATUS_INFO_ID", 32, IN },
		{2, "EventSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "StatusValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "StatusValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EC_VARIANT", 128, IN },
		{6, "StatusValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EcSaveSubscription",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Subscription", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcGetObjectArraySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectArray", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ObjectArraySize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EcOpenSubscriptionEnum",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcRetrySubscription",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SubscriptionName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "EventSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcRemoveObjectArrayElement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectArray", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ArrayIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EcEnumNextSubscription",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SubscriptionEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SubscriptionNameBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubscriptionNameBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "SubscriptionNameBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EcSetSubscriptionProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Subscription", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EC_SUBSCRIPTION_PROPERTY_ID", 32, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EC_VARIANT", 128, IN },
	}
	},
	{ "EcGetObjectArrayProperty",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectArray", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EC_SUBSCRIPTION_PROPERTY_ID", 32, IN },
		{2, "ArrayIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PropertyValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "PropertyValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EC_VARIANT", 128, IN },
		{6, "PropertyValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int wecapiarraySize = (sizeof(wecapi_info) / sizeof(wecapi_info[0]));
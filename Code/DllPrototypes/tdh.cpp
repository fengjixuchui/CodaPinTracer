#include "../Pyrebox_libcalls.h"

libcall_info_t tdh_info[] = {
	{ "TdhGetEventMapInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pEvent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_RECORD", 832, IN },
		{1, "pMapName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_MAP_INFO", 192, INOUT },
		{3, "pBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TdhEnumerateProviders",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROVIDER_ENUMERATION_INFO", 256, INOUT },
		{1, "pBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TdhFormatProperty",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "EventInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRACE_EVENT_INFO", 1024, IN },
		{1, "MapInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_MAP_INFO", 192, IN },
		{2, "PointerSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyInType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "PropertyOutType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{5, "PropertyLength", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{6, "UserDataLength", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{7, "UserData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "Buffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{10, "UserDataConsumed", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "TdhUnloadManifest",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Manifest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "TdhGetProperty",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pEvent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_RECORD", 832, IN },
		{1, "TdhContextCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pTdhContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TDH_CONTEXT", 128, IN },
		{3, "PropertyDataCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pPropertyData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROPERTY_DATA_DESCRIPTOR", 128, IN },
		{5, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "TdhGetPropertySize",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pEvent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_RECORD", 832, IN },
		{1, "TdhContextCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pTdhContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TDH_CONTEXT", 128, IN },
		{3, "PropertyDataCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pPropertyData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROPERTY_DATA_DESCRIPTOR", 128, IN },
		{5, "pPropertySize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TdhLoadManifest",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Manifest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "TdhGetEventInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Event", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVENT_RECORD", 832, IN },
		{1, "TdhContextCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TdhContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TDH_CONTEXT", 128, IN },
		{3, "Buffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRACE_EVENT_INFO", 1024, IN },
		{4, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "TdhEnumerateProviderFieldInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "EventFieldType", NKT_DBOBJCLASS_Enumeration, "_EVENT_FIELD_TYPE", 32, IN },
		{2, "pBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROVIDER_FIELD_INFOARRAY", 192, INOUT },
		{3, "pBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TdhQueryProviderFieldInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "EventFieldValue", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EventFieldType", NKT_DBOBJCLASS_Enumeration, "_EVENT_FIELD_TYPE", 32, IN },
		{3, "pBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROVIDER_FIELD_INFOARRAY", 192, INOUT },
		{4, "pBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TdhEnumerateProviderFilters",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "TdhContextCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TdhContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TDH_CONTEXT", 128, IN },
		{3, "FilterCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "Buffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_PROVIDER_FILTER_INFO", 256, IN },
		{5, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int tdharraySize = (sizeof(tdh_info) / sizeof(tdh_info[0]));
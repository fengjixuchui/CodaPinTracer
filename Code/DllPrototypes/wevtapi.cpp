#include "../Pyrebox_libcalls.h"

libcall_info_t wevtapi_info[] = {
	{ "EvtOpenSession",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "LoginClass", NKT_DBOBJCLASS_Enumeration, "_EVT_LOGIN_CLASS", 32, IN },
		{1, "Login", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtOpenPublisherMetadata",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PublisherId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "LogFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtExportLog",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Query", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "TargetFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtArchiveExportedLog",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "LogFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Locale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtGetObjectArrayProperty",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectArray", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ArrayIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PropertyValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "PropertyValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{6, "PropertyValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtSaveChannelConfig",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ChannelConfig", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtNextPublisherId",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "PublisherEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PublisherIdBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "PublisherIdBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "PublisherIdBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtNextChannelPath",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ChannelEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ChannelPathBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ChannelPathBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ChannelPathBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Object", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtFormatMessage",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "PublisherMetadata", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "MessageId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ValueCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Values", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "Buffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "BufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtSeek",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ResultSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Position", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "Bookmark", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtGetPublisherMetadataProperty",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "PublisherMetadata", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EVT_PUBLISHER_METADATA_PROPERTY_ID", 32, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PublisherMetadataPropertyBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PublisherMetadataPropertyBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{5, "PublisherMetadataPropertyBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtNextEventMetadata",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "EventMetadataEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtQuery",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Query", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtNext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ResultSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EventsSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Events", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "Timeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Returned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtSetChannelConfigProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ChannelConfig", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EVT_CHANNEL_CONFIG_PROPERTY_ID", 32, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
	}
	},
	{ "EvtOpenPublisherEnum",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtGetEventMetadataProperty",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EventMetadata", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EVT_EVENT_METADATA_PROPERTY_ID", 32, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "EventMetadataPropertyBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "EventMetadataPropertyBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{5, "EventMetadataPropertyBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtSubscribe",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SignalEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ChannelPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Query", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Bookmark", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtCreateBookmark",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "BookmarkXml", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "EvtOpenChannelEnum",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtCreateRenderContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ValuePathsCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ValuePaths", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtGetEventInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EVT_EVENT_PROPERTY_ID", 32, IN },
		{2, "PropertyValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{4, "PropertyValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtGetExtendedStatus",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Buffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "BufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtCancel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Object", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtGetChannelConfigProperty",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ChannelConfig", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EVT_CHANNEL_CONFIG_PROPERTY_ID", 32, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "PropertyValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{5, "PropertyValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtUpdateBookmark",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Bookmark", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtGetQueryInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QueryOrSubscription", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EVT_QUERY_PROPERTY_ID", 32, IN },
		{2, "PropertyValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{4, "PropertyValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtRender",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Context", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Fragment", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "BufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "PropertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtOpenLog",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtOpenChannelConfig",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ChannelPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtGetLogInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Log", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyId", NKT_DBOBJCLASS_Enumeration, "_EVT_LOG_PROPERTY_ID", 32, IN },
		{2, "PropertyValueBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "PropertyValueBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EVT_VARIANT", 128, IN },
		{4, "PropertyValueBufferUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtGetObjectArraySize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectArray", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ObjectArraySize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EvtClearLog",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Session", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ChannelPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "TargetFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EvtOpenEventMetadataEnum",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "PublisherMetadata", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int wevtapiarraySize = (sizeof(wevtapi_info) / sizeof(wevtapi_info[0]));
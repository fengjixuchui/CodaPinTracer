#include "../Pyrebox_libcalls.h"

libcall_info_t WebServices_info[] = {
	{ "WsReadXmlBufferFromBytes",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "encoding", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_READER_ENCODING", 32, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_READER_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "bytes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "byteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "xmlBuffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{8, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFlushBody",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "minSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadStartAttribute",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "attributeIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSendReplyMessage",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "replyMessage", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "replyMessageDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_MESSAGE_DESCRIPTION", 64, IN },
		{3, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{4, "replyBodyValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "replyBodyValueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "requestMessage", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{8, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsResetServiceProxy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetMessageProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_MESSAGE_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAddErrorString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "string", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
	}
	},
	{ "WsRemoveHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerType", NKT_DBOBJCLASS_Enumeration, "WS_HEADER_TYPE", 32, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetListenerProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_LISTENER_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAlloc",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteEnvelopeStart",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "doneCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "doneCallbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetWriterPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "nodePosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_NODE_POSITION", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteEnvelopeEnd",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetServiceHostProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceHost", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_SERVICE_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetFaultErrorProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_FAULT_ERROR_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WsCopyError",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "source", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "destination", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsResetError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCloseServiceProxy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetPolicyProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "policy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_POLICY_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetPrefixFromNamespace",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "required", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "prefix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_XML_STRING", 128, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsMoveWriter",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "moveTo", NKT_DBOBJCLASS_Enumeration, "WS_MOVE_TO", 32, IN },
		{2, "found", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFileTimeToDateTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "dateTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_DATETIME", 128, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAbandonCall",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "callId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteEndStartElement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsDateTimeToFileTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_DATETIME", 128, IN },
		{1, "fileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateWriter",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_WRITER_PROPERTY", 96, IN },
		{1, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateHeap",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "maxSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "trimSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_HEAP_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateChannelForListener",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_CHANNEL_PROPERTY", 96, IN },
		{2, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteValue",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_VALUE_TYPE", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeServiceProxy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReceiveMessage",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "messageDescriptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_MESSAGE_DESCRIPTION", 64, IN },
		{3, "messageDescriptionCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "receiveOption", NKT_DBOBJCLASS_Enumeration, "WS_RECEIVE_OPTION", 32, IN },
		{5, "readBodyOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{6, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "index", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{10, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{11, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetReaderNode",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "xmlReader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "node", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_XML_NODE", 32, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAbortServiceHost",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceHost", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadEndElement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetDictionary",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "encoding", NKT_DBOBJCLASS_Enumeration, "WS_ENCODING", 32, IN },
		{1, "dictionary", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_XML_DICTIONARY", 224, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCall",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "operation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_OPERATION_DESCRIPTION", 288, IN },
		{2, "arguments", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "callProperties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_CALL_PROPERTY", 96, IN },
		{5, "callPropertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{7, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadChars",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "chars", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "maxCharCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "actualCharCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSendMessage",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "messageDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_MESSAGE_DESCRIPTION", 64, IN },
		{3, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{4, "bodyValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "bodyValueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{7, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateMetadata",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_METADATA_PROPERTY", 96, IN },
		{1, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "metadata", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateXmlBuffer",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_BUFFER_PROPERTY", 96, IN },
		{2, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "buffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadArray",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_VALUE_TYPE", 32, IN },
		{4, "array", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "arraySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "itemOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "itemCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "actualItemCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadNode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsEndReaderCanonicalization",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsMarkHeaderAsUnderstood",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerPosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_NODE_POSITION", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteBody",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "bodyDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ELEMENT_DESCRIPTION", 128, IN },
		{2, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{3, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetFaultErrorDetail",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "faultDetailDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_FAULT_DETAIL_DESCRIPTION", 64, IN },
		{2, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{3, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WsReadQualifiedName",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "prefix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{4, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteEndElement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsXmlStringEquals",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "string1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{1, "string2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetPolicyAlternativeCount",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "policy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetOutput",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "encoding", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_WRITER_ENCODING", 32, IN },
		{2, "output", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_WRITER_OUTPUT", 32, IN },
		{3, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_WRITER_PROPERTY", 96, IN },
		{4, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteMessageStart",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetMissingMetadataDocumentAddress",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "metadata", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_ENDPOINT_ADDRESS", 160, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetReaderProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_XML_READER_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFillBody",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "minSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadBody",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "bodyDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ELEMENT_DESCRIPTION", 128, IN },
		{2, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{3, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetOperationContextProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "context", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_OPERATION_CONTEXT_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsInitializeMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "initialization", NKT_DBOBJCLASS_Enumeration, "WS_MESSAGE_INITIALIZATION", 32, IN },
		{2, "sourceMessage", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetHeapProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_HEAP_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetMetadataProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "metadata", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_METADATA_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAddCustomHeader",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ELEMENT_DESCRIPTION", 128, IN },
		{2, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{3, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "headerAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadStartElement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteStartAttribute",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "prefix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{4, "singleQuote", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsRemoveCustomHeader",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "headerNs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadCharsUtf8",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "bytes", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "maxByteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "actualByteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsRevokeSecurityContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "securityContext", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsMatchPolicyAlternative",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "policy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "alternativeIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "policyConstraints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_POLICY_CONSTRAINTS", 192, IN },
		{3, "matchRequired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadMetadata",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "metadata", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "url", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAddMappedHeader",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_TYPE", 32, IN },
		{3, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{4, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsRemoveNode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nodePosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_NODE_POSITION", 64, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteQualifiedName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "prefix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetMetadataEndpoints",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "metadata", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "endpoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_METADATA_ENDPOINTS", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeChannel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadMessageEnd",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetErrorString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "string", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
	}
	},
	{ "WsFreeSecurityToken",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "token", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadAttribute",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "attributeDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ATTRIBUTE_DESCRIPTION", 128, IN },
		{2, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{3, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetWriterPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "nodePosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_NODE_POSITION", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeMessage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsResetListener",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetSecurityTokenProperty",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "securityToken", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_SECURITY_TOKEN_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsStartReaderCanonicalization",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "writeCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "writeCallbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_CANONICALIZATION_PROPERTY", 96, IN },
		{4, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSendFaultMessageForError",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "replyMessage", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "faultError", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "faultErrorCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "faultDisclosure", NKT_DBOBJCLASS_Enumeration, "WS_FAULT_DISCLOSURE", 32, IN },
		{5, "requestMessage", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{7, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCombineUrl",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "baseUrl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{1, "referenceUrl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "resultUrl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsOpenServiceHost",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceHost", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateMessageForChannel",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_MESSAGE_PROPERTY", 96, IN },
		{2, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadEndAttribute",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsResetHeap",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsPullBytes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "callbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFlushWriter",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "minSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAbortListener",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsRegisterOperationForCancel",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "context", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cancelCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "freestateCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "userState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeListener",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadXmlBuffer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "xmlBuffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteXmlnsAttribute",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "prefix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "singleQuote", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetServiceProxyProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_PROXY_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetSecurityContextProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "securityContext", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_SECURITY_CONTEXT_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteText",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "text", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_TEXT", 32, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateXmlSecurityToken",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "tokenXml", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "tokenKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_SECURITY_KEY_HANDLE", 32, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_SECURITY_TOKEN_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "token", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetCustomHeader",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "customHeaderDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ELEMENT_DESCRIPTION", 128, IN },
		{2, "repeatingOption", NKT_DBOBJCLASS_Enumeration, "WS_REPEATING_HEADER_OPTION", 32, IN },
		{3, "headerIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{5, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "headerAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsShutdownSessionChannel",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsRequestSecurityToken",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_REQUEST_SECURITY_TOKEN_PROPERTY", 96, IN },
		{2, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "token", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteMessageEnd",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCloseListener",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetInput",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "encoding", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_READER_ENCODING", 32, IN },
		{2, "input", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_READER_INPUT", 32, IN },
		{3, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_READER_PROPERTY", 96, IN },
		{4, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateListener",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channelType", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_TYPE", 32, IN },
		{1, "channelBinding", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_BINDING", 32, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_LISTENER_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "securityDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_SECURITY_DESCRIPTION", 128, IN },
		{5, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetHeader",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerType", NKT_DBOBJCLASS_Enumeration, "WS_HEADER_TYPE", 32, IN },
		{2, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_TYPE", 32, IN },
		{3, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{4, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadElement",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "elementDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ELEMENT_DESCRIPTION", 128, IN },
		{2, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{3, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsResetMetadata",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "metadata", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsEndWriterCanonicalization",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsOpenListener",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "url", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetXmlAttribute",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueChars", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{4, "valueCharCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCopyNode",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateMessage",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "envelopeVersion", NKT_DBOBJCLASS_Enumeration, "WS_ENVELOPE_VERSION", 32, IN },
		{1, "addressingVersion", NKT_DBOBJCLASS_Enumeration, "WS_ADDRESSING_VERSION", 32, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_MESSAGE_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadValue",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_VALUE_TYPE", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeHeap",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteNode",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "node", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_NODE", 32, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateServiceProxyFromTemplate",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channelType", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_TYPE", 32, IN },
		{1, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_PROXY_PROPERTY", 96, IN },
		{2, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "templateType", NKT_DBOBJCLASS_Enumeration, "WS_BINDING_TEMPLATE_TYPE", 32, IN },
		{4, "templateValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "templateSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "templateDescription", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "templateDescriptionSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{9, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteXmlBufferToBytes",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "xmlBuffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "encoding", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_WRITER_ENCODING", 32, IN },
		{3, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_WRITER_PROPERTY", 96, IN },
		{4, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "bytes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{7, "byteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsPushBytes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "callbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteCharsUtf8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "bytes", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "byteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetOutputToBuffer",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "buffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_WRITER_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAbandonMessage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateFaultFromError",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "faultErrorCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "faultDisclosure", NKT_DBOBJCLASS_Enumeration, "WS_FAULT_DISCLOSURE", 32, IN },
		{3, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "fault", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_FAULT", 256, IN },
	}
	},
	{ "WsGetHeaderAttributes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "headerAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateServiceEndpointFromTemplate",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channelType", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_TYPE", 32, IN },
		{1, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_SERVICE_ENDPOINT_PROPERTY", 96, IN },
		{2, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "addressUrl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{4, "contract", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_SERVICE_CONTRACT", 96, IN },
		{5, "authorizationCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "templateType", NKT_DBOBJCLASS_Enumeration, "WS_BINDING_TEMPLATE_TYPE", 32, IN },
		{8, "templateValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{9, "templateSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "templateDescription", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{11, "templateDescriptionSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "serviceEndpoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_SERVICE_ENDPOINT", 448, IN },
		{13, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAddressMessage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ENDPOINT_ADDRESS", 160, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteType",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "typeMapping", NKT_DBOBJCLASS_Enumeration, "WS_TYPE_MAPPING", 32, IN },
		{2, "type", NKT_DBOBJCLASS_Enumeration, "WS_TYPE", 32, IN },
		{3, "typeDescription", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{5, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadBytes",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "bytes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "maxByteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "actualByteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsResetServiceHost",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceHost", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAbortServiceProxy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteStartElement",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "prefix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsDecodeUrl",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "url", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "outUrl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_URL", 32, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetFaultErrorProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_FAULT_ERROR_PROPERTY_ID", 32, IN },
		{2, "buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "bufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WsSetListenerProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_LISTENER_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateChannel",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channelType", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_TYPE", 32, IN },
		{1, "channelBinding", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_BINDING", 32, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_CHANNEL_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "securityDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_SECURITY_DESCRIPTION", 128, IN },
		{5, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsVerifyXmlNCName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ncNameChars", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ncNameCharCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsRemoveMappedHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetReaderPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "nodePosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_NODE_POSITION", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsStartWriterCanonicalization",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "writeCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "writeCallbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_CANONICALIZATION_PROPERTY", 96, IN },
		{4, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAbortChannel",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeReader",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteXmlBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "xmlBuffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSkipNode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetReaderPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "nodePosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_NODE_POSITION", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadType",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "typeMapping", NKT_DBOBJCLASS_Enumeration, "WS_TYPE_MAPPING", 32, IN },
		{2, "type", NKT_DBOBJCLASS_Enumeration, "WS_TYPE", 32, IN },
		{3, "typeDescription", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{5, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetMessageProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_MESSAGE_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAcceptChannel",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "listener", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsTrimXmlWhitespace",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "chars", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "charCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "trimmedChars", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "trimmedCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsMoveReader",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "moveTo", NKT_DBOBJCLASS_Enumeration, "WS_MOVE_TO", 32, IN },
		{2, "found", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsEncodeUrl",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "url", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_URL", 32, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "outUrl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_STRING", 64, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetChannelProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteChars",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "chars", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "charCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsOpenServiceProxy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ENDPOINT_ADDRESS", 160, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateServiceHost",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "endpoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_SERVICE_ENDPOINT", 448, IN },
		{1, "endpointCount", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "serviceProperties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_SERVICE_PROPERTY", 96, IN },
		{3, "servicePropertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "serviceHost", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteArray",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_VALUE_TYPE", 32, IN },
		{4, "array", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "arraySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "itemOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "itemCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadEndpointAddressExtension",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "endpointAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ENDPOINT_ADDRESS", 160, IN },
		{2, "extensionType", NKT_DBOBJCLASS_Enumeration, "WS_ENDPOINT_ADDRESS_EXTENSION_TYPE", 32, IN },
		{3, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{4, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsRequestReply",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "requestMessage", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "requestMessageDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_MESSAGE_DESCRIPTION", 64, IN },
		{3, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{4, "requestBodyValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "requestBodyValueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "replyMessage", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "replyMessageDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_MESSAGE_DESCRIPTION", 64, IN },
		{8, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{9, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{10, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{11, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{13, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCloseChannel",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsResetMessage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteEndAttribute",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsOpenChannel",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "endpointAddress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ENDPOINT_ADDRESS", 160, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCloseServiceHost",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "serviceHost", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetErrorProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_ERROR_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WsFillReader",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "minSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetErrorProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_ERROR_PROPERTY_ID", 32, IN },
		{2, "buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "bufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WsSetFaultErrorDetail",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "faultDetailDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_FAULT_DETAIL_DESCRIPTION", 64, IN },
		{2, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{3, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WsGetMappedHeader",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "repeatingOption", NKT_DBOBJCLASS_Enumeration, "WS_REPEATING_HEADER_OPTION", 32, IN },
		{3, "headerIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_TYPE", 32, IN },
		{5, "readOption", NKT_DBOBJCLASS_Enumeration, "WS_READ_OPTION", 32, IN },
		{6, "heap", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCheckMustUnderstandHeaders",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadEnvelopeEnd",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsAsyncExecute",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "asyncState", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_STATE", 160, IN },
		{1, "operation", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "callbackModel", NKT_DBOBJCLASS_Enumeration, "WS_CALLBACK_MODEL", 32, IN },
		{3, "callbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetChannelProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetNamespaceFromPrefix",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "prefix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "required", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WS_XML_STRING", 128, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteStartCData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeWriter",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateReader",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_READER_PROPERTY", 96, IN },
		{1, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadEnvelopeStart",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "doneCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "doneCallbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetHeader",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "headerType", NKT_DBOBJCLASS_Enumeration, "WS_HEADER_TYPE", 32, IN },
		{2, "valueType", NKT_DBOBJCLASS_Enumeration, "WS_TYPE", 32, IN },
		{3, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{4, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteAttribute",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "attributeDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ATTRIBUTE_DESCRIPTION", 128, IN },
		{2, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{3, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateServiceProxy",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channelType", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_TYPE", 32, IN },
		{1, "channelBinding", NKT_DBOBJCLASS_Enumeration, "WS_CHANNEL_BINDING", 32, IN },
		{2, "securityDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_SECURITY_DESCRIPTION", 128, IN },
		{3, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_PROXY_PROPERTY", 96, IN },
		{4, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "channelProperties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_CHANNEL_PROPERTY", 96, IN },
		{6, "channelPropertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "serviceProxy", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{8, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadMessageStart",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "message", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "asyncContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ASYNC_CONTEXT", 64, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeServiceHost",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "serviceHost", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsGetWriterProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "id", NKT_DBOBJCLASS_Enumeration, "WS_XML_WRITER_PROPERTY_ID", 32, IN },
		{2, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFindAttribute",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "required", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "attributeIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteElement",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "elementDescription", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ELEMENT_DESCRIPTION", 128, IN },
		{2, "writeOption", NKT_DBOBJCLASS_Enumeration, "WS_WRITE_OPTION", 32, IN },
		{3, "value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "valueSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsReadToStartElement",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "localName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{2, "ns", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_STRING", 128, IN },
		{3, "found", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteBytes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "bytes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "byteCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsCreateError",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_ERROR_PROPERTY", 96, IN },
		{1, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "WsResetChannel",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "channel", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsWriteEndCData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "writer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsSetInputToBuffer",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reader", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "buffer", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "properties", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WS_XML_READER_PROPERTY", 96, IN },
		{3, "propertyCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "error", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WsFreeMetadata",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "metadata", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
};

int WebServicesarraySize = (sizeof(WebServices_info) / sizeof(WebServices_info[0]));
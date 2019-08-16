#include "../Pyrebox_libcalls.h"

libcall_info_t WinFax_info[] = {
	{ "FaxSetGlobalRoutingInfoW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_GLOBAL_ROUTING_INFOW", 224, IN },
	}
	},
	{ "FaxGetPortA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PortInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_PORT_INFOA", 288, IN },
	}
	},
	{ "FaxSetPortA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PortInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_PORT_INFOA", 288, IN },
	}
	},
	{ "FaxSetPortW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PortInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_PORT_INFOW", 288, IN },
	}
	},
	{ "FaxPrintCoverPageA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxContextInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_CONTEXT_INFOA", 192, IN },
		{1, "CoverPageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_COVERPAGE_INFOA", 1024, IN },
	}
	},
	{ "FaxPrintCoverPageW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxContextInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_CONTEXT_INFOW", 320, IN },
		{1, "CoverPageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_COVERPAGE_INFOW", 1024, IN },
	}
	},
	{ "FaxGetConfigurationW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FaxConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_CONFIGURATIONW", 416, IN },
	}
	},
	{ "FaxGetDeviceStatusA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DeviceStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_DEVICE_STATUSA", 704, IN },
	}
	},
	{ "FaxGetDeviceStatusW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DeviceStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_DEVICE_STATUSW", 704, IN },
	}
	},
	{ "FaxSetConfigurationA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FaxConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_CONFIGURATIONA", 416, IN },
	}
	},
	{ "FaxSetConfigurationW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FaxConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_CONFIGURATIONW", 416, IN },
	}
	},
	{ "FaxGetPortW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PortInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_PORT_INFOW", 288, IN },
	}
	},
	{ "FaxInitializeEventQueue",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CompletionPort", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "CompletionKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MessageStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxRegisterRoutingExtensionW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ExtensionName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "FriendlyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ImageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "CallBack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "Context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FaxRegisterServiceProviderW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DeviceProvider", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "FriendlyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ImageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "TspName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FaxSetGlobalRoutingInfoA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_GLOBAL_ROUTING_INFOA", 224, IN },
	}
	},
	{ "FaxSetLoggingCategoriesA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Categories", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_LOG_CATEGORYA", 96, IN },
		{2, "NumberCategories", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxSetLoggingCategoriesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Categories", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_LOG_CATEGORYW", 96, IN },
		{2, "NumberCategories", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxEnumRoutingMethodsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingMethod", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_ROUTING_METHODA", 288, IN },
		{2, "MethodsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxEnumRoutingMethodsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingMethod", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_ROUTING_METHODW", 288, IN },
		{2, "MethodsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxGetJobA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "JobEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_JOB_ENTRYA", 736, IN },
	}
	},
	{ "FaxGetJobW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "JobEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_JOB_ENTRYW", 736, IN },
	}
	},
	{ "FaxGetRoutingInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingGuid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "RoutingInfoBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "RoutingInfoBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxGetRoutingInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingGuid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "RoutingInfoBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "RoutingInfoBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxSendDocumentA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "JobParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_JOB_PARAMA", 640, IN },
		{3, "CoverpageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_COVERPAGE_INFOA", 1024, IN },
		{4, "FaxJobId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxSendDocumentW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "JobParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_JOB_PARAMW", 640, IN },
		{3, "CoverpageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_COVERPAGE_INFOW", 1024, IN },
		{4, "FaxJobId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxSetJobA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Command", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "JobEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_JOB_ENTRYA", 736, IN },
	}
	},
	{ "FaxSetJobW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Command", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "JobEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_JOB_ENTRYW", 736, IN },
	}
	},
	{ "FaxOpenPort",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DeviceId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxGetConfigurationA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FaxConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_CONFIGURATIONA", 416, IN },
	}
	},
	{ "FaxConnectFaxServerA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxEnumJobsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_JOB_ENTRYA", 736, IN },
		{2, "JobsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxEnumJobsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_JOB_ENTRYW", 736, IN },
		{2, "JobsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxFreeBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FaxSetRoutingInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingGuid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "RoutingInfoBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "RoutingInfoBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxSendDocumentForBroadcastA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FaxJobId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "FaxRecipientCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "Context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FaxStartPrintJobA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "PrinterName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "PrintInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_PRINT_INFOA", 352, IN },
		{2, "FaxJobId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "FaxContextInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_CONTEXT_INFOA", 192, IN },
	}
	},
	{ "FaxStartPrintJobW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "PrinterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PrintInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_PRINT_INFOW", 352, IN },
		{2, "FaxJobId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "FaxContextInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FAX_CONTEXT_INFOW", 320, IN },
	}
	},
	{ "FaxCompleteJobParamsA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "JobParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_JOB_PARAMA", 640, IN },
		{1, "CoverpageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_COVERPAGE_INFOA", 1024, IN },
	}
	},
	{ "FaxCompleteJobParamsW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "JobParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_JOB_PARAMW", 640, IN },
		{1, "CoverpageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_COVERPAGE_INFOW", 1024, IN },
	}
	},
	{ "FaxEnableRoutingMethodA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingGuid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Enabled", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxEnableRoutingMethodW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingGuid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Enabled", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxEnumPortsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PortInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_PORT_INFOA", 288, IN },
		{2, "PortsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxEnumPortsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PortInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_PORT_INFOW", 288, IN },
		{2, "PortsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxSendDocumentForBroadcastW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "FaxJobId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "FaxRecipientCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "Context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FaxUnregisterServiceProviderW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DeviceProvider", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FaxSetRoutingInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxPortHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingGuid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "RoutingInfoBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "RoutingInfoBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxGetPageData",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ImageWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ImageHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxConnectFaxServerW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxGetLoggingCategoriesA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Categories", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_LOG_CATEGORYA", 96, IN },
		{2, "NumberCategories", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxGetLoggingCategoriesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Categories", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_LOG_CATEGORYW", 96, IN },
		{2, "NumberCategories", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxEnumGlobalRoutingInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_GLOBAL_ROUTING_INFOA", 224, IN },
		{2, "MethodsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxEnumGlobalRoutingInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RoutingInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FAX_GLOBAL_ROUTING_INFOW", 224, IN },
		{2, "MethodsReturned", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FaxAbort",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "JobId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FaxAccessCheck",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FaxHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "AccessMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int WinFaxarraySize = (sizeof(WinFax_info) / sizeof(WinFax_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t qwave_info[] = {
	{ "QOSCancel",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "QOSStopTrackingClient",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestAddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "QOSCreateHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Version", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_QOS_VERSION", 32, IN },
		{1, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "QOSQueryFlow",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FlowId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Operation", NKT_DBOBJCLASS_Enumeration, "_QOS_QUERY_FLOW", 32, IN },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "QOSEnumerateFlows",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "QOSSetFlow",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FlowId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Operation", NKT_DBOBJCLASS_Enumeration, "_QOS_SET_FLOW", 32, IN },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "QOSCloseHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "QOSAddSocketToFlow",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Socket", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DestAddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{3, "TrafficType", NKT_DBOBJCLASS_Enumeration, "_QOS_TRAFFIC_TYPE", 32, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "FlowId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "QOSNotifyFlow",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FlowId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Operation", NKT_DBOBJCLASS_Enumeration, "_QOS_NOTIFY_FLOW", 32, IN },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, INOUT },
	}
	},
	{ "QOSRemoveSocketFromFlow",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Socket", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "FlowId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "QOSStartTrackingClient",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "QOSHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DestAddr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int qwavearraySize = (sizeof(qwave_info) / sizeof(qwave_info[0]));
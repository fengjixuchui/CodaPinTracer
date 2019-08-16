#include "../Pyrebox_libcalls.h"

libcall_info_t ksuser_info[] = {
	{ "KsCreateAllocator",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ConnectionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "AllocatorFraming", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "KSALLOCATOR_FRAMING", 192, IN },
		{2, "AllocatorHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "KsCreatePin",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "FilterHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Connect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "KSPIN_CONNECT", 512, IN },
		{2, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ConnectionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "KsCreateClock",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ConnectionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ClockCreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "KSCLOCK_CREATE", 32, IN },
		{2, "ClockHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "KsCreateTopologyNode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ParentHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NodeCreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "KSNODE_CREATE", 64, IN },
		{2, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "NodeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int ksuserarraySize = (sizeof(ksuser_info) / sizeof(ksuser_info[0]));
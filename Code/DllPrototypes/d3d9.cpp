#include "../Pyrebox_libcalls.h"

libcall_info_t d3d9_info[] = {
	{ "D3DPERF_EndEvent",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "D3DPERF_SetOptions",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Direct3DCreate9",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDirect3D9", 32, INOUT },
		{0, "SDKVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "D3DPERF_SetMarker",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "col", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "D3DPERF_GetStatus",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "D3DPERF_SetRegion",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "col", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "D3DPERF_BeginEvent",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "col", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "D3DPERF_QueryRepeatFrame",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "Direct3DCreate9Ex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SDKVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirect3D9Ex", 32, IN },
	}
	},
};

int d3d9arraySize = (sizeof(d3d9_info) / sizeof(d3d9_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t magnification_info[] = {
	{ "MagSetWindowSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct, "tagRECT", 128, IN },
	}
	},
	{ "MagInitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MagSetImageScalingCallback",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "MagSetWindowTransform",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pTransform", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMAGTRANSFORM", 288, IN },
	}
	},
	{ "MagGetImageScalingCallback",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MagGetWindowSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "MagUninitialize",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MagGetWindowFilterList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwFilterMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pHWND", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "MagGetColorEffect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pEffect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMAGCOLOREFFECT", 800, IN },
	}
	},
	{ "MagSetColorEffect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pEffect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMAGCOLOREFFECT", 800, IN },
	}
	},
	{ "MagGetWindowTransform",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pTransform", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMAGTRANSFORM", 288, IN },
	}
	},
	{ "MagSetWindowFilterList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFilterMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pHWND", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int magnificationarraySize = (sizeof(magnification_info) / sizeof(magnification_info[0]));
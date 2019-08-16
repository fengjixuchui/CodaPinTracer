#include "../Pyrebox_libcalls.h"

libcall_info_t dciman32_info[] = {
	{ "DCIOpenProvider",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DCIEnum",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "lprSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "lpFnCallback", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DCIDestroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pdci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DCISURFACEINFO", 576, IN },
	}
	},
	{ "GetWindowRegionData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "prd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, IN },
	}
	},
	{ "DCIBeginAccess",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DCISURFACEINFO", 576, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinWatchOpen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DCISetDestination",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DCIOFFSCREEN", 672, IN },
		{1, "dst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "src", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "WinWatchClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hWW", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinWatchDidStatusChange",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWW", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinWatchNotify",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWW", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotifyCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "NotifyParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DCIDraw",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DCIOFFSCREEN", 672, IN },
	}
	},
	{ "DCISetSrcDestClip",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DCIOFFSCREEN", 672, IN },
		{1, "srcrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "destrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "prd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, IN },
	}
	},
	{ "DCICloseProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDCRegionData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "prd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, IN },
	}
	},
	{ "DCICreateOverlay",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpOffscreenSurf", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lplpSurface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DCIOVERLAY", 640, IN },
	}
	},
	{ "DCISetClipList",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DCIOFFSCREEN", 672, IN },
		{1, "prd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, IN },
	}
	},
	{ "DCICreateOffscreen",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwCompression", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwRedMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwGreenMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwBlueMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwDCICaps", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "dwBitCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "lplpSurface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DCIOFFSCREEN", 672, IN },
	}
	},
	{ "DCIEndAccess",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pdci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DCISURFACEINFO", 576, IN },
	}
	},
	{ "WinWatchGetClipList",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWW", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "prd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, IN },
	}
	},
	{ "DCICreatePrimary",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lplpSurface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DCISURFACEINFO", 576, IN },
	}
	},
};

int dciman32arraySize = (sizeof(dciman32_info) / sizeof(dciman32_info[0]));
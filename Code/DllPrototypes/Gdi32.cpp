#include "../Pyrebox_libcalls.h"

libcall_info_t Gdi32_info[] = {
	{ "GetOutlineTextMetricsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cjCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "potm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OUTLINETEXTMETRICA", 1696, IN },
	}
	},
	{ "GetOutlineTextMetricsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cjCopy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "potm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OUTLINETEXTMETRICW", 1728, IN },
	}
	},
	{ "GetCurrentObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetBkColor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PolyDraw",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "aj", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Chord",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "x3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "y3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "x4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "y4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMetaFileBitsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DeleteMetaFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetTextCharacterExtra",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "extra", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CancelDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SaveDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMiterLimit",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "limit", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "old", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RemoveFontResourceA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RemoveFontResourceW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SetRectRgn",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtCreatePen",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "iPenStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "plbrush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGBRUSH", 96, IN },
		{3, "cStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pstyle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateDCA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pwszDriver", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pwszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszPort", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
	}
	},
	{ "CreateDCW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pwszDriver", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pwszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszPort", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
	}
	},
	{ "CreateDIBSection",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{2, "usage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{4, "hSection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RectVisible",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "SelectObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ScaleWindowExtEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "xd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "yn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "yd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "GetObjectA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetObjectW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetBrushOrgEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "TextOutA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextOutW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetViewportOrgEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "GetTextExtentPoint32A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "psizl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "GetTextExtentPoint32W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "psizl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "StrokePath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetViewportOrgEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "ArcTo",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "xr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "yr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "xr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "yr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateICA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszDriver", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszPort", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
	}
	},
	{ "CreateICW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszDriver", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszPort", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
	}
	},
	{ "EnumFontsW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLogfont", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBitmapBits",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cb", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "GetMetaRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateICMRegKeyA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszCMID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "command", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateICMRegKeyW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "reserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszCMID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "command", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDCBrushColor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PatBlt",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateFontIndirectA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lplf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTA", 480, IN },
	}
	},
	{ "CreateFontIndirectW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lplf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, IN },
	}
	},
	{ "GetBitmapDimensionEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "CreateDIBPatternBrushPt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpPackedDIB", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMetaFileA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetMetaFileW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetROP2",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateBitmap",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "nPlanes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nBitCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetColorSpace",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetLayout",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "l", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PolylineTo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "cpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetPath",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "aj", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StartPage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDeviceGammaRamp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRamp", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CreateColorSpaceA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lplcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, IN },
	}
	},
	{ "PaintRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemPaletteEntries",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pPalEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, IN },
	}
	},
	{ "CreatePen",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "iStyle", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "cWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateFontA",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "cHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "cWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cEscapement", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cOrientation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cWeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "bItalic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "bUnderline", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "bStrikeOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "iCharSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "iOutPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "iClipPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "iQuality", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "iPitchAndFamily", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{13, "pszFaceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateFontW",14,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "cHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "cWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cEscapement", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cOrientation", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cWeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "bItalic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "bUnderline", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "bStrikeOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "iCharSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "iOutPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "iClipPrecision", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "iQuality", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "iPitchAndFamily", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{13, "pszFaceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SelectClipRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateColors",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawEscape",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iEscape", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cjIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpIn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CombineTransform",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpxfOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, IN },
		{1, "lpxf1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, IN },
		{2, "lpxf2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, IN },
	}
	},
	{ "SetROP2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rop2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMetaRgn",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPtoLP",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FillPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndDoc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ColorCorrectPalette",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hPal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "deFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "num", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateBrushIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "plbrush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGBRUSH", 96, IN },
	}
	},
	{ "GetClipBox",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GdiGradientFill",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pVertex", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRIVERTEX", 128, IN },
		{2, "nVertex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pMesh", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ulMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumFontFamiliesA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLogfont", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AngleArc",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "r", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "StartAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "SweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "SetGraphicsMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateBitmapIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pbm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAP", 192, IN },
	}
	},
	{ "SetEnhMetaFileBits",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pb", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetGlyphIndicesA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetBitmapBits",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetKerningPairsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPairs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpKernPair", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagKERNINGPAIR", 64, IN },
	}
	},
	{ "GetKerningPairsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPairs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpKernPair", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagKERNINGPAIR", 64, IN },
	}
	},
	{ "DescribePixelFormat",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPixelFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "nBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, IN },
	}
	},
	{ "GetBkMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdiGetBatchLimit",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CheckColorsInGamut",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRGBTriple", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBTRIPLE", 24, IN },
		{2, "dlpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRegionData",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpRgnData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, INOUT },
	}
	},
	{ "GetSystemPaletteUse",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdiTransparentBlt",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "xoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "yoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "crTransparent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Rectangle",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndPage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OffsetRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnrealizeObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMiterLimit",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "plimit", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetPolyFillMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetViewportExtEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "GetWindowOrgEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "GetStockObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlattenPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharWidthFloatA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EnumMetaFile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "param", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharWidthFloatW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FixBrushOrgEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ptl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "SetTextColor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ModifyWorldTransform",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpxf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, IN },
		{2, "mode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetViewportExtEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, INOUT },
	}
	},
	{ "GetTextColor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBrushOrgEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "PlayEnhMetaFileRecord",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pht", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagHANDLETABLE", 32, IN },
		{2, "pmr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENHMETARECORD", 96, IN },
		{3, "cht", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LineDDA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "xStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "yStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "xEnd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "yEnd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "data", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateScalableFontResourceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fdwHidden", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFont", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpszPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateScalableFontResourceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fdwHidden", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFont", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "MaskBlt",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "hbmMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "xMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "yMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OffsetWindowOrgEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "DeleteEnhMetaFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IntersectClipRect",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWinMetaFileBits",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbData16", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pData16", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "iMapMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hdcRef", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClipRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RealizePalette",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtFloodFill",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextExtentPointA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "GetTextExtentPointI",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pgiIn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cgi", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "psize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "GetTextExtentPointW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "BitBlt",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PolyBezier",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "cpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateEnhMetaFileA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "lpDesc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RestoreDC",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nSavedDC", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StartDocA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DOCINFOA", 160, IN },
	}
	},
	{ "PolyPolyline",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "asz", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "csz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemoveFontResourceExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "PtVisible",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CombineRgn",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hrgnDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgnSrc1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hrgnSrc2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateRectRgn",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDIBPatternBrush",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetICMProfileA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pszFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetICMProfileW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pBufSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pszFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PlayMetaFileRecord",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpHandleTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagHANDLETABLE", 32, IN },
		{2, "lpMR", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMETARECORD", 64, IN },
		{3, "noObjs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateColorSpaceW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lplcs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, IN },
	}
	},
	{ "GetTextCharsetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFONTSIGNATURE", 192, INOUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetPixelFormat",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseEnhMetaFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetBitmapDimensionEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "SetWindowOrgEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "GetLogColorSpaceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, IN },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLogColorSpaceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorSpace", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, IN },
		{2, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdiComment",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "StretchBlt",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetFontData",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cjBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PlgBlt",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "hbmMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "xMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "yMask", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharWidth32A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetCharWidth32W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetWindowExtEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, INOUT },
	}
	},
	{ "ScaleViewportExtEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "yn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "yd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "FloodFill",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharABCWidthsI",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "giFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cgi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pabc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABC", 96, IN },
	}
	},
	{ "GetCharABCWidthsW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABC", 96, INOUT },
	}
	},
	{ "LPtoDP",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetArcDirection",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dir", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDCOrgEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "StartDocW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DOCINFOW", 160, IN },
	}
	},
	{ "EndPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextFaceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetTextFaceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FrameRgn",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PathToRegion",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMapMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetBkMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SelectPalette",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hPal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bForceBkgd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetEnhMetaFileHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpEnhMetaHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENHMETAHEADER", 864, IN },
	}
	},
	{ "OffsetViewportOrgEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "SetBoundsRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDCBrushColor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtEscape",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iEscape", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cjInput", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpInData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cjOutput", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "lpOutData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetICMProfileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetICMProfileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetFontLanguageInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AbortPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PlayEnhMetaFile",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "SetMapperFlags",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FillRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetEnhMetaFilePaletteEntries",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nNumEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpPaletteEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, IN },
	}
	},
	{ "StretchDIBits",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "DestWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "DestHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "SrcWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "SrcHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{10, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{11, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{12, "rop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWorldTransform",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpxf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, IN },
	}
	},
	{ "ResetDCA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
	}
	},
	{ "ResetDCW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
	}
	},
	{ "RoundRect",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetTextJustification",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "extra", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPixelFormat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "format", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, IN },
	}
	},
	{ "SetWorldTransform",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpxf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, IN },
	}
	},
	{ "GetDIBits",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "start", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{6, "usage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetArcDirection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNearestPaletteIndex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetColorAdjustment",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpca", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCOLORADJUSTMENT", 192, INOUT },
	}
	},
	{ "SetMapMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGlyphIndicesW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "c", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharacterPlacementA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nMexExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGCP_RESULTSA", 288, INOUT },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharacterPlacementW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nMexExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGCP_RESULTSW", 288, INOUT },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PolyPolygon",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "asz", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "csz", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRandomRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumObjects",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateFontIndirectExW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMLOGFONTEXDVW", 3360, IN },
	}
	},
	{ "GetPaletteEntries",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pPalEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, IN },
	}
	},
	{ "ResizePalette",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "n", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Polyline",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBkColor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharWidthA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetCharWidthI",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "giFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cgi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pgi", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "piWidths", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CreateDiscardableBitmap",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseFigure",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDCPenColor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGlyphOutlineA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uChar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fuFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpgm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GLYPHMETRICS", 160, INOUT },
		{4, "cjBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "lpmat2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAT2", 128, IN },
	}
	},
	{ "GetGlyphOutlineW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uChar", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fuFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpgm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GLYPHMETRICS", 160, INOUT },
		{4, "cjBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "lpmat2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAT2", 128, IN },
	}
	},
	{ "CreateRoundRectRgn",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "w", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "h", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCurrentPositionEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "SetWindowExtEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpsz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "SetPaletteEntries",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pPalEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, IN },
	}
	},
	{ "GetGraphicsMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateHalftonePalette",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextMetricsA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lptm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTEXTMETRICA", 448, INOUT },
	}
	},
	{ "GetTextMetricsW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lptm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTEXTMETRICW", 480, INOUT },
	}
	},
	{ "Arc",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "x3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "y3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "x4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "y4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextCharacterExtra",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseMetaFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDIBitmap",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbmih", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{2, "flInit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pjBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{5, "iUsage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumFontsA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLogfont", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetEnhMetaFileA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetEnhMetaFileW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateEllipticRgnIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "AbortDoc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetTextAlign",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "align", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddFontResourceA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "AddFontResourceW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ExtCreateRegion",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagXFORM", 192, IN },
		{1, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RGNDATA", 288, IN },
	}
	},
	{ "GetTextAlign",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyEnhMetaFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEnh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ExtTextOutA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "c", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ExtTextOutW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "c", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lpDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetEnhMetaFileDescriptionA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDescription", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetEnhMetaFileDescriptionW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cchBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDescription", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "InvertRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumFontFamiliesExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLogfont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTA", 480, IN },
		{2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumFontFamiliesExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLogfont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, IN },
		{2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDIBitsToDevice",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "w", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "StartScan", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "cLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "lpvBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{10, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{11, "ColorUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExcludeClipRect",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddFontResourceExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "res", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "AddFontResourceExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "res", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdiFlush",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "Escape",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iEscape", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cjIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pvIn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pvOut", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetPixel",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BeginPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ColorMatchToTarget",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdcTarget", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "action", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Pie",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "xr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "yr1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "xr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "yr2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "StrokeAndFillPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateFontIndirectExA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMLOGFONTEXDVA", 2080, IN },
	}
	},
	{ "PlayMetaFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddFontMemResourceEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pFileView", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cjSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvResrved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pNumFonts", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetWinMetaFileBits",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMeta16Data", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "hdcRef", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpMFP", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMETAFILEPICT", 128, IN },
	}
	},
	{ "GetBoundsRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPixelV",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateCompatibleDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetObjectType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRgnBox",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "CreatePalette",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "plpal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGPALETTE", 64, IN },
	}
	},
	{ "GetPixel",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OffsetClipRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextCharset",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateEllipticRgn",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MoveToEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "CreateSolidBrush",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteObject",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ho", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EqualRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hrgn1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RectInRegion",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetEnhMetaFilePixelFormat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, IN },
	}
	},
	{ "LineTo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetAbortProc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "SwapBuffers",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteColorSpace",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdiSetBatchLimit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dw", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumEnhMetaFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "param", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "PolyTextOutW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOLYTEXTW", 320, IN },
		{2, "nstrings", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTextExtentExPointA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchString", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nMaxExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpnFit", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpnDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, INOUT },
	}
	},
	{ "SetSystemPaletteUse",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "use", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PolyTextOutA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOLYTEXTA", 320, IN },
		{2, "nstrings", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPolyFillMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDCPenColor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreatePenIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "plpen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGPEN", 128, IN },
	}
	},
	{ "SetColorAdjustment",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpca", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCOLORADJUSTMENT", 192, IN },
	}
	},
	{ "GdiAlphaBlend",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "xoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "yoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "ftn", NKT_DBOBJCLASS_Struct, "_BLENDFUNCTION", 32, IN },
	}
	},
	{ "Polygon",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "cpt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAspectRatioFilterEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
	}
	},
	{ "GetFontUnicodeRanges",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpgs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGLYPHSET", 160, IN },
	}
	},
	{ "RemoveFontResourceExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetColorSpace",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hcs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyMetaFileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CopyMetaFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RemoveFontMemResourceEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetICMMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDeviceGammaRamp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRamp", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetCharWidthW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetTextExtentExPointI",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpwszString", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cwchString", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nMaxExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpnFit", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpnDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, INOUT },
	}
	},
	{ "GetTextExtentExPointW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchString", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nMaxExtent", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpnFit", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpnDx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "lpSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, INOUT },
	}
	},
	{ "PolyBezierTo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "apt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{2, "cpt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SelectClipPath",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Ellipse",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "left", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "top", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "right", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLayout",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumICMProfilesA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "param", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumICMProfilesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "proc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "param", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PtInRegion",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetStretchBltMode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNearestColor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateEnhMetaFileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "lpDesc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreatePolyPolygonRgn",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pptl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{1, "pc", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "cPoly", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetStretchBltMode",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExtSelectClipRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "mode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TranslateCharsetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "lpCs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHARSETINFO", 256, INOUT },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetEnhMetaFileBits",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEMF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "AnimatePalette",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hPal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStartIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, IN },
	}
	},
	{ "GetCharABCWidthsFloatA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABCFLOAT", 96, IN },
	}
	},
	{ "CreateCompatibleBitmap",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharABCWidthsA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABC", 96, INOUT },
	}
	},
	{ "SetDIBColorTable",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "prgbq", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBQUAD", 32, IN },
	}
	},
	{ "ChoosePixelFormat",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppfd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPIXELFORMATDESCRIPTOR", 320, IN },
	}
	},
	{ "EnumFontFamiliesW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpLogfont", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDIBColorTable",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cEntries", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "prgbq", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBQUAD", 32, IN },
	}
	},
	{ "CreatePatternBrush",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDIBits",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "start", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "lpbmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{6, "ColorUse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyEnhMetaFileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hEnh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateHatchBrush",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "iHatch", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDeviceCaps",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "index", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRasterizerCaps",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpraststat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RASTERIZER_STATUS", 48, IN },
		{1, "cjBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCharABCWidthsFloatW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFirst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iLast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpABC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ABCFLOAT", 96, IN },
	}
	},
	{ "CreateRectRgnIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "CreatePolygonRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pptl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{1, "cPoint", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateMetaFileA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateMetaFileW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WidenPath",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMetaFileBitsEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hMF", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
};

int Gdi32arraySize = (sizeof(Gdi32_info) / sizeof(Gdi32_info[0]));
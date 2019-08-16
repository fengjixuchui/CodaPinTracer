#include "../Pyrebox_libcalls.h"

libcall_info_t Uxtheme_info[] = {
	{ "GetThemeBackgroundContentRect",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pBoundingRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "pContentRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "UpdatePanningFeedback",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lTotalOverpanOffsetX", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lTotalOverpanOffsetY", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "fInInertia", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetBufferedPaintTargetRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBufferedPaint", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "BeginBufferedPaint",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdcTarget", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prcTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "dwFormat", NKT_DBOBJCLASS_Enumeration, "_BP_BUFFERFORMAT", 32, IN },
		{3, "pPaintParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BP_PAINTPARAMS", 128, IN },
		{4, "phdc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetWindowThemeAttribute",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eAttribute", NKT_DBOBJCLASS_Enumeration, "WINDOWTHEMEATTRIBUTETYPE", 32, IN },
		{2, "pvAttribute", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbAttribute", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeBackgroundExtent",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pContentRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "pExtentRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "EnableTheming",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeFilename",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pszThemeFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "cchMaxBuffChars", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawThemeBackgroundEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "pOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DTBGOPTS", 192, IN },
	}
	},
	{ "GetThemeSysFont",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iFontId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "plf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, IN },
	}
	},
	{ "BeginPanningFeedback",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsThemeBackgroundPartiallyTransparent",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndPanningFeedback",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fAnimateBack", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsThemeDialogTextureEnabled",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BeginBufferedAnimation",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdcTarget", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "prcTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "dwFormat", NKT_DBOBJCLASS_Enumeration, "_BP_BUFFERFORMAT", 32, IN },
		{4, "pPaintParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BP_PAINTPARAMS", 128, IN },
		{5, "pAnimationParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BP_ANIMATIONPARAMS", 128, IN },
		{6, "phdcFrom", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "phdcTo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DrawThemeParentBackgroundEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "DrawThemeText",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dwTextFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "dwTextFlags2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "CloseThemeData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeSysInt",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iIntId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "piValue", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DrawThemeTextEx",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dwTextFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{8, "pOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DTTOPTS", 512, IN },
	}
	},
	{ "GetThemeBitmap",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phBitmap", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IsAppThemed",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DrawThemeParentBackground",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "EnableThemeDialogTexture",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawThemeBackground",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "pClipRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetThemeTextMetrics",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "ptm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTEXTMETRICW", 480, INOUT },
	}
	},
	{ "BufferedPaintUnInit",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "EndBufferedAnimation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hbpAnimation", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fUpdateTarget", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsThemePartDefined",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HitTestThemeBackground",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{6, "hrgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ptTest", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{8, "pwHitTestCode", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "GetThemeBool",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pfVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetBufferedPaintDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hBufferedPaint", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemePosition",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "GetBufferedPaintBits",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBufferedPaint", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppbBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagRGBQUAD", 32, INOUT },
		{2, "pcxRow", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetThemeBackgroundRegion",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "pRegion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetThemeIntList",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pIntList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INTLIST", 12896, INOUT },
	}
	},
	{ "GetThemeRect",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "IsCompositionActive",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetThemeSysSize",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iSizeId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeMetric",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "piVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "BufferedPaintStopAllAnimations",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BufferedPaintInit",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetThemeAppProperties",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BufferedPaintRenderAnimation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdcTarget", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeTransitionDuration",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateIdFrom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateIdTo", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pdwDuration", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DrawThemeEdge",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pDestRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "uEdge", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pContentRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetThemeTextExtent",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "cchCharCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dwTextFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pBoundingRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{8, "pExtentRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "GetThemeDocumentationProperty",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszThemeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszPropertyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszValueBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchMaxValChars", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemePropertyOrigin",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pOrigin", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "PROPERTYORIGIN", 32, INOUT },
	}
	},
	{ "GetThemeFont",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pFont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, INOUT },
	}
	},
	{ "GetWindowTheme",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeMargins",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{6, "pMargins", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MARGINS", 128, INOUT },
	}
	},
	{ "OpenThemeData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszClassList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "EndBufferedPaint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBufferedPaint", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fUpdateTarget", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeStream",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "ppvStream", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{5, "pcbStream", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeSysColor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iColorId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeSysString",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStringId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pszStringBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchMaxStringChars", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "IsThemeActive",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetThemeSysBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iBoolId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowTheme",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszSubAppName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pszSubIdList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenThemeDataEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszClassList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeAppProperties",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetThemeInt",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "piVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DrawThemeIcon",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "iImageIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeEnumValue",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "piVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetThemeColor",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pColor", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetBufferedPaintTargetDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hBufferedPaint", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemeString",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iPropId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pszBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "cchMaxBuffChars", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BufferedPaintClear",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBufferedPaint", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetThemeSysColorBrush",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iColorId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThemePartSize",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTheme", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "iPartId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iStateId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "eSize", NKT_DBOBJCLASS_Enumeration, "THEMESIZE", 32, IN },
		{6, "psz", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, INOUT },
	}
	},
	{ "BufferedPaintSetAlpha",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hBufferedPaint", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "alpha", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "GetCurrentThemeName",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszThemeFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{1, "cchMaxNameChars", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pszColorBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "cchMaxColorChars", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pszSizeBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "cchMaxSizeChars", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
};

int UxthemearraySize = (sizeof(Uxtheme_info) / sizeof(Uxtheme_info[0]));
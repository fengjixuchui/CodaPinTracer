#include "../Pyrebox_libcalls.h"

libcall_info_t ComCtl32_info[] = {
	{ "ImageList_DragShowNolock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMUILanguage",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
	}
	},
	{ "FlatSB_GetScrollInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "code", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLINFO", 224, IN },
	}
	},
	{ "ImageList_GetImageInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pImageInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEINFO", 256, IN },
	}
	},
	{ "CreateMappedBitmap",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "idBitmap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpColorMap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COLORMAP", 64, IN },
		{4, "iNumMaps", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_GetPtr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlatSB_GetScrollProp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "propIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ShowHideMenuCtl",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpInfo", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DPA_DeleteAllPtrs",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "UninitializeFlatSB",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyPropertySheetPage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "FlatSB_EnableScrollBar",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_InsertPtr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "p", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DPA_EnumCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pfnCB", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "PropertySheetW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROPSHEETHEADERW_V2", 416, IN },
	}
	},
	{ "ImageList_Replace",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hbmImage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hbmMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_ReplaceIcon",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hicon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawStatusTextA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "pszText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitCommonControls",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "DSA_GetItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pitem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "ImageList_Copy",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himlDst", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "iDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "himlSrc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "iSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_Write",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "ImageList_DrawIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pimldp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGELISTDRAWPARAMS", 544, IN },
	}
	},
	{ "DSA_SetItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pitem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ImageList_Create",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cInitial", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cGrow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_SetOverlayImage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "iImage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iOverlay", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_GetDragImage",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "ppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{1, "pptHotspot", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "ImageList_DrawEx",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hdcDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "rgbBk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "rgbFg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "fStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_LoadStream",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phdpa", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{3, "pvInstData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DSA_DeleteItem",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_Search",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pFind", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "iStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pfnCompare", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_DeletePtr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitializeFlatSB",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateStatusWindowW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemoveWindowSubclass",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pfnSubclass", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "uIdSubclass", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_Sort",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pfnCompare", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_GetPtrIndex",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "p", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DPA_Destroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "PropertySheetA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROPSHEETHEADERA_V2", 416, IN },
	}
	},
	{ "DSA_Destroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ImageList_LoadImageA",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "hi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpbmp", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cGrow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "crMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_LoadImageW",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "hi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpbmp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cGrow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "crMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowSubclass",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pfnSubclass", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "uIdSubclass", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwRefData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitMUILanguage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "uiLang", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "MakeDragList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLB", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_DragMove",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_GetIcon",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_SetDragCursorImage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himlDrag", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "iDrag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dxHotspot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dyHotspot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_DragEnter",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndLock", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_Clone",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "hdpaNew", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
	}
	},
	{ "DSA_Create",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "cbItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "cItemGrow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_DestroyCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pfnCB", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DPA_Create",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "cItemGrow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawStatusTextW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DSA_DeleteAllItems",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ImageList_Add",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "hbmImage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hbmMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DSA_EnumCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pfnCB", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DPA_Grow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "cp", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreatePropertySheetPageA",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "constPropSheetPagePointer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROPSHEETPAGEA", 448, IN },
	}
	},
	{ "CreatePropertySheetPageW",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "constPropSheetPagePointer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROPSHEETPAGEW", 448, IN },
	}
	},
	{ "ImageList_Merge",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "himl1", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "himl2", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "i2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LBItemFromPt",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hLB", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{2, "bAutoScroll", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DSA_DestroyCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pfnCB", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ImageList_SetImageCount",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "uNewCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefSubclassProc",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_DragLeave",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndLock", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_GetImageCount",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "DPA_SaveStream",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{3, "pvInstData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FlatSB_SetScrollPos",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "code", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "fRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetEffectiveClientRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "lpInfo", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ImageList_GetIconSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "cx", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "cy", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FlatSB_GetScrollRange",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "code", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ImageList_Read",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "pstm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "DSA_InsertItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pitem", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DPA_Merge",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpaDest", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{1, "hdpaSrc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfnCompare", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "pfnMerge", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MenuHelp",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "hMainMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "hwndStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpwIDs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FlatSB_SetScrollInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "code", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLINFO", 224, IN },
		{3, "fRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_Destroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CreateUpDownControl",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "nID", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "hBuddy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "nUpper", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "nLower", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "nPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_BeginDrag",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himlTrack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "iTrack", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dxHotspot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dyHotspot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_GetBkColor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ImageList_SetIconSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DPA_CreateEx",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "cpGrow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "hheap", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_Remove",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawInsert",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "handParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hLB", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_EndDrag",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "FlatSB_GetScrollPos",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "code", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "Str_SetPtrW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FlatSB_SetScrollProp",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "newValue", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_Draw",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "hdcDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "fStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DSA_GetItemPtr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hdsa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateToolbarEx",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ws", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "nBitmaps", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hBMInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "wBMID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpButtons", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TBBUTTON", 160, IN },
		{7, "iNumButtons", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "dxButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "dyButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "dxBitmap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "dyBitmap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{12, "uStructSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlatSB_ShowScrollBar",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "code", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_SetBkColor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "clrBk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FlatSB_SetScrollRange",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "code", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "min", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "max", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "fRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateStatusWindowA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpszText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageList_Duplicate",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "InitCommonControlsEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "picce", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagINITCOMMONCONTROLSEX", 64, IN },
	}
	},
	{ "ImageList_AddMasked",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "himl", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "hbmImage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "crMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_TrackMouseEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpEventTrack", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTRACKMOUSEEVENT", 128, INOUT },
	}
	},
	{ "DPA_SetPtr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdpa", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "i", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "p", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
};

int ComCtl32arraySize = (sizeof(ComCtl32_info) / sizeof(ComCtl32_info[0]));
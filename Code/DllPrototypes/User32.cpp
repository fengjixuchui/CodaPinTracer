#include "../Pyrebox_libcalls.h"

libcall_info_t User32_info[] = {
	{ "GetListBoxInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AdjustWindowRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{1, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bMenu", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MoveWindow",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "bRepaint", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IntersectRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{1, "lprcSrc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "lprcSrc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "DdeGetData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pDst", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cbOff", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetProcessWindowStation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWinSta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefRawInputProc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "paRawInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagRAWINPUT", 320, IN },
		{1, "nInput", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cbSizeHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IMPQueryIMEW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROW", 2720, IN },
	}
	},
	{ "FillRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeWindowMessageFilter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "message", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AnyPopup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetActiveWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAsyncKeyState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "vKey", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeferWindowPos",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWinPosInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hWndInsertAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDialogParamW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplateName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ToAsciiEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpChar", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClassInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSA", 320, IN },
	}
	},
	{ "CharUpperA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CharUpperW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "EnumDesktopWindows",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RealChildWindowFromPoint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ptParentClientCoords", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "CharNextW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "AdjustWindowRectEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{1, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bMenu", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwExStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterClipboardFormatA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFormat", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegisterClipboardFormatW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DdeImpersonateClient",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDlgItem",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendNotifyMessageA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendNotifyMessageW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLastInputInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "plii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLASTINPUTINFO", 64, INOUT },
	}
	},
	{ "GetClassInfoExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpwcx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXA", 384, IN },
	}
	},
	{ "GetClassInfoExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpwcx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXW", 384, IN },
	}
	},
	{ "FlashWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bInvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowLongW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDlgItemTextW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowTextW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenInputDesktop",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUserObjectInformationA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ChangeClipboardChain",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndRemove", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndNewNext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReleaseCapture",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ScreenToClient",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
	}
	},
	{ "GetSysColorBrush",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InvertRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "EnumDisplaySettingsExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateWindowStationA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpwinsta", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "CreateWindowStationW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpwinsta", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "CreateCursor",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xHotSpot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yHotSpot", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pvANDPlane", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "pvXORPlane", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetLayeredWindowAttributes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "crKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bAlpha", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsCharAlphaNumericW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "MessageBoxW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawTextExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpchText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpdtp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDRAWTEXTPARAMS", 160, IN },
	}
	},
	{ "DrawTextExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpchText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpdtp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDRAWTEXTPARAMS", 160, IN },
	}
	},
	{ "ChildWindowFromPointEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeQueryNextServer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hConvList", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hConvPrev", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendMessageTimeoutA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "fuFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpdwResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SendMessageTimeoutW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "fuFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpdwResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "MapWindowPoints",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndFrom", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndTo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpPoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
		{3, "cPoints", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadCursorFromFileA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "LoadCursorFromFileW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CallMsgFilterA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
		{1, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CallMsgFilterW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
		{1, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterClassExW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXW", 384, IN },
	}
	},
	{ "IsWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LockWorkStation",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CreateIconFromResourceEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwResSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwVer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cxDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "cyDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateIconIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFO", 160, IN },
	}
	},
	{ "SetGestureConfig",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cIDs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pGestureConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGESTURECONFIG", 96, IN },
		{4, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumWindowStationsW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharUpperBuffA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharUpperBuffW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeQueryStringA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cchMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeQueryStringW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsWindowVisible",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNextDlgTabItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hCtl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bPrevious", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowModuleFileNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchFileNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateCaret",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hBitmap", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAltTabInfoA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pati", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagALTTABINFO", 320, IN },
		{3, "pszItemText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "cchItemText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAltTabInfoW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pati", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagALTTABINFO", 320, IN },
		{3, "pszItemText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cchItemText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDCEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hrgnClip", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindWindowA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpWindowName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FindWindowW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpWindowName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DrawAnimatedRects",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "idAni", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lprcFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "lprcTo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "IsDialogMessageA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "IsDialogMessageW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "CreateWindowExA",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwExStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpWindowName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "lpParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CreateWindowExW",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwExStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpWindowName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "lpParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "MessageBoxExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpCaption", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wLanguageId", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetScrollBarInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "idObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "psbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLBARINFO", 480, IN },
	}
	},
	{ "DdeUnaccessData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseClipboard",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetCursor",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "RegisterWindowMessageA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RegisterWindowMessageW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetTopWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PostMessageA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PostMessageW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WINNLSGetIMEHotkey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetClipboardViewer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWndNewViewer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPropW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsProcessDPIAware",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "EnumDisplayMonitors",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprcClip", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "lpfnEnum", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemovePropA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RemovePropW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "LoadBitmapA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBitmapName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "LoadBitmapW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBitmapName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetProcessWindowStation",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SwapMouseButton",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fSwap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitMessage",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetCursorPos",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowTextA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowTextW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetLastErrorEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "dwErrCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DlgDirListComboBoxW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPathSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nIDComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "uFiletype", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCursorPos",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "SoundSentry",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ScrollDC",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lprcScroll", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{4, "lprcClip", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "hrgnUpdate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lprcUpdate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "CreatePopupMenu",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MessageBoxIndirectA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpmbp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSGBOXPARAMSA", 320, IN },
	}
	},
	{ "MessageBoxIndirectW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpmbp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSGBOXPARAMSW", 320, IN },
	}
	},
	{ "DlgDirListA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPathSpec", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nIDListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "uFileType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendMessageA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WindowFromDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendMessageW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnhookWindowsHookEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hhk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuItemID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DlgDirSelectComboBoxExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchOut", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "idComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetRawInputDeviceInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDevice", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetRawInputDeviceInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDevice", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "IsChild",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendDlgItemMessageA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendDlgItemMessageW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemoveClipboardFormatListener",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetForegroundWindow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeFreeDataHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DialogBoxParamA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplateName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DialogBoxParamW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplateName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ToAscii",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpChar", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowsHookA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nFilterType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pfnFilterProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ReleaseDC",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeConnectList",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hszService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hszTopic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hConvList", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pCC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVCONTEXT", 288, IN },
	}
	},
	{ "SubtractRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{1, "lprcSrc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "lprcSrc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "CharLowerA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CharLowerW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CopyIcon",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShutdownBlockReasonCreate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszReason", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "EnumThreadWindows",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetPriorityClipboardFormat",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "paFormatPriorityList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "cFormats", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WaitForInputIdle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDlgCtrlID",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadImageA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "fuLoad", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadImageW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "fuLoad", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExitWindowsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReason", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharPrevA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "lpszStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszCurrent", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateMDIWindowA",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpWindowName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateMDIWindowW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpWindowName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InflateRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "KillTimer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIDEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetTimer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uElapse", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpTimerFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ShutdownBlockReasonQuery",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwszBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "pcchBuff", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "IsHungAppWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCapture",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "RegisterHotKey",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fsModifiers", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "vk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterPowerSettingNotification",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hRecipient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PowerSettingGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InsertMenuA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetLayeredWindowAttributes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcrKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pbAlpha", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "pdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SetUserObjectInformationA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ValidateRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetClipboardFormatNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFormatName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ActivateKeyboardLayout",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClipboardFormatNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszFormatName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetKeyNameTextA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnregisterDeviceNotification",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetWindowInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWINDOWINFO", 480, INOUT },
	}
	},
	{ "EnumDisplaySettingsExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, INOUT },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumChildWindows",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReuseDDElParam",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "msgIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "msgOut", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uiLo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "uiHi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumPropsExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClassNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGestureConfig",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcIDs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pGestureConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGESTURECONFIG", 96, IN },
		{5, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IMPQueryIMEA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROA", 1440, IN },
	}
	},
	{ "CharPrevExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "lpStart", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpCurrentChar", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InvalidateRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumClipboardFormats",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TabbedTextOutA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "nTabOrigin", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenIcon",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BeginPaint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPaint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPAINTSTRUCT", 512, INOUT },
	}
	},
	{ "SetWindowDisplayAffinity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwAffinity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadStringA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "cchBufferMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadStringW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "cchBufferMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDialogIndirectParamAorW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lParamInit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuStringA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIDItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetShellWindow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeUninitialize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeDisconnect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetQueueStatus",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCaretBlinkTime",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CloseWindowStation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWinSta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeKeepStringHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "EndDialog",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nResult", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemMetrics",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnregisterTouchWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMessageExtraInfo",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetDlgItemInt",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uValue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "bSigned", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterTouchWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCapture",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTouchInputInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTouchInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cInputs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInputs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTOUCHINPUT", 320, IN },
		{3, "cbSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefDlgProcA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefDlgProcW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetCaretBlinkTime",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uMSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClientRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "MessageBoxExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wLanguageId", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "ArrangeIconicWindows",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateIconFromResource",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwResSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwVer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DlgDirSelectComboBoxExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchOut", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "idComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenDesktopA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDesktop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenDesktopW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDesktop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetClassWord",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wNewWord", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "ShowWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nCmdShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClassWord",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSysColor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChildWindowFromPoint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Point", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "InternalGetWindowText",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowLongA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ToUnicode",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pwszBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "cchBuff", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowCursor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetProcessDPIAware",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetPhysicalCursorPos",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "PhysicalToLogicalPoint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "RedrawWindow",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprcUpdate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "hrgnUpdate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TrackPopupMenuEx",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lptpm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTPMPARAMS", 160, IN },
	}
	},
	{ "LoadCursorA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpCursorName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "OpenWindowStationA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszWinSta", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenWindowStationW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszWinSta", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fInherit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetInputState",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "IsTouchWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "FindWindowExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndChildAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszClass", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpszWindow", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "FindWindowExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndChildAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszClass", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpszWindow", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "IMPGetIMEA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROA", 1440, IN },
	}
	},
	{ "IMPGetIMEW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROW", 2720, IN },
	}
	},
	{ "MonitorFromPoint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PeekMessageA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wRemoveMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendInput",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "cInputs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pInputs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagINPUT", 224, IN },
		{2, "cbSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendMessageCallbackA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpResultCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendMessageCallbackW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpResultCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowPos",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndInsertAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsDlgButtonChecked",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MsgWaitForMultipleObjectsEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwWakeMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VkKeyScanA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
	}
	},
	{ "VkKeyScanW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "GetRawInputBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUT", 320, INOUT },
		{1, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "cbSizeHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumWindows",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsGUIThread",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bConvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PostThreadMessageA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PostThreadMessageW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{1, "lprcSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "SetWindowRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AddClipboardFormatListener",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTitleBarInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pti", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTITLEBARINFO", 352, INOUT },
	}
	},
	{ "GetWindowRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetRect",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{1, "xLeft", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yTop", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "xRight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "yBottom", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MonitorFromWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetPropW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "IsWinEventHookInstalled",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadIconW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpIconName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetUserObjectSecurity",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSIRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pSID", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PackDDElParam",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiLo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uiHi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowOwnedPopups",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDesktopW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDesktop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "TranslateMDISysAccel",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "GetUpdatedClipboardFormats",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpuiFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "cFormats", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcFormatsOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CheckMenuItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIDCheckItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uCheck", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyCaret",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetGUIThreadInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pgui", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGUITHREADINFO", 384, IN },
	}
	},
	{ "IMPSetIMEA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROA", 1440, IN },
	}
	},
	{ "IMPSetIMEW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagIMEPROW", 2720, IN },
	}
	},
	{ "CopyImage",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "h", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCursorInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pci", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCURSORINFO", 160, INOUT },
	}
	},
	{ "ValidateRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharLowerBuffA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharLowerBuffW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeReconnect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGestureInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hGestureInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pGestureInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagGESTUREINFO", 384, IN },
	}
	},
	{ "DdePostAdvise",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hszTopic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hszItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyCursor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCursor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PrivateExtractIconsW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "szFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cxIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cyIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "phicon", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "piconid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeregisterShellHookWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsMenu",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDesktopExA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDesktop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{6, "ulHeapSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pvoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CreateDesktopExW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDesktop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
		{6, "ulHeapSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pvoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UpdateLayeredWindowIndirect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pULWInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagUPDATELAYEREDWINDOWINFO", 320, IN },
	}
	},
	{ "IsClipboardFormatAvailable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetSystemMenu",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bRevert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadCursorW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpCursorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OpenClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndNewOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PeekMessageW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wRemoveMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefWindowProcA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefWindowProcW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMonitorInfoA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMONITORINFO", 320, INOUT },
	}
	},
	{ "GetMonitorInfoW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMONITORINFO", 320, INOUT },
	}
	},
	{ "GetKeyboardLayoutList",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nBuff", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpList", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DisplayConfigSetDeviceInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "setPacket", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_DEVICE_INFO_HEADER", 160, IN },
	}
	},
	{ "SwitchDesktop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnionRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprcDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{1, "lprcSrc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "lprcSrc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "AttachThreadInput",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idAttach", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "idAttachTo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fAttach", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wvsprintfA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "arglist", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "wvsprintfW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "arglist", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetParent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDoubleClickTime",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CopyAcceleratorTableA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAccelSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpAccelDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, IN },
		{2, "cAccelEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CopyAcceleratorTableW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAccelSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpAccelDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, IN },
		{2, "cAccelEntries", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mouse_event",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwExtraInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeCmpStringHandles",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hsz1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hsz2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MapVirtualKeyExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeConnect",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hszService", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hszTopic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pCC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVCONTEXT", 288, IN },
	}
	},
	{ "SetCaretPos",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CheckDlgButton",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "uCheck", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenu",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InsertMenuItemW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOW", 384, IN },
	}
	},
	{ "GetRawInputData",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hRawInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "cbSizeHeader", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GrayStringA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hBrush", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpOutputFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lpData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TranslateMessage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "CloseWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefFrameProcA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndMDIClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefFrameProcW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndMDIClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnhookWinEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWinEventHook", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "keybd_event",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "bVk", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "bScan", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwExtraInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowLongA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowLongW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUINFO", 224, IN },
	}
	},
	{ "IsWow64Message",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetRegisteredRawInputDevices",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pRawInputDevices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUTDEVICE", 96, INOUT },
		{1, "puiNumDevices", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuBarInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "idObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "idItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pmbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUBARINFO", 256, IN },
	}
	},
	{ "GetKeyNameTextW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetScrollPos",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "nPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "bRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnhookWindowsHook",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pfnFilterProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "GetDlgItemTextA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetIconInfoExA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hicon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFOEXA", 4384, IN },
	}
	},
	{ "GetIconInfoExW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hicon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFOEXW", 8544, IN },
	}
	},
	{ "DdeGetLastError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMouseMovePointsEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMOUSEMOVEPOINT", 128, IN },
		{2, "lpptBuf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMOUSEMOVEPOINT", 128, IN },
		{3, "nBufPoints", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "resolution", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinHelpW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndMain", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszHelp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "uCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnableMenuItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIDEnableItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uEnable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharPrevW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "lpszStart", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszCurrent", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "InSendMessageEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "BlockInput",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fBlockIt", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterShellHookWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OemToCharBuffA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OemToCharBuffW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszDst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MapVirtualKeyA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MapVirtualKeyW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PrivateExtractIconsA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "szFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "nIconIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cxIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cyIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "phicon", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "piconid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "nIcons", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuDefaultItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fByPos", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "gmdiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LockWindowUpdate",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndLock", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImpersonateDdeClientWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndServer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FreeDDElParam",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMenu",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharNextA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "lpsz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetWindowTextLengthA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowTextLengthW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuContextHelpId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharToOemA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CharToOemW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetRawInputDeviceList",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pRawInputDeviceList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUTDEVICELIST", 64, INOUT },
		{1, "puiNumDevices", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNextDlgGroupItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hCtl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bPrevious", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "HiliteMenuItem",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uIDHiliteItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uHilite", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDlgItemInt",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpTranslated", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "bSigned", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowWindowAsync",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nCmdShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnableScrollBar",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wSBflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wArrows", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WINNLSEnableIME",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawFrameControl",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateIcon",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cPlanes", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "cBitsPixel", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{5, "lpbANDbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "lpbXORbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "PrintWindow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdcBlt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetScrollRange",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpMinPos", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "lpMaxPos", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ScrollWindowEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "prcScroll", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{4, "prcClip", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{5, "hrgnUpdate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "prcUpdate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{7, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ToUnicodeEx",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wVirtKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wScanCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pwszBuff", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "cchBuff", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinHelpA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWndMain", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpszHelp", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "uCommand", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumPropsA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "EnumPropsW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "GetMenuItemRect",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lprcItem", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "GetSubMenu",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RealGetWindowClassA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ptszClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchClassNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RealGetWindowClassW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ptszClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchClassNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuStringW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uIDItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cchMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetCaretPos",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "CharToOemBuffA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CharToOemBuffW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpszDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchDstLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadMenuIndirectA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpMenuTemplate", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LoadMenuIndirectW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpMenuTemplate", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SetWindowsHookExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idHook", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "hmod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowsHookExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idHook", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "hmod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterClassA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSA", 320, IN },
	}
	},
	{ "RegisterClassW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSW", 320, IN },
	}
	},
	{ "IsWindowUnicode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDoubleClickTime",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyIcon",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeMenuW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cmdInsert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuState",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDisplayConfig",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "numPathArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pathArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_PATH_INFO", 704, IN },
		{2, "numModeInfoArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "modeInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_MODE_INFO", 512, IN },
		{4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowContextHelpId",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnregisterHotKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndPaint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPaint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPAINTSTRUCT", 512, IN },
	}
	},
	{ "WINNLSGetEnableStatus",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndMenu",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "LogicalToPhysicalPoint",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "DdeEnableCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMenuInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUINFO", 224, IN },
	}
	},
	{ "DrawMenuBar",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LockSetForegroundWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uLockCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RemoveMenu",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "QueryDisplayConfig",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "numPathArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pathArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_PATH_INFO", 704, IN },
		{3, "numModeInfoArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "modeInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_MODE_INFO", 512, IN },
		{5, "currentTopologyId", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_TOPOLOGY_ID", 32, IN },
	}
	},
	{ "GetDesktopWindow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetCursor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hCursor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadKeyboardLayoutA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pwszKLID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadKeyboardLayoutW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pwszKLID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetProcessDefaultLayout",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwDefaultLayout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OffsetRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseDesktop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TranslateAcceleratorA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAccTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "TranslateAcceleratorW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAccTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "ChangeDisplaySettingsExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
		{2, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ChangeDisplaySettingsExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
		{2, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwflags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "IsRectEmpty",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetWindowRgnBox",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "DlgDirListW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPathSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "nIDListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "uFileType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetClassLongA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetClassLongW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwNewLong", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMessageQueue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cMessagesMax", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetKeyboardLayout",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetKeyState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "nVirtKey", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetFocus",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CheckRadioButton",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDFirstButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "nIDLastButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nIDCheckButton", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseTouchInputHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hTouchInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetOpenClipboardWindow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "AnimateWindow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwTime", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDialogParamA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplateName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUserObjectInformationW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpnLengthNeeded", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "IsCharAlphaNumericA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
	}
	},
	{ "SetWindowPlacement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpwndpl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWINDOWPLACEMENT", 352, IN },
	}
	},
	{ "TileWindows",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wHow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "cKids", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpKids", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetPhysicalCursorPos",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShutdownBlockReasonDestroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ShowScrollBar",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "bShow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyAcceleratorTable",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAccel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnableWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetAncestor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "gaFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AppendMenuA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SwitchToThisWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fUnknown", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUpdateRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CalculatePopupWindowPosition",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "anchorPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{1, "windowSize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "excludeRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{4, "popupWindowPosition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "CreateAcceleratorTableA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "paccel", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, IN },
		{1, "cAccel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateAcceleratorTableW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "paccel", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagACCEL", 48, IN },
		{1, "cAccel", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BroadcastSystemMessageExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pbsmInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "BSMINFO", 160, IN },
	}
	},
	{ "BroadcastSystemMessageExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pbsmInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "BSMINFO", 160, IN },
	}
	},
	{ "GetDisplayConfigBufferSizes",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "numPathArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "numModeInfoArrayElements", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DrawEdge",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "qrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
		{2, "edge", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PtInRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{1, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "SystemParametersInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "fWinIni", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SystemParametersInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiAction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "fWinIni", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClipboardOwner",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetMenuItemBitmaps",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hBitmapUnchecked", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hBitmapChecked", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeDisplaySettingsA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeDisplaySettingsW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowModuleFileNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchFileNameMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadMenuA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMenuName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SendIMEMessageExA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SendIMEMessageExW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DisplayConfigGetDeviceInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "requestPacket", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DISPLAYCONFIG_DEVICE_INFO_HEADER", 160, IN },
	}
	},
	{ "FlashWindowEx",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfwi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FLASHWINFO", 160, IN },
	}
	},
	{ "LoadAcceleratorsA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DragObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwndFrom", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "data", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hcur", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeAccessData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcbDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "EqualRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprc1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{1, "lprc2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetClassNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nMaxCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetScrollRange",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "nMinPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nMaxPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bRedraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WindowFromPoint",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Point", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "GetFocus",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ClipCursor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "UnregisterPowerSettingNotification",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetGuiResources",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeQueryConvInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "idTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pConvInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVINFO", 768, INOUT },
	}
	},
	{ "RegisterClassExA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSEXA", 384, IN },
	}
	},
	{ "SetWindowContextHelpId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MapVirtualKeyExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMapType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetClipboardData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hMem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InsertMenuW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetMessagePos",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetRectEmpty",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "SetSystemCursor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcur", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawIconEx",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xLeft", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yTop", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cxWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "cyWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "istepIfAniCur", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "hbrFlickerFreeDraw", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "diFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetProcessDefaultLayout",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdwDefaultLayout", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DdeFreeStringHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetClipboardData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetScrollInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLINFO", 224, IN },
		{3, "redraw", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDesktopsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwinsta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetKeyboardLayoutNameA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszKLID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetKeyboardType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nTypeFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetKeyboardLayoutNameW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszKLID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SetWindowWord",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wNewWord", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetMessageA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMessageW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wMsgFilterMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wMsgFilterMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetComboBoxInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndCombo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCOMBOBOXINFO", 416, INOUT },
	}
	},
	{ "MenuItemFromPoint",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptScreen", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "GetKBCodePage",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetMenuItemInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fByPositon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOA", 384, IN },
	}
	},
	{ "SetMenuItemInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fByPositon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOW", 384, IN },
	}
	},
	{ "IsWindowEnabled",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PostQuitMessage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "nExitCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteMenu",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetScrollPos",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMenuItemInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOA", 384, IN },
	}
	},
	{ "GetMenuItemInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpmii", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOW", 384, IN },
	}
	},
	{ "SetKeyboardState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetClipCursor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "TabbedTextOutW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "nTabOrigin", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetUpdateRgn",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EndDeferWindowPos",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWinPosInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BroadcastSystemMessageA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BroadcastSystemMessageW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "BringWindowToTop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetForegroundWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CountClipboardFormats",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetKeyboardState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpKeyState", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DdeAbandonTransaction",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "idTransaction", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnloadKeyboardLayout",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUserObjectSecurity",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSIRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pSID", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ExcludeUpdateRgn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetUserObjectInformationW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pvInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "nLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMenuDefaultItem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fByPos", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ReplyMessage",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lResult", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDialogIndirectParamA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDialogIndirectParamW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VkKeyScanExA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VkKeyScanExW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
		{1, "dwhkl", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WindowFromPhysicalPoint",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Point", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "InvalidateRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "bErase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetPropA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DlgDirListComboBoxA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPathSpec", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "nIDComboBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nIDStaticPath", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "uFiletype", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadMenuW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpMenuName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetMessageTime",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeSetQualityOfService",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndClient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pqosNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_QUALITY_OF_SERVICE", 96, IN },
		{2, "pqosPrev", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_QUALITY_OF_SERVICE", 96, INOUT },
	}
	},
	{ "EmptyClipboard",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "OemKeyScan",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "wOemChar", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetDialogBaseUnits",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SetMenuContextHelpId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDebugErrorLevel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "dwLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterRawInputDevices",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRawInputDevices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRAWINPUTDEVICE", 96, IN },
		{1, "uiNumDevices", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NotifyWinEvent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "idObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "idChild", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowTextA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CallNextHookEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hhk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumPropsExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDisplaySettingsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, INOUT },
	}
	},
	{ "EnumDisplaySettingsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iModeNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDevMode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeW", 1760, INOUT },
	}
	},
	{ "DdeInitializeA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pidInst", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ulRes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeInitializeW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pidInst", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ulRes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetParent",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWndChild", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hWndNewParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CascadeWindows",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wHow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "cKids", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpKids", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetMenuItemCount",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InSendMessage",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeClientTransaction",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hszItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wFmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "wType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwTimeout", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pdwResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetWinEventHook",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "eventMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eventMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hmodWinEventProc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfnWinEventProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "idProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "idThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClassLongA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClassLongW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowThreadProcessId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpdwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DlgDirSelectExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "idListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DlgDirSelectExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "idListBox", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetSysColors",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cElements", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lpaElements", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "lpaRgbValues", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DisableProcessWindowsGhosting",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "MessageBeep",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeWindowMessageFilterEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "message", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "action", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pChangeFilterStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHANGEFILTERSTRUCT", 64, IN },
	}
	},
	{ "DrawStateA",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hbrFore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "qfnCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "wData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawStateW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hbrFore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "qfnCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "wData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "cx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "cy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MonitorFromRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumWindowStationsA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClipboardViewer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DrawCaption",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lprect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetGestureExtraArgs",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hGestureInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbExtraArgs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pExtraArgs", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "InsertMenuItemA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "item", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fByPosition", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpmi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMENUITEMINFOA", 384, IN },
	}
	},
	{ "IsCharUpperA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
	}
	},
	{ "IsCharUpperW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "GetPropA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "IsZoomed",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMessageExtraInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeAddData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSrc", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cbOff", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDesktopA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDesktop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pDevmode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_devicemodeA", 1248, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SECURITY_ATTRIBUTES", 96, IN },
	}
	},
	{ "GetActiveWindow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DestroyMenu",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UpdateLayeredWindow",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdcDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pptDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{3, "psize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSIZE", 64, IN },
		{4, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pptSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, IN },
		{6, "crKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pblend", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_BLENDFUNCTION", 32, IN },
		{8, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AppendMenuW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DispatchMessageA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "DispatchMessageW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMsg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMSG", 224, IN },
	}
	},
	{ "GetIconInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "piconinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ICONINFO", 160, IN },
	}
	},
	{ "UserHandleGrantAccess",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hUserHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hJob", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bGrant", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GrayStringW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hBrush", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpOutputFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "lpData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "nCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "nWidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "nHeight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeCreateDataHandle",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSrc", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cbOff", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hszItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "wFmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseGestureInfoHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hGestureInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowPlacement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpwndpl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWINDOWPLACEMENT", 352, INOUT },
	}
	},
	{ "CallWindowProcA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpPrevWndFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CallWindowProcW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpPrevWndFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetClassInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpWndClass", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWNDCLASSW", 320, IN },
	}
	},
	{ "PaintDesktop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetLastActivePopup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefMDIChildProcA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefMDIChildProcW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MapDialogRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "GetMenuCheckMarkDimensions",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DdeSetUserHandle",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hConv", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetWindowsHookW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nFilterType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pfnFilterProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CreateMenu",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "UnregisterClassA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpClassName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnregisterClassW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDisplayDevicesA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "iDevNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDisplayDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DISPLAY_DEVICEA", 3392, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDisplayDevicesW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "iDevNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpDisplayDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DISPLAY_DEVICEW", 6720, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeCreateStringHandleA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeCreateStringHandleW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "iCodePage", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawTextA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpchText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MsgWaitForMultipleObjects",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pHandles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "fWaitAll", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwMilliseconds", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwWakeMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LoadIconA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpIconName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ClientToScreen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINT", 64, INOUT },
	}
	},
	{ "HideCaret",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetDlgItemTextA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetDlgItemTextW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDlg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIDDlgItem", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetTabbedTextExtentA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetTabbedTextExtentW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "chCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "nTabPositions", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpnTabStopPositions", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "MessageBoxA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpCaption", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "uType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetThreadDesktop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDesktop", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawIcon",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "Y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LookupIconIdFromDirectory",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnpackDDElParam",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "puiLo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "puiHi", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "IsIconic",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ChangeMenuA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cmdInsert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DialogBoxIndirectParamAorW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lParamInit", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetThreadDesktop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwThreadId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetScrollInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nBar", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSCROLLINFO", 224, IN },
	}
	},
	{ "LoadAcceleratorsW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CharNextExA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "CodePage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "lpCurrentChar", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DragDetect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pt", NKT_DBOBJCLASS_Struct, "tagPOINT", 64, IN },
	}
	},
	{ "RegisterDeviceNotificationW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hRecipient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotificationFilter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsCharAlphaA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
	}
	},
	{ "IsCharAlphaW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "CheckMenuRadioItem",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "first", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "last", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "check", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ScrollWindow",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "XAmount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "YAmount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{4, "lpClipRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "ShowCaret",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OemToCharA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pDst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "OemToCharW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pDst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetClipboardSequenceNumber",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "TrackMouseEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpEventTrack", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagTRACKMOUSEEVENT", 128, IN },
	}
	},
	{ "ModifyMenuA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMnu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpNewItem", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ModifyMenuW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMnu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uIDNewItem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpNewItem", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "FrameRect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{2, "hbr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawFocusRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "LookupIconIdFromDirectoryEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "presbits", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fIcon", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cxDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cyDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeDisconnectList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hConvList", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AllowSetForegroundWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DialogBoxIndirectParamA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hDialogTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DialogBoxIndirectParamW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hDialogTemplate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DLGTEMPLATE", 144, IN },
		{2, "hWndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpDialogFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "dwInitParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumDesktopsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwinsta", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpEnumFunc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TrackPopupMenu",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "nReserved", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "prcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
	}
	},
	{ "GetWindowRect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, INOUT },
	}
	},
	{ "GetWindowDisplayAffinity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwAffinity", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "BeginDeferWindowPos",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "nNumWindows", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DdeNameService",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "idInst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hsz1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hsz2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "afCmd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CancelShutdown",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "wsprintfW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetDC",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetWindowWord",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawTextW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpchText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchText", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lprc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRECT", 128, IN },
		{4, "format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterDeviceNotificationA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hRecipient", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NotificationFilter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsCharLowerW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "IsCharLowerA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ch", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
	}
	},
	{ "wsprintfA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
};

int User32arraySize = (sizeof(User32_info) / sizeof(User32_info[0]));
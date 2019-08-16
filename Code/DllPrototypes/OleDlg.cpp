#include "../Pyrebox_libcalls.h"

libcall_info_t OleDlg_info[] = {
	{ "OleUIChangeIconW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUICHANGEICONW", 4640, IN },
	}
	},
	{ "OleUIAddVerbMenuA",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpOleObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleObject", 32, IN },
		{1, "lpszShortType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uPos", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "uIDVerbMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uIDVerbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "bAddConvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "idConvert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "lphMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "OleUIAddVerbMenuW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpOleObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleObject", 32, IN },
		{1, "lpszShortType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "hMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "uPos", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "uIDVerbMin", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "uIDVerbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "bAddConvert", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "idConvert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "lphMenu", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "OleUICanConvertOrActivateAs",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rClsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "fIsLinkedObject", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wFormat", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "OleUIUpdateLinksW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpOleUILinkCntr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleUILinkContainerW", 32, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cLinks", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleUIBusyA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIBUSYA", 352, IN },
	}
	},
	{ "OleUIBusyW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIBUSYW", 352, IN },
	}
	},
	{ "OleUIChangeSourceA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUICHANGESOURCEA", 640, IN },
	}
	},
	{ "OleUIConvertA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUICONVERTA", 1088, IN },
	}
	},
	{ "OleUIConvertW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUICONVERTW", 1088, IN },
	}
	},
	{ "OleUIPromptUserA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nTemplate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleUIPromptUserW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nTemplate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleUIPasteSpecialA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIPASTESPECIALA", 672, IN },
	}
	},
	{ "OleUIInsertObjectA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIINSERTOBJECTA", 896, IN },
	}
	},
	{ "OleUIInsertObjectW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIINSERTOBJECTW", 896, IN },
	}
	},
	{ "OleUIUpdateLinksA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpOleUILinkCntr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IOleUILinkContainerA", 32, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpszTitle", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cLinks", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleUIEditLinksW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIEDITLINKSW", 320, IN },
	}
	},
	{ "OleUIEditLinksA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIEDITLINKSA", 320, IN },
	}
	},
	{ "OleUIChangeIconA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUICHANGEICONA", 2560, IN },
	}
	},
	{ "OleUIPasteSpecialW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIPASTESPECIALW", 672, IN },
	}
	},
	{ "OleUIChangeSourceW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUICHANGESOURCEW", 640, IN },
	}
	},
	{ "OleUIObjectPropertiesA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIOBJECTPROPSA", 320, IN },
	}
	},
	{ "OleUIObjectPropertiesW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOLEUIOBJECTPROPSW", 320, IN },
	}
	},
};

int OleDlgarraySize = (sizeof(OleDlg_info) / sizeof(OleDlg_info[0]));
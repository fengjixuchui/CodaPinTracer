#include "../Pyrebox_libcalls.h"

libcall_info_t cryptui_info[] = {
	{ "CryptUIWizExport",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszWizardTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pExportInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTUI_WIZ_EXPORT_INFO", 192, IN },
		{4, "pvoid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptUIWizDigitalSign",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszWizardTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pDigitalSignInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTUI_WIZ_DIGITAL_SIGN_INFO", 256, IN },
		{4, "ppSignContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT", 96, INOUT },
	}
	},
	{ "CryptUIWizFreeDigitalSignContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSignContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT", 96, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CryptUIDlgCertMgr",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCryptUICertMgr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTUI_CERT_MGR_STRUCT", 160, IN },
	}
	},
	{ "CertSelectionGetSerializedBlob",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcsi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CERT_SELECTUI_INPUT", 96, IN },
		{1, "ppOutBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "pulOutBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CryptUIDlgViewCertificateA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCertViewInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCRYPTUI_VIEWCERTIFICATE_STRUCTA", 576, IN },
		{1, "pfPropertiesChanged", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "CryptUIDlgViewCertificateW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCertViewInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCRYPTUI_VIEWCERTIFICATE_STRUCTW", 576, IN },
		{1, "pfPropertiesChanged", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "CryptUIDlgViewContext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwContextType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pwszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptUIWizImport",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszWizardTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pImportSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPTUI_WIZ_IMPORT_SUBJECT_INFO", 160, IN },
		{4, "hDestCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptUIDlgSelectCertificateFromStore",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CERT_CONTEXT", 160, INOUT },
		{0, "hCertStore", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwszTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pwszDisplayString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "dwDontUseColumn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
};

int cryptuiarraySize = (sizeof(cryptui_info) / sizeof(cryptui_info[0]));
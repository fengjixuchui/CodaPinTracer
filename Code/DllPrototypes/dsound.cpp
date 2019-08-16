#include "../Pyrebox_libcalls.h"

libcall_info_t dsound_info[] = {
	{ "GetDeviceID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pGuidSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "pGuidDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "DirectSoundCaptureCreate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcGuidDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppDSC", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectSoundCapture", 32, IN },
		{2, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "DirectSoundCaptureCreate8",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcGuidDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppDSC8", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectSoundCapture", 32, IN },
		{2, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "DirectSoundEnumerateA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDSEnumCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DirectSoundEnumerateW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDSEnumCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DirectSoundCreate8",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcGuidDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppDS8", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectSound8", 32, IN },
		{2, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "DirectSoundCreate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcGuidDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "ppDS", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectSound", 32, IN },
		{2, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "DllGetClassObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "DirectSoundFullDuplexCreate",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcGuidCaptureDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "pcGuidRenderDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "pcDSCBufferDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DSCBUFFERDESC", 224, IN },
		{3, "pcDSBufferDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DSBUFFERDESC", 288, IN },
		{4, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ppDSFD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectSoundFullDuplex", 32, IN },
		{7, "ppDSCBuffer8", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectSoundCaptureBuffer8", 32, IN },
		{8, "ppDSBuffer8", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirectSoundBuffer8", 32, IN },
		{9, "pUnkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "DirectSoundCaptureEnumerateA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDSEnumCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DirectSoundCaptureEnumerateW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDSEnumCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
};

int dsoundarraySize = (sizeof(dsound_info) / sizeof(dsound_info[0]));
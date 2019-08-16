#include "../Pyrebox_libcalls.h"

libcall_info_t avifil32_info[] = {
	{ "AVIStreamAddRef",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
	}
	},
	{ "AVIMakeCompressedStream",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppsCompressed", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{1, "ppsSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{2, "lpOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AVICOMPRESSOPTIONS", 352, IN },
		{3, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "AVIStreamGetFrameClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IGetFrame", 32, IN },
	}
	},
	{ "AVIStreamFindSample",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lFlags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateEditableStream",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppsEditable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{1, "psSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
	}
	},
	{ "EditStreamPaste",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "plPos", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "plLength", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{4, "lStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "lEnd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EditStreamSetInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lpInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVISTREAMINFOA", 1120, IN },
		{2, "cbInfo", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EditStreamSetInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lpInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVISTREAMINFOW", 1632, IN },
		{2, "cbInfo", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIFileCreateStreamA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
		{1, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{2, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVISTREAMINFOA", 1120, IN },
	}
	},
	{ "AVIStreamLength",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
	}
	},
	{ "AVIStreamCreate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{1, "lParam1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "AVIStreamInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVISTREAMINFOA", 1120, IN },
		{2, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIStreamInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVISTREAMINFOW", 1632, IN },
		{2, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIFileCreateStreamW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
		{1, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{2, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVISTREAMINFOW", 1632, IN },
	}
	},
	{ "AVIStreamRelease",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
	}
	},
	{ "AVIFileOpenA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIFile", 32, IN },
		{1, "szFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "uMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "AVIFileOpenW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIFile", 32, IN },
		{1, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "uMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "EditStreamCopy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "plStart", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "plLength", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
	}
	},
	{ "AVIStreamSetFormat",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpFormat", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIFileExit",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "AVIStreamBeginStreaming",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lEnd", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lRate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIPutFileOnClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
	}
	},
	{ "AVIMakeStreamFromClipboard",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cfFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hGlobal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
	}
	},
	{ "AVIStreamGetFrameOpen",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IGetFrame", 32, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lpbiWanted", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
	}
	},
	{ "AVIFileInit",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "AVIStreamOpenFromFileA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{1, "szFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "mode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "AVISaveOptions",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nStreams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{4, "plpOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "AVICOMPRESSOPTIONS", 352, IN },
	}
	},
	{ "AVISaveVA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "nStreams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{5, "plpOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "AVICOMPRESSOPTIONS", 352, IN },
	}
	},
	{ "AVISaveA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "nStreams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{5, "lpOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AVICOMPRESSOPTIONS", 352, IN },
	}
	},
	{ "AVISaveW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "nStreams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{5, "lpOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "AVICOMPRESSOPTIONS", 352, IN },
	}
	},
	{ "AVIStreamWrite",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lSamples", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbBuffer", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "plSampWritten", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "plBytesWritten", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AVIStreamReadData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "fcc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lp", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpcb", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AVIStreamReadFormat",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpFormat", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpcbFormat", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AVIFileWriteData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
		{1, "ckid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIStreamTimeToSample",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lTime", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIBuildFilterA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFilter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbFilter", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fSaving", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIBuildFilterW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFilter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cbFilter", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fSaving", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
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
	{ "AVISaveVW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "lpfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "nStreams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{5, "plpOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "AVICOMPRESSOPTIONS", 352, IN },
	}
	},
	{ "AVIStreamWriteData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "fcc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lp", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cb", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIMakeFileFromStreams",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIFile", 32, IN },
		{1, "nStreams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "papStreams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
	}
	},
	{ "EditStreamClone",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
	}
	},
	{ "AVIFileAddRef",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
	}
	},
	{ "AVIStreamGetFrame",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IGetFrame", 32, IN },
		{1, "lPos", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIStreamRead",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lSamples", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lpBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbBuffer", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "plBytes", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "plSamples", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EditStreamCut",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "plStart", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "plLength", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
	}
	},
	{ "AVIFileReadData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
		{1, "ckid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpcbData", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AVIFileRelease",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
	}
	},
	{ "AVIGetFromClipboard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lppf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIFile", 32, IN },
	}
	},
	{ "AVISaveOptionsFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "nStreams", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "plpOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "AVICOMPRESSOPTIONS", 352, IN },
	}
	},
	{ "AVIClearClipboard",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "AVIStreamSampleToTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lSample", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIStreamEndStreaming",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
	}
	},
	{ "EditStreamSetNameA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lpszName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "EditStreamSetNameW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
		{1, "lpszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "AVIFileEndRecord",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
	}
	},
	{ "AVIStreamStart",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIStream", 32, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "AVIFileGetStream",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
		{1, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{2, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIStreamOpenFromFileW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppavi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAVIStream", 32, IN },
		{1, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "mode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pclsidHandler", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "AVIFileInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
		{1, "pfi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVIFILEINFOA", 864, IN },
		{2, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AVIFileInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IAVIFile", 32, IN },
		{1, "pfi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AVIFILEINFOW", 1376, IN },
		{2, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
};

int avifil32arraySize = (sizeof(avifil32_info) / sizeof(avifil32_info[0]));
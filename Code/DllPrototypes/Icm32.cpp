#include "../Pyrebox_libcalls.h"

libcall_info_t Icm32_info[] = {
	{ "CMCreateTransformExtW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, IN },
		{1, "lpDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpTargetDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMTranslateRGBsExt",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSrcBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bmInput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{3, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwInputStride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpDestBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "bmOutput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{8, "dwOutputStride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "lpfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{10, "ulCallbackData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMGetInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMTranslateRGB",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ColorRef", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpColorRef", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMCreateTransformW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, IN },
		{1, "lpDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpTargetDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CMCreateDeviceLinkProfile",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pahProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "nProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "padwIntents", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "nIntents", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lpProfileData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "CMCheckRGBs",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSrcBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bmInput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{3, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwStride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpaResult", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "ulCallbackData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMGetNamedProfileInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pNamedProfileInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagNAMED_PROFILE_INFO", 608, IN },
	}
	},
	{ "CMTranslateColors",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpaInputColors", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCOLOR", 64, IN },
		{2, "nColors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ctInput", NKT_DBOBJCLASS_Enumeration, "COLORTYPE", 32, IN },
		{4, "lpaOutputColors", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCOLOR", 64, IN },
		{5, "ctOutput", NKT_DBOBJCLASS_Enumeration, "COLORTYPE", 32, IN },
	}
	},
	{ "CMConvertColorNameToIndex",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paColorName", NKT_DBOBJCLASS_Array | NKT_DBOBJCLASS_Pointer, 0, 256, IN },
		{2, "paIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMCheckColorsInGamut",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpaRGBTriple", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagRGBTRIPLE", 24, IN },
		{2, "lpaResult", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "nCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMCreateMultiProfileTransform",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pahProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "nProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "padwIntents", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "nIntents", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMIsProfileValid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpbValid", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CMCreateProfileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, IN },
		{1, "lpProfileData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "CMCheckColors",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpaInputColors", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCOLOR", 64, IN },
		{2, "nColors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ctInput", NKT_DBOBJCLASS_Enumeration, "COLORTYPE", 32, IN },
		{4, "lpaResult", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CMDeleteTransform",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMCreateProfile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, IN },
		{1, "lpProfileData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "CMTranslateRGBs",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hcmTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpSrcBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bmInput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{3, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwStride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpDestBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "bmOutput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{8, "dwTranslateDirection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMConvertIndexToColorName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "paColorName", NKT_DBOBJCLASS_Array | NKT_DBOBJCLASS_Pointer, 0, 256, IN },
		{3, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CMCreateTransform",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, IN },
		{1, "lpDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpTargetDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CMCreateTransformExt",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, IN },
		{1, "lpDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "lpTargetDevCharacter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int Icm32arraySize = (sizeof(Icm32_info) / sizeof(Icm32_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t MSAcm32_info[] = {
	{ "acmFormatSuggest",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwfxSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{2, "pwfxDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{3, "cbwfxDst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwSuggest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverOpen",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phad", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "hadid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmStreamConvert",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "has", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMSTREAMHEADER", 672, IN },
		{2, "fdwConvert", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmGetVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "acmStreamOpen",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phas", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwfxSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{3, "pwfxDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{4, "pwfltr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "wavefilter_tag", 256, IN },
		{5, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmMetrics",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hao", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMetric", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pMetric", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "acmDriverMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterTagEnumA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERTAGDETAILSA", 576, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmStreamUnprepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "has", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMSTREAMHEADER", 672, IN },
		{2, "fdwUnprepare", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterDetailsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERDETAILSA", 1216, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterDetailsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERDETAILSW", 2240, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterEnumA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERDETAILSA", 1216, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterEnumW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERDETAILSW", 2240, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverEnum",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverClose",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fdwClose", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmStreamSize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "has", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwOutputBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "fdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatChooseA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pafmtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATCHOOSEA", 1856, IN },
	}
	},
	{ "acmFormatChooseW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pafmtc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATCHOOSEW", 3264, IN },
	}
	},
	{ "acmDriverRemove",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hadid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fdwRemove", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmStreamMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "has", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterTagEnumW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERTAGDETAILSW", 960, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatEnumA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATDETAILSA", 1216, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatEnumW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATDETAILSW", 2240, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmStreamPrepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "has", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMSTREAMHEADER", 672, IN },
		{2, "fdwPrepare", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatTagEnumA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATTAGDETAILSA", 576, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatTagEnumW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATTAGDETAILSW", 960, IN },
		{2, "fnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwEnum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterTagDetailsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERTAGDETAILSW", 960, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmStreamReset",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "has", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fdwReset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatDetailsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATDETAILSA", 1216, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatDetailsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pafd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATDETAILSW", 2240, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverID",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hao", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phadid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "fdwDriverID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverPriority",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hadid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwPriority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fdwPriority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatTagDetailsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATTAGDETAILSA", 576, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFormatTagDetailsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFORMATTAGDETAILSW", 960, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterTagDetailsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "had", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paftd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERTAGDETAILSA", 576, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterChooseW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pafltrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERCHOOSEW", 3264, IN },
	}
	},
	{ "acmDriverDetailsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hadid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "padd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMDRIVERDETAILSA", 7360, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverDetailsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hadid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "padd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMDRIVERDETAILSW", 14400, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmFilterChooseA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pafltrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tACMFILTERCHOOSEA", 1856, IN },
	}
	},
	{ "acmStreamClose",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "has", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fdwClose", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverAddA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phadid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "hinstModule", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwPriority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwAdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "acmDriverAddW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phadid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "hinstModule", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwPriority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwAdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int MSAcm32arraySize = (sizeof(MSAcm32_info) / sizeof(MSAcm32_info[0]));
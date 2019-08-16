#include "../Pyrebox_libcalls.h"

libcall_info_t Cabinet_info[] = {
	{ "FDIDestroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfdi", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FDIIsCabinet",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfdi", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "hf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pfdici", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "FDICABINETINFO", 192, IN },
	}
	},
	{ "FDICopy",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfdi", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pszCabinet", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszCabPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pfnfdin", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "pfnfdid", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pvUser", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FDITruncateCabinet",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfdi", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pszCabinetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "iFolderToDelete", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "FCIAddFile",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfci", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pszSourceFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "fExecute", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pfnfcignc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "pfnfcis", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pfnfcigoi", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "typeCompress", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "FCIFlushCabinet",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfci", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "fGetNextCab", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pfnfcignc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pfnfcis", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "FCIDestroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfci", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FCIFlushFolder",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfci", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pfnfcignc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pfnfcis", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "FDICreate",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pfnalloc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "pfnfree", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pfnopen", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pfnread", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "pfnwrite", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "pfnclose", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pfnseek", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "cpuType", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "perf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ERF", 96, IN },
	}
	},
	{ "FCICreate",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "perf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ERF", 96, IN },
		{1, "pfnfcifp", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pfna", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pfnf", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "pfnopen", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "pfnread", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pfnwrite", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "pfnclose", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "pfnseek", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "pfndelete", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{10, "pfnfcigtf", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{11, "pccab", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CCAB", 6432, IN },
		{12, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
};

int CabinetarraySize = (sizeof(Cabinet_info) / sizeof(Cabinet_info[0]));
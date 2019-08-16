#include "../Pyrebox_libcalls.h"

libcall_info_t WER_info[] = {
	{ "WerRemoveExcludedApplication",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzExeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bAllUsers", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WerReportAddFile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hReportHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwzPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "repFileType", NKT_DBOBJCLASS_Enumeration, "_WER_FILE_TYPE", 32, IN },
		{3, "dwFileFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WerReportCreate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzEventType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "repType", NKT_DBOBJCLASS_Enumeration, "_WER_REPORT_TYPE", 32, IN },
		{2, "pReportInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WER_REPORT_INFORMATION", 17568, IN },
		{3, "phReportHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WerReportCloseHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hReportHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WerReportSetUIOption",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hReportHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "repUITypeID", NKT_DBOBJCLASS_Enumeration, "_WER_REPORT_UI", 32, IN },
		{2, "pwzValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WerReportAddDump",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hReportHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dumpType", NKT_DBOBJCLASS_Enumeration, "_WER_DUMP_TYPE", 32, IN },
		{4, "pExceptionParam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WER_EXCEPTION_INFORMATION", 64, IN },
		{5, "pDumpCustomOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WER_DUMP_CUSTOM_OPTIONS", 4416, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WerAddExcludedApplication",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzExeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bAllUsers", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WerReportSetParameter",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hReportHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwparamID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwzName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pwzValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WerReportSubmit",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hReportHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "consent", NKT_DBOBJCLASS_Enumeration, "_WER_CONSENT", 32, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSubmitResult", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_WER_SUBMIT_RESULT", 32, INOUT },
	}
	},
};

int WERarraySize = (sizeof(WER_info) / sizeof(WER_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t xpsprint_info[] = {
	{ "StartXpsPrintJob",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "printerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "jobName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "outputFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "progressEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "completionEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "printablePagesOn", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "printablePagesOnCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "xpsPrintJob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IXpsPrintJob", 32, IN },
		{8, "documentStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IXpsPrintJobStream", 32, IN },
		{9, "printTicketStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IXpsPrintJobStream", 32, IN },
	}
	},
	{ "StartXpsPrintJob1",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "printerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "jobName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "outputFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "progressEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "completionEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "xpsPrintJob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IXpsPrintJob", 32, IN },
		{6, "printContentReceiver", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IXpsOMPackageTarget", 32, IN },
	}
	},
};

int xpsprintarraySize = (sizeof(xpsprint_info) / sizeof(xpsprint_info[0]));
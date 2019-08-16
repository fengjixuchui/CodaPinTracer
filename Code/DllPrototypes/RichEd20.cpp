#include "../Pyrebox_libcalls.h"

libcall_info_t RichEd20_info[] = {
	{ "CreateTextServices",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pITextHost", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITextHost", 64, IN },
		{2, "ppUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
	}
	},
};

int RichEd20arraySize = (sizeof(RichEd20_info) / sizeof(RichEd20_info[0]));
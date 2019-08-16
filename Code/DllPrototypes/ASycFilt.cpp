#include "../Pyrebox_libcalls.h"

libcall_info_t ASycFilt_info[] = {
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
};

int ASycFiltarraySize = (sizeof(ASycFilt_info) / sizeof(ASycFilt_info[0]));
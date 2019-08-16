#include "../Pyrebox_libcalls.h"

libcall_info_t sas_info[] = {
	{ "SendSAS",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "AsUser", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
};

int sasarraySize = (sizeof(sas_info) / sizeof(sas_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t AclUI_info[] = {
	{ "EditSecurity",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ISecurityInformation", 32, IN },
	}
	},
	{ "EditSecurityAdvanced",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ISecurityInformation", 32, IN },
		{2, "uSIPage", NKT_DBOBJCLASS_Enumeration, "_SI_PAGE_TYPE", 32, IN },
	}
	},
	{ "CreateSecurityPage",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "psi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ISecurityInformation", 32, IN },
	}
	},
};

int AclUIarraySize = (sizeof(AclUI_info) / sizeof(AclUI_info[0]));
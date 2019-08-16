#include "../Pyrebox_libcalls.h"

libcall_info_t Wldap32_info[] = {
	{ "ldap_searchA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "attrs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_searchW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "attrs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_err2stringA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "err", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_err2stringW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "err", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_create_sort_controlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SortKeys", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapsortkeyA", 96, IN },
		{2, "IsCritical", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_create_sort_controlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SortKeys", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapsortkeyW", 96, IN },
		{2, "IsCritical", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_unbind_s",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
	}
	},
	{ "ldap_create_vlv_controlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "VlvInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapvlvinfo", 256, IN },
		{2, "IsCritical", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_compare_ext_sA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Attr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_compare_ext_sW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Attr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_msgfree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_ufn2dnW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ufn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pDn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "ber_printf",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, INOUT },
		{1, "fmt", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_search_stW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "attrs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "l_timeval", 64, IN },
		{7, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ldap_set_option",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "option", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "invalue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ldap_sslinitA",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "secure", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LdapUnicodeToUTF8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpSrcStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpDestStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "cchDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_add_sA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
	}
	},
	{ "ldap_add_sW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
	}
	},
	{ "ber_first_element",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, IN },
		{1, "pLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "ppOpaque", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
	}
	},
	{ "ldap_controls_freeA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Controls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_controls_freeW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_close_extended_op",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_count_valuesA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vals", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "ber_flatten",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, IN },
		{1, "pBerVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
	}
	},
	{ "ldap_perror",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "msg", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_delete_ext_sA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{3, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_get_next_page",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SearchHandle", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "PageSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_initW",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_abandon",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "msgid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ldap_sslinitW",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "secure", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_compare_extW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Attr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{7, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_parse_sort_controlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{2, "Result", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Attribute", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
	}
	},
	{ "ldap_parse_sort_controlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{2, "Result", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Attribute", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "ber_skip_tag",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, IN },
		{1, "pLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_count_valuesW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vals", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "ldap_sasl_bind_sA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "AuthMechanism", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cred", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{4, "ServerCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{5, "ClientCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{6, "ServerData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
	}
	},
	{ "ldap_sasl_bind_sW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "AuthMechanism", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cred", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{4, "ServerCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{5, "ClientCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{6, "ServerData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
	}
	},
	{ "ldap_encode_sort_controlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SortKeys", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapsortkeyA", 96, IN },
		{2, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapcontrolA", 128, INOUT },
		{3, "Criticality", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "ldap_encode_sort_controlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SortKeys", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapsortkeyW", 96, IN },
		{2, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapcontrolW", 128, INOUT },
		{3, "Criticality", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "ldap_connect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "l_timeval", 64, IN },
	}
	},
	{ "ldap_parse_extended_resultA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Connection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ResultMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ResultOID", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{3, "ResultData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
		{4, "Freeit", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "ldap_parse_extended_resultW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Connection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ResultMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ResultOID", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{3, "ResultData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
		{4, "Freeit", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "ber_bvdup",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, INOUT },
		{0, "pBerVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
	}
	},
	{ "ldap_start_tls_sA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ServerReturnValue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "result", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_start_tls_sW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ServerReturnValue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "result", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_next_entry",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_check_filterA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SearchFilter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_check_filterW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SearchFilter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_addA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
	}
	},
	{ "ldap_control_freeA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Controls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_control_freeW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_openA",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_openW",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_compareA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "attr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_compareW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "attr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "LdapMapErrorToWin32",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "LdapError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_modify_ext_sA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_modify_ext_sW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ber_scanf",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, INOUT },
		{1, "fmt", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_get_dnA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_get_dnW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_search_stA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "attrs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "l_timeval", 64, IN },
		{7, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ber_init",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, INOUT },
		{0, "pBerVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
	}
	},
	{ "ldap_first_reference",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_modrdn2A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_modrdn2W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ber_peek_tag",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, IN },
		{1, "pLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_conn_from_msg",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "PrimaryConn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_count_references",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_delete_sA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_delete_sW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_deleteA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_deleteW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_bindA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cred", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "method", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_delete_ext_sW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{3, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_add_extA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{5, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_add_extW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{5, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_cleanup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_ufn2dnA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ufn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pDn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
	}
	},
	{ "ldap_explode_dnW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{0, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "notypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_get_optionW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "option", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "outvalue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "ber_bvecfree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pBerVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, IN },
	}
	},
	{ "ldap_parse_resultA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Connection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ResultMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ReturnCode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "MatchedDNs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{4, "ErrorMessage", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{5, "Referrals", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "ldapcontrolA", 128, INOUT },
		{7, "Freeit", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "ldap_parse_resultW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Connection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ResultMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ReturnCode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "MatchedDNs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{4, "ErrorMessage", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{5, "Referrals", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "ldapcontrolW", 128, INOUT },
		{7, "Freeit", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "ldap_count_values_len",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vals", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, IN },
	}
	},
	{ "ldap_get_option",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "option", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "outvalue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "ldap_set_optionW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "option", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "invalue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ldap_modify_sA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
	}
	},
	{ "ber_alloc_t",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, INOUT },
		{0, "options", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_startup",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "version", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap_version_info", 96, IN },
		{1, "Instance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ldap_create_page_controlA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "PageSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Cookie", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{3, "IsCritical", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_create_page_controlW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "PageSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Cookie", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{3, "IsCritical", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{4, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_get_valuesW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "attr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "LdapUTF8ToUnicode",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpSrcStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cchSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lpDestStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "cchDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_initA",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_parse_referenceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Connection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ResultMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "Referrals", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "ldap_parse_referenceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Connection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ResultMessage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "Referrals", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "ldap_simple_bind_sA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "passwd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_simple_bind_sW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "passwd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_modify_extA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{5, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_modify_extW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{5, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_count_entries",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_set_dbg_routine",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "DebugPrintRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ldap_unbind",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
	}
	},
	{ "ldap_extended_operation_sA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Oid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{5, "ReturnedOid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{6, "ReturnedData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
	}
	},
	{ "ldap_extended_operation_sW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Oid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{5, "ReturnedOid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{6, "ReturnedData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
	}
	},
	{ "ldap_search_ext_sA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "attrs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{7, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{8, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "l_timeval", 64, IN },
		{9, "SizeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ldap_search_ext_sW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "attrs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{7, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{8, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "l_timeval", 64, IN },
		{9, "SizeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ber_next_element",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, IN },
		{1, "pLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "opaque", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "LdapGetLastError",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ldap_result2error",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "freeit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_rename_extA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NewRDN", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "NewParent", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{7, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_rename_extW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NewRDN", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "NewParent", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{7, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_next_reference",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_extended_operationA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Oid", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{5, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_extended_operationW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Oid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{5, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_escape_filter_elementA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sourceFilterElement", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "sourceLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "destFilterElement", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "destLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_escape_filter_elementW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sourceFilterElement", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "sourceLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "destFilterElement", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "destLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_free_controlsA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Controls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_free_controlsW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Controls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_dn2ufnA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_get_values_lenA",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "attr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_get_values_lenW",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "attr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_modify_sW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
	}
	},
	{ "ldap_delete_extA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{3, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_bindW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cred", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "method", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_parse_page_controlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{2, "TotalCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Cookie", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
	}
	},
	{ "ldap_parse_page_controlW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{2, "TotalCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Cookie", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, INOUT },
	}
	},
	{ "ldap_compare_sA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "attr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_compare_sW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "attr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_add_ext_sA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_compare_extA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Attr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{7, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_modifyA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodA", 96, IN },
	}
	},
	{ "ldap_modifyW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "mods", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
	}
	},
	{ "ldap_explode_dnA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{0, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "notypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_search_abandon_page",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SearchBlock", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "ldap_value_free_len",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vals", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, IN },
	}
	},
	{ "ldap_delete_extW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{3, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_modrdn_sA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "ldap_modrdn_sW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "ldap_next_attributeA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ptr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, INOUT },
	}
	},
	{ "ldap_next_attributeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ptr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, INOUT },
	}
	},
	{ "ldap_simple_bindA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "passwd", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_result",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "msgid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "all", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "l_timeval", 64, IN },
		{4, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ldap_memfreeA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Block", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_memfreeW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Block", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_bind_sA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cred", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "method", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_bind_sW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cred", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "method", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_search_sA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "attrs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ldap_search_sW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "attrs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ldap_first_attributeA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ptr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berelement", 32, INOUT },
	}
	},
	{ "ldap_first_attributeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "ptr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berelement", 32, INOUT },
	}
	},
	{ "ldap_get_valuesA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "entry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
		{2, "attr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ldap_dn2ufnW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_value_freeW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vals", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "ldap_simple_bindW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "passwd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ldap_modrdnA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "ldap_modrdnW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "ldap_set_dbg_flags",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "NewFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ber_free",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pBerElement", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berelement", 32, IN },
		{1, "fbuf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_add_ext_sW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
		{3, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{4, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ber_bvfree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "bv", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
	}
	},
	{ "cldap_openA",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "cldap_openW",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, INOUT },
		{0, "HostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "PortNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_parse_vlv_controlA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{2, "TargetPos", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ListCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "Context", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, IN },
		{5, "ErrCode", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ldap_parse_vlv_controlW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{2, "TargetPos", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ListCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "Context", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "berval", 64, IN },
		{5, "ErrCode", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "ldap_value_freeA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "vals", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "ldap_sasl_bindA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "AuthMechanism", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cred", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{4, "ServerCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{5, "ClientCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{6, "MessageNumber", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_sasl_bindW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "AuthMechanism", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cred", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "berval", 64, IN },
		{4, "ServerCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{5, "ClientCtrls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{6, "MessageNumber", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_first_entry",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "res", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, IN },
	}
	},
	{ "ldap_search_init_pageA",11,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ScopeOfSearch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SearchFilter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "AttributeList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "AttributesOnly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{7, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{8, "PageTimeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "TotalSizeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "SortKeys", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapsortkeyA", 96, IN },
	}
	},
	{ "ldap_search_init_pageW",11,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ScopeOfSearch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SearchFilter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "AttributeList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "AttributesOnly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{7, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{8, "PageTimeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "TotalSizeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "SortKeys", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapsortkeyW", 96, IN },
	}
	},
	{ "ldap_stop_tls_s",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
	}
	},
	{ "ldap_addW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "attrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmodW", 96, IN },
	}
	},
	{ "ldap_get_paged_count",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SearchBlock", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "TotalCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Results", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ldap_modrdn2_sA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_modrdn2_sW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "DistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NewDistinguishedName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ldap_create_vlv_controlA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "VlvInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldapvlvinfo", 256, IN },
		{2, "IsCritical", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "Control", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_get_next_page_s",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ExternalHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "SearchHandle", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "timeout", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "l_timeval", 64, IN },
		{3, "PageSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "TotalCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "Results", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapmsg", 352, INOUT },
	}
	},
	{ "ldap_rename_ext_sA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "NewRDN", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "NewParent", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
	}
	},
	{ "ldap_rename_ext_sW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "dn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "NewRDN", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "NewParent", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "DeleteOldRdn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{6, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
	}
	},
	{ "ldap_search_extA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "attrs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{7, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolA", 128, IN },
		{8, "TimeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "SizeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ldap_search_extW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ld", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ldap", 1280, IN },
		{1, "base", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "scope", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "filter", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "attrs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "attrsonly", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ServerControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{7, "ClientControls", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ldapcontrolW", 128, IN },
		{8, "TimeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "SizeLimit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "MessageNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
};

int Wldap32arraySize = (sizeof(Wldap32_info) / sizeof(Wldap32_info[0]));
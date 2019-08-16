#include "../Pyrebox_libcalls.h"

libcall_info_t ntdll_info[] = {
	{ "strcat_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "sprintf",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "wcstombs",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Source", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlIpv4StringToAddressExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AddressString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Strict", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, IN },
		{3, "Port", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RtlIpv4StringToAddressExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AddressString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Strict", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, INOUT },
		{3, "Port", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "__isascii",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlIpv4AddressToStringExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, IN },
		{1, "Port", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "AddressString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "AddressStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtlCaptureContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ContextRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CONTEXT", 5728, INOUT },
	}
	},
	{ "iswdigit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "_ultoa_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtRaiseException",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExceptionRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXCEPTION_RECORD", 640, IN },
		{1, "ContextRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CONTEXT", 5728, IN },
		{2, "FirstChance", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "wcscmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "isprint",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "sscanf",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Src", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtNotifyChangeMultipleKeys",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MasterKeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubordinateObjects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{3, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{7, "CompletionFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "WatchTree", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{9, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{10, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "Asynchronous", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "wcsspn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Control", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "wcsstr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SubStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "isgraph",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_ultoa",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_ultow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wcstol",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_EndPtr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_strupr",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_String", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlEthernetAddressToStringW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "Addr", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "S", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "iswctype",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "_Type", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "_strnicmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlInitAnsiStringEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "target", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{1, "source", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "wcsncpy_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_memicmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Buf1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Buf2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtCreateDirectoryObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DirectoryHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
	}
	},
	{ "_wcsicmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "__iscsymf",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_strset_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_DstSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_strlwr",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_String", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "iswlower",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "strcat",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Source", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "strchr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "strcmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "strcpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Source", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "_ui64toa_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtWriteFile",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{5, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ByteOffset", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{8, "Key", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "isalnum",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wcstoul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_EndPtr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "swprintf_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "isupper",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "isspace",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtContinue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ContextRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CONTEXT", 5728, IN },
		{1, "TestAlert", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "isalpha",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlUnwind",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "TargetFrame", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "TargetIp", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ExceptionRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXCEPTION_RECORD", 640, IN },
		{3, "ReturnValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "wcsrchr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "NtRaiseHardError",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ErrorStatus", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "NumberOfParameters", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "UnicodeStringParameterMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Parameters", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ValidResponseOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Response", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NtOpenKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
	}
	},
	{ "qsort",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "_Base", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_NumOfElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_SizeOfElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
{ 0 },
	}
	},
	{ "_ltoa_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlFreeAnsiString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "AnsiString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
	}
	},
	{ "NtCreateFile",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{3, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{4, "AllocationSize", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{5, "FileAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ShareAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "CreateDisposition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "CreateOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "EaBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{10, "EaLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtReadFile",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{5, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ByteOffset", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{8, "Key", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtlConvertSidToUnicodeString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "UnicodeString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, INOUT },
		{1, "Sid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "AllocateDestinationString", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "strlen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlInitializeSListHead",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 64, IN },
	}
	},
	{ "NtDeviceIoControlFile",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, INOUT },
		{5, "IoControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "InputBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "InputBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "OutputBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{9, "OutputBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlIpv4AddressToStringA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, IN },
		{1, "S", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "RtlIpv4AddressToStringW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, IN },
		{1, "S", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "NtShutdownSystem",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Action", NKT_DBOBJCLASS_Enumeration, "_SHUTDOWN_ACTION", 32, IN },
	}
	},
	{ "strncat_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlAnsiStringToUnicodeString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, INOUT },
		{1, "SourceString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{2, "AllocateDestinationString", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "memmove_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_DstSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "isxdigit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtCreateKey",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{3, "TitleIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Class", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{5, "CreateOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Disposition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtlInitAnsiString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{1, "SourceString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlFreeOemString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "OemString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, INOUT },
	}
	},
	{ "_ultow_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtDeleteKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtOpenKeyEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{3, "OpenOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_snprintf_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "iscntrl",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "strspn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Control", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "strstr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SubStr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "strtol",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_EndPtr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "strcspn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Control", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtTerminateThread",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ExitStatus", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "atol",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlNtStatusToDosError",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_vsnprintf_s",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "_ArgList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtQueryMultipleValueKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ValueEntries", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_KEY_VALUE_ENTRY", 128, IN },
		{2, "EntryCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ValueBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "BufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "RequiredBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtlUniform",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Seed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "strtok_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Delim", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Context", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "_strcmpi",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlInterlockedFlushSList",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SINGLE_LIST_ENTRY", 32, INOUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 64, IN },
	}
	},
	{ "RtlCompareMemory",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Source1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Source2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_ui64tow_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtSetInformationKey",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "KeySetInformationClass", NKT_DBOBJCLASS_Enumeration, "_KEY_SET_INFORMATION_CLASS", 32, IN },
		{2, "KeySetInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "KeySetInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlRaiseException",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ExceptionRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXCEPTION_RECORD", 640, IN },
	}
	},
	{ "wcscpy_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_vsnwprintf",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "_Args", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlFreeUnicodeString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "UnicodeString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, INOUT },
	}
	},
	{ "LdrUnloadDll",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ModuleHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_strnset_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_swprintf",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "towlower",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "_ltow_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_ltoa",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_ltow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtSaveMergedKeys",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "HighPrecedenceKeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "LowPrecedenceKeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtSetInformationFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{2, "FileInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "FileInformationClass", NKT_DBOBJCLASS_Enumeration, "_FILE_INFORMATION_CLASS", 32, IN },
	}
	},
	{ "NtUnloadKeyEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TargetKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlSetEnvironmentVariable",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Environment", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{1, "VariableName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "VariableValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
	}
	},
	{ "memmove",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Src", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtSaveKeyEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Format", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_vscwprintf",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_ArgList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtSetSystemEnvironmentValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "VariableName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "Value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
	}
	},
	{ "RtlIpv4StringToAddressA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "S", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Strict", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Terminator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{3, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, INOUT },
	}
	},
	{ "RtlIpv4StringToAddressW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "S", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Strict", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Terminator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{3, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, INOUT },
	}
	},
	{ "LdrGetProcedureAddressEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DllHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ProcedureName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{2, "ProcedureNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ProcedureAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtUnloadKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TargetKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
	}
	},
	{ "wcsncat_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "strncmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "strncpy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Source", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "tolower",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "strncat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Source", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LdrLoadDll",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SearchPathW", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "LoadFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "Name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{3, "BaseAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RtlInitUnicodeStringEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "SourceString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_atoi64",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, INOUT },
		{0, "_String", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlEthernetAddressToStringA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "Addr", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "S", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlCaptureStackBackTrace",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "FramesToSkip", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FramesToCapture", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "BackTrace", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{3, "BackTraceHash", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtlIpv4AddressToStringExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in_addr", 32, IN },
		{1, "Port", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "AddressString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "AddressStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtlLocalTimeToSystemTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LocalTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{1, "SystemTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "mbstowcs",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Source", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LdrGetDllHandleEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DllPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "DllCharacteristics", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "DllName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{4, "DllHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "NtQueryDirectoryFile",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{5, "FileInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "FileInformationClass", NKT_DBOBJCLASS_Enumeration, "_FILE_INFORMATION_CLASS", 32, IN },
		{8, "ReturnSingleEntry", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{9, "FileName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{10, "RestartScan", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NtRenameKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "NewName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
	}
	},
	{ "strnlen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlExpandEnvironmentStrings_U",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Environment", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "SourceString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{3, "DestinationBufferLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NtDeleteValueKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ValueName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
	}
	},
	{ "iswspace",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "iswalpha",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "memset",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtQueryObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ObjectInformationClass", NKT_DBOBJCLASS_Enumeration, "_OBJECT_INFORMATION_CLASS", 32, IN },
		{2, "ObjectInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NtQuerySystemInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SystemInformationClass", NKT_DBOBJCLASS_Enumeration, "_SYSTEM_INFORMATION_CLASS", 32, IN },
		{1, "SystemInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "SystemInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "RtlUnicodeStringToAnsiString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, INOUT },
		{1, "SourceString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "AllocateDestinationString", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "_snprintf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "swscanf_s",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Src", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "NtOpenFile",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{3, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{4, "ShareAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "OpenOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtCompactKeys",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "KeyArray", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "_wcsnset_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Val", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtNotifyChangeDirectoryFile",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{5, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "CompletionFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "WatchTree", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "strpbrk",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Control", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtCreateThreadEx",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpStartAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "lpParameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "CreateSuspended", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "StackZeroBits", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "SizeOfStackCommit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "SizeOfStackReserve", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "lpBytesBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "NtInitializeRegistry",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BootCondition", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "strcpy_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtQueryInformationFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{2, "FileInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "FileInformationClass", NKT_DBOBJCLASS_Enumeration, "_FILE_INFORMATION_CLASS", 32, IN },
	}
	},
	{ "RtlQueryEnvironmentVariable_U",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Environment", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "VariableName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "VariableValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
	}
	},
	{ "vsprintf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Args", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtCompressKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Key", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtEnumerateValueKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "KeyValueInformationClass", NKT_DBOBJCLASS_Enumeration, "_KEY_VALUE_INFORMATION_CLASS", 32, IN },
		{3, "KeyValueInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ResultLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "_vsnwprintf_s",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "_ArgList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtLoadKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TargetKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{1, "SourceFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
	}
	},
	{ "NtWaitForSingleObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Alertable", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Timeout", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
	}
	},
	{ "NtQuerySystemTime",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SystemTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, INOUT },
	}
	},
	{ "RtlQueryDepthSList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 64, IN },
	}
	},
	{ "_itoa",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_itow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtQueryOpenSubKeys",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TargetKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{1, "HandleCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtlFirstEntrySList",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SINGLE_LIST_ENTRY", 32, INOUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 64, IN },
	}
	},
	{ "_vsnprintf",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "_Args", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "isdigit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_memccpy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Src", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_i64toa_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtQueryKey",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "KeyInformationClass", NKT_DBOBJCLASS_Enumeration, "_KEY_INFORMATION_CLASS", 32, IN },
		{2, "KeyInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ResultLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "_wtoi",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_wtol",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "wcscat_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_splitpath_s",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_FullPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Drive", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_DriveSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Dir", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "_DirSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "_Filename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "_FilenameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "_Ext", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "_ExtSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_stricmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "vsprintf_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "_ArgList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "wcscspn",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Control", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_itoa_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtSaveKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlIpv6AddressToStringA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, IN },
		{1, "S", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "RtlIpv6AddressToStringW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, IN },
		{1, "S", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "RtlEthernetStringToAddressA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "S", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Terminator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "Addr", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "RtlEthernetStringToAddressW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "S", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Terminator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "Addr", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "islower",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlPcToFileHeader",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "PcValue", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BaseOfImage", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "VerSetConditionMask",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "ConditionMask", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "TypeMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Condition", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "_splitpath",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "_FullPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Drive", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Dir", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "_Filename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "_Ext", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "NtLockProductActivationKeys",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPrivateVer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "pIsSafeMode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtlTimeToSecondsSince1970",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "Time", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{1, "ElapsedSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "NtSetValueKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ValueName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "TitleIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Data", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "DataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_wcsnicmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_snscanf_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Src", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlUnicodeStringToOemString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, INOUT },
		{1, "SourceString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "AllocateDestinationString", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "RtlCharToInteger",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "String", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Value", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "strrchr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Ch", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtDeleteFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
	}
	},
	{ "_wmakepath_s",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_PathResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SIZE", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Drive", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "_Dir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "_Filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "_Ext", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "memchr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "_Buf", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "memcmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Buf1", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Buf2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "memcpy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Src", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "_Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "memcpy_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_DstSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtLoadKey2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TargetKey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{1, "SourceFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtTerminateProcess",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ExitStatus", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "towupper",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "__toascii",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "__iscsym",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlIpv6StringToAddressExA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AddressString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, IN },
		{2, "ScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "Port", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RtlIpv6StringToAddressExW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AddressString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, INOUT },
		{2, "ScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Port", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "NtReplaceKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NewFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{1, "TargetHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OldFile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
	}
	},
	{ "RtlIpv6AddressToStringExA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, IN },
		{1, "ScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Port", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "AddressString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "AddressStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "RtlIpv6AddressToStringExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Address", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, IN },
		{1, "ScopeId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Port", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "AddressString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "AddressStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "sscanf_s",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Src", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ispunct",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlGetProductInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "OSMajorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "OSMinorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SpMajorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SpMinorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ReturnedProductType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "_snwscanf_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Src", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_vswprintf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Args", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "_wcsset_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Value", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "NtEnumerateKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "KeyInformationClass", NKT_DBOBJCLASS_Enumeration, "_KEY_INFORMATION_CLASS", 32, IN },
		{3, "KeyInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ResultLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "vswprintf_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "_ArgList", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "_i64tow_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "strncpy_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dst", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Src", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlUnicodeToMultiByteSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BytesInMultiByteString", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "UnicodeString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "BytesInUnicodeString", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlIsNameLegalDOS8Dot3",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, INOUT },
		{0, "Name", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "OemName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, INOUT },
		{2, "NameContainsSpaces", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "wcsncmp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Str2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wcsncpy",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Source", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RtlCreateUserThread",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "CreateSuspended", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "StackZeroBits", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "StackReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "StackCommit", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "StartAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "StartParameter", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "ClientID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLIENT_ID", 64, IN },
	}
	},
	{ "_wcstoui64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_EndPtr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_itow_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "atoi",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "bsearch",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "_Key", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "_Base", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "_NumOfElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_SizeOfElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
{ 0 },
	}
	},
	{ "toupper",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtQueryAttributesFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{1, "FileAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILE_BASIC_INFORMATION", 320, IN },
	}
	},
	{ "NtQueryInformationProcess",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProcessInformationClass", NKT_DBOBJCLASS_Enumeration, "_PROCESSINFOCLASS", 32, IN },
		{2, "ProcessInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "ProcessInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "NtCreateThread",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ObjectAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OBJECT_ATTRIBUTES", 192, IN },
		{3, "ProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClientId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CLIENT_ID", 64, IN },
		{5, "ThreadContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CONTEXT", 5728, IN },
		{6, "UserStack", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INITIAL_TEB", 160, IN },
		{7, "CreateSuspended", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "abs",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_i64toa",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "iswxdigit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_C", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "RtlRaiseStatus",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_ui64toa",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_ui64tow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtFlushKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LdrGetProcedureAddress",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ModuleHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FunctionName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, IN },
		{2, "Oridinal", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "FunctionAddress", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "_wcslwr",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_String", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RtlIpv6StringToAddressA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "S", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Terminator", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{2, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, INOUT },
	}
	},
	{ "RtlIpv6StringToAddressW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "S", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Terminator", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "Addr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "in6_addr", 128, INOUT },
	}
	},
	{ "NtRestoreKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wcsncat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Source", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wcschr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Ch", NKT_DBFUNDTYPE_WideChar, 0, 2, IN },
	}
	},
	{ "wcscpy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Source", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_snwprintf_s",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RtlInitString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRING", 64, INOUT },
		{1, "SourceString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "wcsnlen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Src", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_MaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "NtQueryValueKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ValueName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{2, "KeyValueInformationClass", NKT_DBOBJCLASS_Enumeration, "_KEY_VALUE_INFORMATION_CLASS", 32, IN },
		{3, "KeyValueInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Length", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ResultLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "NtLockRegistryKey",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_makepath_s",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_PathResult", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInWords", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Drive", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "_Dir", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "_Filename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "_Ext", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RtlInitUnicodeString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "DestinationString", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{1, "SourceString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "NtNotifyChangeKey",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Event", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ApcRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "ApcContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "IoStatusBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IO_STATUS_BLOCK", 64, IN },
		{5, "CompletionFilter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "WatchTree", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{7, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "Asynchronous", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "NtQueryInformationThread",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ThreadHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ThreadInformationClass", NKT_DBOBJCLASS_Enumeration, "_THREADINFOCLASS", 32, IN },
		{2, "ThreadInformation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{3, "ThreadInformationLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "_wtoi64",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RtlInterlockedPushEntrySList",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SINGLE_LIST_ENTRY", 32, INOUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 64, IN },
		{1, "ListEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SINGLE_LIST_ENTRY", 32, IN },
	}
	},
	{ "sprintf_s",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_DstBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_SizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "_wcsupr",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_String", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "strtoul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "_EndPtr", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wcslen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "NtDuplicateObject",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SourceProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SourceHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TargetProcessHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "TargetHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "DesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "HandleAttributes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wcspbrk",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Str", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Control", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "_snwprintf",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "_Format", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "wcscat",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Dest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Source", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RtlInterlockedPopEntrySList",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SINGLE_LIST_ENTRY", 32, INOUT },
		{0, "ListHead", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_SLIST_HEADER", 64, IN },
	}
	},
	{ "_wsplitpath_s",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_FullPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "_Drive", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_DriveSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "_Dir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "_DirSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "_Filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "_FilenameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "_Ext", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "_ExtSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "_i64tow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "_Val", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "_DstBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "_Radix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "labs",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_X", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LdrGetDllHandle",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwPath", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Unused", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ModuleFileName", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UNICODE_STRING", 64, IN },
		{3, "pHModule", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int ntdllarraySize = (sizeof(ntdll_info) / sizeof(ntdll_info[0]));
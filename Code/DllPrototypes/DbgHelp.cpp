#include "../Pyrebox_libcalls.h"

libcall_info_t DbgHelp_info[] = {
	{ "SymGetLineFromName",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwLineNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "plDisplacement", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE", 160, INOUT },
	}
	},
	{ "SymGetLinePrev",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE", 160, IN },
	}
	},
	{ "SymPrevW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "siw", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, IN },
	}
	},
	{ "FindFileInPath",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hprocess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "id", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "two", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "three", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "FilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SymEnumLines",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Obj", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "EnumLinesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSrvDeltaNameW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SymPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Type", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "File1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "File2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SymSetOptions",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "SymOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MapDebugInformation",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGE_DEBUG_INFORMATION", 1024, INOUT },
		{0, "FileHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "SymbolPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ImageBase", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymFromIndexW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, INOUT },
	}
	},
	{ "SymSrvGetFileIndexInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Info", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SYMSRV_INDEX_INFOW", 12864, INOUT },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MiniDumpWriteDump",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "DumpType", NKT_DBOBJCLASS_Enumeration, "_MINIDUMP_TYPE", 32, IN },
		{4, "ExceptionParam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MINIDUMP_EXCEPTION_INFORMATION", 96, IN },
		{5, "UserStreamParam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MINIDUMP_USER_STREAM_INFORMATION", 64, IN },
		{6, "CallbackParam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MINIDUMP_CALLBACK_INFORMATION", 64, IN },
	}
	},
	{ "SymGetModuleInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ModuleInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_MODULE", 4576, INOUT },
	}
	},
	{ "SearchTreeForFileW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RootPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "InputPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "OutputPathBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "SymFindExecutableImageW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ImageFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymRegisterFunctionEntryCallback64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CallbackFunction", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "FindDebugInfoFileExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SymbolPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "DebugFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSetScopeFromAddr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SymRegisterFunctionEntryCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CallbackFunction", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetLineFromNameW64",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModuleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "dwLineNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "plDisplacement", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINEW64", 192, INOUT },
	}
	},
	{ "SymEnumerateSymbols",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymMatchFileNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Match", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "FileNameStop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{3, "MatchStop", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "EnumDirTree",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RootPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "InputPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "OutputPathBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "cb", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "data", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetSourceFileFromToken",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Params", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "FilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumerateLoadedModulesW64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumLoadedModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSetSearchPathW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SymLoadModule64",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ImageName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "SizeOfDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSourceVarFromToken",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Params", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "VarName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymLoadModuleEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ImageName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "DllSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MODLOAD_DATA", 160, IN },
		{7, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindFileInSearchPath",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hprocess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "one", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "two", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "three", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "FilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SymEnumSourceFileTokens",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "SymGetModuleBase",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSourceFileW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Params", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "FileSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "FilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ImageRvaToVa",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "NtHeaders", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGE_NT_HEADERS", 1984, IN },
		{1, "Base", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Rva", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "LastRvaSection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_IMAGE_SECTION_HEADER", 320, IN },
	}
	},
	{ "SymNext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "si", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, IN },
	}
	},
	{ "SymSearchW",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SymTag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Mask", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTimestampForLoadedLibrary",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Module", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymFromAddr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Displacement", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, INOUT },
	}
	},
	{ "SymGetSymbolFile",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SymPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ImageFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "SymbolFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "cSymbolFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "DbgFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{7, "cDbgFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSourceFileFromTokenW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Params", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "FilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MiniDumpReadDumpStream",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BaseOfDump", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "StreamNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Dir", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MINIDUMP_DIRECTORY", 96, INOUT },
		{3, "StreamPointer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{4, "StreamSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SymFromToken",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, INOUT },
	}
	},
	{ "SymGetSymFromName64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL64", 256, INOUT },
	}
	},
	{ "SymUnloadModule64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SymFromTokenW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, INOUT },
	}
	},
	{ "SymRegisterCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CallbackFunction", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "MakeSureDirectoryPathExists",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DirPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "EnumDirTreeW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RootPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "InputPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "OutputPathBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "cb", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "data", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymEnumTypesByNameW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "mask", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymAddSourceStream",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "StreamFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymSrvIsStoreW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SymMatchFileName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Match", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FileNameStop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{3, "MatchStop", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
	}
	},
	{ "SymLoadModuleExW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ImageName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ModuleName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{5, "DllSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Data", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MODLOAD_DATA", 160, IN },
		{7, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymFindDebugInfoFile",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "DebugFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetSymNext64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL64", 256, INOUT },
	}
	},
	{ "SymGetSymbolFileW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SymPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ImageFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "SymbolFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "cSymbolFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "DbgFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{7, "cDbgFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindExecutableImageEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SymbolPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ImageFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetSourceVarFromTokenW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Params", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "VarName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{5, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymEnumerateSymbols64",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetHomeDirectoryW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSymPrev",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL", 192, INOUT },
	}
	},
	{ "ImageDirectoryEntryToDataEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Base", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MappedAsImage", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "DirectoryEntry", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "FoundHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_IMAGE_SECTION_HEADER", 320, INOUT },
	}
	},
	{ "SymEnumSourceFilesW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModBase", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Mask", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cbSrcFiles", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DbgHelpCreateUserDumpW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetModuleBase64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "qwAddr", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SymGetModuleInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ModuleInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_MODULEW", 8928, IN },
	}
	},
	{ "SymRegisterCallbackW64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CallbackFunction", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "UnDecorateSymbolName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "outputString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "maxStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSymFromName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL", 192, INOUT },
	}
	},
	{ "SymGetLineFromAddrW64",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwAddr", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "pdwDisplacement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINEW64", 192, INOUT },
	}
	},
	{ "SymGetSymFromAddr64",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "qwAddr", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "pdwDisplacement", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL64", 256, INOUT },
	}
	},
	{ "ImageNtHeader",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGE_NT_HEADERS", 1984, INOUT },
		{0, "Base", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetOmaps",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "OmapTo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_OMAP", 64, INOUT },
		{3, "cOmapTo", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{4, "OmapFrom", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_OMAP", 64, INOUT },
		{5, "cOmapFrom", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "SymGetLineFromAddr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwDisplacement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE", 160, INOUT },
	}
	},
	{ "SymSetContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "StackFrame", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_STACK_FRAME", 1024, IN },
		{2, "Context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymEnumTypes",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetModuleInfoW64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "qwAddr", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "ModuleInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_MODULEW64", 26112, INOUT },
	}
	},
	{ "SymPrev",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "si", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, IN },
	}
	},
	{ "SymGetLineNext64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE64", 192, INOUT },
	}
	},
	{ "SymSrvIsStore",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "path", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SymAddSymbolW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSymNext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL", 192, INOUT },
	}
	},
	{ "SymEnumSourceLinesW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Obj", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Line", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "EnumLinesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSetSearchPath",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SymEnumerateModules",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymLoadModule",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ImageName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "SizeOfDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymInitialize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UserSearchPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "fInvadeProcess", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSymPrev64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL64", 256, INOUT },
	}
	},
	{ "SymDeleteSymbolW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymEnumerateModulesW64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetFileLineOffsets64",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{4, "BufferLines", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetLineFromAddr64",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "qwAddr", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "pdwDisplacement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Line64", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE64", 192, IN },
	}
	},
	{ "SymGetLineNextW64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINEW64", 192, INOUT },
	}
	},
	{ "ImageRvaToSection",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGE_SECTION_HEADER", 320, INOUT },
		{0, "NtHeaders", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGE_NT_HEADERS", 1984, IN },
		{1, "Base", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Rva", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "EnumerateLoadedModulesExW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumLoadedModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSrvGetSupplement",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SymPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Node", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SymGetSymFromAddr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwAddr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdwDisplacement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL", 192, INOUT },
	}
	},
	{ "EnumerateLoadedModules64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumLoadedModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "EnumerateLoadedModulesEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumLoadedModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymRegisterCallback64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "CallbackFunction", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SymGetLinePrev64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE64", 192, INOUT },
	}
	},
	{ "SymGetSourceFile",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Params", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "FileSpec", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "FilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetScope",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, INOUT },
	}
	},
	{ "SymEnumSymbolsForAddr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSearch",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "SymTag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Mask", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{6, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymEnumSourceLines",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Obj", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Line", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "EnumLinesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetLineNext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE", 160, INOUT },
	}
	},
	{ "FindDebugInfoFileEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SymbolPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "DebugFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ImageDirectoryEntryToData",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "Base", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MappedAsImage", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "DirectoryEntry", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SymAddSymbol",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymFromNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, INOUT },
	}
	},
	{ "SymFindFileInPath",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hprocess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "id", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "two", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "three", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "FoundFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSrvGetFileIndexes",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Id", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
		{2, "Val1", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Val2", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindExecutableImageExW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SymbolPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ImageFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSrvStoreSupplementW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SymPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Node", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymSetHomeDirectory",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dir", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SymGetTypeInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModBase", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "TypeId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "GetType", NKT_DBOBJCLASS_Enumeration, "_IMAGEHLP_SYMBOL_TYPE_INFO", 32, IN },
		{4, "pInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "SymSrvGetSupplementW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SymPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Node", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SymGetHomeDirectory",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "type", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dir", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymEnumTypesW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymFromName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, INOUT },
	}
	},
	{ "ImagehlpApiVersionEx",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "API_VERSION", 64, INOUT },
		{0, "AppVersion", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "API_VERSION", 64, IN },
	}
	},
	{ "SymEnumTypesByName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "mask", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymCleanup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymEnumSymbolsForAddrW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymEnumerateSymbolsW64",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ImagehlpApiVersion",0,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "API_VERSION", 64, INOUT },
	}
	},
	{ "StackWalk64",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MachineType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "StackFrame", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagSTACKFRAME64", 2112, INOUT },
		{4, "ContextRecord", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "ReadMemoryRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "FunctionTableAccessRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "GetModuleBaseRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "TranslateAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "SymGetTypeFromNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, INOUT },
	}
	},
	{ "DbgHelpCreateUserDump",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymUnDName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sym", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL", 192, IN },
		{1, "UnDecName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "UnDecNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetScopeW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, INOUT },
	}
	},
	{ "SymGetSearchPath",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "SearchPathLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymUnloadModule",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymFindExecutableImage",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ImageFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "FindExecutableImage",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SymbolPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ImageFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "SymEnumSymbolsW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Mask", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetTypeFromName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, INOUT },
	}
	},
	{ "SymEnumLinesW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Obj", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "EnumLinesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSrvStoreFileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SrvPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymEnumSymbols",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Mask", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetLineFromName64",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwLineNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "plDisplacement", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINE64", 192, INOUT },
	}
	},
	{ "SymFunctionTableAccess64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "AddrBase", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "SymEnumerateModules64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymRefreshModuleList",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetModuleInfo64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "qwAddr", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "ModuleInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_MODULE64", 13440, INOUT },
	}
	},
	{ "SymGetTypeInfoEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModBase", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Params", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_GET_TYPE_INFO_PARAMS", 704, INOUT },
	}
	},
	{ "SymEnumerateSymbolsW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymSrvGetFileIndexStringW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SrvPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Index", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetLinePrevW64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Line", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_LINEW64", 192, INOUT },
	}
	},
	{ "SymFromIndex",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFO", 704, INOUT },
	}
	},
	{ "StackWalk",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "MachineType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "StackFrame", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagSTACKFRAME", 1312, INOUT },
		{4, "ContextRecord", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "ReadMemoryRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "FunctionTableAccessRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "GetModuleBaseRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "TranslateAddress", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "SymFunctionTableAccess",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "AddrBase", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymSrvStoreSupplement",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SrvPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Node", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SearchTreeForFile",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RootPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "InputPathName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "OutputPathBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "SymNextW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "siw", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, IN },
	}
	},
	{ "SymEnumProcesses",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EnumProcessesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymUnDName64",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sym", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGEHLP_SYMBOL64", 256, IN },
		{1, "UnDecName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{2, "UnDecNameLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymFindDebugInfoFileW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "DebugFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "Callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CallerData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "EnumerateLoadedModules",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnumLoadedModulesCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymFindFileInPathW",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hprocess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "FileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "id", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "two", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "three", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "FoundFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "context", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "UnDecorateSymbolNameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "outputString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "maxStringLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymSetHomeDirectoryW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SymSrvGetFileIndexesW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "File", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Id", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
		{2, "Val1", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "Val2", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymSrvGetFileIndexString",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SrvPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Index", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymFromAddrW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Displacement", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{3, "Symbol", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYMBOL_INFOW", 704, INOUT },
	}
	},
	{ "SymGetUnwindInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SymGetSourceFileTokenW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "FileSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SymSetParentWindow",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymSrvDeltaName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SymPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Type", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "File1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "File2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SymSetScopeFromIndex",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Index", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymInitializeW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UserSearchPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fInvadeProcess", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymDeleteSymbol",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Name", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Address", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{4, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymEnumSym",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BaseOfDll", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "EnumSymbolsCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymMatchStringA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "expression", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "fCase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymMatchStringW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "string", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "expression", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "fCase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetSourceFileToken",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "FileSpec", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Token", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "SymMatchString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "string", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "expression", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "fCase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "FindDebugInfoFile",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "FileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SymbolPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "DebugFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "SymEnumSourceFiles",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ModBase", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "Mask", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbSrcFiles", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "UserContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SymGetSearchPathW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SearchPathW", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "SearchPathLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnmapDebugInformation",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "DebugInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_IMAGE_DEBUG_INFORMATION", 1024, IN },
	}
	},
	{ "SymAddSourceStreamA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "StreamFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymAddSourceStreamW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Base", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{2, "FileSpec", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Buffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "Size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymSrvGetFileIndexInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Info", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "SYMSRV_INDEX_INFO", 6624, INOUT },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SymGetOptions",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SymSrvStoreFile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SrvPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "File", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int DbgHelparraySize = (sizeof(DbgHelp_info) / sizeof(DbgHelp_info[0]));
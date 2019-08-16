#include "../Pyrebox_libcalls.h"

libcall_info_t Mscms_info[] = {
	{ "DisassociateColorProfileFromDeviceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetCMMInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hColorTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsEnumColorProfilesSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pEnumRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMTYPEW", 704, IN },
		{2, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WcsAssociateColorProfileWithDevice",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DisassociateColorProfileFromDeviceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetCountColorProfileElements",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pnElementCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetColorProfileElementSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tagType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbElement", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsEnumColorProfiles",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pEnumRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMTYPEW", 704, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{3, "dwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pnProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UninstallColorProfileA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "bDelete", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UninstallColorProfileW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "bDelete", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsGetDefaultColorProfileSize",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cptColorProfileType", NKT_DBOBJCLASS_Enumeration, "COLORPROFILETYPE", 32, IN },
		{3, "cpstColorProfileSubType", NKT_DBOBJCLASS_Enumeration, "COLORPROFILESUBTYPE", 32, IN },
		{4, "dwProfileID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcbProfileName", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetNamedProfileInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pNamedProfileInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagNAMED_PROFILE_INFO", 608, IN },
	}
	},
	{ "GetPS2ColorRenderingIntent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcbPS2ColorRenderingIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OpenColorProfileA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwShareMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwCreationMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenColorProfileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{1, "dwDesiredAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwShareMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwCreationMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetColorProfileElementReference",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "newTag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "refTag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsSetUsePerUserProfiles",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwDeviceClass", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "usePerUserProfiles", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsColorProfileTagPresent",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbPresent", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EnumColorProfilesA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pEnumRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMTYPEA", 704, IN },
		{2, "pEnumerationBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pdwSizeOfEnumerationBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pnProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "EnumColorProfilesW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pEnumRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagENUMTYPEW", 704, IN },
		{2, "pEnumerationBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pdwSizeOfEnumerationBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pnProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetStandardColorSpaceProfileA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwProfileID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pProfilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetStandardColorSpaceProfileW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwProfileID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetPS2ColorRenderingDictionary",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pPS2ColorRenderingDictionary", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcbPS2ColorRenderingDictionary", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pbBinary", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AssociateColorProfileWithDeviceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pDeviceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "AssociateColorProfileWithDeviceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ConvertIndexToColorName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "paColorName", NKT_DBOBJCLASS_Array | NKT_DBOBJCLASS_Pointer, 0, 256, IN },
		{3, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DeleteColorTransform",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hxform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CheckColors",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paInputColors", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCOLOR", 64, IN },
		{2, "nColors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ctInput", NKT_DBOBJCLASS_Enumeration, "COLORTYPE", 32, IN },
		{4, "paResult", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GetColorProfileElement",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbElement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pElement", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "pbReference", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetStandardColorSpaceProfileA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "dwSCS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetStandardColorSpaceProfileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwSCS", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pcbSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetColorProfileElementTag",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pTag", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SelectCMM",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwCMMType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateProfileFromLogColorSpaceA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pLogColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, IN },
		{1, "pProfile", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "CreateProfileFromLogColorSpaceW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pLogColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, IN },
		{1, "pProfile", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "WcsSetDefaultRenderingIntent",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "dwRenderingIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsSetCalibrationManagementState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIsEnabled", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "IsColorProfileValid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbValid", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetColorProfileHeader",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILEHEADER", 1024, IN },
	}
	},
	{ "SetColorProfileElement",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbElement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pElement", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetColorDirectoryW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pBuffer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CloseColorProfile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetColorDirectoryA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pdwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "InstallColorProfileW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WcsGetUsePerUserProfiles",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwDeviceClass", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pUsePerUserProfiles", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WcsCreateIccProfile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hWcsProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnregisterCMMA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cmmID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UnregisterCMMW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cmmID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsGetCalibrationManagementState",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbIsEnabled", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CheckBitmapBits",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSrcBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bmInput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{3, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwStride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "paResult", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "pfnCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "lpCallbackData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsGetDefaultColorProfile",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cptColorProfileType", NKT_DBOBJCLASS_Enumeration, "COLORPROFILETYPE", 32, IN },
		{3, "cpstColorProfileSubType", NKT_DBOBJCLASS_Enumeration, "COLORPROFILESUBTYPE", 32, IN },
		{4, "dwProfileID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "cbProfileName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DllGetClassObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "InstallColorProfileA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "WcsCheckColors",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nColors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nInputChannels", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cdtInput", NKT_DBOBJCLASS_Enumeration, "COLORDATATYPE", 32, IN },
		{4, "cbInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pInputData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "paResult", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "CreateColorTransformA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pLogColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEA", 2624, IN },
		{1, "hDestProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hTargetProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateColorTransformW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pLogColorSpace", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGCOLORSPACEW", 4704, IN },
		{1, "hDestProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hTargetProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateMultiProfileTransform",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pahProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "nProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "padwIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "nIntents", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "indexPreferredCMM", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CreateDeviceLinkProfile",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "nProfiles", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "padwIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "nIntents", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pProfileData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{6, "indexPreferredCMM", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsOpenColorProfileA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pCDMPProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{1, "pCAMPProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{2, "pGMMPProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{3, "dwDesireAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwShareMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwCreationMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsOpenColorProfileW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pCDMPProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{1, "pCAMPProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{2, "pGMMPProfile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILE", 96, IN },
		{3, "dwDesireAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwShareMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwCreationMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WcsTranslateColors",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "nColors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "nInputChannels", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "cdtInput", NKT_DBOBJCLASS_Enumeration, "COLORDATATYPE", 32, IN },
		{4, "cbInput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pInputData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "nOutputChannels", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "cdtOutput", NKT_DBOBJCLASS_Enumeration, "COLORDATATYPE", 32, IN },
		{8, "cbOutput", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "pOutputData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "WcsSetDefaultColorProfile",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cptColorProfileType", NKT_DBOBJCLASS_Enumeration, "COLORPROFILETYPE", 32, IN },
		{3, "cpstColorProfileSubType", NKT_DBOBJCLASS_Enumeration, "COLORPROFILESUBTYPE", 32, IN },
		{4, "dwProfileID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetPS2ColorSpaceArray",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCSAType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pPS2ColorSpaceArray", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pcbPS2ColorSpaceArray", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "pbBinary", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetColorProfileFromHandle",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pProfile", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pcbProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "TranslateColors",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paInputColors", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCOLOR", 64, IN },
		{2, "nColors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ctInput", NKT_DBOBJCLASS_Enumeration, "COLORTYPE", 32, IN },
		{4, "paOutputColors", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCOLOR", 64, IN },
		{5, "ctOutput", NKT_DBOBJCLASS_Enumeration, "COLORTYPE", 32, IN },
	}
	},
	{ "WcsGetDefaultRenderingIntent",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pdwRenderingIntent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TranslateBitmapBits",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hColorTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pSrcBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bmInput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{3, "dwWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwInputStride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pDestBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "bmOutput", NKT_DBOBJCLASS_Enumeration, "BMFORMAT", 32, IN },
		{8, "dwOutputStride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "pfnCallBack", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{10, "ulCallbackData", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterCMMW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cmmID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pCMMdll", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "WcsDisassociateColorProfileFromDevice",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "scope", NKT_DBOBJCLASS_Enumeration, "WCS_PROFILE_MANAGEMENT_SCOPE", 32, IN },
		{1, "pProfileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pDeviceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ConvertColorNameToIndex",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "paColorName", NKT_DBOBJCLASS_Array | NKT_DBOBJCLASS_Pointer, 0, 256, IN },
		{2, "paIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RegisterCMMA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMachineName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cmmID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pCMMdll", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SetColorProfileHeader",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProfile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROFILEHEADER", 1024, IN },
	}
	},
};

int MscmsarraySize = (sizeof(Mscms_info) / sizeof(Mscms_info[0]));
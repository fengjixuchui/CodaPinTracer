#include "../Pyrebox_libcalls.h"

libcall_info_t UIAutomationCore_info[] = {
	{ "RangeValuePattern_SetValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "val", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "UiaFind",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaFindParams", 128, IN },
		{2, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCacheRequest", 224, IN },
		{3, "ppRequestedData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
		{4, "ppOffsets", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
		{5, "ppTreeStructures", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
	}
	},
	{ "UiaTextRangeRelease",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaHPatternObjectFromVariant",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "phobj", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "LegacyIAccessiblePattern_DoDefaultAction",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaRemoveEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextRange_GetEnclosingElement",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SynchronizedInputPattern_StartListening",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "inputType", NKT_DBOBJCLASS_Enumeration, "SynchronizedInputType", 32, IN },
	}
	},
	{ "ScrollPattern_Scroll",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "horizontalAmount", NKT_DBOBJCLASS_Enumeration, "ScrollAmount", 32, IN },
		{2, "verticalAmount", NKT_DBOBJCLASS_Enumeration, "ScrollAmount", 32, IN },
	}
	},
	{ "TransformPattern_Resize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "width", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{2, "height", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "TextPattern_GetSelection",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
	}
	},
	{ "UiaReturnRawElementProvider",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "el", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRawElementProviderSimple", 32, INOUT },
	}
	},
	{ "UiaHUiaNodeFromVariant",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "phnode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TextRange_ScrollIntoView",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "alignToTop", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WindowPattern_WaitForInputIdle",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "milliseconds", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pResult", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaRegisterProviderCallback",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pCallback", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "LegacyIAccessiblePattern_Select",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "flagsSelect", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VirtualizedItemPattern_Realize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ItemContainerPattern_FindItemByProperty",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hnodeStartAfter", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "propertyId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "value", NKT_DBOBJCLASS_Struct, "tagVARIANT", 128, IN },
		{4, "pFound", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TextRange_MoveEndpointByRange",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "endpoint", NKT_DBOBJCLASS_Enumeration, "TextPatternRangeEndpoint", 32, IN },
		{2, "targetRange", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "targetEndpoint", NKT_DBOBJCLASS_Enumeration, "TextPatternRangeEndpoint", 32, IN },
	}
	},
	{ "UiaHasServerSideProvider",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaSetFocus",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaNodeFromHandle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phnode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ValuePattern_SetValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pVal", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "UiaGetPatternProvider",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "patternId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "phobj", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaPatternRelease",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaEventAddWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaClientsAreListening",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SelectionItemPattern_Select",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextRange_CompareEndpoints",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "endpoint", NKT_DBOBJCLASS_Enumeration, "TextPatternRangeEndpoint", 32, IN },
		{2, "targetRange", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "targetEndpoint", NKT_DBOBJCLASS_Enumeration, "TextPatternRangeEndpoint", 32, IN },
		{4, "pRetVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaGetPropertyValue",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "propertyId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "UiaNodeFromPoint",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "x", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "y", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{2, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCacheRequest", 224, IN },
		{3, "ppRequestedData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
		{4, "ppTreeStructure", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "TextRange_ExpandToEnclosingUnit",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "unit", NKT_DBOBJCLASS_Enumeration, "TextUnit", 32, IN },
	}
	},
	{ "TextRange_FindText",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "text", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "backward", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "ignoreCase", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRetVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TransformPattern_Move",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{2, "y", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "UiaAddEvent",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "eventId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pCallback", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "scope", NKT_DBOBJCLASS_Enumeration, "TreeScope", 32, IN },
		{4, "pProperties", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "cProperties", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCacheRequest", 224, IN },
		{7, "phEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaRaiseStructureChangedEvent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRawElementProviderSimple", 32, IN },
		{1, "structureChangeType", NKT_DBOBJCLASS_Enumeration, "StructureChangeType", 32, IN },
		{2, "pRuntimeId", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "cRuntimeIdLen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WindowPattern_SetWindowVisualState",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "state", NKT_DBOBJCLASS_Enumeration, "WindowVisualState", 32, IN },
	}
	},
	{ "UiaGetUpdatedCache",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCacheRequest", 224, IN },
		{2, "normalizeState", NKT_DBOBJCLASS_Enumeration, "NormalizeState", 32, IN },
		{3, "pNormalizeCondition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCondition", 32, IN },
		{4, "ppRequestedData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
		{5, "ppTreeStructure", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "TextRange_GetChildren",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
	}
	},
	{ "SelectionItemPattern_AddToSelection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GridPattern_GetItem",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "row", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "column", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pResult", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TextRange_Clone",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaHTextRangeFromVariant",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "phtextrange", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaNavigate",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "direction", NKT_DBOBJCLASS_Enumeration, "NavigateDirection", 32, IN },
		{2, "pCondition", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCondition", 32, IN },
		{3, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCacheRequest", 224, IN },
		{4, "ppRequestedData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
		{5, "ppTreeStructure", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "TextPattern_get_SupportedTextSelection",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "SupportedTextSelection", 32, INOUT },
	}
	},
	{ "UiaHostProviderFromHwnd",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRawElementProviderSimple", 32, IN },
	}
	},
	{ "TextRange_Move",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "unit", NKT_DBOBJCLASS_Enumeration, "TextUnit", 32, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pRetVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ScrollItemPattern_ScrollIntoView",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaRaiseAutomationPropertyChangedEvent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRawElementProviderSimple", 32, IN },
		{1, "id", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "oldValue", NKT_DBOBJCLASS_Struct, "tagVARIANT", 128, IN },
		{3, "newValue", NKT_DBOBJCLASS_Struct, "tagVARIANT", 128, IN },
	}
	},
	{ "SelectionItemPattern_RemoveFromSelection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaRaiseAutomationEvent",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRawElementProviderSimple", 32, IN },
		{1, "id", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LegacyIAccessiblePattern_SetValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szValue", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ExpandCollapsePattern_Expand",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextPattern_get_DocumentRange",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaGetErrorDescription",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDescription", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
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
	{ "TextPattern_RangeFromPoint",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "point", NKT_DBOBJCLASS_Struct, "UiaPoint", 128, IN },
		{2, "pRetVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaNodeFromProvider",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRawElementProviderSimple", 32, IN },
		{1, "phnode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MultipleViewPattern_SetCurrentView",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "viewId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "LegacyIAccessiblePattern_GetIAccessible",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pAccessible", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IAccessible", 32, INOUT },
	}
	},
	{ "TextPattern_RangeFromChild",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hnodeChild", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pRetVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "UiaGetRuntimeId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pruntimeId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
	}
	},
	{ "UiaGetReservedNotSupportedValue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkNotSupportedValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, INOUT },
	}
	},
	{ "TextPattern_GetVisibleRanges",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
	}
	},
	{ "ScrollPattern_SetScrollPercent",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "horizontalPercent", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{2, "verticalPercent", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "InvokePattern_Invoke",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaRaiseAsyncContentLoadedEvent",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pProvider", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRawElementProviderSimple", 32, IN },
		{1, "asyncContentLoadedState", NKT_DBOBJCLASS_Enumeration, "AsyncContentLoadedState", 32, IN },
		{2, "percentComplete", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "UiaGetReservedMixedAttributeValue",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkMixedAttributeValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, INOUT },
	}
	},
	{ "DockPattern_SetDockPosition",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dockPosition", NKT_DBOBJCLASS_Enumeration, "DockPosition", 32, IN },
	}
	},
	{ "UiaGetRootNode",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phnode", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TextRange_RemoveFromSelection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "UiaLookupId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "type", NKT_DBOBJCLASS_Enumeration, "AutomationIdentifierType", 32, IN },
		{1, "pGuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "TextRange_Compare",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "range", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pRetVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TogglePattern_Toggle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextRange_GetBoundingRectangles",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRetVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
	}
	},
	{ "TextRange_AddToSelection",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextRange_FindAttribute",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "attributeId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "val", NKT_DBOBJCLASS_Struct, "tagVARIANT", 128, IN },
		{3, "backward", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRetVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TransformPattern_Rotate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "degrees", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "UiaEventRemoveWindow",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "MultipleViewPattern_GetViewName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "viewId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "ppStr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "SynchronizedInputPattern_Cancel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextRange_MoveEndpointByUnit",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "endpoint", NKT_DBOBJCLASS_Enumeration, "TextPatternRangeEndpoint", 32, IN },
		{2, "unit", NKT_DBOBJCLASS_Enumeration, "TextUnit", 32, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pRetVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "UiaNodeFromFocus",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UiaCacheRequest", 224, IN },
		{1, "ppRequestedData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, INOUT },
		{2, "ppTreeStructure", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "TextRange_Select",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ExpandCollapsePattern_Collapse",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WindowPattern_Close",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextRange_GetText",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "maxLength", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pRetVal", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "UiaNodeRelease",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hnode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TextRange_GetAttributeValue",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "attributeId", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pRetVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
};

int UIAutomationCorearraySize = (sizeof(UIAutomationCore_info) / sizeof(UIAutomationCore_info[0]));
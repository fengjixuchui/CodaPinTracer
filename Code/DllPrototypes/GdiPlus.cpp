#include "../Pyrebox_libcalls.h"

libcall_info_t GdiPlus_info[] = {
	{ "GdiplusShutdown",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdiplusStartup",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "token", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "input", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GdiplusStartupInput", 128, IN },
		{2, "output", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GdiplusStartupOutput", 64, IN },
	}
	},
	{ "GdipGetPenCustomStartCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpCustomLineCap", 8, IN },
	}
	},
	{ "GdipSaveAddImage",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "newImage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "encoderParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EncoderParameters", 256, IN },
	}
	},
	{ "GdipIsOutlineVisiblePathPoint",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{4, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{5, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateLineBrushFromRectI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{1, "color1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "color2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "mode", NKT_DBOBJCLASS_Enumeration, "LinearGradientMode", 32, IN },
		{4, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{5, "lineGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpLineGradient", 8, IN },
	}
	},
	{ "GdipIsVisiblePoint",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetCellAscent",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "CellAscent", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GdipDeleteCustomLineCap",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
	}
	},
	{ "GdipMultiplyPenTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipSetTextureWrapMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
	}
	},
	{ "GdipCreateMatrix",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetLineRect",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
	}
	},
	{ "GdipScalePenTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "sx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "sy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipTranslatePathGradientTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipCreateRegion",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipDrawPieI",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetImageAttributesAdjustedPalette",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "colorPalette", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ColorPalette", 96, IN },
		{2, "colorAdjustType", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
	}
	},
	{ "GdipCreateTextureIA",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "texture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpTexture", 8, IN },
	}
	},
	{ "GdipGetPathGradientBlendCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipFillPie",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetFontHeight",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "height", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetMatrixElements",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "matrixOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientPath",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipDrawPolygon",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetStringFormatTrimming",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "trimming", NKT_DBOBJCLASS_Enumeration, "StringTrimming", 32, IN },
	}
	},
	{ "GdipSetPenColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "argb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSaveGraphics",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "state", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDeletePen",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
	}
	},
	{ "GdipCreateRegionRect",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{1, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipCreatePathIter",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPathIterator", 8, IN },
		{1, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipRecordMetafileI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "referenceHdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "EmfType", 32, IN },
		{2, "frameRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{3, "frameUnit", NKT_DBOBJCLASS_Enumeration, "MetafileFrameUnit", 32, IN },
		{4, "description", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipPrivateAddFontFile",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontCollection", 8, IN },
		{1, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GdipDrawEllipse",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetGenericFontFamilySerif",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "nativeFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontFamily", 8, IN },
	}
	},
	{ "GdipSetCustomLineCapStrokeJoin",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "lineJoin", NKT_DBOBJCLASS_Enumeration, "LineJoin", 32, IN },
	}
	},
	{ "GdipGetCustomLineCapStrokeCaps",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "startCap", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "LineCap", 32, IN },
		{2, "endCap", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "LineCap", 32, IN },
	}
	},
	{ "GdipIsVisibleRectI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCloneRegion",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "cloneRegion", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipAddPathClosedCurve",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientCenterPoint",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
	}
	},
	{ "GdipGetImageDimension",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "width", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "height", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetStringFormatMeasurableCharacterRanges",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "rangeCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "ranges", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "CharacterRange", 64, IN },
	}
	},
	{ "GdipCreateFromHWND",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipSetLineSigmaBlend",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "focus", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "scale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetPropertyCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "numOfProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetStringFormatDigitSubstitution",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "language", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "substitute", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "StringDigitSubstitute", 32, IN },
	}
	},
	{ "GdipGetPathWorldBoundsI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "bounds", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{2, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{3, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
	}
	},
	{ "GdipDrawImagePointsRect",12,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "srcx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "srcy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "srcwidth", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "srcheight", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{8, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{9, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{10, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{11, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdipEmfToWmfBits",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hemf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "cbData16", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pData16", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "iMapMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "eFlags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipAddPathBezier",9,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "x2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "y2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "x3", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "y3", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "x4", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{8, "y4", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipSaveImageToFile",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "clsidEncoder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "encoderParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EncoderParameters", 256, IN },
	}
	},
	{ "GdipAddPathPieI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipFillClosedCurve2",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "fillMode", NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
	}
	},
	{ "GdipSetCompositingQuality",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "compositingQuality", NKT_DBOBJCLASS_Enumeration, "CompositingQuality", 32, IN },
	}
	},
	{ "GdipCreateTexture",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{2, "texture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpTexture", 8, IN },
	}
	},
	{ "GdipScaleLineTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "sx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "sy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipMultiplyTextureTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetImageHorizontalResolution",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "resolution", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ptr", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdipResetClip",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipAddPathBeziersI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipTranslatePenTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipCreateHalftonePalette",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GdipDrawCurve3I",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "offset", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "numberOfSegments", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetCustomLineCapWidthScale",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "widthScale", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipPathIterNextSubpath",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "resultCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "startIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "endIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "isClosed", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPathWorldBounds",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "bounds", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{2, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{3, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
	}
	},
	{ "GdipResetImageAttributes",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
	}
	},
	{ "GdipSetPathFillMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "fillmode", NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
	}
	},
	{ "GdipClonePen",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "clonepen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPen", 8, IN },
	}
	},
	{ "GdipLoadImageFromFile",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImage", 8, IN },
	}
	},
	{ "GdipGetPathGradientRectI",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
	}
	},
	{ "GdipSetCustomLineCapBaseCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "baseCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
	}
	},
	{ "GdipIsVisiblePathPointI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{4, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetLogFontA",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "logfontA", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTA", 480, IN },
	}
	},
	{ "GdipGetLogFontW",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "logfontW", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, IN },
	}
	},
	{ "GdipGetPenBrushFill",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBrush", 8, IN },
	}
	},
	{ "GdipComment",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "sizeData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "data", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GdipGetAllPropertyItems",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "totalBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "numProperties", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "allItems", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PropertyItem", 128, IN },
	}
	},
	{ "GdipDeleteFontFamily",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
	}
	},
	{ "GdipRecordMetafileFileNameI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "referenceHdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "type", NKT_DBOBJCLASS_Enumeration, "EmfType", 32, IN },
		{3, "frameRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{4, "frameUnit", NKT_DBOBJCLASS_Enumeration, "MetafileFrameUnit", 32, IN },
		{5, "description", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipCreateCustomLineCap",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fillPath", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "strokePath", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{2, "baseCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
		{3, "baseInset", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpCustomLineCap", 8, IN },
	}
	},
	{ "GdipGetLineBlendCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPathData",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "pathData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PathData", 96, IN },
	}
	},
	{ "GdipSetEmpty",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipGetStringFormatTrimming",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "trimming", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "StringTrimming", 32, IN },
	}
	},
	{ "GdipMeasureString",9,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "string", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{4, "layoutRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{5, "stringFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{6, "boundingBox", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{7, "codepointsFitted", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "linesFilled", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetAdjustableArrowCapHeight",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetPenLineJoin",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "lineJoin", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "LineJoin", 32, IN },
	}
	},
	{ "GdipGetImageEncodersSize",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "numEncoders", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawRectangle",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipImageGetFrameCount",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "dimensionID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipPathIterEnumerate",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "resultCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "types", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetMatrixElements",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "m11", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "m12", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "m21", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "m22", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipEnumerateMetafileSrcRectDestPointsI",9,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "srcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "Rect", 128, IN },
		{5, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{6, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipGetPenDashCap197819",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dashCap", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "DashCap", 32, IN },
	}
	},
	{ "GdipSetPathGradientPath",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipGetImagePaletteSize",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "size", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetCustomLineCapWidthScale",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "widthScale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipCreateLineBrushFromRectWithAngle",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{1, "color1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "color2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "isAngleScalable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{6, "lineGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpLineGradient", 8, IN },
	}
	},
	{ "GdipGetImageDecoders",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "numDecoders", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "decoders", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ImageCodecInfo", 608, IN },
	}
	},
	{ "GdipGetAdjustableArrowCapWidth",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "width", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetPageUnit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "unit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
	}
	},
	{ "GdipCombineRegionRectI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipDrawEllipseI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPenStartCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "startCap", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "LineCap", 32, IN },
	}
	},
	{ "GdipFillRectanglesI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetFontCollectionFamilyCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontCollection", 8, IN },
		{1, "numFound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPenColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "argb", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipRecordMetafileStream",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "referenceHdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "type", NKT_DBOBJCLASS_Enumeration, "EmfType", 32, IN },
		{3, "frameRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{4, "frameUnit", NKT_DBOBJCLASS_Enumeration, "MetafileFrameUnit", 32, IN },
		{5, "description", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipGetCustomLineCapBaseInset",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "inset", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetCustomLineCapStrokeJoin",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "lineJoin", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "LineJoin", 32, IN },
	}
	},
	{ "GdipShearMatrix",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "shearX", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "shearY", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetFontSize",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "size", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawImageRectI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipRotatePathGradientTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetImageBounds",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "srcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{2, "srcUnit", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "Unit", 32, IN },
	}
	},
	{ "GdipRotatePenTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetPathGradientPresetBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipIsVisibleRegionRectI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{6, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipIsVisibleRect",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetStringFormatMeasurableCharacterRangeCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawBeziersI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetImageEncoders",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "numEncoders", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "encoders", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ImageCodecInfo", 608, IN },
	}
	},
	{ "GdipCreateBitmapFromGdiDib",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "gdiBitmapInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{1, "gdiBitmapData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipCreateMetafileFromFile",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "file", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipAddPathLineI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPenTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipEnumerateMetafileDestPoint",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "PointF", 64, IN },
		{3, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipCreateBitmapFromResource",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpBitmapName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipDeleteGraphics",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipSetPathGradientSurroundColorsWithCount",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipImageGetFrameDimensionsCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetMetafileHeaderFromStream",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "header", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "MetafileHeader", 1120, IN },
	}
	},
	{ "GdipPathIterGetSubpathCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateRegionRgnData",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "regionData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "size", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipDrawBezierI",10,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "x3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "y3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "x4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "y4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateStreamOnFile",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "access", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 32, IN },
	}
	},
	{ "GdipGetAdjustableArrowCapHeight",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "height", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetTextRenderingHint",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "mode", NKT_DBOBJCLASS_Enumeration, "TextRenderingHint", 32, IN },
	}
	},
	{ "GdipCloneStringFormat",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "newFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpStringFormat", 8, IN },
	}
	},
	{ "GdipGetPropertyItemSize",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "propId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipScaleMatrix",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "scaleX", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "scaleY", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipSetLinePresetBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawRectanglesI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetImageAttributesColorMatrix",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "colorMatrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ColorMatrix", 800, IN },
		{4, "grayMatrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ColorMatrix", 800, IN },
		{5, "flags", NKT_DBOBJCLASS_Enumeration, "ColorMatrixFlags", 32, IN },
	}
	},
	{ "GdipGetImageType",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "ImageType", 32, IN },
	}
	},
	{ "GdipSetImageAttributesColorKeys",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "colorLow", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "colorHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipImageGetFrameDimensionsList",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "dimensionIDs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "count", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetStringFormatTabStops",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "firstTabOffset", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "tabStops", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawLinesI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetPathGradientSigmaBlend",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "focus", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "scale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetCustomLineCapBaseCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "baseCap", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "LineCap", 32, IN },
	}
	},
	{ "GdipIsVisibleRegionRect",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{6, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipBitmapSetResolution",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "xdpi", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "ydpi", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipIsEqualRegion",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "region2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{2, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{3, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPenMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "penMode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "PenAlignment", 32, IN },
	}
	},
	{ "GdipGetPathGradientSurroundColorCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawDriverString",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "text", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{4, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{5, "positions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{6, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipSetPenCustomStartCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
	}
	},
	{ "GdipSetClipGraphics",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "srcgraphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipGetPageUnit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "unit", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "Unit", 32, IN },
	}
	},
	{ "GdipSetPenWidth",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipAddPathClosedCurve2I",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDeleteCachedBitmap",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
{ 0 },
	}
	},
	{ "GdipIsOutlineVisiblePathPointI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{4, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{5, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetTextureTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipTranslateRegionI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientSurroundColorsWithCount",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetImageAttributesOutputChannel",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "channelFlags", NKT_DBOBJCLASS_Enumeration, "ColorChannelFlags", 32, IN },
	}
	},
	{ "GdipFillClosedCurveI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipIsStyleAvailable",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "IsStyleAvailable", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetPathGradientWrapMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
	}
	},
	{ "GdipSetPathGradientCenterColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "colors", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetImageAttributesRemapTable",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "mapSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "map", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ColorMap", 64, IN },
	}
	},
	{ "GdipCreateBitmapFromStreamICM",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipGetPathTypes",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "types", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipFillPolygon",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "fillMode", NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
	}
	},
	{ "GdipIsInfiniteRegion",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipFillPolygonI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "fillMode", NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
	}
	},
	{ "GdipCreateHatchBrush",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hatchstyle", NKT_DBOBJCLASS_Enumeration, "HatchStyle", 32, IN },
		{1, "forecol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "backcol", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpHatch", 8, IN },
	}
	},
	{ "GdipSetPathGradientTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetPathGradientPointCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetPenStartCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "startCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
	}
	},
	{ "GdipImageSelectActiveFrame",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "dimensionID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "frameIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCombineRegionPath",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipCreateBitmapFromFileICM",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipGetHatchStyle",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpHatch", 8, IN },
		{1, "hatchstyle", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "HatchStyle", 32, IN },
	}
	},
	{ "GdipSetPenMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "penMode", NKT_DBOBJCLASS_Enumeration, "PenAlignment", 32, IN },
	}
	},
	{ "GdipFillEllipse",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetStringFormatAlign",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "align", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "StringAlignment", 32, IN },
	}
	},
	{ "GdipSetPenDashStyle",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dashstyle", NKT_DBOBJCLASS_Enumeration, "DashStyle", 32, IN },
	}
	},
	{ "GdipGetNearestColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "argb", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipBeginContainer",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "dstrect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{2, "srcrect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{3, "unit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{4, "state", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetPenCompoundArray",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dash", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateCachedBitmap",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
{ 0 },
	}
	},
	{ "GdipTransformPointsI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "destSpace", NKT_DBOBJCLASS_Enumeration, "CoordinateSpace", 32, IN },
		{2, "srcSpace", NKT_DBOBJCLASS_Enumeration, "CoordinateSpace", 32, IN },
		{3, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{4, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawImageRectRect",14,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "dstx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "dsty", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "dstwidth", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "dstheight", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "srcx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "srcy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{8, "srcwidth", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{9, "srcheight", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{10, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{11, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{12, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{13, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdipCloneBitmapArea",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "format", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "srcBitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{6, "dstBitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipIsVisibleRegionPointI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{4, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetPathGradientCenterPointI",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
	}
	},
	{ "GdipCreateTextureIAI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "texture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpTexture", 8, IN },
	}
	},
	{ "GdipAddPathPolygonI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetRegionScansCount",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetPathPoints",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetCustomLineCapType",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "capType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "CustomLineCapType", 32, IN },
	}
	},
	{ "GdipDeletePrivateFontCollection",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontCollection", 8, IN },
	}
	},
	{ "GdipSetClipHrgn",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipGetFontHeightGivenDPI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "dpi", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "height", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetImageAttributesThreshold",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "threshold", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipFlattenPath",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "flatness", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetStringFormatTabStops",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "firstTabOffset", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "tabStops", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipPathIterCopyData",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "resultCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "types", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "startIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "endIndex", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipEnumerateMetafileDestPointI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "Point", 64, IN },
		{3, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipEnumerateMetafileDestPoints",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipCreatePath2I",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
		{4, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPath", 8, IN },
	}
	},
	{ "GdipGetPenWidth",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "width", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPixelOffsetMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pixelOffsetMode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "PixelOffsetMode", 32, IN },
	}
	},
	{ "GdipPathIterNextPathType",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "resultCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pathType", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "startIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "endIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetClipPath",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipSetLineColors",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "color1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "color2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetImageRawFormat",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "GdipGetFontUnit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "unit", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "Unit", 32, IN },
	}
	},
	{ "GdipGetImageThumbnail",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "thumbWidth", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "thumbHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "thumbImage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImage", 8, IN },
		{4, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdipSetAdjustableArrowCapWidth",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetMetafileDownLevelRasterizationLimit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{1, "metafileRasterizationLimitDpi", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawImagePointRectI",9,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "srcx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "srcy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "srcwidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "srcheight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
	}
	},
	{ "GdipIsVisibleRegionPoint",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{4, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateFontFromDC",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFont", 8, IN },
	}
	},
	{ "GdipClonePath",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "clonePath", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPath", 8, IN },
	}
	},
	{ "GdipGetStringFormatHotkeyPrefix",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "hotkeyPrefix", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipBeginContainer2",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "state", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipBeginContainerI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "dstrect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{2, "srcrect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{3, "unit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{4, "state", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipRotateTextureTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetRenderingOrigin",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipFillRegion",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipSetLineWrapMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
	}
	},
	{ "GdipIsMatrixEqual",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "matrix2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipAddPathBezierI",9,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "x3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "y3", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "x4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "y4", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipFlush",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "intention", NKT_DBOBJCLASS_Enumeration, "FlushIntention", 32, IN },
	}
	},
	{ "GdipRecordMetafileStreamI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "referenceHdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "type", NKT_DBOBJCLASS_Enumeration, "EmfType", 32, IN },
		{3, "frameRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{4, "frameUnit", NKT_DBOBJCLASS_Enumeration, "MetafileFrameUnit", 32, IN },
		{5, "description", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipGetPathGradientGammaCorrection",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "useGammaCorrection", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateBitmapFromGraphics",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "target", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{3, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipAddPathClosedCurve2",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipAddPathClosedCurveI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateFontFromLogfontW",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "logfont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTW", 736, IN },
		{2, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFont", 8, IN },
	}
	},
	{ "GdipGetRegionData",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "buffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "bufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "sizeFilled", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipVectorTransformMatrixPointsI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "pts", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateMetafileFromStream",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipGetPathGradientCenterColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "colors", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientCenterPointI",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
	}
	},
	{ "GdipResetTextureTransform",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
	}
	},
	{ "GdipIsEmptyRegion",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipScaleWorldTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "sx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "sy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipCreateHICONFromBitmap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "hbmReturn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetImagePalette",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "palette", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ColorPalette", 96, IN },
	}
	},
	{ "GdipCreateFromHDC",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipEnumerateMetafileSrcRectDestRect",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "RectF", 128, IN },
		{3, "srcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "RectF", 128, IN },
		{4, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipGetCompositingMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "compositingMode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "CompositingMode", 32, IN },
	}
	},
	{ "GdipGetGenericFontFamilySansSerif",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "nativeFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontFamily", 8, IN },
	}
	},
	{ "GdipEndContainer",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "state", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetPenMiterLimit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "miterLimit", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetDC",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipAddPathLine2",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipAddPathCurve",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipEnumerateMetafileDestRect",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "RectF", 128, IN },
		{3, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipDrawImage",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipSetAdjustableArrowCapMiddleInset",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "middleInset", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDeletePath",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipCloneBrush",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{1, "cloneBrush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBrush", 8, IN },
	}
	},
	{ "GdipTransformRegion",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetRegionBoundsI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
	}
	},
	{ "GdipGetPenMiterLimit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "miterLimit", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientPresetBlendCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetTextContrast",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "contrast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetClipBoundsI",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
	}
	},
	{ "GdipDrawArcI",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipResetPath",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipCombineRegionRegion",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "region2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipDrawCurve2",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDrawCurve3",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "offset", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "numberOfSegments", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipTranslateRegion",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDrawString",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "string", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{4, "layoutRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{5, "stringFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{6, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
	}
	},
	{ "GdipSetPathGradientFocusScales",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "xScale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "yScale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipCloneFontFamily",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "clonedFontFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontFamily", 8, IN },
	}
	},
	{ "GdipResetLineTransform",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
	}
	},
	{ "GdipGetLinePresetBlendCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipAddPathLine2I",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipPathIterNextMarker",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "resultCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "startIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "endIndex", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawImagePointsRectI",12,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "srcx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "srcy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "srcwidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "srcheight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{9, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{10, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{11, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdipPathIterNextSubpathPath",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "resultCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{3, "isClosed", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawArc",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipCreatePath",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brushMode", NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
		{1, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPath", 8, IN },
	}
	},
	{ "GdipSetPathGradientBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCombineRegionRect",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipSetPathGradientLinearBlend",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "focus", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "scale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipCreateBitmapFromHBITMAP",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hbm", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipSetPropertyItem",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "item", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PropertyItem", 128, IN },
	}
	},
	{ "GdipGetFontCollectionFamilyList",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontCollection", 8, IN },
		{1, "numSought", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "gpfamilies", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontFamily", 8, IN },
		{3, "numFound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdiplusNotificationHook",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "token", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetSolidFillColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpSolidFill", 8, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetImageAttributesNoOp",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipPrivateAddMemoryFont",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontCollection", 8, IN },
		{1, "memory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCloneImageAttributes",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "cloneImageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipDrawImagePointRect",9,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "srcx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "srcy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "srcwidth", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "srcheight", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{8, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
	}
	},
	{ "GdipGetPathLastPoint",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "lastPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
	}
	},
	{ "GdipNewPrivateFontCollection",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontCollection", 8, IN },
	}
	},
	{ "GdipGetPathPointsI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipPathIterRewind",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
	}
	},
	{ "GdipCreateBitmapFromStream",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipCloneImage",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "cloneImage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImage", 8, IN },
	}
	},
	{ "GdipIsMatrixInvertible",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetImageAttributesCachedBackground",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreatePen1",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "unit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{3, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPen", 8, IN },
	}
	},
	{ "GdipCreatePen2",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{1, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "unit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{3, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPen", 8, IN },
	}
	},
	{ "GdipSetPenLineCap197819",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "startCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
		{2, "endCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
		{3, "dashCap", NKT_DBOBJCLASS_Enumeration, "DashCap", 32, IN },
	}
	},
	{ "GdipGetPathFillMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "fillmode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "FillMode", 32, IN },
	}
	},
	{ "GdipLoadImageFromStream",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImage", 8, IN },
	}
	},
	{ "GdipGetBrushType",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "BrushType", 32, IN },
	}
	},
	{ "GdipSaveImageToStream",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{2, "clsidEncoder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "encoderParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EncoderParameters", 256, IN },
	}
	},
	{ "GdipSetPathGradientGammaCorrection",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "useGammaCorrection", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetCellDescent",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "CellDescent", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GdipTranslateClip",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipFillClosedCurve",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipAddPathBeziers",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetPenDashOffset",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "offset", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipResetPageTransform",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipSetPenEndCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "endCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
	}
	},
	{ "GdipCreateFromHWNDICM",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipEnumerateMetafileDestPointsI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipCreateTexture2I",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "texture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpTexture", 8, IN },
	}
	},
	{ "GdipGetRegionDataSize",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "bufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipAddPathRectangles",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipLoadImageFromStreamICM",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "stream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImage", 8, IN },
	}
	},
	{ "GdipDrawImagePointsI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "dstpoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPenDashOffset",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "offset", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipResetPenTransform",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
	}
	},
	{ "GdipMeasureDriverString",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "text", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{4, "positions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{5, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{7, "boundingBox", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
	}
	},
	{ "GdipTransformMatrixPointsI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "pts", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetImageGraphicsContext",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipGetPenEndCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "endCap", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "LineCap", 32, IN },
	}
	},
	{ "GdipGetPropertySize",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "totalBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "numProperties", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipWindingModeOutline",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "flatness", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDrawLineI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "x2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "y2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawLines",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetImageAttributesToIdentity",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
	}
	},
	{ "GdipTranslateClipI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawCurve",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipFillEllipseI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipMultiplyMatrix",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "matrix2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipAddPathRectangle",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipCreateLineBrushFromRectWithAngleI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{1, "color1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "color2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "isAngleScalable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{6, "lineGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpLineGradient", 8, IN },
	}
	},
	{ "GdipGetLineGammaCorrection",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "useGammaCorrection", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetTextureImage",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImage", 8, IN },
	}
	},
	{ "GdipRemovePropertyItem",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "propId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateMetafileFromWmfFile",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "file", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "wmfPlaceableFileHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "WmfPlaceableFileHeader", 176, IN },
		{2, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipCreateAdjustableArrowCap",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "isFilled", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpAdjustableArrowCap", 8, IN },
	}
	},
	{ "GdipDrawCurve2I",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipSetPathGradientCenterPoint",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
	}
	},
	{ "GdipDeletePathIter",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
	}
	},
	{ "GdipDrawClosedCurve",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipReleaseDC",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawCachedBitmap",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
{ 0 },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetClipRect",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipPathIterGetCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreatePath2",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
		{4, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPath", 8, IN },
	}
	},
	{ "GdipGetPathGradientFocusScales",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "xScale", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "yScale", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateBitmapFromDirectDrawSurface",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "surface", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDirectDrawSurface7", 32, IN },
		{1, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipGetLineColors",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "colors", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipClosePathFigure",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipSetImageAttributesWrapMode",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageAttr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "wrap", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{2, "argb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "clamp", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawPie",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipFillClosedCurve2I",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "fillMode", NKT_DBOBJCLASS_Enumeration, "FillMode", 32, IN },
	}
	},
	{ "GdipCreateImageAttributes",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipCloneMatrix",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "cloneMatrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "Matrix", 64, IN },
	}
	},
	{ "GdipSetSmoothingMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "smoothingMode", NKT_DBOBJCLASS_Enumeration, "SmoothingMode", 32, IN },
	}
	},
	{ "GdipGetStringFormatFlags",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "flags", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetRegionScans",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipRecordMetafileFileName",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "referenceHdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "type", NKT_DBOBJCLASS_Enumeration, "EmfType", 32, IN },
		{3, "frameRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{4, "frameUnit", NKT_DBOBJCLASS_Enumeration, "MetafileFrameUnit", 32, IN },
		{5, "description", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipDisposeImage",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
	}
	},
	{ "GdipGetImageWidth",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "width", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetRegionHRgn",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetMetafileHeaderFromEmf",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hEmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "header", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "MetafileHeader", 1120, IN },
	}
	},
	{ "GdipSetStringFormatAlign",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "align", NKT_DBOBJCLASS_Enumeration, "StringAlignment", 32, IN },
	}
	},
	{ "GdipGetLineRectI",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
	}
	},
	{ "GdipRestoreGraphics",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "state", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetClipRectI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipAddPathPolygon",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipAddPathArcI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetPenCustomEndCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpCustomLineCap", 8, IN },
	}
	},
	{ "GdipMultiplyLineTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetAdjustableArrowCapMiddleInset",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "middleInset", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipFillPolygon2I",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetAdjustableArrowCapFillState",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "fillState", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateRegionHrgn",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hRgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipBitmapUnlockBits",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "lockedBitmapData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "BitmapData", 192, IN },
	}
	},
	{ "GdipEnumerateMetafileSrcRectDestPointI",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "Point", 64, IN },
		{3, "srcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "Rect", 128, IN },
		{4, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipEnumerateMetafileSrcRectDestPoints",9,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "srcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "RectF", 128, IN },
		{5, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{6, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipGetPenUnit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "unit", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "Unit", 32, IN },
	}
	},
	{ "GdipSaveAdd",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "encoderParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EncoderParameters", 256, IN },
	}
	},
	{ "GdipSetPenLineJoin",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "lineJoin", NKT_DBOBJCLASS_Enumeration, "LineJoin", 32, IN },
	}
	},
	{ "GdipSetLineTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipAddPathEllipse",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipSetRenderingOrigin",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipTransformPoints",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "destSpace", NKT_DBOBJCLASS_Enumeration, "CoordinateSpace", 32, IN },
		{2, "srcSpace", NKT_DBOBJCLASS_Enumeration, "CoordinateSpace", 32, IN },
		{3, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{4, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetPathMarker",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipGetLineTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetPenFillType",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "PenType", 32, IN },
	}
	},
	{ "GdipCreateMetafileFromEmf",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hEmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "deleteEmf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipAddPathRectanglesI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetVisibleClipBoundsI",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
	}
	},
	{ "GdipDrawPolygonI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipIsVisibleClipEmpty",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetFontStyle",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "style", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawLine",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "x2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "y2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetCompositingQuality",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "compositingQuality", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "CompositingQuality", 32, IN },
	}
	},
	{ "GdipCloneCustomLineCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "clonedCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpCustomLineCap", 8, IN },
	}
	},
	{ "GdipSetClipRegion",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{2, "combineMode", NKT_DBOBJCLASS_Enumeration, "CombineMode", 32, IN },
	}
	},
	{ "GdipGetTextureWrapMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "WrapMode", 32, IN },
	}
	},
	{ "GdipGetPenDashArray",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dash", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipBitmapSetPixel",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetPenBrushFill",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
	}
	},
	{ "GdipGetRegionBounds",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{2, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
	}
	},
	{ "GdipTransformMatrixPoints",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "pts", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetCompositingMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "compositingMode", NKT_DBOBJCLASS_Enumeration, "CompositingMode", 32, IN },
	}
	},
	{ "GdipAddPathCurve2",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipAddPathCurve3",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "offset", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "numberOfSegments", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipAddPathCurveI",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetEncoderParameterListSize",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "clsidEncoder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipAddPathString",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "string", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{4, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "emSize", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "layoutRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{7, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
	}
	},
	{ "GdipScalePathGradientTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "sx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "sy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipSetLineGammaCorrection",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "useGammaCorrection", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetStringFormatHotkeyPrefix",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "hotkeyPrefix", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateHBITMAPFromBitmap",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "hbmReturn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "background", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPathGradientWrapMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "WrapMode", 32, IN },
	}
	},
	{ "GdipAddPathCurve2I",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipCreatePathGradient",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{3, "polyGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPathGradient", 8, IN },
	}
	},
	{ "GdipClearPathMarkers",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipEnumerateMetafileDestRectI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "Rect", 128, IN },
		{3, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipDrawImageRectRectI",14,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "dstx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dsty", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dstwidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dstheight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "srcx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "srcy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "srcwidth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "srcheight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{11, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{12, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{13, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdipSetImageAttributesGamma",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "gamma", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipSetStringFormatFlags",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetPenDashCap197819",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dashCap", NKT_DBOBJCLASS_Enumeration, "DashCap", 32, IN },
	}
	},
	{ "GdipGetImagePixelFormat",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "format", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCloneBitmapAreaI",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "format", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "srcBitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{6, "dstBitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipRecordMetafile",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "referenceHdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "EmfType", 32, IN },
		{2, "frameRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{3, "frameUnit", NKT_DBOBJCLASS_Enumeration, "MetafileFrameUnit", 32, IN },
		{4, "description", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipGetClip",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipGetPathGradientRect",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
	}
	},
	{ "GdipGetPenDashStyle",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dashstyle", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "DashStyle", 32, IN },
	}
	},
	{ "GdipGetPenCompoundArray",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dash", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipTranslateWorldTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipCreateMatrix2",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "m11", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "m12", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "m21", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "m22", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "Matrix", 64, IN },
	}
	},
	{ "GdipCreateMatrix3",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{1, "dstplg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "Matrix", 64, IN },
	}
	},
	{ "GdipSetStringFormatLineAlign",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "align", NKT_DBOBJCLASS_Enumeration, "StringAlignment", 32, IN },
	}
	},
	{ "GdipIsVisiblePathPoint",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{4, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipSetMetafileDownLevelRasterizationLimit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{1, "metafileRasterizationLimitDpi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipReversePath",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipIsClipEmpty",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCloneFont",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "cloneFont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFont", 8, IN },
	}
	},
	{ "GdipResetPathGradientTransform",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
	}
	},
	{ "GdipTranslateMatrix",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "offsetX", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "offsetY", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipAddPathRectangleI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetCustomLineCapBaseInset",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "inset", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipPathIterHasCurve",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "hasCurve", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipBitmapGetPixel",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipStringFormatGetGenericTypographic",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpStringFormat", 8, IN },
	}
	},
	{ "GdipCreateTexture2",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "texture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpTexture", 8, IN },
	}
	},
	{ "GdipGetPointCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipIsVisiblePointI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipAddPathLine",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "x2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "y2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipSetPenTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetMetafileHeaderFromWmf",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hWmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wmfPlaceableFileHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "WmfPlaceableFileHeader", 176, IN },
		{2, "header", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "MetafileHeader", 1120, IN },
	}
	},
	{ "GdipGetImagePalette",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "palette", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ColorPalette", 96, IN },
		{2, "size", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDeleteStringFormat",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
	}
	},
	{ "GdipCreatePathGradientFromPath",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "polyGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPathGradient", 8, IN },
	}
	},
	{ "GdipDrawImageRect",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDrawCurveI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipIsMatrixIdentity",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "result", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipClosePathFigures",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipGetStringFormatTabStopCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipTranslateLineTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipTransformPath",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetWorldTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetImageDecodersSize",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "numDecoders", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDrawImageI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipFillPolygon2",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateBitmapFromScan0",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "stride", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "format", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "scan0", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipGetClipBounds",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
	}
	},
	{ "GdipEnumerateMetafileSrcRectDestPoint",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destPoint", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "PointF", 64, IN },
		{3, "srcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "RectF", 128, IN },
		{4, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipGetRegionScansI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
		{1, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipSetInfinite",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipDrawBezier",10,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y1", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "x2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "y2", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "x3", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "y3", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{8, "x4", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{9, "y4", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipWarpPath",10,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "srcx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "srcy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "srcwidth", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "srcheight", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{8, "warpMode", NKT_DBOBJCLASS_Enumeration, "WarpMode", 32, IN },
		{9, "flatness", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipPathIterNextMarkerPath",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "resultCount", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipNewInstalledFontCollection",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontCollection", 8, IN },
	}
	},
	{ "GdipSetWorldTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipPlayMetafileRecord",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{1, "recordType", NKT_DBOBJCLASS_Enumeration, "EmfPlusRecordType", 32, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "data", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "GdipScaleTextureTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "sx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "sy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetVisibleClipBounds",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
	}
	},
	{ "GdipFillPath",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipTestControl",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "control", NKT_DBOBJCLASS_Enumeration, "GpTestControlEnum", 32, IN },
		{1, "param", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GdipDeleteFont",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
	}
	},
	{ "GdipCreateMetafileFromWmf",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hWmf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "deleteWmf", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wmfPlaceableFileHeader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "WmfPlaceableFileHeader", 176, IN },
		{3, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpMetafile", 8, IN },
	}
	},
	{ "GdipSetLineLinearBlend",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "focus", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "scale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipWidenPath",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "nativePath", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{3, "flatness", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetLineWrapMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "wrapmode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "WrapMode", 32, IN },
	}
	},
	{ "GdipGetDpiX",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "dpi", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetDpiY",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "dpi", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetFamily",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{1, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontFamily", 8, IN },
	}
	},
	{ "GdipRotateMatrix",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipSetAdjustableArrowCapFillState",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "cap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpAdjustableArrowCap", 8, IN },
		{1, "fillState", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetImageHeight",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "height", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateRegionPath",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipInvertMatrix",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipSetSolidFillColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpSolidFill", 8, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateBitmapFromHICON",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hicon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipAddPathCurve3I",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "offset", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "numberOfSegments", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDrawRectangleI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawRectangles",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateStringFormat",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "formatAttributes", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "language", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpStringFormat", 8, IN },
	}
	},
	{ "GdipDeleteMatrix",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetMetafileHeaderFromFile",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "header", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "MetafileHeader", 1120, IN },
	}
	},
	{ "GdipStringFormatGetGenericDefault",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpStringFormat", 8, IN },
	}
	},
	{ "GdipDeleteRegion",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipDrawImagePoints",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{2, "dstpoints", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipLoadImageFromFileICM",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpImage", 8, IN },
	}
	},
	{ "GdipSetTextureTransform",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
	}
	},
	{ "GdipGetPropertyIdList",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "numOfProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "list", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateLineBrushI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "point1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{1, "point2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "color1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "color2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{5, "lineGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpLineGradient", 8, IN },
	}
	},
	{ "GdipFillRectangle",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGetLineSpacing",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "LineSpacing", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GdipSetInterpolationMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "interpolationMode", NKT_DBOBJCLASS_Enumeration, "InterpolationMode", 32, IN },
	}
	},
	{ "GdipSetPixelOffsetMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pixelOffsetMode", NKT_DBOBJCLASS_Enumeration, "PixelOffsetMode", 32, IN },
	}
	},
	{ "GdipBitmapLockBits",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBitmap", 8, IN },
		{1, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{2, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "format", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lockedBitmapData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "BitmapData", 192, IN },
	}
	},
	{ "GdipGetHatchBackgroundColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpHatch", 8, IN },
		{1, "backcol", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipCreateRegionRectI",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{1, "region", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipGetEmHeight",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "EmHeight", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GdipAddPathEllipseI",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateFontFromLogfontA",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "logfont", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLOGFONTA", 480, IN },
		{2, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFont", 8, IN },
	}
	},
	{ "GdipCreateFont",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "fontFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "emSize", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "unit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{4, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFont", 8, IN },
	}
	},
	{ "GdipSetStringFormatDigitSubstitution",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "language", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "substitute", NKT_DBOBJCLASS_Enumeration, "StringDigitSubstitute", 32, IN },
	}
	},
	{ "GdipCreateMatrix3I",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{1, "dstplg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{2, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "Matrix", 64, IN },
	}
	},
	{ "GdipCreateLineBrush",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "point1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{1, "point2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "color1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "color2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{5, "lineGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpLineGradient", 8, IN },
	}
	},
	{ "GdipGetSmoothingMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "smoothingMode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "SmoothingMode", 32, IN },
	}
	},
	{ "GdipGetInterpolationMode",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "interpolationMode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "InterpolationMode", 32, IN },
	}
	},
	{ "GdipGetTextContrast",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "contrast", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipStartPathFigure",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipSetLineBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetFamilyName",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{1, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "language", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GdipMultiplyWorldTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipAddPathPie",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipGraphicsClear",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetLineBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetPenDashCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipImageRotateFlip",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "rfType", NKT_DBOBJCLASS_Enumeration, "RotateFlipType", 32, IN },
	}
	},
	{ "GdipSetPathGradientPresetBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipAlloc",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetGenericFontFamilyMonospace",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "nativeFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontFamily", 8, IN },
	}
	},
	{ "GdipSetPageScale",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "scale", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipCreateFromHDC2",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hDevice", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipDisposeImageAttributes",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipGetPageScale",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "scale", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipDeleteBrush",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
	}
	},
	{ "GdipFillPieI",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{7, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipMeasureCharacterRanges",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "string", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "font", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFont", 8, IN },
		{4, "layoutRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "RectF", 128, IN },
		{5, "stringFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{6, "regionCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "regions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpRegion", 8, IN },
	}
	},
	{ "GdipFillRectangleI",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "x", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "y", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "width", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "height", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipFillRectangles",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpBrush", 8, IN },
		{2, "rects", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipEnumerateMetafileSrcRectDestRectI",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{2, "destRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "Rect", 128, IN },
		{3, "srcRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "Rect", 128, IN },
		{4, "srcUnit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "callbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "imageAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
	}
	},
	{ "GdipCreateFontFamilyFromName",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "name", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fontCollection", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontCollection", 8, IN },
		{2, "fontFamily", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpFontFamily", 8, IN },
	}
	},
	{ "GdipSetPenUnit",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "unit", NKT_DBOBJCLASS_Enumeration, "Unit", 32, IN },
	}
	},
	{ "GdipGetStringFormatLineAlign",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
		{1, "align", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "StringAlignment", 32, IN },
	}
	},
	{ "GdipGetHemfFromMetafile",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{1, "hEmf", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipMultiplyPathGradientTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathGradient", 8, IN },
		{1, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipCreateSolidFill",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "color", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpSolidFill", 8, IN },
	}
	},
	{ "GdipSetImageAttributesOutputChannelColorProfile",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "imageattr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImageAttributes", 8, IN },
		{1, "type", NKT_DBOBJCLASS_Enumeration, "ColorAdjustType", 32, IN },
		{2, "enableFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "colorProfileFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GdipCreateBitmapFromFile",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "filename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpBitmap", 8, IN },
	}
	},
	{ "GdipRotateWorldTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipGetMetafileHeaderFromMetafile",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "metafile", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpMetafile", 8, IN },
		{1, "header", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "MetafileHeader", 1120, IN },
	}
	},
	{ "GdipGetTextRenderingHint",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "mode", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "TextRenderingHint", 32, IN },
	}
	},
	{ "GdipSetCustomLineCapStrokeCaps",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
		{1, "startCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
		{2, "endCap", NKT_DBOBJCLASS_Enumeration, "LineCap", 32, IN },
	}
	},
	{ "GdipDrawBeziers",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipSetPenCustomEndCap",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "customCap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpCustomLineCap", 8, IN },
	}
	},
	{ "GdipGetPropertyItem",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "propId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "propSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "buffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PropertyItem", 128, IN },
	}
	},
	{ "GdiplusNotificationUnhook",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "token", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipTranslateTextureTransform",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpTexture", 8, IN },
		{1, "dx", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "dy", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipDrawPath",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
	}
	},
	{ "GdipDrawClosedCurve2",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipDrawClosedCurveI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipCreateLineBrushFromRect",6,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "rect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "RectF", 128, IN },
		{1, "color1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "color2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "mode", NKT_DBOBJCLASS_Enumeration, "LinearGradientMode", 32, IN },
		{4, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{5, "lineGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpLineGradient", 8, IN },
	}
	},
	{ "GdipGetImageFlags",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "flags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetPenCompoundCount",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipImageForceValidation",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
	}
	},
	{ "GdipVectorTransformMatrixPoints",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "matrix", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Matrix", 64, IN },
		{1, "pts", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "PointF", 64, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipPathIterIsValid",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "iterator", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPathIterator", 8, IN },
		{1, "valid", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetHatchForegroundColor",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpHatch", 8, IN },
		{1, "forecol", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipGetImageVerticalResolution",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "resolution", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GdipResetWorldTransform",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
	}
	},
	{ "GdipAddPathStringI",8,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "string", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "length", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "family", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpFontFamily", 8, IN },
		{4, "style", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "emSize", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "layoutRect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Rect", 128, IN },
		{7, "format", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpStringFormat", 8, IN },
	}
	},
	{ "GdipRotateLineTransform",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "angle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "order", NKT_DBOBJCLASS_Enumeration, "MatrixOrder", 32, IN },
	}
	},
	{ "GdipCreatePathGradientI",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{1, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "wrapMode", NKT_DBOBJCLASS_Enumeration, "WrapMode", 32, IN },
		{3, "polyGradient", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "GpPathGradient", 8, IN },
	}
	},
	{ "GdipAddPathPath",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "addingPath", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{2, "connect", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipDrawClosedCurve2I",5,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "graphics", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpGraphics", 8, IN },
		{1, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{2, "points", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "Point", 64, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "tension", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
	{ "GdipSetPenDashArray",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "pen", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPen", 8, IN },
		{1, "dash", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipGetEncoderParameterList",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "image", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpImage", 8, IN },
		{1, "clsidEncoder", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "size", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "buffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "EncoderParameters", 256, IN },
	}
	},
	{ "GdipGetLinePresetBlend",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "brush", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpLineGradient", 8, IN },
		{1, "blend", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "positions", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "count", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GdipAddPathArc",7,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Enumeration, "Status", 32, INOUT },
		{0, "path", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GpPath", 8, IN },
		{1, "x", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{3, "width", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{4, "height", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, "startAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, "sweepAngle", NKT_DBFUNDTYPE_Float, 0, 4, IN },
	}
	},
};

int GdiPlusarraySize = (sizeof(GdiPlus_info) / sizeof(GdiPlus_info[0]));
#include "../Pyrebox_libcalls.h"

libcall_info_t WinMM_info[] = {
	{ "midiConnect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "midiOutCacheDrumPatches",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uPatch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwkya", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fuCache", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutUnprepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "midihdr_tag", 512, IN },
		{2, "cbmh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "timeBeginPeriod",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uPeriod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetPlaybackRate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwRate", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "joyGetDevCapsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pjc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJOYCAPSA", 3232, IN },
		{2, "cbjc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "joyGetDevCapsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pjc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJOYCAPSW", 5824, IN },
		{2, "cbjc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioWrite",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cch", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutReset",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hms", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpmmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "mmtime_tag", 96, IN },
		{2, "cbmmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DefDriverProc",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwDriverIdentifier", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdrvr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutPause",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutUnprepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "wavehdr_tag", 256, IN },
		{2, "cbwh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetErrorTextA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hms", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciFreeCommandResource",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wTable", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInPrepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "wavehdr_tag", 256, IN },
		{2, "cbwh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInGetErrorTextA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInGetErrorTextW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "auxGetDevCapsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pac", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagAUXCAPSA", 384, IN },
		{2, "cbac", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwParam1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwParam2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutSetPitch",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwPitch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "sndPlaySoundA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszSound", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "fuSound", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "joyReleaseCapture",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciSetDriverData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "auxOutMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dw1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dw2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInStop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInOpen",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phmi", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciLoadCommandResource",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpResName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "wType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "joyGetPosEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pji", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "joyinfoex_tag", 416, IN },
	}
	},
	{ "midiOutPrepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "midihdr_tag", 512, IN },
		{2, "cbmh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciSendStringW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpstrCommand", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpstrReturnString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "uReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hwndCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutGetErrorTextA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutGetErrorTextW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetPitch",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwPitch", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "midiOutLongMsg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "midihdr_tag", 512, IN },
		{2, "cbmh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "auxSetVolume",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwVolume", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInGetDevCapsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwic", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWAVEINCAPSA", 384, IN },
		{2, "cbwic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInGetDevCapsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwic", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWAVEINCAPSW", 640, IN },
		{2, "cbwic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutGetID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SendDriverMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDriver", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "message", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioSendMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerOpen",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phmx", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "uMxId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioCreateChunk",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmcki", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMCKINFO", 160, IN },
		{2, "fuCreate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciSendStringA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "lpstrCommand", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpstrReturnString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "uReturnLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hwndCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "auxGetNumDevs",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "joySetThreshold",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uThreshold", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioRead",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pch", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cch", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "joyGetThreshold",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puThreshold", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "mciGetCreatorTask",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mciId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioFlush",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fuFlush", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciGetErrorStringA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "mcierr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciGetErrorStringW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "mcierr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "auxGetDevCapsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pac", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagAUXCAPSW", 640, IN },
		{2, "cbac", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "joySetCapture",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uPeriod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "fChanged", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmDrvInstall",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDriver", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wszDrvEntry", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "drvMessage", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioDescend",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmcki", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMCKINFO", 160, IN },
		{2, "pmmckiParent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMCKINFO", 160, IN },
		{3, "fuDescend", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrvGetModuleHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDriver", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutShortMsg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetDevCapsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uMxId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxcaps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIXERCAPSA", 384, IN },
		{2, "cbmxcaps", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetLineInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIXERLINEA", 1344, IN },
		{2, "fdwInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamProperty",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hms", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lppropdata", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetControlDetailsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxcd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tMIXERCONTROLDETAILS", 192, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "timeGetSystemTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pmmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "mmtime_tag", 96, IN },
		{1, "cbmmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioSetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmioinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMIOINFO", 576, IN },
		{2, "fuInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioOpenA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pmmioinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMIOINFO", 576, IN },
		{2, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciSetYieldProc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "mciId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fpYieldProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "dwYieldData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciGetYieldProc",2,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, "mciId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwYieldData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "waveOutGetNumDevs",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "mixerGetLineInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIXERLINEW", 2240, IN },
		{2, "fdwInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInAddBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "wavehdr_tag", 256, IN },
		{2, "cbwh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamOut",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hms", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "midihdr_tag", 512, IN },
		{2, "cbmh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInGetDevCapsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmic", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIDIINCAPSA", 352, IN },
		{2, "cbmic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioAdvance",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmioinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMIOINFO", 576, IN },
		{2, "fuAdvance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioGetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmioinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMIOINFO", 576, IN },
		{2, "fuInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutGetVolume",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwVolume", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "sndPlaySoundW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszSound", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fuSound", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dw1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dw2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInReset",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInGetDevCapsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmic", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIDIINCAPSW", 608, IN },
		{2, "cbmic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioRenameA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszNewFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pmmioinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMIOINFO", 576, IN },
		{3, "fdwRename", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioRenameW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pszNewFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pmmioinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMIOINFO", 576, IN },
		{3, "fdwRename", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInGetID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "timeSetEvent",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDelay", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uResolution", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fptc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "dwUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fuEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "mmtime_tag", 96, IN },
		{2, "cbmmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInStart",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerSetControlDetails",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxcd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tMIXERCONTROLDETAILS", 192, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciDriverNotify",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "wDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamPause",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hms", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInStop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInUnprepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "midihdr_tag", 512, IN },
		{2, "cbmh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "timeGetDevCaps",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ptc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "timecaps_tag", 64, IN },
		{1, "cbtc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dw1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dw2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioSetBuffer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pchBuffer", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchBuffer", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "fuBuffer", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "joyGetPos",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uJoyID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pji", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "joyinfo_tag", 128, IN },
	}
	},
	{ "timeGetTime",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "mmioStringToFOURCCA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioStringToFOURCCW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "sz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "uFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInUnprepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "wavehdr_tag", 256, IN },
		{2, "cbwh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OpenDriver",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "szDriverName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "szSectionName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutSetPlaybackRate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwRate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CloseDriver",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDriver", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lParam1", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "lParam2", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetID",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puMxId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "fdwId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "timeKillEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uTimerID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioOpenW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pmmioinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMIOINFO", 576, IN },
		{2, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInReset",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "joyConfigChanged",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamOpen",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phms", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "puDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "cMidi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamStop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hms", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciGetDeviceIDA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszDevice", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "mciGetDeviceIDW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pszDevice", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "midiInAddBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "midihdr_tag", 512, IN },
		{2, "cbmh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutPrepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "wavehdr_tag", 256, IN },
		{2, "cbwh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetErrorTextW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInGetID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "waveOutBreakLoop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetDevCapsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uMxId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxcaps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIXERCAPSW", 640, IN },
		{2, "cbmxcaps", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInStart",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciSendCommandA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mciId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwParam1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwParam2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutReset",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "timeEndPeriod",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uPeriod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutSetVolume",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwVolume", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInGetNumDevs",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "waveOutOpen",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phwo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwfx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{3, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutCachePatches",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uBank", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwpa", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fuCache", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetControlDetailsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxcd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tMIXERCONTROLDETAILS", 192, IN },
		{2, "fdwDetails", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiDisconnect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "mixerGetNumDevs",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "mciDriverYield",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "wDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutRestart",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PlaySoundA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszSound", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "hmod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fdwSound", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PlaySoundW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszSound", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "hmod", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fdwSound", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInGetPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "mmtime_tag", 96, IN },
		{2, "cbmmt", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DriverCallback",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hDevice", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwUser", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "dwParam1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwParam2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "auxGetVolume",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwVolume", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "midiOutSetVolume",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwVolume", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dw1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dw2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmx", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "joyGetNumDevs",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "midiInGetNumDevs",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "mciSendCommandW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mciId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwParam1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwParam2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioSeek",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lOffset", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iOrigin", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioInstallIOProcA",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "fccIOProc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pIOProc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mmioInstallIOProcW",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "fccIOProc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pIOProc", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInOpen",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phwi", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwfx", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tWAVEFORMATEX", 144, IN },
		{3, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciGetDriverData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "wDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDriverModuleHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hDriver", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiStreamRestart",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hms", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetLineControlsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxlc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIXERLINECONTROLSA", 192, IN },
		{2, "fdwControls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mixerGetLineControlsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmxobj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmxlc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIXERLINECONTROLSW", 192, IN },
		{2, "fdwControls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutOpen",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "phmo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwCallback", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fdwOpen", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutGetNumDevs",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "mmioClose",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fuClose", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetVolume",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwVolume", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "mmioAscend",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmmio", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmmcki", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MMCKINFO", 160, IN },
		{2, "fuAscend", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutGetDevCapsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmoc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIDIOUTCAPSA", 416, IN },
		{2, "cbmoc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiOutGetDevCapsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmoc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagMIDIOUTCAPSW", 672, IN },
		{2, "cbmoc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetDevCapsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwoc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWAVEOUTCAPSA", 416, IN },
		{2, "cbwoc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutGetDevCapsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "uDeviceID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwoc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagWAVEOUTCAPSW", 672, IN },
		{2, "cbwoc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveOutWrite",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwo", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "wavehdr_tag", 256, IN },
		{2, "cbwh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "waveInMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uMsg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dw1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dw2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInPrepareHeader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hmi", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmh", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "midihdr_tag", 512, IN },
		{2, "cbmh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInGetErrorTextA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "midiInGetErrorTextW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "mmrError", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "mciGetDeviceIDFromElementIDA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwElementID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstrType", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "mciGetDeviceIDFromElementIDW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwElementID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpstrType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
};

int WinMMarraySize = (sizeof(WinMM_info) / sizeof(WinMM_info[0]));
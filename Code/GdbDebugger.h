#pragma once
#include "pin.h"
/*namespace W{
	#define _WIN32_LEAN_AND_MEAN_
	#include "windows.h"
}
*/

class GdbDebugger

{
public:
	static GdbDebugger* getInstance();
	void executeCmd(char* cmd);
	void connectRemote(int port);

private:
	static GdbDebugger* instance;
	OS_PROCESS_WAITABLE_PROCESS waitProc;
	NATIVE_FD g_hChildStd_IN_Rd;
	NATIVE_FD g_hChildStd_IN_Wr;
	NATIVE_FD g_hChildStd_OUT_Rd;
	NATIVE_FD g_hChildStd_OUT_Wr;
	int remote_port;
	GdbDebugger(void);
	~GdbDebugger(void);
	void CreateChildProcess();
	void ReadFromPipe(void);
	void WriteToPipe(char* cmd);
	void ErrorExit(char* error, int code); 
};


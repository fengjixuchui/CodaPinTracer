#include "GdbDebugger.h"

#include "pin.H"
#include <iostream>
#include <string.h>

#define BUFSIZE 10000

#define GDB_PATH "C:\\MinGW\\bin\\gdb.exe"

GdbDebugger* GdbDebugger::instance = 0;

//singleton
GdbDebugger* GdbDebugger::getInstance()
{
	if (instance == 0)
		instance = new GdbDebugger();
	return instance;
}

GdbDebugger::GdbDebugger(void)
{
	OS_RETURN_CODE ret = OS_Pipe(OS_PIPE_CREATE_FLAGS_READ_SIDE_INHERITABLE,
								 &g_hChildStd_IN_Rd, &g_hChildStd_IN_Wr);
	if (ret.generic_err != OS_RETURN_CODE_NO_ERROR)
		ErrorExit("OS_Pipe", ret.os_specific_err);
	CreateChildProcess();
	ReadFromPipe();
}


GdbDebugger::~GdbDebugger(void)
{
}

// ----------------------------- SETTER ----------------------------- //

void GdbDebugger::connectRemote(int port)
{
	std::stringstream cmd;
	cmd << "target remote :" << port;
	this->executeCmd((char *)cmd.str().c_str());
}


// ----------------------------- UTILS ----------------------------- //


void GdbDebugger::CreateChildProcess()
// Create a child process that uses the previously created pipes for STDIN and STDOUT.
{ 
	OS_RETURN_CODE ret;

	char szCmdLine[] = GDB_PATH;
	NATIVE_FD stdFiles[3];
	OS_FindStdFiles(stdFiles);
	stdFiles[0] = g_hChildStd_IN_Rd;
	
	NATIVE_PID curPid;
	USIZE envBlockSize;
	char** envBlock;
	OS_GetPid(&curPid);
	OS_GetEnvironmentBlock(curPid, &envBlock, &envBlockSize);
	// TODO how can we specify CREATE_NEW_CONSOLE for Pin?
	ret = OS_CreateProcess(szCmdLine, stdFiles, NULL, envBlock, &waitProc);
	if (ret.generic_err != OS_RETURN_CODE_NO_ERROR)
		ErrorExit("OS_CreateProcess", ret.os_specific_err);
}

// Read from a file and write its contents to the pipe for the child's STDIN.
// Stop when there is no more data. 
void GdbDebugger::WriteToPipe(char* cmd) {
	USIZE size = strlen(cmd);
	OS_RETURN_CODE ret = OS_WriteFD(g_hChildStd_IN_Wr, cmd, &size);
	if (ret.generic_err != OS_RETURN_CODE_NO_ERROR)
		ErrorExit("OS_WriteFD", ret.os_specific_err);
} 


// Read output from the child process's pipe for STDOUT
// and write to the parent process's pipe for STDOUT. 
// Stop when there is no more data. 
void GdbDebugger::ReadFromPipe(void){
	char chBuf[BUFSIZE];
	USIZE size = sizeof(chBuf);
	OS_RETURN_CODE ret = OS_ReadFD(g_hChildStd_OUT_Rd, &size, chBuf);
	if (ret.generic_err != OS_RETURN_CODE_NO_ERROR)
		ErrorExit("OS_ReadFD", ret.os_specific_err);
   /* TODO: code for writing to hParentStdOut is missing */
} 

void GdbDebugger::ErrorExit(char* error, int code) {
	std::cerr << error << std::endl;
	PIN_ExitProcess(code);
}

void GdbDebugger::executeCmd(char* cmd){
	this->WriteToPipe(cmd);
	this->ReadFromPipe();
} 
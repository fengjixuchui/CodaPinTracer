#pragma once
#include "pin.H"
#include "TracerWriteFile.h"
#include "TracerLibCalls.h"
#include "TracerSysCalls.h"
#include <cstdio>

// TLS to be used in place of scCallbackArray[] from main.cpp
#define USE_TLS_FOR_SYSCALLS 0

extern TLS_KEY tls_key; // we put it in main.cpp

//Padding for thread entry to avoid false sharing problem
//-> 4 because size of function pointer is 4
#if !USE_TLS_FOR_SYSCALLS
	#define PAD_SIZE 64-sizeof(vector<stackEntry>*)-sizeof(buf_info_t*)-sizeof(syscall_tracer*)-2*sizeof(FILE*)-sizeof(uint)-4-sizeof(THREADID)
#endif 

typedef struct {
#if USE_TLS_FOR_SYSCALLS
	syscall_t sc;
#endif
	
	//Tracer-related fields
	vector<stackEntry>* shadowStack;									// Shadow stack
	buf_info_t* buffer;													// Buffer for writing to file
	syscall_tracer* syscallEntry;										// Pointer to syscall entry for printing syscall info after execution
	uint call_number;													// Counter used to differentiate calls during post-processing 
	FILE* OutFile;														// Output File
	void(*file_write)(THREADID, buf_info_t*, FILE*, const char*, ...);	// Pointer to function for opening file/writing to file
	THREADID threadid;													// Threadid
	
	FILE* threadLogFile;

#if !USE_TLS_FOR_SYSCALLS
	//Padding
	UINT8 pad[PAD_SIZE];
#endif

} bluepill_tls;
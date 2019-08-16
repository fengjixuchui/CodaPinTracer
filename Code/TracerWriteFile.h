#pragma once
//Utility header
#include "pin.H"

/*
//Memory Range struct
typedef struct _MemoRange {
	ADDRINT StartAddress;
	ADDRINT EndAddress;
} MemoRange;*/
//Main Image range
//extern MemoRange mainImg;
//User32.dll range
//extern MemoRange user32Img;

#define OUTBUF_SIZE 8192 //Buffer size
//Buffer struct
typedef struct _buf_info_t {
	char buf[OUTBUF_SIZE];
	size_t sofar;
} buf_info_t;

//Function for buffer writing
void buf_write(THREADID threadid, buf_info_t* buffer, FILE* OutFile, const char* format, ...);
//Function for flushing
void buf_flush(buf_info_t* buffer, FILE* OutFile);
//Function invoked to carry out the first write to a buffer of a thread
void buf_write_begin(buf_info_t* buffer, FILE* OutFile, const char* format, va_list argptr);
//Function for opening file during instrumentation
void open_file(THREADID threadid, buf_info_t* buffer, FILE* OutFile, const char* format, ...);
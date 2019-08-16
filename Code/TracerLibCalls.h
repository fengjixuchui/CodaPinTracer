#pragma once
//#include "HookSyscalls.h"
#include "pin.H"
#include "TracerSysCalls.h"

//---Arguments Passing Macros---//
#define ZERO_ARGS

#define ONE_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,

#define TWO_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,

#define THREE_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
				IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
				IARG_FUNCARG_ENTRYPOINT_VALUE, 2,

#define FOUR_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,

#define FIVE_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,

#define SIX_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,

#define SEVEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,

#define EIGHT_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,

#define NINE_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,

#define TEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,

#define ELEVEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,

#define TWELVE_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 11,

#define THIRTEEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 11,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 12,

#define FOURTEEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 11,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 12,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 13,

#define FIFTEEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 11,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 12,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 13,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 14,

#define SIXTEEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 11,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 12,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 13,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 14,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 15,

#define SEVENTEEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 11,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 12,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 13,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 14,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 15,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 16,

#define EIGHTEEN_ARGS IARG_FUNCARG_ENTRYPOINT_VALUE, 0,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 1,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 2,\
               IARG_FUNCARG_ENTRYPOINT_VALUE, 3,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 4,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 5,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 6,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 7,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 8,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 9,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 10,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 11,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 12,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 13,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 14,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 15,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 16,\
			   IARG_FUNCARG_ENTRYPOINT_VALUE, 17,

//--------------------------------------------------------//

#define COPY_ZERO_ARGS 

#define COPY_ONE_ARGS	args[0] = arg0;

#define COPY_TWO_ARGS	args[0] = arg0; \
						args[1] = arg1;

#define COPY_THREE_ARGS args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \

#define COPY_FOUR_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3;

#define COPY_FIVE_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4;

#define COPY_SIX_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; 

#define COPY_SEVEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; 

#define COPY_EIGHT_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; 

#define COPY_NINE_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; 

#define COPY_TEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; 

#define COPY_ELEVEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10;

#define COPY_TWELVE_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10; \
						args[11] = arg11;

#define COPY_THIRTEEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10; \
						args[11] = arg11; \
						args[12] = arg12;

#define COPY_FOURTEEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10; \
						args[11] = arg11; \
						args[12] = arg12; \
						args[13] = arg13;

#define COPY_FIFTEEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10; \
						args[11] = arg11; \
						args[12] = arg12; \
						args[13] = arg13; \
						args[14] = arg14;

#define COPY_SIXTEEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10; \
						args[11] = arg11; \
						args[12] = arg12; \
						args[13] = arg13; \
						args[14] = arg14; \
						args[15] = arg15;

#define COPY_SEVENTEEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10; \
						args[11] = arg11; \
						args[12] = arg12; \
						args[13] = arg13; \
						args[14] = arg14; \
						args[15] = arg15; \
						args[16] = arg16;

#define COPY_EIGHTEEN_ARGS 	args[0] = arg0; \
						args[1] = arg1; \
						args[2] = arg2; \
						args[3] = arg3; \
						args[4] = arg4; \
						args[5] = arg5; \
						args[6] = arg6; \
						args[7] = arg7; \
						args[8] = arg8; \
						args[9] = arg9; \
						args[10] = arg10; \
						args[11] = arg11; \
						args[12] = arg12; \
						args[13] = arg13; \
						args[14] = arg14; \
						args[15] = arg15; \
						args[16] = arg16; \
						args[17] = arg17;

//-----------------------------------------------------------------//

#define PASS_ZERO_ARGS

#define PASS_ONE_ARGS 	ADDRINT arg0

#define PASS_TWO_ARGS 	ADDRINT arg0,\
						ADDRINT arg1

#define PASS_THREE_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2

#define PASS_FOUR_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3

#define PASS_FIVE_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4

#define PASS_SIX_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5

#define PASS_SEVEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6

#define PASS_EIGHT_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7

#define PASS_NINE_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8

#define PASS_TEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9

#define PASS_ELEVEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10

#define PASS_TWELVE_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10,\
						ADDRINT arg11

#define PASS_THIRTEEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10,\
						ADDRINT arg11,\
						ADDRINT arg12

#define PASS_FOURTEEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10,\
						ADDRINT arg11,\
						ADDRINT arg12,\
						ADDRINT arg13

#define PASS_FIFTEEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10,\
						ADDRINT arg11,\
						ADDRINT arg12,\
						ADDRINT arg13,\
						ADDRINT arg14

#define PASS_SIXTEEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10,\
						ADDRINT arg11,\
						ADDRINT arg12,\
						ADDRINT arg13,\
						ADDRINT arg14,\
						ADDRINT arg15

#define PASS_SEVENTEEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10,\
						ADDRINT arg11,\
						ADDRINT arg12,\
						ADDRINT arg13,\
						ADDRINT arg14,\
						ADDRINT arg15,\
						ADDRINT arg16

#define PASS_EIGHTEEN_ARGS 	ADDRINT arg0,\
						ADDRINT arg1,\
						ADDRINT arg2,\
						ADDRINT arg3,\
						ADDRINT arg4,\
						ADDRINT arg5,\
						ADDRINT arg6,\
						ADDRINT arg7,\
						ADDRINT arg8,\
						ADDRINT arg9,\
						ADDRINT arg10,\
						ADDRINT arg11,\
						ADDRINT arg12,\
						ADDRINT arg13,\
						ADDRINT arg14,\
						ADDRINT arg15,\
						ADDRINT arg16,\
						ADDRINT arg17

//---------------------------------------------------------//

//Max args in config file
#define MAX_ARGS_CONFIG 18


//Information on the apicall
typedef struct _apicall_t {;

	//Args -> For now array, after make a linked list of structs
	drsys_arg_t arguments[MAX_ARGS_CONFIG];

	//Return value
	drsys_arg_t retval;

	//arg count
	int count;

	//Img and rtn names
	const char* img_name;
	const char* rtn_name;

} apicall_t;

//Shadow Stack entry
typedef struct _stackEntry {
	apicall_t* apiInfo;    //System Call info
	ADDRINT  currentSP;   //Stack pointer register content before the call
	THREADID threadID;   //Thread id
	ADDRINT returnIp;   //Return address
	uint api_counter;	//Api counter to distinguish calls in post-processing
} stackEntry;

class TracerLibCalls {
public:
	static void initLibCallsTracer();
	
	static void addAnalysisRtns(IMG img);

	static long long getLibcallCount();
};
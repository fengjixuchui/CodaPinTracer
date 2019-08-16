#pragma once
#pragma once

#include "pin.H"
#include "drsyscall.h"

namespace W {
#include "windows.h"
#include "Winternl.h"
}

//--------------- HELPER DATA STRUCTURES --------------//

//To put in helper
#define TEST(mask, var) (((mask) & (var)) != 0)
/* check if any bit in mask is set in var */
#define TESTANY(mask, var) (((mask) & (var)) != 0)

#define TESTALL(mask, var) (((mask) & (var)) == (mask))

#define SYSARG_MISC_HAS_TYPE(flags) \
    (TESTANY(SYSARG_COMPLEX_TYPE|SYSARG_INLINED|SYSARG_HAS_TYPE, (flags)))

#define PFX "0x%08x"
#define PIFX "0x%x"

//Information on the arg (partially taken from Dr.Memory)
typedef struct _drsys_arg_t {
	/* System call context *****************************************/
	/** The system call number. */
	DR::drsys_sysnum_t sysnum;
	/** The current thread's drcontext.  Set for the dynamic iterators only. */
	CONTEXT* drcontext;

	/*Standard used to pass arguments*/
	SYSCALL_STANDARD standard;
	/****************************************************************/

	/**
	* Whether operating pre-system call (if true) or post-system call (if false).
	* Set for the dynamic iterators only (drsys_iterate_args() and
	* drsys_iterate_memargs()).
	*/
	bool pre;

	/* System call argument information ****************************/
	/** The ordinal of the parameter.  Set to -1 for a return value. */
	int ordinal;

	/** The mode (whether inlined, or read or written memory, etc.) of the parameter. */
	uint flags;

	//Type of argument
	int type;

	/** A string further describing the type of the parameter.  May be NULL. */
	const char *type_name;
	/**
	* For the memarg iterator, the type of the containing structure.  This is
	* only set for some types when the sub-fields of the sructure are separated
	* into different pieces due to gaps in the structure and the containing
	* structure has its own type enum value.
	* If not valid, it is set to DRSYS_TYPE_INVALID.
	* Invalid for the arg iterator.
	*/
	//drsys_param_type_t containing_type;
	/** A string describing the parameter.  This may be NULL. */
	const char *arg_name;

	//Self explanatory
	ADDRINT value;
	/**
	* For the memarg iterator, specifies the size in bytes of the memory region.
	* For the arg iterator, specifies the size in bytes of the parameter.
	*/
	int size;

	/**
	* A string describing the symbolic name of named constant. Indicates
	* first entry in the set of enum or define constants. May be NULL.
	*/
	const char *enum_name;
} drsys_arg_t;

//information on the syscall
typedef struct _syscall_tracer {

	//Syscall name,number and argcount
	ADDRINT syscall_number;
	const char * syscall_name;
	int argcount;

	//Args -> For now array, after make a linked list of structs
	drsys_arg_t arguments[MAX_ARGS_IN_ENTRY];

	//Return value
	drsys_arg_t retval;

	//Syscall counter
	int syscall_counter;

} syscall_tracer; // TODO is this fine with Win64?

//--------------- END HELPER DATA STRUCTURES --------------//


class TracerSysCalls
{
public:
	static void initSyscallTracer();
	
	static void traceSysCallEntry(THREADID thread_id, CONTEXT* ctx, SYSCALL_STANDARD std, char** SyscallIDsArray, ADDRINT syscall_number);
	static void traceSysCallExit(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std);
	
	static void traceSysCallEntryEmpty();
	static void traceSysCallExitEmpty();

	static long long getSyscallCount();

};


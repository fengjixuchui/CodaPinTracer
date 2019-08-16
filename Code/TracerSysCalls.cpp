#include "TracerSysCalls.h"
#include "hash_map"
#include "drstrace_named_consts.h"
#include "Config.h"
#include "HookSyscalls.h"

const char * const param_type_names[] = {
	"<invalid>",                /* DRSYS_TYPE_INVALID */
	"<unknown>",                /* DRSYS_TYPE_UNKNOWN */
	"void",                     /* DRSYS_TYPE_VOID */
	"bool",                     /* DRSYS_TYPE_BOOL */
	"int",                      /* DRSYS_TYPE_INT */
	"int",                      /* DRSYS_TYPE_SIGNED_INT */
	"unsigned int",             /* DRSYS_TYPE_UNSIGNED_INT */
	"size_t",                   /* DRSYS_TYPE_SIZE_T */
	"HANDLE",                   /* DRSYS_TYPE_HANDLE */
	"NTSTATUS",                 /* DRSYS_TYPE_NTSTATUS */
	"ATOM",                     /* DRSYS_TYPE_ATOM */
	"LCID",                     /* DRSYS_TYPE_LCID */
	"LPARAM",                   /* DRSYS_TYPE_LPARAM */
	"HMODULE",                  /* DRSYS_TYPE_HMODULE */
	"HFILE",                    /* DRSYS_TYPE_HFILE */
	"void *",                   /* DRSYS_TYPE_POINTER */
	"<struct>",                 /* DRSYS_TYPE_STRUCT */
	"char *",                   /* DRSYS_TYPE_CSTRING */
	"wchar_t *",                /* DRSYS_TYPE_CWSTRING */
	"char[]",                   /* DRSYS_TYPE_CARRAY */
	"wchar_t[]",                /* DRSYS_TYPE_CWARRAY */
	"char **",                  /* DRSYS_TYPE_CSTRARRAY */
	"UNICODE_STRING",           /* DRSYS_TYPE_UNICODE_STRING */
	"LARGE_STRING",             /* DRSYS_TYPE_LARGE_STRING */
	"OBJECT_ATTRIBUTES",        /* DRSYS_TYPE_OBJECT_ATTRIBUTES */
	"SECURITY_DESCRIPTOR",      /* DRSYS_TYPE_SECURITY_DESCRIPTOR */
	"SECURITY_QOS",             /* DRSYS_TYPE_SECURITY_QOS */
	"PORT_MESSAGE",             /* DRSYS_TYPE_PORT_MESSAGE */
	"CONTEXT",                  /* DRSYS_TYPE_CONTEXT */
	"EXCEPTION_RECORD",         /* DRSYS_TYPE_EXCEPTION_RECORD */
	"DEVMODEW",                 /* DRSYS_TYPE_DEVMODEW */
	"WNDCLASSEXW",              /* DRSYS_TYPE_WNDCLASSEXW */
	"CLSMENUNAME",              /* DRSYS_TYPE_CLSMENUNAME */
	"MENUITEMINFOW",            /* DRSYS_TYPE_MENUITEMINFOW */
	"ALPC_PORT_ATTRIBUTES",     /* DRSYS_TYPE_ALPC_PORT_ATTRIBUTES */
	"ALPC_SECURITY_ATTRIBUTES", /* DRSYS_TYPE_ALPC_SECURITY_ATTRIBUTES */
	"LOGFONTW",                 /* DRSYS_TYPE_LOGFONTW */
	"NONCLIENTMETRICSW",        /* DRSYS_TYPE_NONCLIENTMETRICSW */
	"ICONMETRICSW",             /* DRSYS_TYPE_ICONMETRICSW */
	"SERIALKEYSW",              /* DRSYS_TYPE_SERIALKEYSW */
	"struct sockaddr",          /* DRSYS_TYPE_SOCKADDR */
	"struct msghdr",            /* DRSYS_TYPE_MSGHDR */
	"struct msgbuf",            /* DRSYS_TYPE_MSGBUF */
	"LARGE_INTEGER",            /* DRSYS_TYPE_LARGE_INTEGER */
	"ULARGE_INTEGER",           /* DRSYS_TYPE_ULARGE_INTEGER */
	"IO_STATUS_BLOCK",          /* DRSYS_TYPE_IO_STATUS_BLOCK */
	"<function>",               /* DRSYS_TYPE_FUNCTION */
	"BITMAPINFO",               /* DRSYS_TYPE_BITMAPINFO */
	"ALPC_CONTEXT_ATTRIBUTES",  /* DRSYS_TYPE_ALPC_CONTEXT_ATTRIBUTES */
	"ALPC_MESSAGE_ATTRIBUTES",  /* DRSYS_TYPE_ALPC_MESSAGE_ATTRIBUTES */
	"T2_SET_PARAMETERS",        /* DRSYS_TYPE_T2_SET_PARAMETERS */
};
#define NUM_PARAM_TYPE_NAMES \
    (sizeof(param_type_names)/sizeof(param_type_names[0]))

//Hashmap from system call name to struct
static std::hash_map<string, DR::syscall_info_t*> mapOfSyscalls;

//Hashmap of constants
static std::hash_map<string, const_values_t*> mapOfConsts;

//Main image options
static bool NO_MAIN_IMAGE_IGNORE;
static bool NO_MAIN_IMAGE_NOARGS;

//Sysarg global counters for empty instrumentation
long long globalCountSyscalls = 0;
long long globalCountAfterSyscalls = 0;

//------------PRINT FUNCTIONS--------------------//

static bool
drstrace_print_enum_const_name(drsys_arg_t *arg, bluepill_tls* tdata)
{
	/* The routine returns false when can't
	* find symbolic name in the hashtable.
	*/
	int iterator = 0;
	const_values_t *named_consts;
	const_values_t *named_consts_save;
	bool has_out = false;
	//std::map<string, const_values_t*>::iterator it;

	/* Trying to find enum_name in the hashtable */
	//named_consts = (const_values_t *)
	//	hashtable_lookup(&nconsts_table, (void *)arg->enum_name);

	/* Trying to find enum_name in the hashtable */
	// Check for enum_name existence
	if (mapOfConsts.count(arg->enum_name) == 0) {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PIFX, arg->value);
		return false;
	};
	named_consts = mapOfConsts[arg->enum_name];
	//mapOfWords.find("mars") == mapOfWords.end()


	/* There are a lot of named constants with incremental values
	* (e.g. REG_NONE 0, REG_SZ 1, REG_EXPAND_SZ 2, REG_BINARY 3).
	* So, firstly, we're trying to determine such cases.
	*/
	named_consts_save = named_consts;
	while (named_consts_save->const_name != NULL) {
		if (arg->value == named_consts_save->value) {
			if (has_out)
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " or ");
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%s", named_consts_save->const_name);
			has_out = true;
		}
		named_consts_save++;
	}
	if (has_out)
		return true;
	/* If not, we perform linear search for composite named constants
	* (e.g. FILE_SHARE_READ | FILE_SHARE_WRITE). We're using linear
	* search instead of random access b/c current table entries may
	* contain the same values for different named constants as well as
	* combination values, which make it difficult, such as:
	* ...
	* {0x00800000, "FILE_OPEN_FOR_FREE_SPACE_QUERY"},
	* {0x00ffffff, "FILE_VALID_OPTION_FLAGS"},
	* ...
	*/
	has_out = false;
	while (named_consts->const_name != NULL) {
		if (TESTALL(named_consts->value, arg->value)) {
			if (has_out)
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "|");
			/* FIXME i#1550: We don't perform additional search to
			* include entries with the same values in the output.
			* Ideally the tables shouldn't contain such entries.
			*/
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%s", named_consts->const_name);
			has_out = true;
		}
		named_consts++;
	}
	if (!has_out) {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PIFX, arg->value);
		return false;
	}

	return true;
}


//Symbolic name resolution
static bool
drstrace_get_arg_symname(drsys_arg_t *arg, bluepill_tls* tdata)
{

	if (arg->type >= DRSYS_TYPE_STRUCT) {
		return false;
	}

	else if (arg->enum_name != NULL) {
		if (drstrace_print_enum_const_name(arg, tdata)) {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (type=named constant, value=0x%x, size=0x%x)\n",
				arg->value,
				arg->size);
		}
		else {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (type=named constant, size=0x%x)\n",
				arg->size);
		}
		return true;
	}

	return false;
}

//Print values of simple types
void print_simple_value(drsys_arg_t* curr_arg, bool leading_zeroes, bluepill_tls* tdata)
{

	ADDRINT truncValue = curr_arg->value;

	//If pointer is true we have a pointer, otherwise SYSARG_INLINED, i.e. a non memory argument, the entire value is in memory slot
	bool pointer = !TEST(SYSARG_INLINED, curr_arg->flags);

	if (pointer || leading_zeroes) {

		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, truncValue);
	}
	else {

		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PIFX, truncValue);
	}

	//If pointer and input parameter, read value
	if (pointer && ((curr_arg->pre && TESTANY(SYSARG_READ | SYSARG_INLINED, curr_arg->flags)) || (!curr_arg->pre && TEST(SYSARG_WRITE, curr_arg->flags)))) {

		ADDRINT deref = 0;

		if (curr_arg->size > sizeof(deref)) {
			//LOG("too-big simple type");
			return;
		}

		//PIN_SafeCopy returns number of bytes read
		//Note that if we have a pointer to void, we don't know how large the actual pointed region is
		if (PIN_SafeCopy(&deref, (void *)curr_arg->value, curr_arg->size) > 0) {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, (leading_zeroes ? " => 0x%08x" : " => 0x%x"), deref);
		}

	}

}

//Print Unicode string
static void
print_unicode_string(DR::UNICODE_STRING *us, bluepill_tls* tdata)
{
	if (us == NULL)
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<null>");
	else {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%d/%d \"%.*ls\"", us->Length, us->MaximumLength,
			us->Length / sizeof(wchar_t),
			(us->Buffer == NULL) ? L"<null>" : us->Buffer);

	}
}

//Print compound type
static bool
print_known_compound_type(drsys_arg_t* curr_arg, bluepill_tls* tdata) {

	switch (curr_arg->type) {
	case SYSARG_TYPE_UNICODE_STRING: {
		print_unicode_string(((DR::UNICODE_STRING *)(curr_arg->value)), tdata);

		//curr_arg->type_name = "UNICODE STRING";

		break;
	}
	case SYSARG_TYPE_OBJECT_ATTRIBUTES: {
		DR::OBJECT_ATTRIBUTES *oa = (DR::OBJECT_ATTRIBUTES *)(curr_arg->value);
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "len=0x%x, root=0x%x, name=",
			oa->Length, oa->RootDirectory);
		print_unicode_string(oa->ObjectName, tdata);
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, ", att=0x%x, sd=0x%08x, sqos=0x%08x",
			oa->Attributes, oa->SecurityDescriptor,
			oa->SecurityQualityOfService);

		//curr_arg->type_name = "OBJECT ATTRIBUTES";

		break;
	}
	case DRSYS_TYPE_IO_STATUS_BLOCK: {
		W::IO_STATUS_BLOCK *io = (W::IO_STATUS_BLOCK *)(curr_arg->value);
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "status=0x%x, info=0x%x", io->Status,
			io->Information);

		//curr_arg->type_name = "IO_STATUS_BLOCK";

		break;
	}
	case DRSYS_TYPE_LARGE_INTEGER: {
		W::LARGE_INTEGER *li = (W::LARGE_INTEGER *)(curr_arg->value);
		//Original code with I64X but not working ...
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "0x%016llx(hex)", li->QuadPart);

		//curr_arg->type_name = "LARGE_INTEGER";

		break;
	}
	default: {
		return false;
	}
	}

	return true;

}

//Print arguments
static void print_arg(drsys_arg_t* curr_arg, bluepill_tls* tdata, uint syscall_counter) {

	if (curr_arg->ordinal == -1)
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%u \tretval: ", syscall_counter);
	else
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%u \targ %d: ", syscall_counter, curr_arg->ordinal);

	//Constant Resolution Here
	if (curr_arg->enum_name != NULL) {
		if (drstrace_get_arg_symname(curr_arg, tdata))
			return;
	}

	//OutFile << "Type: " << curr_arg.misc << " index " << index << endl;
	switch (curr_arg->type) {
	case DRSYS_TYPE_VOID:		  print_simple_value(curr_arg, true, tdata); break;
	case DRSYS_TYPE_POINTER:      print_simple_value(curr_arg, true, tdata); break;
	case DRSYS_TYPE_BOOL:         print_simple_value(curr_arg, false, tdata); break;
	case DRSYS_TYPE_INT:          print_simple_value(curr_arg, false, tdata); break;
	case DRSYS_TYPE_SIGNED_INT:   print_simple_value(curr_arg, false, tdata); break;
	case DRSYS_TYPE_UNSIGNED_INT: print_simple_value(curr_arg, false, tdata); break;
	case DRSYS_TYPE_HANDLE:       print_simple_value(curr_arg, false, tdata); break;
	case DRSYS_TYPE_NTSTATUS:     print_simple_value(curr_arg, false, tdata); break;
	case DRSYS_TYPE_ATOM:         print_simple_value(curr_arg, false, tdata); break;
	default: {
		if (curr_arg->value == 0) {
			//OUTPUT(buf, "<null>");
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<null>");
			//OutFile << "arg " << index << " : <null> "<< endl;
		}
		else if (!TEST(SYSARG_READ, curr_arg->flags)) {

			//Print arg value
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, curr_arg->value);
		}

		else {
			if (!print_known_compound_type(curr_arg, tdata))
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<NYI>");
		}

	}
	}


	//PIFX for size
	curr_arg->arg_name = NULL; //->Ensure it is null since we are not using it for now
	(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s%s, size=0x%x)\n",
		(curr_arg->arg_name == NULL) ? "" : "name=",
		(curr_arg->arg_name == NULL) ? "" : curr_arg->arg_name,
		(curr_arg->arg_name == NULL) ? "" : ", ",
		(curr_arg->type_name == NULL) ? "\"\"" : curr_arg->type_name,
		(curr_arg->type_name == NULL ||
			TEST(SYSARG_INLINED, curr_arg->flags)) ? "" : "*",
		curr_arg->size);


}


//Print args without syscall info
static void print_raw_args(CONTEXT* ctx, SYSCALL_STANDARD std, int count, bluepill_tls* tdata) {

	for (int i = 0; i < count; i++) {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "\targ %d: 0x%x\n", i, PIN_GetSyscallArgument(ctx, std, i));
	}
}

//--Print name of system call--//
//-> Returns bool value indicating whether or not it is needed to go on printing the args
bool print_name(bool inMainImage, DR::syscall_info_t* syscall, CONTEXT *ctx, SYSCALL_STANDARD std, THREADID thread_id, bluepill_tls* tdata, char* syscall_name) {

	//Call NOT in mainImg
	if (!inMainImage) {

		if (NO_MAIN_IMAGE_IGNORE) {
			return false;
		}
		else {

			//Syscall prototype not found
			if (syscall == NULL) {

				(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "~~%d~~ %s!%s ", PIN_GetTid(), "ntdll.dll", syscall_name);
				(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "Syscall not found\n");
				(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "\tWARNING: Not in main image\n");
				//LOG("Syscall not found\n");

				if (NO_MAIN_IMAGE_NOARGS) return false;

				//Print fixed number of args
				print_raw_args(ctx, std, Config::getInstance()->getMaxArgsUnk(), tdata);

				return false;
			}

			//If no arg info then return for now -> We have count so we can just print raw args if (syscall->arg == NULL) 
			else if (syscall->arg == NULL) {

				(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "~~%d~~ %s!%s ", PIN_GetTid(), "ntdll.dll", syscall_name);
				(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, " (no args info)\n");
				(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "\tWARNING: Not in main image\n");
				//LOG("No args info");

				if (NO_MAIN_IMAGE_NOARGS) return false;

				//Print count number of args
				print_raw_args(ctx, std, syscall->arg_count, tdata);

				return false;
			}
			//Everything known but not in main image
			else {

				if (NO_MAIN_IMAGE_NOARGS) {
					//Print name and return
					(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "~~%d~~ %s!%s\n", PIN_GetTid(), "ntdll.dll", syscall_name);
					(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "\tWARNING : Not in main image\n");
					return false;
				}
			}
		}
	}
	//Call in mainImg
	else {

		//Syscall prototype not found
		if (syscall == NULL) {

			(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "~~%d~~ %s!%s ", PIN_GetTid(), "ntdll.dll", syscall_name);
			(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "Syscall not found\n");
			(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "\tWARNING: Not in main image\n");
			//LOG("Syscall not found\n");

			//Print fixed number of args
			print_raw_args(ctx, std, Config::getInstance()->getMaxArgsUnk(), tdata);

			return false;
		}
		//If no arg info then return for now -> We have count so we can just print raw args if (syscall->arg == NULL) 
		else if (syscall->arg == NULL) {

			(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "~~%d~~ %s!%s ", PIN_GetTid(), "ntdll.dll", syscall_name);
			(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, " (no args info)\n");
			(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "\tWARNING: Not in main image\n");
			//LOG("No args info");

			//Print count number of args
			print_raw_args(ctx, std, syscall->arg_count, tdata);

			return false;
		}

	}

	return true;

}


//------------UTILS---------------//

//Return syscall count for empty RTN instrumentation
long long TracerSysCalls::getSyscallCount()
{
	return globalCountSyscalls;
}


//--Check if system call is in main image--//
//-> 1. Sysenter is called directly 
//-> 2. Check return address of Nt stub from stack
bool isInMainImage(CONTEXT *ctx) {

	//-- 1. Check if sysenter is called directly
	//Instruction pointer normally points to sysenter instruction
	ADDRINT Ip = PIN_GetContextReg(ctx, REG_INST_PTR);

	//Check whether or not sysenter is invoked directly
	if (ProcInfo::getInstance()->isInsideMainIMG(Ip)) return true;

	//--- 2. Sysenter is not invoked directly -> check if return address of Nt stub in main image

	//Get stack pointer
	ADDRINT sp = PIN_GetContextReg(ctx, REG_STACK_PTR);

	//Get contents of pointed memory location at sp+4, where ret address of Nt stub is located
	ADDRINT* sp_pointer = (ADDRINT *)(sp + 4);
	ADDRINT value;
	PIN_SafeCopy(&value, sp_pointer, sizeof(ADDRINT));

	//Check if return address is in main image
	if (ProcInfo::getInstance()->isInsideMainIMG(value)) return true;

	return false;
}

//Check if arg struct is null
static bool checkNull(DR::sysinfo_arg_t* toCheck) {

	if (toCheck->flags != 0) return false;
	if (toCheck->misc != 0) return false;
	if (toCheck->param != 0) return false;
	if (toCheck->size != 0) return false;
	if (toCheck->type_name != NULL) return false;

	return true;

}

//Obtain type from arg information
static drsys_param_type_t
map_to_exported_type(uint sysarg_type, size_t *sz_out OUT)
{
	size_t sz = 0;
	drsys_param_type_t type = (drsys_param_type_t)sysarg_type;
	/* map to exported types */
	if (sysarg_type == SYSARG_TYPE_UNICODE_STRING_NOLEN) {
		type = DRSYS_TYPE_UNICODE_STRING;
	}
	else if (sysarg_type == SYSARG_TYPE_SINT32) {
		type = DRSYS_TYPE_SIGNED_INT;
		sz = 4;
	}
	else if (sysarg_type == SYSARG_TYPE_UINT32) {
		type = DRSYS_TYPE_UNSIGNED_INT;
		sz = 4;
	}
	else if (sysarg_type == SYSARG_TYPE_SINT16) {
		type = DRSYS_TYPE_SIGNED_INT;
		sz = 2;
	}
	else if (sysarg_type == SYSARG_TYPE_UINT16) {
		type = DRSYS_TYPE_UNSIGNED_INT;
		sz = 2;
	}
	else if (sysarg_type == SYSARG_TYPE_BOOL8) {
		type = DRSYS_TYPE_BOOL;
		sz = 1;
	}
	else if (sysarg_type == SYSARG_TYPE_BOOL32) {
		type = DRSYS_TYPE_BOOL;
		sz = 4;
#ifdef WINDOWS
	}
	else if (sysarg_type == DRSYS_TYPE_NTSTATUS) {
		sz = sizeof(NTSTATUS);
#endif
	}
	ASSERT(type < NUM_PARAM_TYPE_NAMES, "invalid type enum val");
	if (sz_out != NULL && sz > 0)
		*sz_out = sz;
	return type;
}

static drsys_param_type_t
type_from_arg_info(const DR::sysinfo_arg_t *arg_info)
{
	drsys_param_type_t type = DRSYS_TYPE_INVALID;
	if (SYSARG_MISC_HAS_TYPE(arg_info->flags)) {
		/* we don't need size b/c it's encoded in arg_info already */
		type = map_to_exported_type(arg_info->misc, NULL);
	}
	return type;
}

//Obtain type name from constant
static const char *
arg_type_name(int type, const char *type_name)
{
	if (type_name == NULL && type != DRSYS_TYPE_UNKNOWN &&
		type != DRSYS_TYPE_INVALID) {
		ASSERT(type < NUM_PARAM_TYPE_NAMES, "invalid type enum val");
		return param_type_names[type];
	}
	else
		return type_name;
}

//-------------SYSCALL ENTRY FUNCTIONS---------------//

// Empty syscall tracing BEFORE syscall
void TracerSysCalls::traceSysCallEntryEmpty() {
	globalCountSyscalls++;
}

// Syscall tracing BEFORE syscall
void TracerSysCalls::traceSysCallEntry(THREADID thread_id, CONTEXT* ctx, SYSCALL_STANDARD std, char** SyscallIDsArray, ADDRINT syscall_number) {

	//--Check if system call is in main image--//
	//-> 1. Sysenter is called directly 
	//-> 2. Check return address of Nt stub from stack
	bool inMainImage = isInMainImage(ctx);
	//If not in main image and NO_MAIN_IMAGE_IGNORE return immediately
	if (!inMainImage && NO_MAIN_IMAGE_IGNORE) {
		return;
	}

	//--Get thread local storage--
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, thread_id));

	char * syscall_name;
	if (syscall_number < MAXSYSCALLS) {
		syscall_name = SyscallIDsArray[syscall_number];

		//No name associated to number
		if (!syscall_name) {
			(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "No name associated to number\n");
			//LOG("No name associated to number");
			return;
		}
	}
	else {
		//LOG("System call number too high");
		return;
	}

	//---Get System Call prototype---
	//Fill the struct with prototype info
	DR::syscall_info_t* syscall = NULL;

	//Look for syscall in hashmap
	hash_map<string, DR::syscall_info_t*>::iterator it = mapOfSyscalls.find(syscall_name);
	if (it != mapOfSyscalls.end()) {
		syscall = it->second;
	}

	//Test if args info are in secondary table
	if (syscall != NULL) {
		if (TEST(SYSINFO_SECONDARY_TABLE, syscall->flags)) {
			uint code;
			int arr_size;

			if (syscall->arg_count < 1) {
				LOG("Error: at least 1 arg for code");
				return;
			}
			/* We're called only from pre, before pt->sysarg is set, and not
			* used for syscalls w/ 64-bit params in 32-bit, so we can use
			* dr_syscall_get_param().
			*/
			/* The param # to use for the code is stored in the 1st entry
			* (the entries are not otherwise used, as we'll switch to the
			* other table).
			*/
			//code = (uint)dr_syscall_get_param(drcontext, sysinfo->arg[0].param);
			//buf_write(OutFile, "Secondary Table accessed\n");

			code = PIN_GetSyscallArgument(ctx, std, syscall->arg[0].param);
			arr_size = (syscall->num).secondary;
			//buf_write(OutFile, "Size = %d\n", arr_size);
			//buf_write(OutFile, "Code = %d\n", code);

			if (code >= arr_size) {
				LOG("Code for secondary table out of bounds");
				return;
			}

			DR::syscall_info_t* sec_syscall = ((DR::syscall_info_t*)(syscall->num_out)) + code;
			syscall = sec_syscall;

			/*
			sysnum->secondary = code;
			/* get a new sysinfo */
			//sysinfo = syscall_lookup(*sysnum, true/*resolve 2ndary*/);
			//if (sysinfo == NULL) {
			//	sysnum->secondary = BASE_ENTRY_INDEX;
			//	sysinfo = syscall_lookup(*sysnum, true/*resolve 2ndary*/);
			//}
		}
	}

	//--Print syscall name and return based on set flags--//
	if (!(print_name(inMainImage, syscall, ctx, std, thread_id, tdata, syscall_name))) return;

	//--Prototype is known and args!= null -> Increase call counter and alloc syscall_t
	tdata->call_number += 1;
	tdata->syscallEntry = (syscall_tracer*)malloc(sizeof(syscall_tracer));

	//--Fill system call struct, args and counter---
	syscall_tracer *exeSc = tdata->syscallEntry;
	exeSc->syscall_number = syscall_number;
	exeSc->syscall_name = syscall->name;
	exeSc->syscall_counter = tdata->call_number;

	//(tdata->file_write)(tdata->threadid,OutFile,"Ins pointer before: %d\n", PIN_GetContextReg(ctx, REG_INST_PTR));

	//--Print tid, name and module (in this case ntdll.dll)--
	(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "~~%d~~ %u %s!%s", PIN_GetTid(), exeSc->syscall_counter, "ntdll.dll", exeSc->syscall_name);

	//--Test whether syscall known or not
	bool known = TEST(syscall->flags, SYSINFO_ALL_PARAMS_KNOWN);
	(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "%s\n", known ? "" : " (details not all known)");
	//--Print warning if not in main image
	if (!inMainImage) (tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "%u \tWARNING: Not in main image\n", exeSc->syscall_counter);

	//Fill arg info until null value is found within the MAX_ARGS_IN_ENTRY range
	int index;
	for (index = 0; /*index < syscall->arg_count*/; index++) {

		if (index == MAX_ARGS_IN_ENTRY) break;

		bool isNull = checkNull(&(syscall->arg[index]));
		if (!isNull) {

			//Fill pre
			(exeSc->arguments[index]).pre = true;

			//Fill context
			(exeSc->arguments[index]).drcontext = ctx;

			//Fill syscall standard
			(exeSc->arguments[index]).standard = std;

			//Fill ordinal
			(exeSc->arguments[index]).ordinal = (syscall->arg[index]).param;

			//Fill syscall number (drsys_sysnum_t)
			(exeSc->arguments[index]).sysnum = syscall->num;

			//Fill argument value
			(exeSc->arguments[index]).value = PIN_GetSyscallArgument(ctx, std, index);
			//OutFile << sc->arguments[index] << "\n";

			//Fill type index
			//(exeSc->arguments[index]).type = (syscall->arg[index]).misc;
			if (SYSARG_MISC_HAS_TYPE((syscall->arg[index]).flags)) {
				(exeSc->arguments[index]).type = type_from_arg_info(&(syscall->arg[index]));
				//(exeSc->arguments[index]).type = (syscall->arg[index]).misc;
			}
			else if (!TEST(SYSARG_INLINED, (syscall->arg[index]).flags)) {
				/* Rather than clutter up the tables with DRSYS_TYPE_STRUCT
				* for all the types we haven't given special enums to,
				* we mark the truly unknown and assume everything else is
				* a struct.
				*/
				(exeSc->arguments[index]).type = DRSYS_TYPE_STRUCT;
			}

			//Fill size when inlined
			(exeSc->arguments[index]).size = sizeof(void*);
			if (TEST(SYSARG_INLINED, (syscall->arg[index]).flags)) {

				int sz = (syscall->arg[index]).size;
				ASSERT(sz > 0, "inlined must have regular size in bytes");

				(exeSc->arguments[index]).size = sz;
				/* We zero out the top bits here which are uninitialized, to
				* avoid confusing the client.
				*/

				if ((exeSc->arguments[index]).size < sizeof(ADDRINT)) {
					if ((exeSc->arguments[index]).size == 1)
						(exeSc->arguments[index]).value &= 0xff;
					else if ((exeSc->arguments[index]).size == 2)
						(exeSc->arguments[index]).value &= 0xffff;
					else if ((exeSc->arguments[index]).size == 4)
						(exeSc->arguments[index]).value &= 0xffffffff;
					//arg->value64 = arg->value;
				}
			}

			//Fill type name
			//if (!(syscall->arg[index].type_name)){
			(exeSc->arguments[index]).type_name = arg_type_name((exeSc->arguments[index]).type, NULL);

			//}
			//else (exeSc->arguments[index]).type_name = syscall->arg[index].type_name;

			//Fill flags
			//(exeSc->arguments[index]).mode = mode_from_flags((syscall->arg[index]).flags);
			(exeSc->arguments[index]).flags = (syscall->arg[index]).flags;

			//Fill enum
			(exeSc->arguments[index]).enum_name = (syscall->arg[index]).type_name;

		}
		else break;
	}
	exeSc->argcount = index;

	//Fill retval type and name
	(exeSc->retval).type = syscall->return_type;
	(exeSc->retval).type_name = arg_type_name((exeSc->retval).type, NULL);

	//print_arg(buf, arg);

	//--Print args using prototype--
	for (int i = 0; i < index; i++) {

		drsys_arg_t curr_arg = (exeSc->arguments)[i];
		print_arg(&curr_arg, tdata, exeSc->syscall_counter);

		//Skip Double Entries
		if ((i + 1) < index && (curr_arg.ordinal == (exeSc->arguments)[i + 1].ordinal)) {
			i++;
		}

	}

}

//Function which sets return arg struct of syscall
static void
set_return_arg_vals(CONTEXT *ctx, SYSCALL_STANDARD std,
	drsys_arg_t *arg/*IN/OUT*/)
{
	arg->ordinal = -1;
	//arg->size = sz;
	arg->enum_name = NULL;

	/*
	if (have_retval) {
	get_syscall_result((syscall_info_t *)arg->syscall, pt,
	NULL, &arg->value64, NULL);
	arg->value = (ptr_uint_t)arg->value64;
	}
	else {
	arg->value = 0;
	arg->value64 = 0;
	}*/

	//arg->type = type;
	//arg->type_name = arg_type_name(type, type_name);

	arg->value = PIN_GetSyscallReturn(ctx, std);
	arg->flags = DRSYS_PARAM_RETVAL | SYSARG_INLINED;
}

//Syscall tracing AFTER syscall
void TracerSysCalls::traceSysCallExit(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std) {
	
	int errnumber;

	//--Get thread local storage--
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, thread_id));

	//--Get struct containing system call info---
	syscall_tracer *exeSc = tdata->syscallEntry;

	//If no syscall info then return
	if (!exeSc) {
		//buf_write(tdata->buffer, "%u|| No syscall info\n", thread_id);
		//LOG("No syscall info\n");
		return;
	}

	//--Check error number to determine whether system call has succeeded or not
	errnumber = PIN_GetSyscallErrno(ctx, std);
	if (!errnumber) {
		(tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "%u    succeeded =>\n", exeSc->syscall_counter);
	}
	else (tdata->file_write)(thread_id, tdata->buffer, tdata->OutFile, "%u    failed (error=0x%x) =>\n", exeSc->syscall_counter, errnumber);

	//--Set return value arg
	(exeSc->retval).size = sizeof(ADDRINT);
	set_return_arg_vals(ctx, std, &(exeSc->retval));

	//--Print args using prototype--
	for (int i = 0; i < exeSc->argcount; i++) {

		drsys_arg_t curr_arg = (exeSc->arguments)[i];
		curr_arg.pre = false;

		//Print only if output
		if (TEST(SYSARG_WRITE, curr_arg.flags)) {
			print_arg(&curr_arg, tdata, exeSc->syscall_counter);
		}

		//Skip Double Entries
		if ((i + 1) < exeSc->argcount && (curr_arg.ordinal == (exeSc->arguments)[i + 1].ordinal)) {
			i++;
		}

	}

	//Print retval
	print_arg(&(exeSc->retval), tdata, exeSc->syscall_counter);

	//Free syscall struct
	free(tdata->syscallEntry);
	tdata->syscallEntry = NULL;
}


// Empty syscall tracing AFTER syscall
void TracerSysCalls::traceSysCallExitEmpty() {
	globalCountAfterSyscalls++;
}

//-------------INIT FUNCTION---------------//

//Init hashmaps and flags
void TracerSysCalls::initSyscallTracer() {

	//Init map of constants
	size_t mapSize = get_const_arrays_num();
	for (int i = 0; i < mapSize; i++) {

		const_values_t *named_consts = const_struct_array[i];
		mapOfConsts.insert(std::make_pair(named_consts[0].const_name, named_consts));

	}

	//Init hash map from system call name to corresponding struct
	for (int i = 0; i < syscallNumber; i++) {
		mapOfSyscalls.insert(std::make_pair(syscall_ntdll_info[i].name, &syscall_ntdll_info[i]));
	}


	//Init main image options
	NO_MAIN_IMAGE_IGNORE = Config::getInstance()->getMainImageFlag();
	NO_MAIN_IMAGE_NOARGS = Config::getInstance()->getMainImageNoArgsFlag();

}
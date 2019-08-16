#include "PolymorphicCodeHandlerModule.h"
#include "Logging.h"
#include "ProcInfo.h"


PolymorphicCodeHandlerModule::PolymorphicCodeHandlerModule()
{
	this->trace_head = 0x0;
	this->trace_tail = 0x0;
	this->first_written_address_in_trace = 0x0;
}

// -------------------- BEGIN PIN ANALYSIS ROUTINE -------------------- //

// Check if we are about to execute an instruction in the trace that modifies the trace itself (polymorphic code)
VOID polymorphicCodeHandler(ADDRINT eip, ADDRINT write_addr, void *pcpatchesH){
	PolymorphicCodeHandlerModule *pcpatches = (PolymorphicCodeHandlerModule *)pcpatchesH;
	// check if the address that the program is about to write to is inside the current trace 
	if (write_addr >= pcpatches->getTraceHead() && write_addr <= pcpatches->getTraceTail()){
		/* DCD it seems they left this to future work */
		// we want to keep track only the first address written in the trace
		// because it will be the first executed (NOT TRUE, THE PROGRAM CAN
		// JUMP ON ANOTHER WRITTEN ADRESS AND SKIP THE FIRST ONE -- TO BE MODIFIED --)
		ADDRINT addr = pcpatches->getFirstWrittenAddressInMesmory();
		if (addr == 0x0 || write_addr < addr){
			 pcpatches->setFirstWrittenAddressInMesmory(write_addr);
		}
	}
}

// check if another instruction in the trace has written to the address that has to be
// executed (polymorphic code): then we have to break the trace and recompile it from
// the current eip address
VOID checkIfWrittenAddress(ADDRINT eip, CONTEXT * ctxt, UINT32 ins_size, void *pcpatchesH){
	PolymorphicCodeHandlerModule *pcpatches = (PolymorphicCodeHandlerModule *)pcpatchesH;
	// we have to check if the written address is between the eip and eip + inst_size because 
	// sometimes it can happen that only part of the original instruction is written
	// ES : push 0x20 -> push 0x30 (only the operand is written)
	ADDRINT addr = pcpatches->getFirstWrittenAddressInMesmory();
	if (addr >= eip && addr <= eip + ins_size){
		LOG_EVASION("Polymophic_evasion");
		PIN_SetContextReg(ctxt, REG_INST_PTR, eip);
		// reset the address
		pcpatches->setFirstWrittenAddressInMesmory(0x0);
		// break the trace
		PIN_ExecuteAt(ctxt);
	}
}

// -------------------- END PIN ANALYSIS ROUTINE -------------------- //

VOID PolymorphicCodeHandlerModule::inspectTrace(TRACE trace){
	// set the range of address in which the current trace resides
	this->trace_head = TRACE_Address(trace);
	this->trace_tail = trace_head + TRACE_Size(trace);
	for (BBL bbl = TRACE_BblHead(trace); BBL_Valid(bbl); bbl = BBL_Next(bbl))
    {
        for (INS ins = BBL_InsHead(bbl); INS_Valid(ins); ins = INS_Next(ins))
        {	
			// for each instruction we have to check if it has been overwritten by a previous instruction of the current trace (polymorphic code detection)
			INS_InsertCall(ins, IPOINT_BEFORE, AFUNPTR(checkIfWrittenAddress), 
				IARG_INST_PTR, // address of the instrumented instruction
				IARG_CONTEXT, // handle to CPU context
				IARG_UINT32, INS_Size(ins), 
				IARG_PTR, this,
				IARG_END);				
			for (UINT32 op = 0; op<INS_MemoryOperandCount(ins); op++) {
				if(INS_MemoryOperandIsWritten(ins,op)){	
					// for each write operation we have to check if the traget address is inside the current trace (attempt to write polimorfic code)
					INS_InsertCall(ins, IPOINT_BEFORE, AFUNPTR(polymorphicCodeHandler),
						IARG_INST_PTR, // address of the instrumented instruction
						IARG_MEMORYOP_EA, op, // effective address of memory operand
						IARG_PTR, this,
						IARG_END);		
				}	
			}					
        }
    }
}

// -------------------- getter and setter -------------------- //

ADDRINT PolymorphicCodeHandlerModule::getTraceHead(){
	return this->trace_head;
}

ADDRINT PolymorphicCodeHandlerModule::getTraceTail(){
	return this->trace_tail;
}

ADDRINT PolymorphicCodeHandlerModule::getFirstWrittenAddressInMesmory(){
	return this->first_written_address_in_trace;
}

VOID PolymorphicCodeHandlerModule::setFirstWrittenAddressInMesmory(ADDRINT first_written_address_in_trace){
	this->first_written_address_in_trace = first_written_address_in_trace;
}
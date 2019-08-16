#include "WriteInterval.h"

#define OVERLAP(x1, y1, x2, y2)		( ((x1) <= (y2)) && ((x2) <= (y1)) )

// create a WriteInterval for the address interval of the current write
WriteInterval::WriteInterval(ADDRINT addr_begin, ADDRINT addr_end, BOOL heap_flag) {
	this->addr_begin = addr_begin;
	this->addr_end = addr_end;
	this->broken_flag = 0;
	this->cur_number_jmp = 0;
	this->heap_flag = heap_flag;
	this->detectedFunctions = 0;
}

//----------------------- GETTER / SETTER -----------------------

ADDRINT WriteInterval::getAddrBegin(){
	return this->addr_begin;
}

ADDRINT WriteInterval::getAddrEnd(){
	return this->addr_end;
}

BOOL WriteInterval::getBrokenFlag(){
	return this->broken_flag;
}

ADDRINT WriteInterval::getThreshold(){
	return (this->addr_end - this->addr_begin)/20;
}

UINT32 WriteInterval::getCurrNumberJMP(){
	return this->cur_number_jmp;
}

BOOL WriteInterval::getHeapFlag(){
	return this->heap_flag;
}

UINT32 WriteInterval::getDetectedFunctions(){
	return this->detectedFunctions;
}


void WriteInterval::setBrokenFlag(BOOL flag){
	this->broken_flag = flag;
}

void WriteInterval::incrementCurrNumberJMP(){
	this->cur_number_jmp = this->cur_number_jmp +1 ;
}

void WriteInterval::setDetectedFunctions(UINT32 numberOfFunctions){
	this->detectedFunctions = numberOfFunctions;
}


//----------------------- PUBLIC METHODS -----------------------

//check if the value of the given address is between addr_begin and addr_end
BOOL WriteInterval::checkUpdate(ADDRINT start_addr, ADDRINT end_addr){
	//if the address interval ISN'T before or after the current interval then we have to udate the instance
	
	/* TODO: the original check seems naive, unless addr_begin > addr_end
	 * return !( (start_addr < this->addr_begin && end_addr < this->addr_begin) ||
	 *	      (start_addr > this->addr_end && end_addr > this->addr_end) ); */
	//return !(end_addr < this->addr_begin || start_addr > this->addr_end);
	//return (start_addr <= this->addr_end) && (this->addr_begin <= end_addr)
	return OVERLAP(start_addr, end_addr, this->addr_begin, this->addr_end);
}

//update the current obj
VOID WriteInterval::update(ADDRINT start_addr, ADDRINT end_addr, BOOL heap_flag){
	this->heap_flag = heap_flag;
	// if the new write overlaps the WriteInteval at the end we update the end_addr 
	if ( (start_addr >= this->addr_begin) && (start_addr <= this->addr_end) && (end_addr > this->addr_end) ){
		this->addr_end = end_addr;
	}
	// if the new write overlaps the WriteInteval at the begin we update the addr_begin
	else if ( (start_addr < this->addr_begin) && (end_addr >= this->addr_begin) && (end_addr <= this->addr_end) ){
		this->addr_begin = start_addr;
	}
	//if the new write contains the Write interval we update both endpoints
	else if ( (start_addr < this->addr_begin) && (end_addr > this->addr_begin) ){
		this->addr_begin = start_addr;
		this->addr_end = end_addr;
	}
}

//check if the ip reside inside the WriteInterval
BOOL WriteInterval::checkInside(ADDRINT ip){
	return (ip >= this->addr_begin && ip <= this->addr_end);
}
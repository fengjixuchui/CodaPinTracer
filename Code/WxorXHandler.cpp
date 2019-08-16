#include "WxorXHandler.h"
#include "porting.h"


WxorXHandler* WxorXHandler::instance = 0;

WxorXHandler* WxorXHandler::getInstance() {
	if (instance == nullptr)
		instance = new WxorXHandler();
	return instance;
}

WxorXHandler::WxorXHandler(){
	this->pid = W::GetCurrentProcessId();
	this->WriteSetContainer.insert(std::pair<W::DWORD,std::vector<WriteInterval>>
										    (this->pid, std::vector<WriteInterval>()));
}


//----------------------- PUBLIC METHODS -----------------------

/* DCD: we can just use INS_IsMemoryWrite() */
//check if the current instruction is a write instruction
//BOOL WxorXHandler::isWriteINS(INS ins){
//	return INS_IsMemoryWrite(ins);
//}

// - Calculate the target of the write (end_addr)
// - Update an existing WriteInterval / create a new one
VOID WxorXHandler::writeSetManager(ADDRINT start_addr, UINT32 size){
	/* DCD: this->WriteSetContainer.at(this->pid); */
	std::vector<WriteInterval> &currentWriteSet = map_at(this->WriteSetContainer, this->pid);
	this->_writeSetManager(start_addr,size,currentWriteSet);
	
}

//return the WriteItem index inside our vector that broke the W xor X index
WriteInterval* WxorXHandler::getWxorXinterval(ADDRINT ip){
	std::vector<WriteInterval> &currentWriteSet = map_at(this->WriteSetContainer, this->pid);

	for (std::vector<WriteInterval>::iterator item = currentWriteSet.begin(); item != currentWriteSet.end(); ++item) {
		// if the IP is in a memory area that was previously written
		// we return the address of the WriteInterval that has to be
		// analyzed by our heuristics
		if (item->checkInside(ip)) return &(*item);
	}

	return NULL; // no memory area to return (i.e., no violation)	
}

// - Calculate the target of the write (end_addr)
// - Update an existing WriteInterval / create a new one
VOID WxorXHandler::writeSetManager(ADDRINT startAddr, UINT32 size,W::DWORD cur_pid){	
	WriteSet &currentWriteSet = this->WriteSetContainer[cur_pid];
	this->_writeSetManager(startAddr, size, currentWriteSet);
}

//return the WriteItem index inside our vector that broke the W xor X index
std::vector<WriteInterval>& WxorXHandler::getWxorXintervalInjected(W::DWORD pid){
	std::vector<WriteInterval> &currentWriteSet = this->WriteSetContainer[pid];
	return currentWriteSet;

}

VOID WxorXHandler::incrementCurrJMPNumber(int writeItemIndex){
	std::vector<WriteInterval> &currentWriteSet = map_at(WriteSetContainer, this->pid);
	currentWriteSet[writeItemIndex].incrementCurrNumberJMP();
}

//Clear the currentWriteSet for injection in pid different from current programs 
VOID WxorXHandler::clearWriteSet(W::DWORD pid){
	if(pid != this->pid){
		WriteSetContainer[pid].clear(); // = std::vector<WriteInterval>();
	}
}

VOID WxorXHandler::displayWriteSet(W::DWORD pid){	
	std::vector<WriteInterval> &currentWriteSet = map_at(WriteSetContainer, pid);
	for(unsigned index=0; index <  currentWriteSet.size(); index++) {
		LOG_INFO("WriteInterval number %u  start %08x end %08x",index,currentWriteSet.at(index).getAddrBegin(),currentWriteSet.at(index).getAddrEnd());
	}
}

VOID WxorXHandler::_writeSetManager(ADDRINT startAddr, UINT32 size, WxorXHandler::WriteSet &currentWriteSet) {
	// check if the write is on the heap
	bool isHeap = ProcInfo::getInstance()->searchHeapMap(startAddr);

	// calculate the end address of the write
	ADDRINT endAddr = startAddr + size;

	/* TODO: original comment was: "We can't use an iterator because,
	* after a certain amount of writeinterval, it will broke"
	* for (size_t i = 0; i < currentWriteSet.size(); i++) */

	// iterate through writeSet to check whether we have to update one WriteInterval
	for (WriteSet::iterator it = currentWriteSet.begin(); it != currentWriteSet.end(); ++it) {
		if ((*it).checkUpdate(startAddr, endAddr)) { // TODO use OVERLAP macro here?
			(*it).update(startAddr, endAddr, isHeap);
			return; // TODO is one enough?
		}
	}

	// create and add it to our writeSet
	currentWriteSet.push_back(WriteInterval(startAddr, endAddr, isHeap));
}
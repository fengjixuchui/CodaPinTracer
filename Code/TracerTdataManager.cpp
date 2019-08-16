#include "TracerTdataManager.h"

//Init tracer tdata
void TracerTdataManager::initTracerTdata(THREADID tid,bluepill_tls* tdata) {

	//--Init counter--//
	tdata->call_number = 0;

	//--Init shadow stack--//
	tdata->shadowStack = new vector<stackEntry>;

	//--Init syscall struct--//
	tdata->syscallEntry = NULL;

	//--Allocate and init buffer--//
	tdata->buffer = (buf_info_t*)malloc(sizeof(buf_info_t));
	memset((tdata->buffer)->buf, 0, sizeof(char)*OUTBUF_SIZE);
	(tdata->buffer)->sofar = 0;

	//--Initialize output file--//
	tdata->OutFile = NULL;

	//--Initialize function pointer to function where file is opened--//
	tdata->file_write = &open_file;

	//--Initialize thread id--//
	tdata->threadid = tid;

}

//Dealloc tracer tdata
void TracerTdataManager::deallocTracerTdata(THREADID tid, bluepill_tls* tdata) {
	
	//--Dealloc shadow stack--//
	//-> Free each element of shadow stack
	//-> Empty shadow stack vector
	//-> Delete shadowStack
	for (std::vector<stackEntry>::iterator it = ((*(tdata->shadowStack)).begin()); it != ((*(tdata->shadowStack)).end()); ++it)
	{
		free(it->apiInfo);
	}
	vector<stackEntry>().swap(*(tdata->shadowStack)); //Force memory deallocation (Altough not rly necessary)
	delete(tdata->shadowStack);

	//--Dealloc syscall entry--//
	if (tdata->syscallEntry != NULL) {
		free(tdata->syscallEntry);
	}

	//--Close File--//
	//-> Flush leftovers in buffer
	//-> Close file
	(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "#eof\n");
	buf_flush(tdata->buffer, tdata->OutFile); //-> Write to file whats left in buffer
	fclose(tdata->OutFile);

	//--Dealloc Buffer--//
	free(tdata->buffer);
}
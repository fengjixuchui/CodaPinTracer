#include "TracerWriteFile.h"
#include "tls.h"
#include "Config.h"

//Flush contents of buffer
void buf_flush(buf_info_t* buffer, FILE* OutFile) {

	if (buffer->sofar > 0) {

		fwrite(buffer->buf, sizeof(char), buffer->sofar, OutFile);

		//fflush(fd);

		//Empty buffer
		memset(buffer->buf, 0, sizeof(char)*OUTBUF_SIZE);
		buffer->sofar = 0;
	}

}

//Main function used to write in buffer
void buf_write(THREADID threadid, buf_info_t* buffer, FILE* OutFile, const char* format, ...) {

	//Local buffer where to dump the contents in input
	char local_buf[OUTBUF_SIZE] = { 0 };
	//Number of written chars written in local buffer to write in main buffer
	int towrite = 0;

	va_list argptr;
	va_start(argptr, format);

	//Get the input data in local buffer
	towrite = vsnprintf(local_buf, OUTBUF_SIZE, format, argptr);
	//Check for errors
	if (towrite < 0) {
		LOG("Error while writing in buffer\n");
		return;
	}
	//Bytes to write do not fit in buffer
	if (towrite >= OUTBUF_SIZE) {

		//Flush leftovers
		buffer->buf[(buffer->sofar)] = '\0'; //Not needed strictly
		buf_flush(buffer, OutFile);

		//Dynamically allocate enough memory for chars to be written to file
		char* store_chars = (char*)malloc(towrite + 1);

		//+1 for \0
		int to_write_directly = vsnprintf(store_chars, towrite + 1, format, argptr);

		//Write directly to file
		fwrite(store_chars, sizeof(char), to_write_directly, OutFile);

		//Free dynamically allocated memory
		free(store_chars);

		return;
	}

	//If buffer has enough space, copy contents of local buffer
	if (buffer->sofar + towrite <= OUTBUF_SIZE) {

		//Copy contents
		memcpy((buffer->buf) + (buffer->sofar), local_buf, towrite);
		//Update sofar
		buffer->sofar += towrite;

		//If buffer is full, flush
		if (buffer->sofar == OUTBUF_SIZE) {
			buf_flush(buffer, OutFile);
		}
	}
	//If buffer does not have enough space, flush contents of buffer and copy new input in it
	else {

		buffer->buf[(buffer->sofar)] = '\0'; //Not needed strictly

											 //flush
		buf_flush(buffer, OutFile);

		//Copy contents
		memcpy(buffer->buf, local_buf, towrite);

		//Update sofar
		(buffer->sofar) += towrite;
	}

	//Should be invoked after va_start
	va_end(argptr);
};

//Function invoked to carry out the first write to a buffer of a thread
void buf_write_begin(buf_info_t* buffer, FILE* OutFile, const char* format, va_list argptr) {

	//Local buffer where to dump the contents in input
	char local_buf[OUTBUF_SIZE] = { 0 };
	//Number of written chars written in local buffer to write in main buffer
	int towrite = 0;

	//Get the input data in local buffer
	towrite = vsprintf(local_buf, format, argptr);
	//Check for errors
	if (towrite < 0) {
		LOG("Error while writing in buffer\n");
		return;
	}
	//Bytes to write do not fit in buffer
	if (towrite >= OUTBUF_SIZE) {

		//Flush leftovers
		buffer->buf[(buffer->sofar)] = '\0'; //Not needed strictly
		buf_flush(buffer, OutFile);

		//Dynamically allocate enough memory for chars to be written to file
		char* store_chars = (char*)malloc(towrite + 1);

		//+1 for \0
		int to_write_directly = vsnprintf(store_chars, towrite + 1, format, argptr);

		//Write directly to file
		fwrite(store_chars, sizeof(char), to_write_directly, OutFile);

		//Free dynamically allocated memory
		free(store_chars);

		return;
	}

	//If buffer has enough space, copy contents of local buffer
	if (buffer->sofar + towrite <= OUTBUF_SIZE) {
		//Copy contents
		memcpy((buffer->buf) + (buffer->sofar), local_buf, towrite);
		//Update sofar
		buffer->sofar += towrite;

		//If buffer is full, flush
		if (buffer->sofar == OUTBUF_SIZE) {
			buf_flush(buffer, OutFile);
		}
	}
	//If buffer does not have enough space, flush contents of buffer and copy new input in it
	else {
		buffer->buf[(buffer->sofar)] = '\0'; //Not needed strictly

											 //flush
		buf_flush(buffer, OutFile);

		//Copy contents
		memcpy(buffer->buf, local_buf, towrite);

		//Update sofar
		(buffer->sofar) += towrite;
	}

};

//Function for opening file during instrumentation
void open_file(THREADID threadid, buf_info_t* buffer, FILE* OutFile, const char* format, ...) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//--Open output file--//
	//Get thread id
	std::string tid;
	std::stringstream strstream_thr;
	strstream_thr << threadid;
	strstream_thr >> tid;

	cout << "[INFO] Opening file" << endl;

	// Get custom name from configuration
	string customname = (Config::getInstance())->getOutputFileName();
	if (customname.empty()) {

		// Get full path of exe
		string pre = "TracedCalls.";
		string filen = (Config::getInstance())->getExeName();
		
		// Retrieve only exe name rather than full path
		size_t pos = filen.find_last_of("/\\");
		if (pos != std::string::npos) {
			filen.erase(0, pos + 1);
		};

		// Get timestamp
		std::string timestamp;
		std::stringstream strstream_ts;
		strstream_ts << long(time(NULL));
		strstream_ts >> timestamp;

		// Concatenate the above together and add file path to get filename
		string filename = ((Config::getInstance())->getTracerDir())+"\\"+pre + filen + "." + tid + "." + timestamp + ".out";
		cout << filename << endl;
		tdata->OutFile = fopen(filename.c_str(), "wb");

	}
	else {

		// Remove backslashes if present
		size_t pos = customname.find_last_of("/\\");
		if (pos != std::string::npos) {
			customname.erase(0, pos + 1);
		};

		tdata->OutFile = fopen((((Config::getInstance())->getTracerDir()) + "\\" + tid + "." + customname + ".out").c_str(), "wb");

	}

	//--Update function pointer in TLS--//
	tdata->file_write = &buf_write;

	//--Write passed contents to file--//
	//->https://stackoverflow.com/questions/3530771/passing-variable-arguments-to-another-function-that-accepts-a-variable-argument
	//->Due to use of variadic arguments the only way to do this is to create a buf_write alternative version which takes a va_list as input
	va_list argptr;
	va_start(argptr, format);

	buf_write_begin(buffer, tdata->OutFile, format, argptr);

	va_end(argptr);

}
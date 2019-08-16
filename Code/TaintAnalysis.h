#ifndef TAINT_ANALYSIS_H
#define TAINT_ANALYSIS_H
#include "pin.H"

#include "libdft/libdft_api.h"
#include "libdft/tagmap.h"
#include "HiddenElements.h"

#include <vector>

typedef std::vector<OS_THREAD_ID> osThreadIdVec;
 
extern REG thread_ctx_ptr;
extern tag_t hooks_seeds[HOOK_NUMENUM];

void loadTaintLib();
void instrumentForTaintCheck(INS ins);
void registerThreadTaintAnalysis(THREADID tid, thread_ctx_t* thread_ctx);
void unregisterThreadTaintAnalysis(THREADID tid);

void addTaintMemory(ADDRINT addr, UINT32 size, tag_t tag, bool reset);
void clearTaintMemory(ADDRINT addr, UINT32 size);
void addTaintRegister(thread_ctx_t *thread_ctx, int gpr, tag_t tags[], bool reset);
void clearTaintRegister(thread_ctx_t *thread_ctx, int gpr);

void getRegisterTaints(thread_ctx_t *thread_ctx, int gpr, tag_t *tags);
void getMemoryTaints(ADDRINT addr, tag_t* tags, UINT32 size);
void setTaintSource(int hookID, tag_t tag); // hookID belongs to HiddenElements.h
bool queryTaintSource(int hookID, tag_t *tag);

osThreadIdVec getRunningThreads();
thread_ctx_t* lookupThreadCtx(OS_THREAD_ID os_tid);

#endif

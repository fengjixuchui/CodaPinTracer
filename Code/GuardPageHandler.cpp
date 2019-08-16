#include "GuardPageHandler.h"
#include "Logging.h"

GuardPageHandler* GuardPageHandler::instance = nullptr;

GuardPageHandler* GuardPageHandler::getInstance() {

	if (instance == nullptr)
		instance = new GuardPageHandler();

	return instance;

}

void GuardPageHandler::addGuardPage(ADDRINT start, ADDRINT end) {

	if (!isPagePresent(start) && !isPagePresent(end)) {
		//cout << hex << start << " - " << end << endl;
		guardMemory.insert(std::pair<ADDRINT, ADDRINT>(start, end));
	}

}

bool GuardPageHandler::isPagePresent(ADDRINT start) {

	for (std::map<ADDRINT, ADDRINT>::iterator item = this->guardMemory.begin(); item != this->guardMemory.end(); ++item) {

		if (item->first <= start && item->second >= start) {
			return true;
		}
	}

	return false;
}


void GuardPageHandler::removeGuardPage(ADDRINT start) {

	for (std::map<ADDRINT, ADDRINT>::iterator item = this->guardMemory.begin(); item != this->guardMemory.end(); ++item) {

		if (item->first <= start && item->second >= start) {
			this->guardMemory.erase(item);
			return;
		}
	}

}

void GuardPageHandler::guardPageCheck(CONTEXT *ctx, THREADID tid, ADDRINT reg) {

	GuardPageHandler *gh = GuardPageHandler::getInstance();
	if (gh->isPagePresent(reg)) {
		LOG_EVASION("[GuardPage] GuardPageAccess on call instruction!");
		gh->removeGuardPage(reg);
		ExceptionHandler *eh = ExceptionHandler::getInstance();
		eh->setCode(0x80000001L); // TODO STATUS_GUARD_PAGE_VIOLATION from NTSTATUS
		eh->raisePendingException(ctx, tid, reg);
	}

}
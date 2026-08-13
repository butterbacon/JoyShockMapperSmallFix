#pragma once
#include "InputHelpers.h"

class CmdRegistry;


namespace JSM
{

class AutoLoad : public PollingThread
{
public:
	AutoLoad(CmdRegistry* commandRegistry, bool start);

	virtual ~AutoLoad() = default;

	void FlushLastModule();

private:
	bool AutoLoadPoll(void* param);
	
	string lastModuleName;
};

} //JSM
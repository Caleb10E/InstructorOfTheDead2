#pragma once

#include "ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(TestingModule, All, All);

class FTestingModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;

	virtual void ShutdownModule() override;
};
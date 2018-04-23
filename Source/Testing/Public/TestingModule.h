#pragma once

#include "ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(TestingModule, All, All);

class TestingModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;

	virtual void ShutdownModule() override;
};
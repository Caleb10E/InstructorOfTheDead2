#pragma once

#include "Engine.h"
#include "UnrealNetwork.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"

DECLARE_LOG_CATEGORY_EXTERN(TestingModule, All, All);

class FTestingModule : public IModuleInterface
{
public:
	virtual void StartupModule() override; ///< Setup Function. Logs startup.

	virtual void ShutdownModule() override; ///< Teardown Function. Logs shutdown.
};
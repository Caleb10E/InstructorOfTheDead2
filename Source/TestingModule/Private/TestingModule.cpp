#include "TestingModule.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"

DEFINE_LOG_CATEGORY(TestingModule);

IMPLEMENT_GAME_MODULE(FTestingModule, TestingModule);

#define LOCTEXT_NAMESPACE "MyGameEditor"

void FTestingModule::StartupModule()
{
	UE_LOG(TestingModule, Warning, TEXT("Testing module Initialized!"));
}

void FTestingModule::ShutdownModule()
{
	UE_LOG(TestingModule, Warning, TEXT("Testing module has shut down"));
}

#undef LOCTEXT_NAMESPACE

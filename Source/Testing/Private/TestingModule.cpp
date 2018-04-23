#include "TestingModule.h"

//DEFINE_LOG_CATEGORY(TestingModule);

// #define LOCTEXT_NAMESPACE "FTestingModule"

IMPLEMENT_GAME_MODULE(TestingModule, TestingModule);

void TestingModule::StartupModule()
{
	UE_LOG(TestingModule, Warning, TEXT("Testing module Initialized!"));
}

void TestingModule::ShutdownModule()
{
	UE_LOG(TestingModule, Warning, TEXT("Testing module has shut down"));
}

#undef LOCTEXT_NAMESPACE

//IMPLEMENT_MODULE(FTestingModule, TestingModule)
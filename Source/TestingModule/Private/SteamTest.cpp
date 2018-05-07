// Fill out your copyright notice in the Description page of Project Settings.

#include "SteamTest.h"
#include "AutomationTest.h"
#include "AutomationCommon.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FSteamTest, "GameTests.BlackBox.Connection ShouldCreateSessionInstance", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)



bool FSteamTest::RunTest(const FString& Parameters)
{
	// Make the test pass by returning true, or fail by returning false.

	bool results = false;
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (Subsystem != nullptr) {
		results = true;

	}

	return results;
}
// Fill out your copyright notice in the Description page of Project Settings.
#include "MyHealthComponentTesting.h"
#include "AutomationTest.h"
#include "AutomationCommon.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyHealthComponentTesting, "GameTests.WhiteBox.HealthComponent HealthTest1", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyHealthComponentTesting::RunTest(const FString& Parameters)
{
	// Make the test pass by returning true, or fail by returning false.
	return true;
}
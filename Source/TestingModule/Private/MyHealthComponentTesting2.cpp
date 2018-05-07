// Fill out your copyright notice in the Description page of Project Settings.
#include "MyHealthComponentTesting2.h"
#include "AutomationTest.h"
#include "AutomationCommon.h"
#include "HealthTestObj.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyHealthComponentTesting2, "GameTests.WhiteBox.HealthComponent HealthTest2", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyHealthComponentTesting2::RunTest(const FString& Parameters)
{
	AHealthTestObj* hptest = new AHealthTestObj();
	return hptest->checkHealthIncrease(-45.0f);
	// Make the test pass by returning true, or fail by returning false.
}
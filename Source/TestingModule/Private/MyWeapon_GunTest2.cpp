// Fill out your copyright notice in the Description page of Project Settings.
#include "MyWeapon_GunTest2.h"
#include "AutomationTest.h"
#include "AutomationCommon.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyWeapon_GunTest2, "GameTests.WhiteBox.GunComponent GunTest2", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyWeapon_GunTest2::RunTest(const FString& Parameters)
{
	// Make the test pass by returning true, or fail by returning false.
	return true;
}
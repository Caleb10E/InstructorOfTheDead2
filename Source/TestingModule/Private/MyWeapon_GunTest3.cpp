// Fill out your copyright notice in the Description page of Project Settings.

#include "MyWeapon_GunTest3.h"
#include "AutomationTest.h"
#include "AutomationCommon.h"
#include "WeaponTestObj.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyWeapon_GunTest3, "GameTests.WhiteBox.GunComponent BulletDoesNotExceedMaximumDistance", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyWeapon_GunTest3::RunTest(const FString& Parameters)
{

	return true;

}
// Fill out your copyright notice in the Description page of Project Settings.

#include "MyWeapon_GunTest3.h"
#include "AutomationTest.h"
#include "AutomationCommon.h"
#include "WeaponTestObj.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyWeapon_GunTest3, "GameTests.WhiteBox.GunComponent GunTest3", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyWeapon_GunTest3::RunTest(const FString& Parameters)
{
	AWeaponTestObj* weptest = new AWeaponTestObj();
	FVector bulletStart = FVector(0.0, 0.0, 0.0);
	FVector bulletEnd = FVector(-5.0, 0.0, 0.0);
	FVector eyeStart = FVector(0.0, 0.0, 0.0);
	FVector eyeEnd = FVector(1.0, 0.0, 0.0);


	return weptest->calcVector(bulletStart, bulletEnd, eyeStart, eyeEnd);
	// Make the test pass by returning true, or fail by returning false.

}
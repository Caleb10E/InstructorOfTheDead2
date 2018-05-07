// Fill out your copyright notice in the Description page of Project Settings.

#include "MyWeapon_GunTest2.h"
#include "AutomationTest.h"
#include "AutomationCommon.h"
#include "WeaponTestObj.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyWeapon_GunTest2, "GameTests.WhiteBox.GunComponent ShouldNotFireBackwards__Invalid_Trajectory__Should_Fail", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyWeapon_GunTest2::RunTest(const FString& Parameters)
{
	AWeaponTestObj* weptest = new AWeaponTestObj();
	FVector bulletStart = FVector(0.0, 0.0, 0.0);
	FVector bulletEnd = FVector(-5.0, 0.0, 0.0);
	FVector eyeStart = FVector(0.0, 0.0, 0.0);
	FVector eyeEnd = FVector(1.0, 0.0, 0.0);

	


	return weptest->calcVector(bulletStart, bulletEnd, eyeStart, eyeEnd);
	// Make the test pass by returning true, or fail by returning false.

}
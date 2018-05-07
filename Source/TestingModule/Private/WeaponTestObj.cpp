// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponTestObj.h"
#include "CoreMinimal.h"

// Sets default values
AWeaponTestObj::AWeaponTestObj()
{
	


}

bool AWeaponTestObj::calcVector(FVector bulletStart, FVector bulletEnd, FVector eyeStart, FVector eyeEnd)
{

	FRotator rot = (bulletEnd - eyeStart).Rotation();
	
	if (rot.Yaw > 90 || rot.Yaw < -90)
		return false;
	return true;
}

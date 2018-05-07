// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponTestObj.h"
#include "CoreMinimal.h"

// Sets default values
AWeaponTestObj::AWeaponTestObj()
{
	


}

bool AWeaponTestObj::calcVector(FVector bulletStart, FVector bulletEnd, FVector eyeStart, FVector eyeEnd)
{

	FRotator rot = (eyeStart - bulletEnd).Rotation();
	//FVector calc = rot.Vector();



	if (true)
		return false;
	return true;
}



//float angle = FVector::DotProduct(bulletEnd - bulletStart, eyeEnd - eyeStart);
//float angle2 = FVector::PointPlaneDist(bulletEnd, eyeStart, eyeStart);
// Fill out your copyright notice in the Description page of Project Settings.

#include "RocketLauncher.h"

void ARocketLauncher::Fire()
{

	if (Role < ROLE_Authority)
	{
		ServerFire();
		return;
	}


	AActor* MyOwner = GetOwner();
	if (MyOwner && RocketLauncherClass)
	{
		

		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);
		FRotator  MuzzleRotation = MeshComp->GetSocketRotation(MuzzleSocketName);

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GetWorld()->SpawnActor<AActor>(RocketLauncherClass, MuzzleLocation, EyeRotation, SpawnParams);
	}
}

void ARocketLauncher::ServerFire_Implementation()
{
	Fire();
}

bool ARocketLauncher::ServerFire_Validate()
{
	return true;
}

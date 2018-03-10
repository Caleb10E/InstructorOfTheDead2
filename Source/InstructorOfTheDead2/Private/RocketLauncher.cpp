// Fill out your copyright notice in the Description page of Project Settings.

#include "RocketLauncher.h"

void ARocketLauncher::Fire()
{
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
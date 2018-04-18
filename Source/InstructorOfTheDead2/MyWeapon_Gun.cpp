// Fill out your copyright notice in the Description page of Project Settings.

#include "MyWeapon_Gun.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "InstructorOfTheDead2.h"

// Sets default values
AMyWeapon_Gun::AMyWeapon_Gun()
{

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	MuzzleSocketName = "MuzzleSocket";

	TracerTargetName = "Target";

	BaseDamage = 20.0f;
}



void AMyWeapon_Gun::Fire()
{
	//Trace the world fomr pawn eyes to cross hair location 
	
	
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FVector ShortDirection = EyeRotation.Vector();

		FVector TraceEnd = EyeLocation + (ShortDirection * 10000);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;
		QueryParams.bReturnPhysicalMaterial = true;

		//Particle "target parameter idf we blocking target
		FVector TracerEndPoint = TraceEnd;

		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, COLLISION_WEAPON, QueryParams))
		{
		
			AActor * HitActor = Hit.GetActor();

			

			

			EPhysicalSurface SurfaceType = UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());

			float ActualDamage = BaseDamage;
			if (SurfaceType == SURFACE_FLESHVULNERABLE)
			{
				ActualDamage *= 4.0f;
			}

			UGameplayStatics::ApplyPointDamage(HitActor, ActualDamage, ShortDirection, Hit, MyOwner->GetInstigatorController(), this, DamageType);
			UParticleSystem* SelectedEffect = nullptr;

			switch (SurfaceType)
			{
			case SURFACE_FLESHDEFAULT:
			case SURFACE_FLESHVULNERABLE:
				SelectedEffect = FleshImpactEffects;
				break;
			default:
				SelectedEffect = DefaultImpactEffect;
				break;
			}


			if (SelectedEffect)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), SelectedEffect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
			}

			TracerEndPoint = Hit.ImpactPoint;
		}

		//DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.0f, 0, 1.0f);

		
		PlayFireEffects(TracerEndPoint);
	}

	
}

void AMyWeapon_Gun::PlayFireEffects(FVector TraceEnd)
{

	if (MuzzleEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleEffect, MeshComp, MuzzleSocketName);
	}



	if (TracerEffect)
	{
		FVector MuzzleLocation = MeshComp->GetSocketLocation(MuzzleSocketName);

		UParticleSystemComponent * TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), TracerEffect, MuzzleLocation);

		if (TracerComp)
		{
			TracerComp->SetVectorParameter(TracerTargetName, TraceEnd);
		}

	}

	APawn* MyOwner = Cast<APawn>(GetOwner());
	if (MyOwner)
	{
		APlayerController* PC = Cast<APlayerController>(MyOwner->GetController());
		if (PC)
		{
			PC->ClientPlayCameraShake(FireCamShake);
		}
	}
}

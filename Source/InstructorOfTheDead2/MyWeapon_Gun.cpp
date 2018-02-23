// Fill out your copyright notice in the Description page of Project Settings.

#include "MyWeapon_Gun.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AMyWeapon_Gun::AMyWeapon_Gun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

}

// Called when the game starts or when spawned
void AMyWeapon_Gun::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyWeapon_Gun::Fire()
{
	//Trace the world fomr pawn eyes to cross hair location 
	
	
	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		MyOwner->GetActorEyesViewPoint(EyeLocation,EyeRotation);

		FVector ShortDirection = EyeRotation.Vector();

		FVector TraceEnd = EyeLocation * (ShortDirection * 10000);
		
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(MyOwner);
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;

		FHitResult Hit;
		if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, ECC_Visibility, QueryParams))
		{
			//blocking hit process damage
			AActor * HitActor = Hit.GetActor();

			UGameplayStatics::ApplyPointDamage(HitActor, 20.0f, ShortDirection,Hit,MyOwner->GetInstigatorController(),this,DamageType);


		}
		
		DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.0f, 0, 1.0f);
	}

	
}

// Called every frame
void AMyWeapon_Gun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


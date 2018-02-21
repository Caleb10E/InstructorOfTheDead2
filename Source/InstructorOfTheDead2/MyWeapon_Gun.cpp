// Fill out your copyright notice in the Description page of Project Settings.

#include "MyWeapon_Gun.h"


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

// Called every frame
void AMyWeapon_Gun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


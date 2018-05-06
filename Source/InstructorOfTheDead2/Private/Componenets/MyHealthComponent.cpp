// Fill out your copyright notice in the Description page of Project Settings.

#include "MyHealthComponent.h"


// Sets default values for this component's properties
UMyHealthComponent::UMyHealthComponent()
{
	DefaultHealth = 100;
	DefaultLives = 5;
}


// Called when the game starts
void UMyHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	
	AActor * MyOwner = GetOwner();
	if (MyOwner)
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UMyHealthComponent::HandleTakeAnyDamage);
	}

	
	
	Health = DefaultHealth;
	Lives = DefaultLives;
}

void UMyHealthComponent::HandleTakeAnyDamage(AActor * DamagedActor, float Damage, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{

	if (Damage <= 0.0f)
	{
		return;
	}


	//Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
	Health += Damage;


	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));
}




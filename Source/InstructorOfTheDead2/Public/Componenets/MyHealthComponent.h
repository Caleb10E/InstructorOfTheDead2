// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyHealthComponent.generated.h"


UCLASS( ClassGroup=(IOD2), meta=(BlueprintSpawnableComponent) )
class INSTRUCTOROFTHEDEAD2_API UMyHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyHealthComponent();

protected:
	
	virtual void BeginPlay() override; ///< Callback Function called when the game starts

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
		float Health; ///< The player's current health

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
		int Lives; ///< Number of lives a player has left.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
		int DefaultLives; ///< Default number of lives a player starts with

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
	float DefaultHealth; /// Default health a player starts with (Note: 0 = max)

	UFUNCTION()
		/**
		* Subscribes the Health Component to its Player Owner. When the Player object takes damage, this component is notified through this method
		*
		* @param Damaged Actor The parent Actor
		* @param Damage Amount of damage taken
		* @param DamageType the type of damage taken
		* @param InstigatedBy Reference to the damage source's controller
		* @param DamageCauser The source (actor) of the damage
		*/
		void HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
};

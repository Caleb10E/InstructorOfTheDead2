// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "LevelBoundary.generated.h"

/**
 * 
 */
UCLASS()
class INSTRUCTOROFTHEDEAD2_API ALevelBoundary : public ATriggerVolume
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override; ///< Callback Function.

public:
	ALevelBoundary();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor); ///< Overriden Collisons Checking Method used to respawn a player if they went "out of bounds". Called when the collsion begins.

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OverActor); ///< Overriden Collisons Checking Method used to respawn a player if they went "out of bounds". Called After the collision ends.

	FVector Respawn = FVector(700, 0, 8500); ///< Respawn Location
	
	
	
};

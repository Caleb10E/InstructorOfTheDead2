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
	virtual void BeginPlay() override;

public:
	ALevelBoundary();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OverActor);

	FVector Respawn = FVector(700, 0, 20000);
	
	
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWeapon_Gun.generated.h"

class USkeltalMeshComponent;
class UDamageType;

UCLASS()
class INSTRUCTOROFTHEDEAD2_API AMyWeapon_Gun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyWeapon_Gun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(visibleAnywhere,BlueprintReadOnly,Category ="Components")
	USkeletalMeshComponent * MeshComp;

	UFUNCTION(BlueprintCallable,Category= "Weapon")
	void Fire();
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

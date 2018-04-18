// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWeapon_Gun.generated.h"

class USkeltalMeshComponent;
class UDamageType;
class UParticleSystem;

UCLASS()
class INSTRUCTOROFTHEDEAD2_API AMyWeapon_Gun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyWeapon_Gun();

protected:

	UPROPERTY(visibleAnywhere,BlueprintReadOnly,Category ="Components")
	USkeletalMeshComponent * MeshComp;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocketName;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		FName TracerTargetName;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem * MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem * DefaultImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* FleshImpactEffects;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem * TracerEffect;

	void PlayFireEffects(FVector TraceEnd);

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<UCameraShake> FireCamShake;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	float BaseDamage;

public:	

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		virtual void Fire();
	
};

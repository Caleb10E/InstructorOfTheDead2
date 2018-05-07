// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWeapon_Gun.generated.h"

class USkeltalMeshComponent;
class UDamageType;
class UParticleSystem;

USTRUCT()
struct FHitScanTrace
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TEnumAsByte<EPhysicalSurface> SurfaceType; ///< Determines whether the target is a player or non-player object

	UPROPERTY()
	FVector_NetQuantize TraceTo; ///< Vector that the projectile follows
};

UCLASS()
class INSTRUCTOROFTHEDEAD2_API AMyWeapon_Gun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyWeapon_Gun();

protected:

	UPROPERTY(visibleAnywhere,BlueprintReadOnly,Category ="Components")
	USkeletalMeshComponent * MeshComp; ///< Pointer to wireframe. Used for skinning.

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Weapon")
	TSubclassOf<UDamageType> DamageType; ///< Determines the damage type

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocketName; ///< Reference to the endpoint of the gun object

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		FName TracerTargetName; ///< Reference to the tracer object
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem * MuzzleEffect; ///< Handles Particle Effects for the gun's muzzle

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem * DefaultImpactEffect; ///< Handles default particle effect for when a projectile imapcts an object

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* FleshImpactEffects; ///< Handles default particle effect for when a projectile impacts a a player

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem * TracerEffect; ///< Handles the particle effect for creating the "tracer" vector

	/**
	* Generates a Fire Effect based on muzzle and tracer effects. 
	*
	* @param TraceEnd Used to draw the tracer effect if used
	*/
	void PlayFireEffects(FVector TraceEnd);

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<UCameraShake> FireCamShake; ///< Shakes the camera when a gun is fired.

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	float BaseDamage; ///< The default damage amount

	
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerFire(); ///< Has a player "fire" from the server's end and then replicate the action.


	UPROPERTY(ReplicatedUsing=On_Rep_HitScanTrace)
	FHitScanTrace HitScanTrace; ///< Stores the 

	UFUNCTION()
	void On_Rep_HitScanTrace(); ///< Sets HitScanTrace() to replicate.

	/**
	* Generates a Impact Effect based on the Surfacetype hit.
	*
	* @param SurfaceType Indicates whether the surface is a player or non-player object
	* @param ImpactPoint The location where the projectile hit
	*/
	void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint);

public:	

	/**
	* Fires the gun. Short circuits, if called on a client, and serverfire() is called instead.
	*/
	UFUNCTION(BlueprintCallable, Category = "Weapon")
		virtual void Fire();
	
};

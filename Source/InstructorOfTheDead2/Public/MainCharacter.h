// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class AMyWeapon_Gun;
class ARocketLauncher;

UCLASS()
class INSTRUCTOROFTHEDEAD2_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	
	virtual void BeginPlay() override; ///< Callback function called when the game starts or when spawned
	
	void MoveForward(float Value); ///< Defines the MoveFoward action for the player

	void MoveRight(float Value); ///< Defines how a player turns. Note, this defines moving right AND LEFT. We are idiots and can't name methods properly to save our life.

	void BeginCrouch(); ///< Defines the action taken when crouch action player

	void EndCrouch(); ///< ///< Defines the MoveFoward action for the player


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UCameraComponent* CameraComp; ///< Reference to the player camera

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USpringArmComponent* SpringArmComp; ///< Reference to the SpringArm (controls where firearms attach).


	bool bWantsToZoom; ///< Boolean to determine if player is zooming. Used by BeginZoom() and EndZoom()

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		float ZoomedFOV; ///< Maximum zoomed-in Field of Vision

	UPROPERTY(EditDefaultsOnly, Category = "Player", meta = (ClampMin = 0.1, ClampMax = 100))
		float ZoomInterpSpeed; ///< How fast to zoom.

	float DefaultFOV; ///< The default field of vision for the player

	void BeginZoom(); ///< Actions to perform when zooming begins.

	void EndZoom(); ///< Actions to perform when zooming ends.

	UPROPERTY(Replicated)
	AMyWeapon_Gun * CurrentWeapon; ///< A pointer to the players current weapon
	//UPROPERTY(Replicated)
	//ARocketLauncher * CurrentWeapon;


	UPROPERTY(EditDefaultsOnly, Category = "Player")
		TSubclassOf<AMyWeapon_Gun> StarterWeaponClass; ///< Exposes the startingweapon to the Editor

		UPROPERTY(VisibleDefaultsOnly, Category = "Player")
		FName WeaponAttachSocketName; ///< Reference to the point on the player where the weapon can be attached

	void Fire();



public:	
	virtual void Tick(float DeltaTime) override; ///< Actions to be done on every tick

	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override; ///< Bind functionality to user input

	
	virtual FVector GetPawnViewLocation() const override; ///< Vector the player location

	bool playerCanFire; ///< Sets whether the player can fire

	void ResetFire(); ///< Resets the fire action allowing the player to shoot again.

	FTimerHandle FireDelay; ///< The delay between subsequent shots.

};

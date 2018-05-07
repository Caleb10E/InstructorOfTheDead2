// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyWeapon_Gun.h"
#include "RocketLauncher.generated.h"

/**
*
*/
UCLASS()
class INSTRUCTOROFTHEDEAD2_API ARocketLauncher : public AMyWeapon_Gun
{
	GENERATED_BODY()

		public:

		virtual void Fire() override; ///< Fires the gun. Short circuits, if called on a client, and serverfire() is called instead. Temporarily, overrides parent class method to solve a bug.


		UFUNCTION(Server, Reliable, WithValidation)
			void ServerFire(); ///< Has a player "fire" from the server's end and then replicate the action. Temporarily, overrides parent class method to solve a bug.

	UPROPERTY(EditDefaultsOnly, Category = "RocketLauncher")
		TSubclassOf<AActor> RocketLauncherClass; ///< Exposes Class to the Editor

};

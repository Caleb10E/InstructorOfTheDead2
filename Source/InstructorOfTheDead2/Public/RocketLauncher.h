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

		virtual void Fire() override;


		UFUNCTION(Server, Reliable, WithValidation)
			void ServerFire();

	UPROPERTY(EditDefaultsOnly, Category = "RocketLauncher")
		TSubclassOf<AActor> RocketLauncherClass;

};

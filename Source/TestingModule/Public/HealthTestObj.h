// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

class TESTINGMODULE_API AHealthTestObj
{
	
	
public:	
	// Sets default values for this actor's properties
	AHealthTestObj();
	
	bool checkHealthIncrease(float damage);

	void setHealth(float hp);

	float getHealth();

	void setOldHealth(float hp);

	float getOldHealth();

private:
	float health;
	float oldHealth;
};

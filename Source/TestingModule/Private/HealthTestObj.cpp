// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthTestObj.h"
#include "CoreMinimal.h"

// Sets default values
AHealthTestObj::AHealthTestObj()
{
	setHealth(100);
	setOldHealth(getHealth());
}

bool AHealthTestObj::checkHealthIncrease(float damage)
{
	float newHealth = getHealth() + damage;
	setOldHealth(getHealth());
	setHealth(newHealth);

	if (getOldHealth() > getHealth())
		return false;
	
	return true;
}

void AHealthTestObj::setHealth(float hp)
{
	health = hp;
}

float AHealthTestObj::getHealth()
{
	return health;
}

void AHealthTestObj::setOldHealth(float hp)
{
	oldHealth = hp;
}

float AHealthTestObj::getOldHealth()
{
	return oldHealth;
}
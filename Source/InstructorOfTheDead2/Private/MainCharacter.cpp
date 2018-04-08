// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "MainCharacter.h"
#include "../Public/MainCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "InstructorOfTheDead2/InstructorOfTheDead2GameMode.h"
#include "DrawDebugHelpers.h"


// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMainCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector() * Value);
}

void AMainCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector() * Value);
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	//If this not work  use this = SetupPlayerInputComponent
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);

	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
}

void AMainCharacter::HitBoundary()
{
	print("Overlap Begin");
	auto newPC = GetWorld()->GetFirstPlayerController();
	//this->Destroy();
	GetWorld()->GetAuthGameMode<AInstructorOfTheDead2GameMode>()->RestartPlayer(newPC);
}


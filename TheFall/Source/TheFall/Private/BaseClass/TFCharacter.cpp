// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseClass/TFCharacter.h"

// Sets default values
ATFCharacter::ATFCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATFCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATFCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


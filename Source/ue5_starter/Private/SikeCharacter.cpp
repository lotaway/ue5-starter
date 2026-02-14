// Fill out your copyright notice in the Description page of Project Settings.


#include "SikeCharacter.h"

// Sets default values
ASikeCharacter::ASikeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASikeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASikeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASikeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


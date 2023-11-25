// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"

ASCharacter::ASCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


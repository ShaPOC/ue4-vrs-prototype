// Fill out your copyright notice in the Description page of Project Settings.

#include "MotoricMimicking.h"
#include "AvateeringCharacterPawnClass.h"


// Sets default values
AAvateeringCharacterPawnClass::AAvateeringCharacterPawnClass()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAvateeringCharacterPawnClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAvateeringCharacterPawnClass::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AAvateeringCharacterPawnClass::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}


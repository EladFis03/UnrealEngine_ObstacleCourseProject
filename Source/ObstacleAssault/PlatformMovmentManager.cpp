// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformMovmentManager.h"

// Sets default values
APlatformMovmentManager::APlatformMovmentManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlatformMovmentManager::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();

	FString Name = GetName();

	// var 1 -> what type of log category, 2nd -> the level of the log
	// 3rd -> function that tells us the text we need to print in log
	//UE_LOG(LogTemp, Display, TEXT("Configured Moved Distance: %f"), MoveDistance);
	UE_LOG(LogTemp, Display, TEXT("BeginPlay: %s"), *Name);

}

// Called every frame (onAfterSimulation)
void APlatformMovmentManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

/* MovePlatform - Move the platform forwards */
void APlatformMovmentManager::MovePlatform(float DeltaTime)
{
	// Reverse diraction of motion if gone too far
	if(ShouldPlatformReturn())
	{
		// Getting hold of the end point that we want the platform to be at
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MoveDistance;
		// Setting the actor at the end point
		SetActorLocation(StartLocation);
		// Setting velocity backwareds
		PlatformVelocity = -PlatformVelocity;

	}
	else 
	{
		// Get current location
		FVector CurrentLocation = GetActorLocation();
		// Add vector to that location
		CurrentLocation += PlatformVelocity * DeltaTime;
		// Set the location
		SetActorLocation(CurrentLocation);
	}
}

/* MovePlatform - Rotate the platform every onAfterSimulation */
void APlatformMovmentManager::RotatePlatform(float DeltaTime)
{
	// Set the rotation
	// Fixing in cases we reach -180 rotation and so on
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

/* ShouldPlatformReturn - return's if a platform should move back */
bool APlatformMovmentManager::ShouldPlatformReturn() const
{
	return GetDistanceMoved() >= MoveDistance;
}

/* GetDistanceMoved - return's the distance of platform from it's starting point */
float APlatformMovmentManager::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}
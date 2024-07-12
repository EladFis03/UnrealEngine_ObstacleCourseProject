// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformMovmentManager.generated.h"

UCLASS()
class OBSTACLEASSAULT_API APlatformMovmentManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformMovmentManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

	void MovePlatform(float DeltaTime);

	void RotatePlatform(float DeltaTime);

	bool ShouldPlatformReturn() const;

	float GetDistanceMoved() const;

	// to make value editable anywhere -> name of function without ;
	// and line below is the value
	UPROPERTY(EditAnywhere, Category="Movement")
	FVector PlatformVelocity = FVector(100, 0, 0);

	UPROPERTY(EditAnywhere, Category="Movement")
	float MoveDistance = 100;

	UPROPERTY(EditAnywhere, Category="Rotation")
	FRotator RotationVelocity;

	FVector StartLocation;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorCPP.generated.h"

UCLASS()
class TESTD_API AMyActorCPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorCPP();

	TArray<FVector2D> ActorLoc;
	int32 evCnt;
	int totDist;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PrintActorLoc();
	int32 createEvent();

private:
	void TriggerEventWithProbability(float Probability);
	void PrintFVector2DArray();

	void move();
	int32_t step();
	
	float distance(FVector2D first, FVector2D second);
};

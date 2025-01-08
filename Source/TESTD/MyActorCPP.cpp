// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorCPP.h"

// Sets default values
AMyActorCPP::AMyActorCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    ActorLoc.Add(FVector2D(0.0f, 0.0f));

    totDist = 0;
    evCnt = 0;
}

// Called when the game starts or when spawned
void AMyActorCPP::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
    UE_LOG(LogTemp, Warning, TEXT("Begin Game!"));

    for (int i = 0; i < 10; i++) {
        UE_LOG(LogTemp, Warning, TEXT("index : %d"), i);

        move();
    }

    // PrintActorLoc();

    // TriggerEventWithProbability(10);
}

// Called every frame
void AMyActorCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int32 AMyActorCPP::createEvent()
{
    TriggerEventWithProbability(50);

    return 0;
}

float AMyActorCPP::distance(FVector2D first, FVector2D second)
{
    float dx = first.X - second.X;
    float dy = first.Y - second.Y;

    return FMath::Sqrt(dx * dx + dy * dy);
}

void AMyActorCPP::move() 
{
    FVector2D firstValue = ActorLoc.Last();

    for (int i = 0; i < 10; i++) {
        int32_t x = step();
        // UE_LOG(LogTemp, Warning, TEXT("x -> %d"), x);

        int32_t y = step();
        // UE_LOG(LogTemp, Warning, TEXT("y -> %d"), y);

        if (x + y >= 2) {
            UE_LOG(LogTemp, Error, TEXT("Unable To Move!"));
            continue;
        } else {
            if (ActorLoc.Num() > 0)
            {
                FVector2D lastValue = ActorLoc.Last();

                ActorLoc.Add(FVector2D(x + lastValue.X, y + lastValue.Y));

                UE_LOG(LogTemp, Warning, TEXT("Actor Now: X = %f, Y = %f"), ActorLoc.Last().X, ActorLoc.Last().Y);
            }
        }
    }

    totDist += distance(firstValue, ActorLoc.Last());
    UE_LOG(LogTemp, Warning, TEXT("Distance = %f"), distance(firstValue, ActorLoc.Last()));
    UE_LOG(LogTemp, Error, TEXT("Total Distance = %d"), totDist);
    
    createEvent();
    UE_LOG(LogTemp, Error, TEXT("Total Event Triggered = %d"), evCnt);
}

int32_t AMyActorCPP::step() 
{
    return FMath::RandRange(0, 1);
}

void AMyActorCPP::TriggerEventWithProbability(float Probability)
{
    int32 RandomValue = FMath::RandRange(1, 100);
    if (RandomValue <= Probability)
    {
        UE_LOG(LogTemp, Error, TEXT("Event Triggered!"));
        ++evCnt;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Event Not Triggered"));
    }
}

void AMyActorCPP::PrintFVector2DArray()
{
    for (int32 i = 0; i < ActorLoc.Num(); i++)
    {
        const FVector2D& Vec = ActorLoc[i];
        UE_LOG(LogTemp, Warning, TEXT("Vector %d: X = %f, Y = %f"), i, Vec.X, Vec.Y);
    }
}

void AMyActorCPP::PrintActorLoc()
{
    PrintFVector2DArray();
}


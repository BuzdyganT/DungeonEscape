// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();
	float MyFloat = 10.0f;
	float *FloatPtr = &MyFloat;
	
	float Result = *FloatPtr + 5;
	UE_LOG(LogTemp, Display, TEXT("%f"), Result);
	
	*FloatPtr = 30.0f;
	UE_LOG(LogTemp, Display, TEXT("%f"), Result);

	// --
	FVector MyVector = FVector(1.0, 1.0, 1.0);
	FVector *MyVectorPtr = &MyVector;
	
	MyVectorPtr->X = 3.5;
	MyVectorPtr->Y = 4.5;
	MyVectorPtr->Z = 5.5;
	UE_LOG(LogTemp, Display, TEXT("MyVector: %s"), *(MyVector.ToCompactString()));

	
}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	
}


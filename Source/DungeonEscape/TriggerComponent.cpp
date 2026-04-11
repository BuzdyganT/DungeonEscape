// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	UE_LOG(LogTemp, Display, TEXT("TriggerComponent::UTriggerComponent"));
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("%s works"), *GetOwner()->GetName());
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UE_LOG(LogTemp, Display, TEXT("TriggerComponent is ticking"));

}

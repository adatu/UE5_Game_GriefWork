// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RPGItem.h"
#include "RPGItemInterface.h"
#include "../InteractableInterface.h"
#include "SpawnableItem.generated.h"

UCLASS()
class RPG_API ASpawnableItem :
	public AActor,
	public IRPGItemInterface,
	public IInteractableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnableItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	FRPGItem ItemInfo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void Interact_Implementation(AActor* Actor) override;
};

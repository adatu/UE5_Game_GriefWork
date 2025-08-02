// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory/InventoryInterface.h"
#include "Inventory/RPGInventoryComponent.h"
#include "Inventory/SpawnableItem.h"

// Sets default values
ASpawnableItem::ASpawnableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ItemInfo.ObjectClass = GetClass();

}

// Called when the game starts or when spawned
void ASpawnableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpawnableItem::Interact_Implementation(AActor* Actor)
{
	if (!Actor || !Actor->Implements<UInventoryInterface>())
	{
		return;
	}

	URPGInventoryComponent* Inventory = Cast<IInventoryInterface>(Actor)->Execute_GetInventoryComponent(Actor);
	if (!Inventory)
	{
		return;
	}

	bool ItemAdded = Inventory->AddItem(ItemInfo);
	if (ItemAdded)
	{
		Destroy();
	}
}



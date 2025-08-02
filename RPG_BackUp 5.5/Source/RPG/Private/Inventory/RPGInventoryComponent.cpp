// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/RPGInventoryComponent.h"

// Sets default values for this component's properties
URPGInventoryComponent::URPGInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

bool URPGInventoryComponent::AddItem(FRPGItem Item, int32 Count)
{
	if (Count < 1)
	{
		return false;
	}

	FRPGInventoryItem* ExistingItem = Items.FindByPredicate([&](const FRPGInventoryItem& InventoryItem)
		{
			return InventoryItem.Item == Item;
		});

	if (ExistingItem)
	{
		if (Item.MaxCountInInventory <= 0)
		{
			ExistingItem->Count += Count;
			OnItemAdded(Item, Count, Items.Find(*ExistingItem), ExistingItem->Count);
			return true;
		}

		int32 CountBefore = ExistingItem->Count;
		ExistingItem->Count = FMath::Clamp(ExistingItem->Count + Count, 0, Item.MaxCountInInventory);
		if (CountBefore < ExistingItem->Count)
		{
			OnItemAdded(Item, Count, Items.Find(*ExistingItem), ExistingItem->Count);
			return true;
		}

		return false;
	}

	FRPGInventoryItem NewItem = FRPGInventoryItem(Item, Item.MaxCountInInventory <= 0 ? Count : FMath::Clamp(Count, 0, Item.MaxCountInInventory));
	int32 ItemIndex = Items.Add(NewItem);
	OnItemAdded(Item, NewItem.Count, ItemIndex, NewItem.Count);
	return true;
}

bool URPGInventoryComponent::RemoveItem(int32 ItemIndex, int32 Count)
{
	if (Count < 1 || !Items.IsValidIndex(ItemIndex))
	{
		return false;
	}

	FRPGInventoryItem& Item = Items[ItemIndex];
	Item.Count -= Count;
	if (Item.Count <= 0)
	{
		FRPGInventoryItem ItemBefore = Item;
		Items.RemoveAt(ItemIndex);
		OnItemRemoved(ItemBefore.Item, Count, INDEX_NONE, 0);
		return true;
	}

	OnItemRemoved(Item.Item, Count, ItemIndex, Item.Count);
	return true;
}


// Called when the game starts
void URPGInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URPGInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


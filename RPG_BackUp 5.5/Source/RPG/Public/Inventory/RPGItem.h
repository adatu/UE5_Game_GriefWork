// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RPGItem.generated.h"

USTRUCT(BlueprintType)
struct FRPGItem
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "RPG|Inventory")
	FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	FString CategoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	UTexture2D* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	UTexture2D* CategoryIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	int32 MaxCountInInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	FGameplayTagContainer Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	TMap<FString, FString> Metadate;

	UPROPERTY(BlueprintReadOnly, Category = "RPG|Inventory")
	TObjectPtr<UClass>ObjectClass;

	bool operator==(const FRPGItem& Other) const {
		return ID == Other.ID && Level == Other.Level;
	}
};


USTRUCT(BlueprintType)
struct FRPGInventoryItem
{
	GENERATED_USTRUCT_BODY();

	FRPGInventoryItem() {
		Item = FRPGItem();
		Count = 0;
	}

	FRPGInventoryItem(FRPGItem RPGItem, int32 ItemCount) {
		Item = RPGItem;
		Count = ItemCount;
	}



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	FRPGItem Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
	int32 Count;

	bool operator==(const FRPGInventoryItem& Other) const {
		return Item == Other.Item && Count == Other.Count;
	}
};

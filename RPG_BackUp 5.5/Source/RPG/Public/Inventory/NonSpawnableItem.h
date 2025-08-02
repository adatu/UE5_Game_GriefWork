// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RPGItemInterface.h"
#include "RPGItem.h"
#include "NonSpawnableItem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,Abstract)
class RPG_API UNonSpawnableItem : public UObject, public IRPGItemInterface
{
	GENERATED_BODY()
	
public:
	UNonSpawnableItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPG|Inventory")
		FRPGItem ItemInfo;
};

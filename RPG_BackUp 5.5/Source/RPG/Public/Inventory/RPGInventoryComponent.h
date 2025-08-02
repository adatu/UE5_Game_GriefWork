// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RPGItem.h"
#include "RPGInventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable )
class RPG_API URPGInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URPGInventoryComponent();

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	virtual bool AddItem(FRPGItem Item, int32 Count = 1);

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	virtual bool RemoveItem(int32 ItemIndex, int32 Count = 1);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPG|Inventory")
	void OnItemAdded(FRPGItem Item, int32 Count, int32 ItemIndex, int32 NewCount);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPG|Inventory")
	void OnItemRemoved(FRPGItem Item, int32 Count, int32 ItemIndex, int32 NewCount);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "RPG|Inventory")
	void UseItem(int32 ItemIndex);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = "RPG | Inventory")
	TArray<FRPGInventoryItem>Items;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

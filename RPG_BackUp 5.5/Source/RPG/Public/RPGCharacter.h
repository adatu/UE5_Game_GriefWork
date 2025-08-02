// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GAS/RPGAttributeSet.h"
#include "GameFramework/Character.h"
#include "RPGCharacter.generated.h"



UCLASS()
class RPG_API ARPGCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARPGCharacter();

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual int32 GetCharacterLevel() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetMaxStamina() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetAdrenaline() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetMaxAdrenaline() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetExperiencePoints() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Attributes")
	virtual float GetMaxExperiencePoints() const;

	UFUNCTION(BlueprintCallable, Category = "RPG Abilities")
	bool ActvateAbilitiesWithTag(FGameplayTagContainer AbilityTags, bool AllowRemoteActivation = true);

	UFUNCTION(BlueprintImplementableEvent)
	void OnHealthChanged(float GeltaValue, AActor* Causer);

	UFUNCTION(BlueprintImplementableEvent)
	void OnDead();

	UFUNCTION(BlueprintImplementableEvent)
	void OnStaminaChanged(float GeltaValue, AActor* Causer);

	UFUNCTION(BlueprintImplementableEvent)
	void OnAdrenalineChanged(float GeltaValue, AActor* Causer);

	UFUNCTION(BlueprintImplementableEvent)
	void OnXPChanged(float DeltaValue);

	UFUNCTION(BlueprintImplementableEvent)
	void OnChaaracterLevedUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	class UAbilitySystemComponent* AbiltySystemComponent;

	UPROPERTY()
	class URPGAttributeSet* AttributeSet;

	UPROPERTY(EditAnywhere, Category = "RPG Abilities")
	int32 CharacterLevel;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RPG Attributes")
	TSubclassOf<class UGameplayEffect> DefaultAttributeEffects;

	UPROPERTY(EditAnywhere, Category = "RPG Attributes|Debug")
	bool EnableTestAbilities;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "RPG Attributes|Debug")
	TArray<TSubclassOf<class UGameplayAbility>> TestAbilities;

	virtual void SetTestAbilities();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void HandHealthChange(float DeltaValue, AActor* Causer);

	virtual void HandStaminaChange(float DeltaValue, AActor* Causer);

	virtual void HandAdrenalineChange(float DeltaValue, AActor* Causer);

	virtual void HandExperiencePointsChange(float DeltaValue);

	virtual void HandCharacterLevelUp();

	virtual void ApplyDefaultAttributeEffects();

	virtual void RemoveDefaultAttributeEffects();
 };
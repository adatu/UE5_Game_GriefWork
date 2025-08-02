// Fill out your copyright notice in the Description page of Project Settings.

#include "RPGCharacter.h"
#include "GAS/RPGAbilitySystemComponent.h"

// Sets default values
ARPGCharacter::ARPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbiltySystemComponent = CreateDefaultSubobject<URPGAbilitySystemComponent>("AbilitySystemComponent");
	AbiltySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<URPGAttributeSet>("AttributeSet");

	CharacterLevel = 1;
}

int32 ARPGCharacter::GetCharacterLevel() const
{
	return CharacterLevel;
}

float ARPGCharacter::GetHealth() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetHealth();
}

float ARPGCharacter::GetMaxHealth() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetMaxHealth();
}

float ARPGCharacter::GetStamina() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetStamina();
}

float ARPGCharacter::GetMaxStamina() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetMaxStamina();
}

float ARPGCharacter::GetAdrenaline() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetAdrenaline();
}

float ARPGCharacter::GetMaxAdrenaline() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetMaxAdrenaline();
}

float ARPGCharacter::GetExperiencePoints() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetExpriencePoints();
}

float ARPGCharacter::GetMaxExperiencePoints() const
{
	if (!AttributeSet)
	{
		return 0.0f;
	}

	return AttributeSet->GetMaxExpriencePoints();
}

bool ARPGCharacter::ActvateAbilitiesWithTag(FGameplayTagContainer AbilityTags, bool AllowRemoteActivation)
{
	if (!AbiltySystemComponent)
	{
		return false;
	}

	return AbiltySystemComponent->TryActivateAbilitiesByTag(AbilityTags, AllowRemoteActivation);
}





// Called when the game starts or when spawned
void ARPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARPGCharacter::SetTestAbilities()
{
	if (!AbiltySystemComponent)
	{
		return;
	}

	if (GetLocalRole() == ROLE_Authority)
	{
		for (TSubclassOf<UGameplayAbility>& TestAbility : TestAbilities)
		{
			AbiltySystemComponent->GiveAbility(FGameplayAbilitySpec(TestAbility, GetCharacterLevel(), INDEX_NONE, this));
		}
	}
}

// Called every frame
void ARPGCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARPGCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (!AbiltySystemComponent)
	{
		return;
	}

	if (EnableTestAbilities)
	{
		SetTestAbilities();
	}

	ApplyDefaultAttributeEffects();
}


UAbilitySystemComponent* ARPGCharacter::GetAbilitySystemComponent() const
{
	return AbiltySystemComponent;
}

void ARPGCharacter::HandHealthChange(float DeltaValue, AActor* Causer)
{
	OnHealthChanged(DeltaValue, Causer);
	if (GetHealth() <= 0)
	{
		OnDead();
	}
}

void ARPGCharacter::HandStaminaChange(float DeltaValue, AActor* Causer)
{
	OnStaminaChanged(DeltaValue, Causer);
}

void ARPGCharacter::HandAdrenalineChange(float DeltaValue, AActor* Causer)
{
	OnAdrenalineChanged(DeltaValue, Causer);
}

void ARPGCharacter::HandExperiencePointsChange(float DeltaValue)
{
	OnXPChanged(DeltaValue);
}

void ARPGCharacter::HandCharacterLevelUp()
{
	CharacterLevel += 1;
	RemoveDefaultAttributeEffects();
	ApplyDefaultAttributeEffects();
	OnChaaracterLevedUp();
}

void ARPGCharacter::ApplyDefaultAttributeEffects()
{
	FGameplayEffectContextHandle EffectContext = AbiltySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);
	FGameplayEffectSpecHandle NewHandle = AbiltySystemComponent->MakeOutgoingSpec(DefaultAttributeEffects, CharacterLevel, EffectContext);
	if (NewHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveHandle = AbiltySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbiltySystemComponent);
	}
}

void ARPGCharacter::RemoveDefaultAttributeEffects()
{
	FGameplayEffectQuery Query;
	Query.EffectSource = this;
	AbiltySystemComponent->RemoveActiveEffects(Query);
}






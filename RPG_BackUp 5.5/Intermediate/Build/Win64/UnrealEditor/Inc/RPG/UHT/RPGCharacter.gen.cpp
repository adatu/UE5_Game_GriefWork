// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/RPGCharacter.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
RPG_API UClass* Z_Construct_UClass_ARPGCharacter();
RPG_API UClass* Z_Construct_UClass_ARPGCharacter_NoRegister();
RPG_API UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin Class ARPGCharacter Function ActvateAbilitiesWithTag
struct Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics
{
	struct RPGCharacter_eventActvateAbilitiesWithTag_Parms
	{
		FGameplayTagContainer AbilityTags;
		bool AllowRemoteActivation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Abilities" },
		{ "CPP_Default_AllowRemoteActivation", "true" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static void NewProp_AllowRemoteActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowRemoteActivation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventActvateAbilitiesWithTag_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
void Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_AllowRemoteActivation_SetBit(void* Obj)
{
	((RPGCharacter_eventActvateAbilitiesWithTag_Parms*)Obj)->AllowRemoteActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_AllowRemoteActivation = { "AllowRemoteActivation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGCharacter_eventActvateAbilitiesWithTag_Parms), &Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_AllowRemoteActivation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGCharacter_eventActvateAbilitiesWithTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGCharacter_eventActvateAbilitiesWithTag_Parms), &Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_AllowRemoteActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "ActvateAbilitiesWithTag", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::RPGCharacter_eventActvateAbilitiesWithTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::RPGCharacter_eventActvateAbilitiesWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execActvateAbilitiesWithTag)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_GET_UBOOL(Z_Param_AllowRemoteActivation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActvateAbilitiesWithTag(Z_Param_AbilityTags,Z_Param_AllowRemoteActivation);
	P_NATIVE_END;
}
// End Class ARPGCharacter Function ActvateAbilitiesWithTag

// Begin Class ARPGCharacter Function GetAdrenaline
struct Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics
{
	struct RPGCharacter_eventGetAdrenaline_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetAdrenaline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetAdrenaline", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::RPGCharacter_eventGetAdrenaline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::RPGCharacter_eventGetAdrenaline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetAdrenaline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetAdrenaline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetAdrenaline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAdrenaline();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetAdrenaline

// Begin Class ARPGCharacter Function GetCharacterLevel
struct Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics
{
	struct RPGCharacter_eventGetCharacterLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::RPGCharacter_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::RPGCharacter_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetCharacterLevel

// Begin Class ARPGCharacter Function GetExperiencePoints
struct Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics
{
	struct RPGCharacter_eventGetExperiencePoints_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetExperiencePoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetExperiencePoints", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::RPGCharacter_eventGetExperiencePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::RPGCharacter_eventGetExperiencePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetExperiencePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExperiencePoints();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetExperiencePoints

// Begin Class ARPGCharacter Function GetHealth
struct Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics
{
	struct RPGCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::RPGCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::RPGCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetHealth

// Begin Class ARPGCharacter Function GetMaxAdrenaline
struct Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics
{
	struct RPGCharacter_eventGetMaxAdrenaline_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetMaxAdrenaline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMaxAdrenaline", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::RPGCharacter_eventGetMaxAdrenaline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::RPGCharacter_eventGetMaxAdrenaline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetMaxAdrenaline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxAdrenaline();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetMaxAdrenaline

// Begin Class ARPGCharacter Function GetMaxExperiencePoints
struct Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics
{
	struct RPGCharacter_eventGetMaxExperiencePoints_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetMaxExperiencePoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMaxExperiencePoints", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::RPGCharacter_eventGetMaxExperiencePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::RPGCharacter_eventGetMaxExperiencePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetMaxExperiencePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxExperiencePoints();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetMaxExperiencePoints

// Begin Class ARPGCharacter Function GetMaxHealth
struct Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics
{
	struct RPGCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::RPGCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::RPGCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetMaxHealth

// Begin Class ARPGCharacter Function GetMaxStamina
struct Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics
{
	struct RPGCharacter_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::RPGCharacter_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::RPGCharacter_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetMaxStamina

// Begin Class ARPGCharacter Function GetStamina
struct Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics
{
	struct RPGCharacter_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::RPGCharacter_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::RPGCharacter_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGCharacter::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class ARPGCharacter Function GetStamina

// Begin Class ARPGCharacter Function OnAdrenalineChanged
struct RPGCharacter_eventOnAdrenalineChanged_Parms
{
	float GeltaValue;
	AActor* Causer;
};
static const FName NAME_ARPGCharacter_OnAdrenalineChanged = FName(TEXT("OnAdrenalineChanged"));
void ARPGCharacter::OnAdrenalineChanged(float GeltaValue, AActor* Causer)
{
	RPGCharacter_eventOnAdrenalineChanged_Parms Parms;
	Parms.GeltaValue=GeltaValue;
	Parms.Causer=Causer;
	UFunction* Func = FindFunctionChecked(NAME_ARPGCharacter_OnAdrenalineChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeltaValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::NewProp_GeltaValue = { "GeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnAdrenalineChanged_Parms, GeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnAdrenalineChanged_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::NewProp_GeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::NewProp_Causer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "OnAdrenalineChanged", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::PropPointers), sizeof(RPGCharacter_eventOnAdrenalineChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGCharacter_eventOnAdrenalineChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARPGCharacter Function OnAdrenalineChanged

// Begin Class ARPGCharacter Function OnChaaracterLevedUp
static const FName NAME_ARPGCharacter_OnChaaracterLevedUp = FName(TEXT("OnChaaracterLevedUp"));
void ARPGCharacter::OnChaaracterLevedUp()
{
	UFunction* Func = FindFunctionChecked(NAME_ARPGCharacter_OnChaaracterLevedUp);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ARPGCharacter_OnChaaracterLevedUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_OnChaaracterLevedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "OnChaaracterLevedUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnChaaracterLevedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_OnChaaracterLevedUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARPGCharacter_OnChaaracterLevedUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_OnChaaracterLevedUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARPGCharacter Function OnChaaracterLevedUp

// Begin Class ARPGCharacter Function OnDead
static const FName NAME_ARPGCharacter_OnDead = FName(TEXT("OnDead"));
void ARPGCharacter::OnDead()
{
	UFunction* Func = FindFunctionChecked(NAME_ARPGCharacter_OnDead);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ARPGCharacter_OnDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_OnDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "OnDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_OnDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARPGCharacter_OnDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_OnDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARPGCharacter Function OnDead

// Begin Class ARPGCharacter Function OnHealthChanged
struct RPGCharacter_eventOnHealthChanged_Parms
{
	float GeltaValue;
	AActor* Causer;
};
static const FName NAME_ARPGCharacter_OnHealthChanged = FName(TEXT("OnHealthChanged"));
void ARPGCharacter::OnHealthChanged(float GeltaValue, AActor* Causer)
{
	RPGCharacter_eventOnHealthChanged_Parms Parms;
	Parms.GeltaValue=GeltaValue;
	Parms.Causer=Causer;
	UFunction* Func = FindFunctionChecked(NAME_ARPGCharacter_OnHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeltaValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_GeltaValue = { "GeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnHealthChanged_Parms, GeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnHealthChanged_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_GeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_Causer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "OnHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers), sizeof(RPGCharacter_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGCharacter_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_OnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARPGCharacter Function OnHealthChanged

// Begin Class ARPGCharacter Function OnStaminaChanged
struct RPGCharacter_eventOnStaminaChanged_Parms
{
	float GeltaValue;
	AActor* Causer;
};
static const FName NAME_ARPGCharacter_OnStaminaChanged = FName(TEXT("OnStaminaChanged"));
void ARPGCharacter::OnStaminaChanged(float GeltaValue, AActor* Causer)
{
	RPGCharacter_eventOnStaminaChanged_Parms Parms;
	Parms.GeltaValue=GeltaValue;
	Parms.Causer=Causer;
	UFunction* Func = FindFunctionChecked(NAME_ARPGCharacter_OnStaminaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeltaValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::NewProp_GeltaValue = { "GeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnStaminaChanged_Parms, GeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnStaminaChanged_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::NewProp_GeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::NewProp_Causer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "OnStaminaChanged", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::PropPointers), sizeof(RPGCharacter_eventOnStaminaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGCharacter_eventOnStaminaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARPGCharacter Function OnStaminaChanged

// Begin Class ARPGCharacter Function OnXPChanged
struct RPGCharacter_eventOnXPChanged_Parms
{
	float DeltaValue;
};
static const FName NAME_ARPGCharacter_OnXPChanged = FName(TEXT("OnXPChanged"));
void ARPGCharacter::OnXPChanged(float DeltaValue)
{
	RPGCharacter_eventOnXPChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	UFunction* Func = FindFunctionChecked(NAME_ARPGCharacter_OnXPChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnXPChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::NewProp_DeltaValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "OnXPChanged", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::PropPointers), sizeof(RPGCharacter_eventOnXPChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGCharacter_eventOnXPChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_OnXPChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_OnXPChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARPGCharacter Function OnXPChanged

// Begin Class ARPGCharacter
void ARPGCharacter::StaticRegisterNativesARPGCharacter()
{
	UClass* Class = ARPGCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActvateAbilitiesWithTag", &ARPGCharacter::execActvateAbilitiesWithTag },
		{ "GetAdrenaline", &ARPGCharacter::execGetAdrenaline },
		{ "GetCharacterLevel", &ARPGCharacter::execGetCharacterLevel },
		{ "GetExperiencePoints", &ARPGCharacter::execGetExperiencePoints },
		{ "GetHealth", &ARPGCharacter::execGetHealth },
		{ "GetMaxAdrenaline", &ARPGCharacter::execGetMaxAdrenaline },
		{ "GetMaxExperiencePoints", &ARPGCharacter::execGetMaxExperiencePoints },
		{ "GetMaxHealth", &ARPGCharacter::execGetMaxHealth },
		{ "GetMaxStamina", &ARPGCharacter::execGetMaxStamina },
		{ "GetStamina", &ARPGCharacter::execGetStamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGCharacter);
UClass* Z_Construct_UClass_ARPGCharacter_NoRegister()
{
	return ARPGCharacter::StaticClass();
}
struct Z_Construct_UClass_ARPGCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RPGCharacter.h" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbiltySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "RPG Abilities" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeEffects_MetaData[] = {
		{ "Category", "RPG Attributes" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableTestAbilities_MetaData[] = {
		{ "Category", "RPG Attributes|Debug" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestAbilities_MetaData[] = {
		{ "Category", "RPG Attributes|Debug" },
		{ "ModuleRelativePath", "Public/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbiltySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributeEffects;
	static void NewProp_EnableTestAbilities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableTestAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TestAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGCharacter_ActvateAbilitiesWithTag, "ActvateAbilitiesWithTag" }, // 3540466435
		{ &Z_Construct_UFunction_ARPGCharacter_GetAdrenaline, "GetAdrenaline" }, // 402873756
		{ &Z_Construct_UFunction_ARPGCharacter_GetCharacterLevel, "GetCharacterLevel" }, // 4114168132
		{ &Z_Construct_UFunction_ARPGCharacter_GetExperiencePoints, "GetExperiencePoints" }, // 3759589038
		{ &Z_Construct_UFunction_ARPGCharacter_GetHealth, "GetHealth" }, // 3677673567
		{ &Z_Construct_UFunction_ARPGCharacter_GetMaxAdrenaline, "GetMaxAdrenaline" }, // 1313644709
		{ &Z_Construct_UFunction_ARPGCharacter_GetMaxExperiencePoints, "GetMaxExperiencePoints" }, // 2560092021
		{ &Z_Construct_UFunction_ARPGCharacter_GetMaxHealth, "GetMaxHealth" }, // 1363259532
		{ &Z_Construct_UFunction_ARPGCharacter_GetMaxStamina, "GetMaxStamina" }, // 1916068310
		{ &Z_Construct_UFunction_ARPGCharacter_GetStamina, "GetStamina" }, // 3103967809
		{ &Z_Construct_UFunction_ARPGCharacter_OnAdrenalineChanged, "OnAdrenalineChanged" }, // 3360572316
		{ &Z_Construct_UFunction_ARPGCharacter_OnChaaracterLevedUp, "OnChaaracterLevedUp" }, // 3245122343
		{ &Z_Construct_UFunction_ARPGCharacter_OnDead, "OnDead" }, // 949045860
		{ &Z_Construct_UFunction_ARPGCharacter_OnHealthChanged, "OnHealthChanged" }, // 2605253207
		{ &Z_Construct_UFunction_ARPGCharacter_OnStaminaChanged, "OnStaminaChanged" }, // 1469499744
		{ &Z_Construct_UFunction_ARPGCharacter_OnXPChanged, "OnXPChanged" }, // 3304437147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AbiltySystemComponent = { "AbiltySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGCharacter, AbiltySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbiltySystemComponent_MetaData), NewProp_AbiltySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGCharacter, AttributeSet), Z_Construct_UClass_URPGAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGCharacter, CharacterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLevel_MetaData), NewProp_CharacterLevel_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_DefaultAttributeEffects = { "DefaultAttributeEffects", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGCharacter, DefaultAttributeEffects), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributeEffects_MetaData), NewProp_DefaultAttributeEffects_MetaData) };
void Z_Construct_UClass_ARPGCharacter_Statics::NewProp_EnableTestAbilities_SetBit(void* Obj)
{
	((ARPGCharacter*)Obj)->EnableTestAbilities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_EnableTestAbilities = { "EnableTestAbilities", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARPGCharacter), &Z_Construct_UClass_ARPGCharacter_Statics::NewProp_EnableTestAbilities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableTestAbilities_MetaData), NewProp_EnableTestAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_TestAbilities_Inner = { "TestAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_TestAbilities = { "TestAbilities", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGCharacter, TestAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestAbilities_MetaData), NewProp_TestAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AbiltySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_CharacterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_DefaultAttributeEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_EnableTestAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_TestAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_TestAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGCharacter_Statics::ClassParams = {
	&ARPGCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARPGCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGCharacter()
{
	if (!Z_Registration_Info_UClass_ARPGCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGCharacter.OuterSingleton, Z_Construct_UClass_ARPGCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGCharacter.OuterSingleton;
}
template<> RPG_API UClass* StaticClass<ARPGCharacter>()
{
	return ARPGCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCharacter);
ARPGCharacter::~ARPGCharacter() {}
// End Class ARPGCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGCharacter, ARPGCharacter::StaticClass, TEXT("ARPGCharacter"), &Z_Registration_Info_UClass_ARPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGCharacter), 955828921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_1852088893(TEXT("/Script/RPG"),
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

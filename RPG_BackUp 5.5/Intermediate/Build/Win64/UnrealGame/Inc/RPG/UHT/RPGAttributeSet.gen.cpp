// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/GAS/RPGAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
RPG_API UClass* Z_Construct_UClass_URPGAttributeSet();
RPG_API UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin Class URPGAttributeSet Function AdjustAttributeForMaxChange
struct Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics
{
	struct RPGAttributeSet_eventAdjustAttributeForMaxChange_Parms
	{
		FGameplayAttributeData AffectedAttribute;
		FGameplayAttributeData MaxAttribute;
		float NewMaxValue;
		FGameplayAttribute AffectedAttributeProperty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedAttributeProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAttribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedAttributeProperty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttribute = { "AffectedAttribute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventAdjustAttributeForMaxChange_Parms, AffectedAttribute), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(0, nullptr) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute = { "MaxAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventAdjustAttributeForMaxChange_Parms, MaxAttribute), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttribute_MetaData), NewProp_MaxAttribute_MetaData) }; // 675369593
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_NewMaxValue = { "NewMaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventAdjustAttributeForMaxChange_Parms, NewMaxValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty = { "AffectedAttributeProperty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventAdjustAttributeForMaxChange_Parms, AffectedAttributeProperty), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedAttributeProperty_MetaData), NewProp_AffectedAttributeProperty_MetaData) }; // 2792951819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_MaxAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_NewMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::NewProp_AffectedAttributeProperty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "AdjustAttributeForMaxChange", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::RPGAttributeSet_eventAdjustAttributeForMaxChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::RPGAttributeSet_eventAdjustAttributeForMaxChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execAdjustAttributeForMaxChange)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_AffectedAttribute);
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_MaxAttribute);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxValue);
	P_GET_STRUCT_REF(FGameplayAttribute,Z_Param_Out_AffectedAttributeProperty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustAttributeForMaxChange(Z_Param_Out_AffectedAttribute,Z_Param_Out_MaxAttribute,Z_Param_NewMaxValue,Z_Param_Out_AffectedAttributeProperty);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function AdjustAttributeForMaxChange

// Begin Class URPGAttributeSet Function OnRep_Adrenaline
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics
{
	struct RPGAttributeSet_eventOnRep_Adrenaline_Parms
	{
		FGameplayAttributeData OldSAdrenaline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSAdrenaline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSAdrenaline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::NewProp_OldSAdrenaline = { "OldSAdrenaline", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_Adrenaline_Parms, OldSAdrenaline), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSAdrenaline_MetaData), NewProp_OldSAdrenaline_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::NewProp_OldSAdrenaline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_Adrenaline", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::RPGAttributeSet_eventOnRep_Adrenaline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::RPGAttributeSet_eventOnRep_Adrenaline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_Adrenaline)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSAdrenaline);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Adrenaline(Z_Param_Out_OldSAdrenaline);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_Adrenaline

// Begin Class URPGAttributeSet Function OnRep_ExpriencePoints
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics
{
	struct RPGAttributeSet_eventOnRep_ExpriencePoints_Parms
	{
		FGameplayAttributeData OldExpriencePoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldExpriencePoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldExpriencePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::NewProp_OldExpriencePoints = { "OldExpriencePoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_ExpriencePoints_Parms, OldExpriencePoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldExpriencePoints_MetaData), NewProp_OldExpriencePoints_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::NewProp_OldExpriencePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_ExpriencePoints", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::RPGAttributeSet_eventOnRep_ExpriencePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::RPGAttributeSet_eventOnRep_ExpriencePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_ExpriencePoints)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldExpriencePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ExpriencePoints(Z_Param_Out_OldExpriencePoints);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_ExpriencePoints

// Begin Class URPGAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics
{
	struct RPGAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::RPGAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::RPGAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_Health

// Begin Class URPGAttributeSet Function OnRep_MaxAdrenaline
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics
{
	struct RPGAttributeSet_eventOnRep_MaxAdrenaline_Parms
	{
		FGameplayAttributeData OldMaxAdrenaline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxAdrenaline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxAdrenaline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::NewProp_OldMaxAdrenaline = { "OldMaxAdrenaline", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_MaxAdrenaline_Parms, OldMaxAdrenaline), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxAdrenaline_MetaData), NewProp_OldMaxAdrenaline_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::NewProp_OldMaxAdrenaline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_MaxAdrenaline", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::RPGAttributeSet_eventOnRep_MaxAdrenaline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::RPGAttributeSet_eventOnRep_MaxAdrenaline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_MaxAdrenaline)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxAdrenaline);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxAdrenaline(Z_Param_Out_OldMaxAdrenaline);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_MaxAdrenaline

// Begin Class URPGAttributeSet Function OnRep_MaxExpriencePoints
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics
{
	struct RPGAttributeSet_eventOnRep_MaxExpriencePoints_Parms
	{
		FGameplayAttributeData OldMaxExpriencePoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxExpriencePoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxExpriencePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::NewProp_OldMaxExpriencePoints = { "OldMaxExpriencePoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_MaxExpriencePoints_Parms, OldMaxExpriencePoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxExpriencePoints_MetaData), NewProp_OldMaxExpriencePoints_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::NewProp_OldMaxExpriencePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_MaxExpriencePoints", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::RPGAttributeSet_eventOnRep_MaxExpriencePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::RPGAttributeSet_eventOnRep_MaxExpriencePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_MaxExpriencePoints)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxExpriencePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxExpriencePoints(Z_Param_Out_OldMaxExpriencePoints);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_MaxExpriencePoints

// Begin Class URPGAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics
{
	struct RPGAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::RPGAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::RPGAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_MaxHealth

// Begin Class URPGAttributeSet Function OnRep_MaxStamina
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics
{
	struct RPGAttributeSet_eventOnRep_MaxStamina_Parms
	{
		FGameplayAttributeData OldMaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxStamina_MetaData), NewProp_OldMaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::RPGAttributeSet_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::RPGAttributeSet_eventOnRep_MaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_MaxStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_MaxStamina

// Begin Class URPGAttributeSet Function OnRep_Stamina
struct Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics
{
	struct RPGAttributeSet_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGAttributeSet_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStamina_MetaData), NewProp_OldStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSet, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::RPGAttributeSet_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::RPGAttributeSet_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGAttributeSet::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
	P_NATIVE_END;
}
// End Class URPGAttributeSet Function OnRep_Stamina

// Begin Class URPGAttributeSet
void URPGAttributeSet::StaticRegisterNativesURPGAttributeSet()
{
	UClass* Class = URPGAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustAttributeForMaxChange", &URPGAttributeSet::execAdjustAttributeForMaxChange },
		{ "OnRep_Adrenaline", &URPGAttributeSet::execOnRep_Adrenaline },
		{ "OnRep_ExpriencePoints", &URPGAttributeSet::execOnRep_ExpriencePoints },
		{ "OnRep_Health", &URPGAttributeSet::execOnRep_Health },
		{ "OnRep_MaxAdrenaline", &URPGAttributeSet::execOnRep_MaxAdrenaline },
		{ "OnRep_MaxExpriencePoints", &URPGAttributeSet::execOnRep_MaxExpriencePoints },
		{ "OnRep_MaxHealth", &URPGAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxStamina", &URPGAttributeSet::execOnRep_MaxStamina },
		{ "OnRep_Stamina", &URPGAttributeSet::execOnRep_Stamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGAttributeSet);
UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister()
{
	return URPGAttributeSet::StaticClass();
}
struct Z_Construct_UClass_URPGAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * RPG Character Attributes.\n */" },
#endif
		{ "IncludePath", "GAS/RPGAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPG Character Attributes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Adrenaline_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAdrenaline_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpriencePoints_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxExpriencePoints_MetaData[] = {
		{ "Category", "RPG Attribute" },
		{ "ModuleRelativePath", "Public/GAS/RPGAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Adrenaline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxAdrenaline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpriencePoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxExpriencePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGAttributeSet_AdjustAttributeForMaxChange, "AdjustAttributeForMaxChange" }, // 2910780425
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_Adrenaline, "OnRep_Adrenaline" }, // 3479761980
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_ExpriencePoints, "OnRep_ExpriencePoints" }, // 2590255060
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_Health, "OnRep_Health" }, // 2978028594
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxAdrenaline, "OnRep_MaxAdrenaline" }, // 3011589938
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxExpriencePoints, "OnRep_MaxExpriencePoints" }, // 1467439730
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 205477360
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 3638415963
		{ &Z_Construct_UFunction_URPGAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 3457911021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Adrenaline = { "Adrenaline", "OnRep_Adrenaline", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, Adrenaline), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Adrenaline_MetaData), NewProp_Adrenaline_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxAdrenaline = { "MaxAdrenaline", "OnRep_MaxAdrenaline", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, MaxAdrenaline), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAdrenaline_MetaData), NewProp_MaxAdrenaline_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_ExpriencePoints = { "ExpriencePoints", "OnRep_ExpriencePoints", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, ExpriencePoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpriencePoints_MetaData), NewProp_ExpriencePoints_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxExpriencePoints = { "MaxExpriencePoints", "OnRep_MaxExpriencePoints", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGAttributeSet, MaxExpriencePoints), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxExpriencePoints_MetaData), NewProp_MaxExpriencePoints_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_Adrenaline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxAdrenaline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_ExpriencePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSet_Statics::NewProp_MaxExpriencePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGAttributeSet_Statics::ClassParams = {
	&URPGAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGAttributeSet()
{
	if (!Z_Registration_Info_UClass_URPGAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGAttributeSet.OuterSingleton, Z_Construct_UClass_URPGAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGAttributeSet.OuterSingleton;
}
template<> RPG_API UClass* StaticClass<URPGAttributeSet>()
{
	return URPGAttributeSet::StaticClass();
}
void URPGAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Stamina(TEXT("Stamina"));
	static const FName Name_MaxStamina(TEXT("MaxStamina"));
	static const FName Name_Adrenaline(TEXT("Adrenaline"));
	static const FName Name_MaxAdrenaline(TEXT("MaxAdrenaline"));
	static const FName Name_ExpriencePoints(TEXT("ExpriencePoints"));
	static const FName Name_MaxExpriencePoints(TEXT("MaxExpriencePoints"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
		&& Name_Adrenaline == ClassReps[(int32)ENetFields_Private::Adrenaline].Property->GetFName()
		&& Name_MaxAdrenaline == ClassReps[(int32)ENetFields_Private::MaxAdrenaline].Property->GetFName()
		&& Name_ExpriencePoints == ClassReps[(int32)ENetFields_Private::ExpriencePoints].Property->GetFName()
		&& Name_MaxExpriencePoints == ClassReps[(int32)ENetFields_Private::MaxExpriencePoints].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URPGAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAttributeSet);
URPGAttributeSet::~URPGAttributeSet() {}
// End Class URPGAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGAttributeSet, URPGAttributeSet::StaticClass, TEXT("URPGAttributeSet"), &Z_Registration_Info_UClass_URPGAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGAttributeSet), 3533222950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_4161930091(TEXT("/Script/RPG"),
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

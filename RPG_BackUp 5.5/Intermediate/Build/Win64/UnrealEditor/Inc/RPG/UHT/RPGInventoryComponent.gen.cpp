// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/Inventory/RPGInventoryComponent.h"
#include "RPG/Public/Inventory/RPGItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RPG_API UClass* Z_Construct_UClass_URPGInventoryComponent();
RPG_API UClass* Z_Construct_UClass_URPGInventoryComponent_NoRegister();
RPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInventoryItem();
RPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItem();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin Class URPGInventoryComponent Function AddItem
struct Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics
{
	struct RPGInventoryComponent_eventAddItem_Parms
	{
		FRPGItem Item;
		int32 Count;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventAddItem_Parms, Item), Z_Construct_UScriptStruct_FRPGItem, METADATA_PARAMS(0, nullptr) }; // 2943083162
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventAddItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGInventoryComponent_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGInventoryComponent_eventAddItem_Parms), &Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::RPGInventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::RPGInventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryComponent::execAddItem)
{
	P_GET_STRUCT(FRPGItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Item,Z_Param_Count);
	P_NATIVE_END;
}
// End Class URPGInventoryComponent Function AddItem

// Begin Class URPGInventoryComponent Function OnItemAdded
struct RPGInventoryComponent_eventOnItemAdded_Parms
{
	FRPGItem Item;
	int32 Count;
	int32 ItemIndex;
	int32 NewCount;
};
static const FName NAME_URPGInventoryComponent_OnItemAdded = FName(TEXT("OnItemAdded"));
void URPGInventoryComponent::OnItemAdded(FRPGItem Item, int32 Count, int32 ItemIndex, int32 NewCount)
{
	RPGInventoryComponent_eventOnItemAdded_Parms Parms;
	Parms.Item=Item;
	Parms.Count=Count;
	Parms.ItemIndex=ItemIndex;
	Parms.NewCount=NewCount;
	UFunction* Func = FindFunctionChecked(NAME_URPGInventoryComponent_OnItemAdded);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemAdded_Parms, Item), Z_Construct_UScriptStruct_FRPGItem, METADATA_PARAMS(0, nullptr) }; // 2943083162
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemAdded_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemAdded_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemAdded_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "OnItemAdded", nullptr, nullptr, Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::PropPointers), sizeof(RPGInventoryComponent_eventOnItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGInventoryComponent_eventOnItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URPGInventoryComponent Function OnItemAdded

// Begin Class URPGInventoryComponent Function OnItemRemoved
struct RPGInventoryComponent_eventOnItemRemoved_Parms
{
	FRPGItem Item;
	int32 Count;
	int32 ItemIndex;
	int32 NewCount;
};
static const FName NAME_URPGInventoryComponent_OnItemRemoved = FName(TEXT("OnItemRemoved"));
void URPGInventoryComponent::OnItemRemoved(FRPGItem Item, int32 Count, int32 ItemIndex, int32 NewCount)
{
	RPGInventoryComponent_eventOnItemRemoved_Parms Parms;
	Parms.Item=Item;
	Parms.Count=Count;
	Parms.ItemIndex=ItemIndex;
	Parms.NewCount=NewCount;
	UFunction* Func = FindFunctionChecked(NAME_URPGInventoryComponent_OnItemRemoved);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemRemoved_Parms, Item), Z_Construct_UScriptStruct_FRPGItem, METADATA_PARAMS(0, nullptr) }; // 2943083162
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemRemoved_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemRemoved_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventOnItemRemoved_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "OnItemRemoved", nullptr, nullptr, Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::PropPointers), sizeof(RPGInventoryComponent_eventOnItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGInventoryComponent_eventOnItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URPGInventoryComponent Function OnItemRemoved

// Begin Class URPGInventoryComponent Function RemoveItem
struct Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics
{
	struct RPGInventoryComponent_eventRemoveItem_Parms
	{
		int32 ItemIndex;
		int32 Count;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventRemoveItem_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventRemoveItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGInventoryComponent_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGInventoryComponent_eventRemoveItem_Parms), &Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_ItemIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::RPGInventoryComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::RPGInventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInventoryComponent::execRemoveItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_ItemIndex,Z_Param_Count);
	P_NATIVE_END;
}
// End Class URPGInventoryComponent Function RemoveItem

// Begin Class URPGInventoryComponent Function UseItem
struct RPGInventoryComponent_eventUseItem_Parms
{
	int32 ItemIndex;
};
static const FName NAME_URPGInventoryComponent_UseItem = FName(TEXT("UseItem"));
void URPGInventoryComponent::UseItem(int32 ItemIndex)
{
	RPGInventoryComponent_eventUseItem_Parms Parms;
	Parms.ItemIndex=ItemIndex;
	UFunction* Func = FindFunctionChecked(NAME_URPGInventoryComponent_UseItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInventoryComponent_eventUseItem_Parms, ItemIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::NewProp_ItemIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "UseItem", nullptr, nullptr, Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::PropPointers), sizeof(RPGInventoryComponent_eventUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGInventoryComponent_eventUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInventoryComponent_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class URPGInventoryComponent Function UseItem

// Begin Class URPGInventoryComponent
void URPGInventoryComponent::StaticRegisterNativesURPGInventoryComponent()
{
	UClass* Class = URPGInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &URPGInventoryComponent::execAddItem },
		{ "RemoveItem", &URPGInventoryComponent::execRemoveItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGInventoryComponent);
UClass* Z_Construct_UClass_URPGInventoryComponent_NoRegister()
{
	return URPGInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_URPGInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/RPGInventoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "RPG | Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGInventoryComponent_AddItem, "AddItem" }, // 69239553
		{ &Z_Construct_UFunction_URPGInventoryComponent_OnItemAdded, "OnItemAdded" }, // 3812390405
		{ &Z_Construct_UFunction_URPGInventoryComponent_OnItemRemoved, "OnItemRemoved" }, // 282457362
		{ &Z_Construct_UFunction_URPGInventoryComponent_RemoveItem, "RemoveItem" }, // 3972178423
		{ &Z_Construct_UFunction_URPGInventoryComponent_UseItem, "UseItem" }, // 3084876842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRPGInventoryItem, METADATA_PARAMS(0, nullptr) }; // 1573195437
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInventoryComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1573195437
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInventoryComponent_Statics::ClassParams = {
	&URPGInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGInventoryComponent()
{
	if (!Z_Registration_Info_UClass_URPGInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInventoryComponent.OuterSingleton, Z_Construct_UClass_URPGInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInventoryComponent.OuterSingleton;
}
template<> RPG_API UClass* StaticClass<URPGInventoryComponent>()
{
	return URPGInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventoryComponent);
URPGInventoryComponent::~URPGInventoryComponent() {}
// End Class URPGInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInventoryComponent, URPGInventoryComponent::StaticClass, TEXT("URPGInventoryComponent"), &Z_Registration_Info_UClass_URPGInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInventoryComponent), 205347811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_3700040274(TEXT("/Script/RPG"),
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

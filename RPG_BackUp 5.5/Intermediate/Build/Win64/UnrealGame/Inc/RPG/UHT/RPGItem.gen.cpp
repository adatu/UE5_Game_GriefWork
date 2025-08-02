// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/Inventory/RPGItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
RPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInventoryItem();
RPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItem();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin ScriptStruct FRPGItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPGItem;
class UScriptStruct* FRPGItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPGItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPGItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGItem, (UObject*)Z_Construct_UPackage__Script_RPG(), TEXT("RPGItem"));
	}
	return Z_Registration_Info_UScriptStruct_RPGItem.OuterSingleton;
}
template<> RPG_API UScriptStruct* StaticStruct<FRPGItem>()
{
	return FRPGItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRPGItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCountInInventory_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadate_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClass_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCountInInventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadate_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadate_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Metadate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_MaxCountInInventory = { "MaxCountInInventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, MaxCountInInventory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCountInInventory_MetaData), NewProp_MaxCountInInventory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Metadate_ValueProp = { "Metadate", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Metadate_Key_KeyProp = { "Metadate_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Metadate = { "Metadate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, Metadate), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadate_MetaData), NewProp_Metadate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGItem, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectClass_MetaData), NewProp_ObjectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_MaxCountInInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Metadate_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Metadate_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_Metadate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGItem_Statics::NewProp_ObjectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	nullptr,
	&NewStructOps,
	"RPGItem",
	Z_Construct_UScriptStruct_FRPGItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItem_Statics::PropPointers),
	sizeof(FRPGItem),
	alignof(FRPGItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGItem()
{
	if (!Z_Registration_Info_UScriptStruct_RPGItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPGItem.InnerSingleton, Z_Construct_UScriptStruct_FRPGItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RPGItem.InnerSingleton;
}
// End ScriptStruct FRPGItem

// Begin ScriptStruct FRPGInventoryItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPGInventoryItem;
class UScriptStruct* FRPGInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPGInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPGInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGInventoryItem, (UObject*)Z_Construct_UPackage__Script_RPG(), TEXT("RPGInventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_RPGInventoryItem.OuterSingleton;
}
template<> RPG_API UScriptStruct* StaticStruct<FRPGInventoryItem>()
{
	return FRPGInventoryItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRPGInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInventoryItem, Item), Z_Construct_UScriptStruct_FRPGItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) }; // 3899011942
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInventoryItem, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
	nullptr,
	&NewStructOps,
	"RPGInventoryItem",
	Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::PropPointers),
	sizeof(FRPGInventoryItem),
	alignof(FRPGInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_RPGInventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPGInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RPGInventoryItem.InnerSingleton;
}
// End ScriptStruct FRPGInventoryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGItem::StaticStruct, Z_Construct_UScriptStruct_FRPGItem_Statics::NewStructOps, TEXT("RPGItem"), &Z_Registration_Info_UScriptStruct_RPGItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGItem), 3899011942U) },
		{ FRPGInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FRPGInventoryItem_Statics::NewStructOps, TEXT("RPGInventoryItem"), &Z_Registration_Info_UScriptStruct_RPGInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGInventoryItem), 1441364225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItem_h_3572406559(TEXT("/Script/RPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

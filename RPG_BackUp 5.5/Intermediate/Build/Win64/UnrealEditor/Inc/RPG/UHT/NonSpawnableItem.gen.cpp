// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/Inventory/NonSpawnableItem.h"
#include "RPG/Public/Inventory/RPGItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonSpawnableItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
RPG_API UClass* Z_Construct_UClass_UNonSpawnableItem();
RPG_API UClass* Z_Construct_UClass_UNonSpawnableItem_NoRegister();
RPG_API UClass* Z_Construct_UClass_URPGItemInterface_NoRegister();
RPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItem();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin Class UNonSpawnableItem
void UNonSpawnableItem::StaticRegisterNativesUNonSpawnableItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNonSpawnableItem);
UClass* Z_Construct_UClass_UNonSpawnableItem_NoRegister()
{
	return UNonSpawnableItem::StaticClass();
}
struct Z_Construct_UClass_UNonSpawnableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/NonSpawnableItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Inventory/NonSpawnableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInfo_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/NonSpawnableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNonSpawnableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNonSpawnableItem_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNonSpawnableItem, ItemInfo), Z_Construct_UScriptStruct_FRPGItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInfo_MetaData), NewProp_ItemInfo_MetaData) }; // 2943083162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNonSpawnableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNonSpawnableItem_Statics::NewProp_ItemInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNonSpawnableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNonSpawnableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNonSpawnableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNonSpawnableItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URPGItemInterface_NoRegister, (int32)VTABLE_OFFSET(UNonSpawnableItem, IRPGItemInterface), false },  // 1579546845
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNonSpawnableItem_Statics::ClassParams = {
	&UNonSpawnableItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNonSpawnableItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNonSpawnableItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNonSpawnableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNonSpawnableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNonSpawnableItem()
{
	if (!Z_Registration_Info_UClass_UNonSpawnableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNonSpawnableItem.OuterSingleton, Z_Construct_UClass_UNonSpawnableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNonSpawnableItem.OuterSingleton;
}
template<> RPG_API UClass* StaticClass<UNonSpawnableItem>()
{
	return UNonSpawnableItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNonSpawnableItem);
UNonSpawnableItem::~UNonSpawnableItem() {}
// End Class UNonSpawnableItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNonSpawnableItem, UNonSpawnableItem::StaticClass, TEXT("UNonSpawnableItem"), &Z_Registration_Info_UClass_UNonSpawnableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNonSpawnableItem), 2563872802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_1119523075(TEXT("/Script/RPG"),
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/Inventory/SpawnableItem.h"
#include "RPG/Public/Inventory/RPGItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnableItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
RPG_API UClass* Z_Construct_UClass_ASpawnableItem();
RPG_API UClass* Z_Construct_UClass_ASpawnableItem_NoRegister();
RPG_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
RPG_API UClass* Z_Construct_UClass_URPGItemInterface_NoRegister();
RPG_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItem();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin Class ASpawnableItem
void ASpawnableItem::StaticRegisterNativesASpawnableItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnableItem);
UClass* Z_Construct_UClass_ASpawnableItem_NoRegister()
{
	return ASpawnableItem::StaticClass();
}
struct Z_Construct_UClass_ASpawnableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/SpawnableItem.h" },
		{ "ModuleRelativePath", "Public/Inventory/SpawnableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInfo_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/SpawnableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawnableItem_Statics::NewProp_ItemInfo = { "ItemInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnableItem, ItemInfo), Z_Construct_UScriptStruct_FRPGItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInfo_MetaData), NewProp_ItemInfo_MetaData) }; // 3899011942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnableItem_Statics::NewProp_ItemInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASpawnableItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URPGItemInterface_NoRegister, (int32)VTABLE_OFFSET(ASpawnableItem, IRPGItemInterface), false },  // 1579546845
	{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(ASpawnableItem, IInteractableInterface), false },  // 252227988
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnableItem_Statics::ClassParams = {
	&ASpawnableItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpawnableItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnableItem()
{
	if (!Z_Registration_Info_UClass_ASpawnableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnableItem.OuterSingleton, Z_Construct_UClass_ASpawnableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnableItem.OuterSingleton;
}
template<> RPG_API UClass* StaticClass<ASpawnableItem>()
{
	return ASpawnableItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnableItem);
ASpawnableItem::~ASpawnableItem() {}
// End Class ASpawnableItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnableItem, ASpawnableItem::StaticClass, TEXT("ASpawnableItem"), &Z_Registration_Info_UClass_ASpawnableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnableItem), 474237404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_56082684(TEXT("/Script/RPG"),
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

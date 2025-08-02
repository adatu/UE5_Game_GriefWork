// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/Inventory/InventoryInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RPG_API UClass* Z_Construct_UClass_UInventoryInterface();
RPG_API UClass* Z_Construct_UClass_UInventoryInterface_NoRegister();
RPG_API UClass* Z_Construct_UClass_URPGInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin Interface UInventoryInterface Function GetInventoryComponent
struct InventoryInterface_eventGetInventoryComponent_Parms
{
	URPGInventoryComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryInterface_eventGetInventoryComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
URPGInventoryComponent* IInventoryInterface::GetInventoryComponent()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInventoryComponent instead.");
	InventoryInterface_eventGetInventoryComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryInterface_GetInventoryComponent = FName(TEXT("GetInventoryComponent"));
URPGInventoryComponent* IInventoryInterface::Execute_GetInventoryComponent(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryInterface::StaticClass()));
	InventoryInterface_eventGetInventoryComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryInterface_GetInventoryComponent);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryInterface_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_URPGInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryInterface, nullptr, "GetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::PropPointers), sizeof(InventoryInterface_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryInterface_eventGetInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UInventoryInterface Function GetInventoryComponent

// Begin Interface UInventoryInterface
void UInventoryInterface::StaticRegisterNativesUInventoryInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryInterface);
UClass* Z_Construct_UClass_UInventoryInterface_NoRegister()
{
	return UInventoryInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryInterface_GetInventoryComponent, "GetInventoryComponent" }, // 570001194
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryInterface_Statics::ClassParams = {
	&UInventoryInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryInterface.OuterSingleton, Z_Construct_UClass_UInventoryInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryInterface.OuterSingleton;
}
template<> RPG_API UClass* StaticClass<UInventoryInterface>()
{
	return UInventoryInterface::StaticClass();
}
UInventoryInterface::UInventoryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryInterface);
UInventoryInterface::~UInventoryInterface() {}
// End Interface UInventoryInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryInterface, UInventoryInterface::StaticClass, TEXT("UInventoryInterface"), &Z_Registration_Info_UClass_UInventoryInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryInterface), 3147653794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_1921207239(TEXT("/Script/RPG"),
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

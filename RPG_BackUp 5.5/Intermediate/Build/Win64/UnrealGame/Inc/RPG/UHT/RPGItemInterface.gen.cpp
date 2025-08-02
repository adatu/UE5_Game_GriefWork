// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG/Public/Inventory/RPGItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGItemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RPG_API UClass* Z_Construct_UClass_URPGItemInterface();
RPG_API UClass* Z_Construct_UClass_URPGItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPG();
// End Cross Module References

// Begin Interface URPGItemInterface Function UseItem
void IRPGItemInterface::UseItem()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UseItem instead.");
}
static FName NAME_URPGItemInterface_UseItem = FName(TEXT("UseItem"));
void IRPGItemInterface::Execute_UseItem(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URPGItemInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_URPGItemInterface_UseItem);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IRPGItemInterface*)(O->GetNativeInterfaceAddress(URPGItemInterface::StaticClass())))
	{
		I->UseItem_Implementation();
	}
}
struct Z_Construct_UFunction_URPGItemInterface_UseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGItemInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItemInterface_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGItemInterface, nullptr, "UseItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemInterface_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGItemInterface_UseItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URPGItemInterface_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGItemInterface_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRPGItemInterface::execUseItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseItem_Implementation();
	P_NATIVE_END;
}
// End Interface URPGItemInterface Function UseItem

// Begin Interface URPGItemInterface
void URPGItemInterface::StaticRegisterNativesURPGItemInterface()
{
	UClass* Class = URPGItemInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UseItem", &IRPGItemInterface::execUseItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGItemInterface);
UClass* Z_Construct_UClass_URPGItemInterface_NoRegister()
{
	return URPGItemInterface::StaticClass();
}
struct Z_Construct_UClass_URPGItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGItemInterface_UseItem, "UseItem" }, // 1694278099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRPGItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGItemInterface_Statics::ClassParams = {
	&URPGItemInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGItemInterface()
{
	if (!Z_Registration_Info_UClass_URPGItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGItemInterface.OuterSingleton, Z_Construct_UClass_URPGItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGItemInterface.OuterSingleton;
}
template<> RPG_API UClass* StaticClass<URPGItemInterface>()
{
	return URPGItemInterface::StaticClass();
}
URPGItemInterface::URPGItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemInterface);
URPGItemInterface::~URPGItemInterface() {}
// End Interface URPGItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGItemInterface, URPGItemInterface::StaticClass, TEXT("URPGItemInterface"), &Z_Registration_Info_UClass_URPGItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGItemInterface), 1579546845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_1460504527(TEXT("/Script/RPG"),
	Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

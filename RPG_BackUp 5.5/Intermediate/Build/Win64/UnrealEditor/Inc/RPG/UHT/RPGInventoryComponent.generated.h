// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/RPGInventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRPGItem;
#ifdef RPG_RPGInventoryComponent_generated_h
#error "RPGInventoryComponent.generated.h already included, missing '#pragma once' in RPGInventoryComponent.h"
#endif
#define RPG_RPGInventoryComponent_generated_h

#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_CALLBACK_WRAPPERS
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInventoryComponent(); \
	friend struct Z_Construct_UClass_URPGInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(URPGInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(URPGInventoryComponent)


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGInventoryComponent(URPGInventoryComponent&&); \
	URPGInventoryComponent(const URPGInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGInventoryComponent) \
	NO_API virtual ~URPGInventoryComponent();


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_11_PROLOG
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_CALLBACK_WRAPPERS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class URPGInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

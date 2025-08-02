// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGInventoryComponent;
#ifdef RPG_InventoryInterface_generated_h
#error "InventoryInterface.generated.h already included, missing '#pragma once' in InventoryInterface.h"
#endif
#define RPG_InventoryInterface_generated_h

#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_CALLBACK_WRAPPERS
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RPG_API UInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryInterface(UInventoryInterface&&); \
	UInventoryInterface(const UInventoryInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RPG_API, UInventoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryInterface) \
	RPG_API virtual ~UInventoryInterface();


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryInterface(); \
	friend struct Z_Construct_UClass_UInventoryInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RPG"), RPG_API) \
	DECLARE_SERIALIZER(UInventoryInterface)


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryInterface() {} \
public: \
	typedef UInventoryInterface UClassType; \
	typedef IInventoryInterface ThisClass; \
	static URPGInventoryComponent* Execute_GetInventoryComponent(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_11_PROLOG
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_CALLBACK_WRAPPERS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class UInventoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_InventoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

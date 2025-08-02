// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/RPGItemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_RPGItemInterface_generated_h
#error "RPGItemInterface.generated.h already included, missing '#pragma once' in RPGItemInterface.h"
#endif
#define RPG_RPGItemInterface_generated_h

#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UseItem_Implementation() {}; \
	DECLARE_FUNCTION(execUseItem);


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_CALLBACK_WRAPPERS
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RPG_API URPGItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGItemInterface(URPGItemInterface&&); \
	URPGItemInterface(const URPGItemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RPG_API, URPGItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGItemInterface) \
	RPG_API virtual ~URPGItemInterface();


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURPGItemInterface(); \
	friend struct Z_Construct_UClass_URPGItemInterface_Statics; \
public: \
	DECLARE_CLASS(URPGItemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RPG"), RPG_API) \
	DECLARE_SERIALIZER(URPGItemInterface)


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRPGItemInterface() {} \
public: \
	typedef URPGItemInterface UClassType; \
	typedef IRPGItemInterface ThisClass; \
	static void Execute_UseItem(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_10_PROLOG
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_CALLBACK_WRAPPERS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class URPGItemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_RPGItemInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

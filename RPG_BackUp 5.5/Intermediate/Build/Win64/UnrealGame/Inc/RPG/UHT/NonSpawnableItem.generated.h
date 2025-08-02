// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/NonSpawnableItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_NonSpawnableItem_generated_h
#error "NonSpawnableItem.generated.h already included, missing '#pragma once' in NonSpawnableItem.h"
#endif
#define RPG_NonSpawnableItem_generated_h

#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNonSpawnableItem(); \
	friend struct Z_Construct_UClass_UNonSpawnableItem_Statics; \
public: \
	DECLARE_CLASS(UNonSpawnableItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(UNonSpawnableItem) \
	virtual UObject* _getUObject() const override { return const_cast<UNonSpawnableItem*>(this); }


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNonSpawnableItem(UNonSpawnableItem&&); \
	UNonSpawnableItem(const UNonSpawnableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNonSpawnableItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNonSpawnableItem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNonSpawnableItem) \
	NO_API virtual ~UNonSpawnableItem();


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_14_PROLOG
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class UNonSpawnableItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_NonSpawnableItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

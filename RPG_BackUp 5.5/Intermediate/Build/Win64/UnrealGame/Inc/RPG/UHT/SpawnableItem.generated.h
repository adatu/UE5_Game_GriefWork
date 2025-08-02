// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/SpawnableItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_SpawnableItem_generated_h
#error "SpawnableItem.generated.h already included, missing '#pragma once' in SpawnableItem.h"
#endif
#define RPG_SpawnableItem_generated_h

#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnableItem(); \
	friend struct Z_Construct_UClass_ASpawnableItem_Statics; \
public: \
	DECLARE_CLASS(ASpawnableItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ASpawnableItem) \
	virtual UObject* _getUObject() const override { return const_cast<ASpawnableItem*>(this); }


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnableItem(ASpawnableItem&&); \
	ASpawnableItem(const ASpawnableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnableItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnableItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnableItem) \
	NO_API virtual ~ASpawnableItem();


#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_12_PROLOG
#define FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_18_INCLASS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class ASpawnableItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_BackUp_5_5_Source_RPG_Public_Inventory_SpawnableItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

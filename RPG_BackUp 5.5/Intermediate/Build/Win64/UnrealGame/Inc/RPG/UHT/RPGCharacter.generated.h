// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTagContainer;
#ifdef RPG_RPGCharacter_generated_h
#error "RPGCharacter.generated.h already included, missing '#pragma once' in RPGCharacter.h"
#endif
#define RPG_RPGCharacter_generated_h

#define FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActvateAbilitiesWithTag); \
	DECLARE_FUNCTION(execGetMaxExperiencePoints); \
	DECLARE_FUNCTION(execGetExperiencePoints); \
	DECLARE_FUNCTION(execGetMaxAdrenaline); \
	DECLARE_FUNCTION(execGetAdrenaline); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCharacterLevel);


#define FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_CALLBACK_WRAPPERS
#define FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGCharacter(); \
	friend struct Z_Construct_UClass_ARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacter*>(this); }


#define FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPGCharacter(ARPGCharacter&&); \
	ARPGCharacter(const ARPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGCharacter) \
	NO_API virtual ~ARPGCharacter();


#define FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_13_PROLOG
#define FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_CALLBACK_WRAPPERS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class ARPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_BackUp_5_5_Source_RPG_Public_RPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

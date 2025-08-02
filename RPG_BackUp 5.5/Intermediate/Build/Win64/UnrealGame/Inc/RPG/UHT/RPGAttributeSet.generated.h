// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/RPGAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
struct FGameplayAttributeData;
#ifdef RPG_RPGAttributeSet_generated_h
#error "RPGAttributeSet.generated.h already included, missing '#pragma once' in RPGAttributeSet.h"
#endif
#define RPG_RPGAttributeSet_generated_h

#define FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxExpriencePoints); \
	DECLARE_FUNCTION(execOnRep_ExpriencePoints); \
	DECLARE_FUNCTION(execOnRep_MaxAdrenaline); \
	DECLARE_FUNCTION(execOnRep_Adrenaline); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execAdjustAttributeForMaxChange);


#define FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAttributeSet(); \
	friend struct Z_Construct_UClass_URPGAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URPGAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG"), NO_API) \
	DECLARE_SERIALIZER(URPGAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		Adrenaline, \
		MaxAdrenaline, \
		ExpriencePoints, \
		MaxExpriencePoints, \
		NETFIELD_REP_END=MaxExpriencePoints	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URPGAttributeSet) \
public:


#define FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGAttributeSet(URPGAttributeSet&&); \
	URPGAttributeSet(const URPGAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGAttributeSet) \
	NO_API virtual ~URPGAttributeSet();


#define FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_19_PROLOG
#define FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_22_INCLASS_NO_PURE_DECLS \
	FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_API UClass* StaticClass<class URPGAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RPG_BackUp_5_5_Source_RPG_Public_GAS_RPGAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

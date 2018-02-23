// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSTRUCTOROFTHEDEAD2_MyWeapon_Gun_generated_h
#error "MyWeapon_Gun.generated.h already included, missing '#pragma once' in MyWeapon_Gun.h"
#endif
#define INSTRUCTOROFTHEDEAD2_MyWeapon_Gun_generated_h

#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Fire(); \
		P_NATIVE_END; \
	}


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyWeapon_Gun(); \
	friend INSTRUCTOROFTHEDEAD2_API class UClass* Z_Construct_UClass_AMyWeapon_Gun(); \
public: \
	DECLARE_CLASS(AMyWeapon_Gun, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InstructorOfTheDead2"), NO_API) \
	DECLARE_SERIALIZER(AMyWeapon_Gun) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyWeapon_Gun(); \
	friend INSTRUCTOROFTHEDEAD2_API class UClass* Z_Construct_UClass_AMyWeapon_Gun(); \
public: \
	DECLARE_CLASS(AMyWeapon_Gun, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/InstructorOfTheDead2"), NO_API) \
	DECLARE_SERIALIZER(AMyWeapon_Gun) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyWeapon_Gun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyWeapon_Gun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWeapon_Gun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWeapon_Gun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWeapon_Gun(AMyWeapon_Gun&&); \
	NO_API AMyWeapon_Gun(const AMyWeapon_Gun&); \
public:


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWeapon_Gun(AMyWeapon_Gun&&); \
	NO_API AMyWeapon_Gun(const AMyWeapon_Gun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWeapon_Gun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWeapon_Gun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyWeapon_Gun)


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AMyWeapon_Gun, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AMyWeapon_Gun, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(AMyWeapon_Gun, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(AMyWeapon_Gun, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(AMyWeapon_Gun, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__ImpactEffect() { return STRUCT_OFFSET(AMyWeapon_Gun, ImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(AMyWeapon_Gun, TracerEffect); }


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_13_PROLOG
#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_PRIVATE_PROPERTY_OFFSET \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_RPC_WRAPPERS \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_INCLASS \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_PRIVATE_PROPERTY_OFFSET \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_INCLASS_NO_PURE_DECLS \
	Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_InstructorOfTheDead2_MyWeapon_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

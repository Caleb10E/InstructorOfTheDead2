// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SProjectileWeapon.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProjectileWeapon() {}
// Cross Module References
	INSTRUCTOROFTHEDEAD2_API UClass* Z_Construct_UClass_ASProjectileWeapon_NoRegister();
	INSTRUCTOROFTHEDEAD2_API UClass* Z_Construct_UClass_ASProjectileWeapon();
	INSTRUCTOROFTHEDEAD2_API UClass* Z_Construct_UClass_AMyWeapon_Gun();
	UPackage* Z_Construct_UPackage__Script_InstructorOfTheDead2();
// End Cross Module References
	void ASProjectileWeapon::StaticRegisterNativesASProjectileWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASProjectileWeapon_NoRegister()
	{
		return ASProjectileWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_ASProjectileWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AMyWeapon_Gun();
			Z_Construct_UPackage__Script_InstructorOfTheDead2();
			OuterClass = ASProjectileWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<ASProjectileWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SProjectileWeapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SProjectileWeapon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASProjectileWeapon, 4103515281);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASProjectileWeapon(Z_Construct_UClass_ASProjectileWeapon, &ASProjectileWeapon::StaticClass, TEXT("/Script/InstructorOfTheDead2"), TEXT("ASProjectileWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASProjectileWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

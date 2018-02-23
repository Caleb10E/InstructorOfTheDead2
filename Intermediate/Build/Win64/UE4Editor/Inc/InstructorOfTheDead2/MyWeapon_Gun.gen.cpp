// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyWeapon_Gun.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWeapon_Gun() {}
// Cross Module References
	INSTRUCTOROFTHEDEAD2_API UFunction* Z_Construct_UFunction_AMyWeapon_Gun_Fire();
	INSTRUCTOROFTHEDEAD2_API UClass* Z_Construct_UClass_AMyWeapon_Gun();
	INSTRUCTOROFTHEDEAD2_API UClass* Z_Construct_UClass_AMyWeapon_Gun_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InstructorOfTheDead2();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AMyWeapon_Gun::StaticRegisterNativesAMyWeapon_Gun()
	{
		UClass* Class = AMyWeapon_Gun::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&AMyWeapon_Gun::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMyWeapon_Gun_Fire()
	{
		UObject* Outer = Z_Construct_UClass_AMyWeapon_Gun();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyWeapon_Gun_NoRegister()
	{
		return AMyWeapon_Gun::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyWeapon_Gun()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_InstructorOfTheDead2();
			OuterClass = AMyWeapon_Gun::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMyWeapon_Gun_Fire());

				UProperty* NewProp_TracerEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TracerEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TracerEffect, AMyWeapon_Gun), 0x0020080000010015, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_ImpactEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImpactEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ImpactEffect, AMyWeapon_Gun), 0x0020080000010015, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_MuzzleEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MuzzleEffect, AMyWeapon_Gun), 0x0020080000010015, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_TracerTargetName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TracerTargetName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(TracerTargetName, AMyWeapon_Gun), 0x0020080000030015);
				UProperty* NewProp_MuzzleSocketName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleSocketName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(MuzzleSocketName, AMyWeapon_Gun), 0x0020080000030015);
				UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(DamageType, AMyWeapon_Gun), 0x0024080000010015, Z_Construct_UClass_UDamageType_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_MeshComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MeshComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MeshComp, AMyWeapon_Gun), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMyWeapon_Gun_Fire(), "Fire"); // 3910528698
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyWeapon_Gun> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(NewProp_TracerEffect, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_TracerEffect, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(NewProp_ImpactEffect, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_ImpactEffect, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(NewProp_MuzzleEffect, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_MuzzleEffect, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(NewProp_TracerTargetName, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_TracerTargetName, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(NewProp_MuzzleSocketName, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_MuzzleSocketName, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(NewProp_DamageType, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_DamageType, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MeshComp, TEXT("ModuleRelativePath"), TEXT("MyWeapon_Gun.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyWeapon_Gun, 1435224300);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyWeapon_Gun(Z_Construct_UClass_AMyWeapon_Gun, &AMyWeapon_Gun::StaticClass, TEXT("/Script/InstructorOfTheDead2"), TEXT("AMyWeapon_Gun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyWeapon_Gun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

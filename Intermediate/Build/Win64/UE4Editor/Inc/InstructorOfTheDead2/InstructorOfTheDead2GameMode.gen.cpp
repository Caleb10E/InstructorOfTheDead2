// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "InstructorOfTheDead2GameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstructorOfTheDead2GameMode() {}
// Cross Module References
	INSTRUCTOROFTHEDEAD2_API UClass* Z_Construct_UClass_AInstructorOfTheDead2GameMode_NoRegister();
	INSTRUCTOROFTHEDEAD2_API UClass* Z_Construct_UClass_AInstructorOfTheDead2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InstructorOfTheDead2();
// End Cross Module References
	void AInstructorOfTheDead2GameMode::StaticRegisterNativesAInstructorOfTheDead2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AInstructorOfTheDead2GameMode_NoRegister()
	{
		return AInstructorOfTheDead2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AInstructorOfTheDead2GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_InstructorOfTheDead2();
			OuterClass = AInstructorOfTheDead2GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AInstructorOfTheDead2GameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InstructorOfTheDead2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("InstructorOfTheDead2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInstructorOfTheDead2GameMode, 170126215);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInstructorOfTheDead2GameMode(Z_Construct_UClass_AInstructorOfTheDead2GameMode, &AInstructorOfTheDead2GameMode::StaticClass, TEXT("/Script/InstructorOfTheDead2"), TEXT("AInstructorOfTheDead2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInstructorOfTheDead2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class InstructorOfTheDead2EditorTarget : TargetRules
{
	public InstructorOfTheDead2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("InstructorOfTheDead2");
		ExtraModuleNames.Add("TestingModule");
	}
}

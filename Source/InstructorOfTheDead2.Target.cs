
// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class InstructorOfTheDead2Target : TargetRules
{
	public InstructorOfTheDead2Target(TargetInfo Target) : base(Target)
	{
        Type = TargetType.Game;
        bUsesSteam = true;
		ExtraModuleNames.Add("InstructorOfTheDead2");
	}
}
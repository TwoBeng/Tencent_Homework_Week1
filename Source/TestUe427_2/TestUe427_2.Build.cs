// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestUe427_2 : ModuleRules
{
	public TestUe427_2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

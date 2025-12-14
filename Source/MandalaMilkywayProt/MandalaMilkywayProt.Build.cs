// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MandalaMilkywayProt : ModuleRules
{
	public MandalaMilkywayProt(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG" });
	}
}

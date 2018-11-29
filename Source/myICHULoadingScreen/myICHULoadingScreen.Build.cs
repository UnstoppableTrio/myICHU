// Copyright 2018 Unstoppable Trio

using UnrealBuildTool;

// This module must be loaded "PreLoadingScreen" in the .uproject file, otherwise it will not hook in time!

public class myICHULoadingScreen : ModuleRules
{
	public myICHULoadingScreen(ReadOnlyTargetRules Target)
		: base(Target)
	{
		PrivateIncludePaths.Add("myICHULoadingScreen/Private");

		PublicDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"Engine"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"MoviePlayer",
				"Slate",
				"SlateCore",
				"InputCore"
			}
		);
	}
}

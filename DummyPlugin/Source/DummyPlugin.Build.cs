// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DummyPlugin  : ModuleRules
{
	public DummyPlugin (ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"ComponentVisualizers",
				"Engine",
				"Slate",
				"SlateCore",
				"InputCore",
				"UnrealEd",
				"LevelEditor",
				"EditorFramework",
				"EditorStyle",
				"ComponentVisualizers",
				"Landscape",
				"PropertyEditor",
				"Projects",
				"InteractiveToolsFramework",
				"EditorInteractiveToolsFramework"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"InputCore",
				"UnrealEd",
				"LevelEditor",
				"EditorFramework",
				"EditorStyle",
				"ComponentVisualizers",
				"Landscape",
				"PropertyEditor",
				"Projects",
				"InteractiveToolsFramework",
				"EditorInteractiveToolsFramework"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}

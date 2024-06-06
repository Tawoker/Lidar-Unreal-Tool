// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LidarPointCloudSimulation : ModuleRules
{
	public LidarPointCloudSimulation(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                    "CoreUObject",
                    "Engine",
                    "Core",
                    "Engine",
            }
        );

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                        "EditorFramework",
                        "UnrealEd",
                        "PropertyEditor",
                        "ContentBrowser",
                        "AssetRegistry"
                }
            );
        }
    }
}

// Copyright 2023 WenMoon Studios Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class WenPlay : ModuleRules
{
	public WenPlay(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateIncludePathModuleNames.AddRange(
			new string[] 
			{ 
				"PlatformCryptoOpenSSL", 
				"HTTP"
            }
			);

        PrivateIncludePaths.AddRange(
			new string[]
			{
                "ThirdParty/QRCodeGen/include",
            }
			);

        PublicAdditionalLibraries.AddRange(
			new string[]
			{
                Path.Combine(PluginDirectory, "Source/ThirdParty/QRCodeGen/lib/x64/QrCodeGen.lib"),
            }
			);

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core"
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"WebSockets",
				"SSL",
                "PlatformCrypto",
                "PlatformCryptoTypes",
                "PlatformCryptoOpenSSL",
				"JsonUtilities",
				"HTTP",
				"Json"
            }
			);

        AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenSSL");
    }
}

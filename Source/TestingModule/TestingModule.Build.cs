using UnrealBuildTool;


public class TestingModule : ModuleRules
{

    public TestingModule( ReadOnlyTargetRules Target ) : base(Target)
    {
		// Include Module Dependencies
        PublicDependencyModuleNames.AddRange( new string[] { "Core", "Engine", "OnlineSubsystemUtils" } );
        PrivateDependencyModuleNames.AddRange( new string[] { "RenderCore", "OnlineSubsystem" } );
		
		// Include module header files
       PublicIncludePaths.AddRange(new string[] {"TestingModule/Public"});

        // Include module source files
        PrivateIncludePaths.AddRange(new string[] { "TestingModule/Private"});

        // Used to Disable "Precompiled Headers" Requirement
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
    }
}
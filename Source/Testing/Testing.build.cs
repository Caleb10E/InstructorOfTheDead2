using UnrealBuildTool;

public class TestingModule : ModuleRules
{
    public TestingModule( ReadOnlyTargetRules Target )
    {
		// Include Module Dependencies
        PublicDependencyModuleNames.AddRange( new string[] { "Core", "Engine" } );
        PrivateDependencyModuleNames.AddRange( new string[] { "RenderCore" } );
		
		// Include module header files
       PublicIncludePaths.AddRange(new string[] {"TestingModule/Public"});
       
       // Include module source files
       PrivateIncludePaths.AddRange(new string[] {"TestingModule/Private"});
    }
}
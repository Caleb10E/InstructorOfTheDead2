using UnrealBuildTool;

public class Testing : ModuleRules
{
    public Testing( TargetInfo Target )
    {
		// Include Module Dependencies
        PublicDependencyModuleNames.AddRange( new string[] { "Core", "Engine" } );
        PrivateDependencyModuleNames.AddRange( new string[] { "RenderCore" } );
		
		// Include module header files
       PublicIncludePaths.AddRange(new string[] {"Testing/Public"});
       
       // Include module source files
       PrivateIncludePaths.AddRange(new string[] {"Testing/Private"});
    }
}
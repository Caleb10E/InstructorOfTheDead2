using UnrealBuildTool;

public class Testing : ModuleRules
{
    public Testing( TargetInfo Target )
    {
        PublicDependencyModuleNames.AddRange( new string[] { "Core", "Engine" } );
        PrivateDependencyModuleNames.AddRange( new string[] { "RenderCore" } );
    }
}
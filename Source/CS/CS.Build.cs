using UnrealBuildTool;

public class CS : ModuleRules
{
    public CS(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicDependencyModuleNames.AddRange(new string[]
        {

        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Core"
        });
    }
};
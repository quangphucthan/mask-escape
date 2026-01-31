using UnrealBuildTool;
using System.Collections.Generic;

public class MaskEscapeEditorTarget : TargetRules
{
    public MaskEscapeEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        ExtraModuleNames.AddRange(new string[] { "MaskEscape" });
    }
}

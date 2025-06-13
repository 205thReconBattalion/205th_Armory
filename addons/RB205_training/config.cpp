class cfgPatches
{
    class RB205_training
    {
        requiredAddons[] = {};
        requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {
			"RB205_TargetP_Inf_F1"
		};
		weapons[] = {};
    };
};
class CfgVeheicles
{
	class TargetP_Inf_F;
	class RB205_TargetP_Inf_F1: TargetP_Inf_F
	{
		displayName = "[205] TARGET 1";
	};
};

class CfgEditorCategories
{
	class RB205_prop_training
	{
		displayName = "[205] Training";
	};
};
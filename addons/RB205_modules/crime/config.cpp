class CfgPatches
{
    class RB205_modules_crime
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
    };
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class RB205_modules_wantedSystem: NO_CATEGORY
	{
		displayName = "[205] Wanted System";
	};
};

class CfgFunctions
{
	class RB205_Modules_Crime
	{
		class crime
		{
			file = "\RB205_modules\crime\functions";
			class addEntry{};
		};
	};
};


class CfgEditorCategories
{
	class RB205_Modules_Crime
	{
		displayName = "205th Recon Battalion";
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_Modules_Crime_PostInit
	{
		init = "call compile preprocessFileLineNumbers '\RB205_modules\crime\XEH_postInit.sqf'";
	};
};
class CfgPatches
{
    class RB205_modules_crime
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = 
        {
            "RB205_main",
			"RB205_weapons",
			"RB205_custom"
        };
    };
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class RB205_crime: NO_CATEGORY
	{
		displayName="Wanted System";
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
		displayName="205th Recon Battalion";
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_Modules_Crime_PostInit
	{
		init="call compile preprocessFileLineNumbers '\RB205_modules\crime\XEH_postInit.sqf'";
	};
};
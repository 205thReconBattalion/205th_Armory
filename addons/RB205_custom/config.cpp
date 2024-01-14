class cfgPatches
{
    class RB205_custom
	{
		requiredAddons[]=
		{
			"RB205_main"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {};
		units[] = {};
	};
};

#include "\RB205_main\macros.hpp"

class CfgEditorSubcategories
{
	class RB205_lore
	{
		displayName = "Lore Clones";
		ACCESS_TRUE
	};
};
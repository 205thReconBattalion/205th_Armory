class cfgPatches
{
	class RB205_custom_scythe
	{
		requiredAddons[] =
		{
			"RB205_main"
		};
		requiredVersion = 1.0;
		weapons[] =
        {
            "RB205_H_scythe",
            "RB205_U_scythe",
            "RB205_V_scythe"
        };
		units[]	=
        {
            "RB205_clone_scythe"
        };
	};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_lieutenant;
	class RB205_H_scythe: RB205_H_lieutenant
	{
		displayName = "[205] Clone Trooper Helmet (5577)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5577_scythe\data\H_scythe.paa",
		    "RB205_main\data\default\visor_p2_co.paa"
        };
	};

    class RB205_V_cl;
    class RB205_V_scythe: RB205_V_cl
    {
        displayName = "[205] Clone Trooper Vest (5577)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5577_scythe\data\V_scythe.paa"
        };
    };

    class RB205_U_lieutenant;
    class ItemInfo;
    class RB205_U_scythe: RB205_U_lieutenant
    {
        displayName = "[205] Clone Trooper Uniform (5577)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_scythe;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_lieutenant;
    class RB205_clone_scythe: RB205_clone_lieutenant
    {
        displayName = "CL-5577 Scythe";
        uniformclass = "RB205_U_scythe";
	    editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\5577_scythe\data\U_scythe_upper.paa",
            "RB205_custom\5577_scythe\data\U_scythe_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_scythe,"RB205_V_scythe","RB205_NV_rangefinder")
	    backpack = "RB205_B_radio_mini_blk";
        weapons[]=
	    {
		    "RB205_DC15A",
		    DC17_IN_USE,
		    "RB205_binocular_arf",
		    "Throw","Put"
	    };
	    respawnweapons[]=
	    {
		    "RB205_DC15S",
		    DC17_IN_USE,
		    "RB205_binocular_arf",
		    "Throw","Put"
	    };
    };
};
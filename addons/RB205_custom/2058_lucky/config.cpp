class cfgPatches
{
	class RB205_custom_lucky
	{
		requiredAddons[] =
		{
			"RB205_main",
            "RB205_custom"
		};
		requiredVersion = 1.0;
		weapons[] =
        {
            "RB205_H_lucky",
            "RB205_U_lucky"
        };
		units[]	=
        {
            "RB205_clone_lucky"
        };
	};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
	class RB205_H_lucky: RB205_H_trooper
	{
		displayName = "[205] Clone Trooper Helmet [2058]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2058_lucky\data\H_lucky.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
	};

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_lucky: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [2058]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_lucky;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_lucky: RB205_clone_trooper
    {
        displayName = "CT-2058 Lucky";
        uniformclass = "RB205_U_lucky";
	    editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2058_lucky\data\U_lucky_upper.paa",
            "RB205_custom\2058_lucky\data\U_lucky_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_lucky","RB205_V_ct","RB205_NV_chip")
    };
};
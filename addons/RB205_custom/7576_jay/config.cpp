class cfgPatches
{
    class RB205_custom_jay
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_jay",
            "RB205_U_jay"
        };
        units[] =
        {
            "RB205_clone_jay"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_jay: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [7576]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7576_jay\data\H_jay.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_jay: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [7576]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_jay;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_jay: RB205_clone_trooper
    {
        displayName = "CST-7576 Jay";
        uniformclass = "RB205_U_jay";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\7576_jay\data\U_jay_upper.paa",
            "RB205_custom\7576_jay\data\U_jay_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_jay", "RB205_V_ct", "RB205_NV_chip")
	    identityTypes[] = IDENTITY_TYPES;
    };
};
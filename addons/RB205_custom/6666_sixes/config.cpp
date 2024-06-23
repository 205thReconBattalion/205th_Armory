class cfgPatches
{
    class RB205_custom_sixes
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_sixes",
            "RB205_U_sixes"
        };
        units[]	=
        {
            "RB205_clone_sixes"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_plt_corporal;
    class RB205_H_sixes: RB205_H_plt_corporal
    {
        displayName = "[205] Clone Pilot Trooper Helmet [6666]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\6666_sixes\data\H_sixes.paa",
            "RB205_main\data\pilot\visor_plt_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_plt_corporal: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_sixes: RB205_U_plt_corporal
    {
        displayName = "[205] Clone Pilot Trooper Armor [6666]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_sixes;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_plt_corporal;
    class RB205_clone_sixes: RB205_clone_plt_corporal
    {
        displayName = "CP-6666 Sixes";
        uniformclass = "RB205_U_sixes";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\6666_sixes\data\U_sixes_upper.paa",
            "RB205_custom\6666_sixes\data\U_sixes_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_sixes","RB205_V_plt_cp","RB205_NV_chip")
	    identityTypes[] = IDENTITY_TYPES;
    };
};
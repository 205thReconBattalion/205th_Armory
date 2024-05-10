class cfgPatches
{
    class RB205_custom_flank
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] = 
        {
            "RB205_H_flank",
            "RB205_U_flank"
        };
        units[] =
        {
            "RB205_clone_flank"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_flank: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [5567]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5567_flank\data\H_flank.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "5567";
            var = "dft"
        };
    };

    class RB205_U_trooper;
    class ItemInfo;
    class RB205_U_flank: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [5567]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_flank;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "5567";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_flank: RB205_clone_trooper
    {
        displayName = "CTF-5567 Flank";
        uniformClass = "RB205_U_flank";
        editorSubCategory = "RB205_lore";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5567_flank\data\U_flank_upper.paa",
            "RB205_custom\5567_flank\data\U_flank_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_flank, "RB205_V_ct", "RB205_NV_chip")
    };
};
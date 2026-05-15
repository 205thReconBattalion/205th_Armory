class cfgPatches
{
    class RB205_custom_halvar
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_halvar",
            "RB205_U_halvar"
        };
        units[] =
        {
            "RB205_clone_halvar"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_corporal;
    class RB205_H_halvar : RB205_H_corporal
    {
        displayName = "[205] Clone Trooper Helmet [7045]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7045_halvar\data\H_halvar.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_corporal: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_halvar : RB205_U_corporal
    {
        displayName = "[205] Clone Trooper Armor [7045]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_halvar;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_corporal;
    class RB205_clone_halvar : RB205_clone_corporal
    {
        displayName = "CP-7045 Halvar";
        uniformclass = "RB205_U_halvar";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\7045_halvar\data\U_halvar_upper.paa",
            "RB205_custom\7045_halvar\data\U_halvar_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_halvar", "RB205_V_cp", "RB205_NV_chip")
    };
};
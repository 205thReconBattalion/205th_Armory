class cfgPatches
{
    class RB205_custom_norway
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_norway",
            "RB205_U_norway"
        };
        units[] =
        {
            "RB205_clone_norway"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_corporal;
    class RB205_H_norway : RB205_H_ab_corporal
    {
        displayName = "[205] Clone Airborne Trooper Helmet (7300)";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\7300_norway\data\H_norway.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
    };

    class RB205_U_corporal;
    class ItemInfo;
    class RB205_U_norway : RB205_U_corporal
    {
        displayName = "[205] Clone Airborne Trooper Armor (7300)";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_norway;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_corporal;
    class RB205_clone_norway : RB205_clone_ab_corporal
    {
        displayName = "CP-7300 Norway";
        uniformclass = "RB205_U_norway";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\7300_norway\data\U_norway_upper.paa",
            "RB205_custom\7300_norway\data\U_norway_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_norway, "RB205_V_ab_cp", "RB205_NV_chip")
    };
};
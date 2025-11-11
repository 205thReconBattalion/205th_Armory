class cfgPatches
{
    class RB205_custom_phantom
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_phantom",
            "RB205_U_phantom"
        };
        units[] =
        {
            "RB205_clone_phantom"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_ab_trooper;
    class RB205_H_phantom : RB205_H_ab_trooper
    {
        displayName = "[205] Clone Airborne Trooper Helmet [3369]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\3369_phantom\data\H_phantom.paa",
            "RB205_main\data\airborne\visor_ab_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_phantom : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [3369]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_phantom;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_ab_trooper;
    class RB205_clone_phantom : RB205_clone_ab_trooper
    {
        displayName = "CT-3369 Phantom";
        uniformclass = "RB205_U_phantom";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\3369_phantom\data\U_phantom_upper.paa",
            "RB205_custom\3369_phantom\data\U_phantom_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_phantom", "RB205_V_ab_ct", "RB205_NV_chip")
    };
};
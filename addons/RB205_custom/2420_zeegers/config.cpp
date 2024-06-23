class cfgPatches
{
    class RB205_custom_zeegers
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_zeegers",
            "RB205_U_zeegers"
        };
        units[] =
        {
            "RB205_clone_zeegers"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_zeegers : RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [2420]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2420_zeegers\data\H_zeegers.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_zeegers : RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [2420]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_zeegers;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_zeegers : RB205_clone_trooper
    {
        displayName = "CSP-2420 Zeegers";
        uniformclass = "RB205_U_zeegers";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2420_zeegers\data\U_zeegers_upper.paa",
            "RB205_custom\2420_zeegers\data\U_zeegers_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_zeegers", "RB205_V_ct", "RB205_NV_chip")
    };
};
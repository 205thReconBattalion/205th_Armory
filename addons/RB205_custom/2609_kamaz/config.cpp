class cfgPatches
{
    class RB205_custom_kamaz
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_kamaz",
            "RB205_U_kamaz"
        };
        units[]	=
        {
            "RB205_clone_kamaz"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_kamaz: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [2609]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\0113_tachanka\data\H_tachanka.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_kamaz: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Armor [2609]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_kamaz;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_kamaz: RB205_clone_trooper
    {
        displayName = "CSP-2609 Kamaz";
        uniformclass = "RB205_U_kamaz";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2609_kamaz\data\U_kamaz_upper.paa",
            "RB205_custom\2609_kamaz\data\U_kamaz_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_kamaz","RB205_V_ct","RB205_NV_chip")
    };
};
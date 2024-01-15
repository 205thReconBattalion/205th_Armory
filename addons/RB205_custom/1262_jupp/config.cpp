class cfgPatches
{
    class RB205_custom_jupp
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_jupp",
            "RB205_U_jupp"
        };
        units[]	=
        {
            "RB205_clone_jupp"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_arf_trooper;
    class RB205_H_jupp: RB205_H_arf_trooper
    {
        displayName = "[205] Clone ARF Trooper Helmet [1262]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\1262_jupp\data\H_jupp.paa",
            "",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
    };

    class RB205_U_arf_trooper;
    class ItemInfo;
    class RB205_U_jupp: RB205_U_arf_trooper
    {
        displayName = "[205] Clone ARF Trooper Armor [1262]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_jupp;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_arf_trooper;
    class RB205_clone_jupp: RB205_clone_arf_trooper
    {
        displayName = "CSP-1262 jupp";
        uniformclass = "RB205_U_jupp";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\1262_jupp\data\U_jupp_upper.paa",
            "RB205_custom\1262_jupp\data\U_jupp_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_jupp","RB205_V_arf_ct","RB205_NV_arf_antenna")
    };
};
class cfgPatches
{
    class RB205_custom_firefly
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_firefly",
            "RB205_U_firefly"
        };
        units[] =
        {
            "RB205_clone_firefly"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_arf_trooper;
    class RB205_H_firefly: RB205_H_arf_trooper
    {
        displayName = "[205] Clone ARF Trooper Helmet [4040]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\4040_firefly\data\H_firefly.paa",
            "",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_arf_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_firefly: RB205_U_arf_trooper
    {
        displayName = "[205] Clone ARF Trooper Armor [4040]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_firefly;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_arf_corporal;
    class RB205_clone_firefly: RB205_clone_arf_corporal
    {
        displayName = "CP-4040 Firefly";
        uniformclass = "RB205_U_firefly";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\4040_firefly\data\U_firefly_upper.paa",
            "RB205_custom\4040_firefly\data\U_firefly_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_firefly", "RB205_V_arf_cp", "RB205_NV_arf_antenna")
    };
};
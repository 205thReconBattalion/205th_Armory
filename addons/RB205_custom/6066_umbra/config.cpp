class cfgPatches
{
    class RB205_custom_umbra
    {
        requiredAddons[] = 
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_umbra",
            "RB205_U_umbra"
        };
        units[] =
        {
            "RB205_clone_umbra"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_corporal;
    class RB205_H_umbra: RB205_H_corporal
    {
        displayName = "[205] Clone Trooper Helmet [6066]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\6066_umbra\data\H_umbra.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_corporal: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_umbra: RB205_U_corporal
    {
        displayName = "[205] Clone Trooper Armor [6066]";
        class ItemInfo : ItemInfo
        {
            uniformClass = RB205_clone_umbra;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_lanceCorporal;
    class RB205_clone_umbra: RB205_clone_lanceCorporal
    {
        displayName = "CLC-6066 Umbra";
        uniformClass = "RB205_U_umbra";
        editorSubCategory = "RB205_lore";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\6066_umbra\data\U_umbra_upper.paa",
            "RB205_custom\6066_umbra\data\U_umbra_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_umbra", "RB205_V_clc", "RB205_NV_chip")
    };
};
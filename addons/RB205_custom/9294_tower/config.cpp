class cfgPatches
{
    class RB205_custom_tower
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_tower",
            "RB205_U_tower",
            "RB205_V_tower"
        };
        units[]	=
        {
            "RB205_clone_tower"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_tower: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [9294]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\9294_tower\data\H_tower.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_tower: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Uniform [9294]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_tower;
        };
    };

    class RB205_V_cs;
    class RB205_V_tower: RB205_V_cs
    {
        displayName = "[205] Clone Trooper Vest [9294]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\9294_tower\data\V_tower.paa",
            ""
        };
    };
};

class cfgVehicles
{
    class RB205_clone_sergeant;
    class RB205_clone_tower: RB205_clone_sergeant
    {
        displayName = "CS-9294 Tower";
        uniformclass = "RB205_U_tower";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\9294_tower\data\U_tower_upper.paa",
            "RB205_custom\9294_tower\data\U_tower_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_tower","RB205_V_tower","RB205_NV_chip")
	    identityTypes[] = IDENTITY_TYPES;
    };
};
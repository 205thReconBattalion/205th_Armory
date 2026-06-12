class cfgPatches
{
    class RB205_custom_slow
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_slow",
            "RB205_H_crew_slow",
            "RB205_U_slow"
        };
        units[]	=
        {
            "RB205_clone_slow"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_sergeant;
    class RB205_H_slow: RB205_H_sergeant
    {
        displayName = "[205] Clone Trooper Helmet [3340]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\3340_slow\data\H_slow.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };
    class RB205_H_crew_sergeant;
    class RB205_H_crew_slow: RB205_H_crew_sergeant
    {
        displayName = "[205] Clone Crewman Trooper Helmet [3340]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\3340_slow\data\H_slow_crewman.paa",
            "RB205_main\data\crewman\light_crew_co.paa",
            "RB205_main\data\crewman\visor_crew_co.paa"
        };
    };

    class RB205_U_sgt_base;
    class RB205_U_sergeant: RB205_U_sgt_base
    {
        class ItemInfo;
    };
    class RB205_U_slow: RB205_U_sergeant
    {
        displayName = "[205] Clone Trooper Armor [3340]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_slow;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_trooper;
    class RB205_clone_slow: RB205_clone_trooper
    {
        displayName = "CT-3340 Slow";
        uniformclass = "RB205_U_slow";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\3340_slow\data\U_slow_upper.paa",
            "RB205_custom\3340_slow\data\U_slow_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_slow","RB205_V_ct","RB205_NV_chip")
    };
};
class cfgPatches
{
    class RB205_custom_junior
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_junior",
            "RB205_U_junior",
            "RB205_V_junior"
        };
        units[]	=
        {
            "RB205_clone_junior"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_trooper;
    class RB205_H_junior: RB205_H_trooper
    {
        displayName = "[205] Clone Trooper Helmet [5463]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5463_junior\data\H_junior.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_trooper: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_junior: RB205_U_trooper
    {
        displayName = "[205] Clone Trooper Uniform [5463]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_junior;
        };
    };

    class RB205_V_cs;
    class RB205_V_junior: RB205_V_cs
    {
        displayName = "[205] Clone Trooper Vest [5463]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\5463_junior\data\V_junior.paa",
            ""
        };
    };
};

class cfgVehicles
{
    class RB205_clone_sergeant;
    class RB205_clone_junior: RB205_clone_sergeant
    {
        displayName = "CS-5463 Junior";
        uniformclass = "RB205_U_junior";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\5463_junior\data\U_junior_upper.paa",
            "RB205_custom\5463_junior\data\U_junior_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_junior","RB205_V_junior","RB205_NV_chip")
	    identityTypes[] = IDENTITY_TYPES;
    };
};
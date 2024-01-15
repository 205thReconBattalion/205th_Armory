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
        "RB205_U_kamaz",
        "RB205_V_kamaz"
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
    class RB205_H_arf_sergeant;
    class RB205_H_kamaz: RB205_H_arf_sergeant
    {
        displayName = "[205] Clone Trooper ARF Helmet [2609]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2609_kamaz\data\H_kamaz.paa",
            "",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
    };

    class RB205_U_arf_sergeant;
    class ItemInfo;
    class RB205_U_kamaz: RB205_U_arf_sergeant
    {
        displayName = "[205] Clone Trooper ARF Uniform [2609]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_kamaz;
        };
    };

    class RB205_V_arf_cs;
    class RB205_V_kamaz: RB205_V_arf_cs
    {
        displayName = "[205] Clone Trooper Vest [2609]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2609_kamaz\data\V_kamaz.paa"
        };
    };
};

class cfgVehicles
{
    class RB205_clone_arf_sergeant;
    class RB205_clone_kamaz: RB205_clone_arf_sergeant
    {
        displayName = "CS-2609 Kamaz";
        uniformclass = "RB205_U_kamaz";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\2609_kamaz\data\U_kamaz_upper.paa",
            "RB205_custom\2609_kamaz\data\U_kamaz_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_kamaz","RB205_V_kamaz","RB205_NV_arf_antenna")
    };
};
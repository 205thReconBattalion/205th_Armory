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
    class RB205_H_arf_sergeant;
    class RB205_H_kamaz: RB205_H_arf_sergeant
    {
        displayName = "[205] Clone ARF Trooper Helmet [2609]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\2609_kamaz\data\H_kamaz.paa",
            "",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H_custom";
            id = "2609";
            var = "dft";
        };
    };

    class RB205_U_arf_sergeant;
    class ItemInfo;
    class RB205_U_kamaz: RB205_U_arf_sergeant
    {
        displayName = "[205] Clone ARF Trooper Armor [2609]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_kamaz;
        };
        class XtdGearInfo
        {
            model = "RB205_U_custom";
            id = "2609";
            var = "dft";
        };
    };
};

class cfgVehicles
{
    class RB205_clone_arf_sergeant;
    class RB205_clone_kamaz: RB205_clone_arf_sergeant
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
        LINKED_ITEMS("RB205_H_kamaz","RB205_V_arf_cs","RB205_NV_arf_antenna")
    };
};
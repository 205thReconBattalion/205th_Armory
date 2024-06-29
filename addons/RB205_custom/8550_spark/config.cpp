class cfgPatches
{
    class RB205_custom_spark
    {
        requiredAddons[] =
        {
            "RB205_main",
            "RB205_custom"
        };
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_spark",
            "RB205_U_spark",
            "RB205_V_spark",

            "RB205_H_spark_arf",
            "RB205_U_spark_arf",
            "RB205_V_spark_arf"
        };
        units[] =
        {
            "RB205_B_spark",
            "RB205_B_spark_jetpack",

            "RB205_clone_spark",
            "RB205_clone_spark_arf"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_lieutenant;
    class RB205_H_spark: RB205_H_lieutenant
    {
        displayName = "[205] Clone Commander Helmet [8550]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\H_spark.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };
    class RB205_H_arf_lieutenant;
    class RB205_H_spark_arf: RB205_H_arf_lieutenant
    {
        displayName = "[205] Clone ARF Commander Helmet [8550]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\H_spark_arf.paa",
            "",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
    };

    class RB205_U_base;
    class RB205_U_com_base: RB205_U_base
    {
        class ItemInfo;
    };
    class RB205_U_spark: RB205_U_com_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Armor [8550]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_spark;
        };
    };
    class RB205_U_spark_arf: RB205_U_com_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone ARF Commander Armor [8550]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_spark_arf;
        };
    };

    class RB205_V_platoonLead_base;
    class RB205_V_commander_base: RB205_V_platoonLead_base
    {
        class ItemInfo;
    };
    class RB205_V_spark: RB205_V_commander_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Vest [8550]";
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\V_spark.paa",
            "RB205_custom\8550_spark\data\V_spark_rank.paa"
        };
    };
    class RB205_V_spark_arf: RB205_V_commander_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone ARF Commander Vest [8550]";
        hiddenSelectionsTextures[] =
        {
            "RB205_main\data\default\V_heavy_co.paa",
            "",
            "RB205_main\data\default\V_heavy_co.paa"/*,
            "RB205_main\data\default\V_heavy_co.paa"*/
        };
        //Recon Vest:
        model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
        picture = "\RB205_main\data\ui\vests\icon_V_fireTeamLead.paa";
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "holster",
            "pauldron"
        };
        hiddenSelectionsMaterials[]=
        {
            "RB205_main\data\materials\heavy_acc.rvmat",
            "RB205_main\data\materials\heavy_acc.rvmat",
            "RB205_main\data\materials\heavy_acc_holster.rvmat"/*,
            "RB205_main\data\materials\heavy_acc.rvmat"*/
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
            hiddenSelections[] = {"camo1","camo2","holster","pauldron"};
        };
    };
};

class cfgVehicles
{
    class RB205_backpack_base;
    class RB205_B_spark: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Radio Transmitter [8550]";
        picture = "\RB205_custom\8550_spark\data\ui\icon_B_spark.paa";
		TFAR_RADIO_SMALL
    };

    class RB205_B_arc_jetpack;
    class RB205_B_spark_jetpack: RB205_B_arc_jetpack
    {
        displayName = "[205] Clone Commander Jetpack [8550]";
        picture = "\RB205_custom\8550_spark\data\ui\icon_B_spark_jetpack.paa";
        model = "\MRC\JLTS\characters\CloneArmor\CloneJumppackMC.p3d";
        hiddenSelections[] =
        {
            "camo1"
        };
        hiddenSelectionsMaterials[] =
        {
            "RB205_main\data\materials\B_spark_jetpack.rvmat"
        };
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\B_spark.paa"
        };
    };

    class RB205_clone_commander;
    class RB205_clone_spark: RB205_clone_commander
    {
        ACCESS_TRUE
        displayName = "CC-8550 Spark";
        uniformclass = "RB205_U_spark";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\U_spark_upper.paa",
            "RB205_custom\8550_spark\data\U_spark_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_spark","RB205_V_spark","RB205_NV_chip")
        backpack = "RB205_B_spark_jetpack";
        identityTypes[] = IDENTITY_TYPES_GLASSES("RB205_VIS_spark");
    };
    class RB205_clone_spark_arf: RB205_clone_commander
    {
        ACCESS_TRUE
        displayName = "CC-8550 Spark (ARF)";
        uniformclass = "RB205_U_spark_arf";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\U_spark_arf_upper.paa",
            "RB205_custom\8550_spark\data\U_spark_arf_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS("RB205_H_spark_arf","RB205_V_spark_arf","RB205_NV_arf_antenna")
        backpack = "RB205_B_spark";
        identityTypes[] = IDENTITY_TYPES;
        //MC Armor:
        model = "ls_armor_bluefor\uniform\gar\marshalCommander\ls_gar_marshalCommander_uniform.p3d";
        hiddenselectionsMaterials[] =
        {
            "RB205_custom\8550_spark\data\U_spark_arf_upper.rvmat",
            "RB205_main\data\materials\U_lower.rvmat",
            "RB205_main\data\materials\U_undersuit.rvmat"
        };
    };
};

class CfgGlasses
{
    class RB205_VIS_com;
    class RB205_VIS_spark: RB205_VIS_com
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Visor [8550]";
        /*hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\VIS_spark.paa",
            "RB205_custom\8550_spark\data\VIS_spark.paa",
            "RB205_custom\8550_spark\data\VIS_spark.paa"
        };*/
        identityTypes[] = { "RB205_VIS_spark",1 };
    };
};
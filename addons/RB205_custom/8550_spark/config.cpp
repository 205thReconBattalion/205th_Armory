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
            "RB205_H_arf_spark",
            "RB205_V_spark",
            "RB205_U_spark"
        };
        units[] =
        {
            "RB205_B_spark",
            "RB205_B_spark_jetpack",

            "RB205_clone_spark"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class ItemInfo;

    class RB205_H_lieutenant;
    class RB205_H_spark: RB205_H_lieutenant
    {
        displayName = "[205] Clone Commander Helmet [8550]"
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\H_spark.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H";
            phase = "p2";
            type = "dft";
            rank = "cc";
            camo = "default";
            var = "default";
        };
    };
    class RB205_H_arf_lieutenant;
    class RB205_H_arf_spark: RB205_H_arf_lieutenant
    {
        displayName = "[205] Clone ARF Commander Helmet [8550]"
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\H_spark_arf.paa",
            "",
            "RB205_main\data\arf\visor_arf_co.paa"
        };
        class XtdGearInfo
        {
            model = "RB205_H";
            phase = "p2";
            type = "arf";
            rank = "cc";
            camo = "default";
            var = "default";
        };
    };

    class RB205_U_com_base;
    class RB205_U_spark: RB205_U_com_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Armor [8550]";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_spark;
        };
        class XtdGearInfo
        {
            model = "RB205_U";
            phase = "p2";
            type = "dft";
            rank = "cc";
            camo = "default";
            squad = "default";
        };
    };

    class RB205_V_commander_base;
    class RB205_V_spark: RB205_V_commander_base
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Vest [8550]"
        model = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
        hiddenSelections[] = {"camo1","rank"};
        hiddenSelectionsMaterials[]=
        {
            "RB205_main\data\materials\officer_acc.rvmat",
            "RB205_main\data\materials\rank.rvmat"
        };
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\V_spark.paa",
            "RB205_custom\8550_spark\data\V_spark_rank.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
            hiddenSelections[] = {"camo1","rank"};
        };
        class XtdGearInfo
        {
            model = "RB205_V";
            phase = "p2";
            type = "dft";
            rank = "cc";
            special = "default";
        };
    };
};

class cfgVehicles
{
    class B_Kitbag_rgr;
    class RB205_B_spark: B_Kitbag_rgr
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Radio Transmitter [8550]";
        author = "205th Recon Battalion";
        picture = "\RB205_custom\8550_spark\data\ui\icon_B_spark.paa";
		model = "\RB205_custom\8550_spark\data\B_spark_invisible.p3d";
		maximumLoad = 0;
		mass = 0;
		TFAR_RADIO_SMALL
        class XtdGearInfo
        {
            model = "RB205_custom_B_spark";
            type = "default";
        };
    };

    class RB205_B_arc_jetpack;
    class RB205_B_spark_jetpack: RB205_B_arc_jetpack
    {
        ACCESS_TRUE
        displayName = "[205] Clone Commander Jetpack [8550]";
        author = "205th Recon Battalion";
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
        class XtdGearInfo
        {
            model = "RB205_custom_B_spark";
            type = "jetpack";
        };
        //KND-Jetpack:
        knd_isJetpack = 1;
        knd_jetpack_acceleration = 1.8;
        knd_jetpack_ascensionCoef = 1;
        knd_jetpack_coolCoef = 1;
        knd_jetpack_fuelCapacity = 400;
        knd_jetpack_fuelCoef = 1.5;
        knd_jetpack_heatCoef = 5; //8
        knd_jetpack_jumpCoef = 1;
        knd_jetpack_resistance = 4;
        knd_jetpack_strafeCoef = 0.3;
    };

    class RB205_clone_lieutenant;
    class RB205_clone_spark: RB205_clone_lieutenant
    {
        displayName = "CC-8550 Spark";
        uniformclass = "RB205_U_spark";
        editorSubCategory = "RB205_lore";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\U_spark_upper.paa",
            "RB205_custom\8550_spark\data\U_spark_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_spark,"RB205_V_spark","RB205_NV_chip")
        backpack = "RB205_B_spark_jetpack";
        identityTypes[]={"LanguageENG_F","SWLB_JH_Head_Hair","RB205_VIS_spark"};
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
        /*class XtdGearInfo
        {
            model = "RB205_G_custom";
            type = "8550";
            var = "dft";
        };*/
    };
};

class XtdGearModels
{
    class CfgVehicles
    {
        class RB205_custom_B_spark
        {
            label = "8550";
            author = "205th Recon Battalion";
            options[] =
			{
				"type"
			};
            class type
            {
                label = "Variante";
                values[] =
				{
                    "default",
                    "jetpack"
                };
                class default
                {
                    label = "Standard";
                    description = "";
                };
                class jetpack
                {
                    label = "Jetpack";
                    description = "";
                };
            };
        };
    };
};
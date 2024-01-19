class cfgPatches
{
    class RB205_custom_spark
    {
        requiredAddons[] =
        {
            "RB205_custom"
        };
        author = "205th Recon Battalion";
        requiredVersion = 1.0;
        weapons[] =
        {
            "RB205_H_spark",
            "RB205_V_spark",
            "RB205_U_spark"
        };
        units[] =
        {
            "RB205_clone_spark"
        };
    };
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class RB205_H_lieutenant;
    class RB205_H_spark: RB205_H_lieutenant
    {
        displayName = "[205] Clone Trooper Helmet [8550]"
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\H_spark.paa",
            "RB205_main\data\default\visor_p2_co.paa"
        };
    };

    class RB205_V_cl;
    class RB205_V_spark: RB205_V_cl
    {
        displayName = "[205] Clone Trooper Vest [8550]"
        hiddenSelectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\V_spark.paa"
        };
    };

    class RB205_U_lieutenant;
    class ItemInfo;
    class RB205_U_spark: RB205_U_lieutenant
    {
        displayName = "[205] Clone Trooper Armor (Lieutenant)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_clone_spark;
        };
    };
};

class cfgVehicles
{
    class RB205_clone_lieutenant;
    class RB205_clone_spark: RB205_clone_lieutenant
    {
        displayName = "CC-8550 Spark";
        uniformclass = "RB205_U_spark";
        hiddenselectionsTextures[] =
        {
            "RB205_custom\8550_spark\data\U_spark_upper.paa",
            "RB205_custom\8550_spark\data\U_spark_lower.paa",
            "RB205_main\data\default\U_undersuit_co.paa"
        };
        LINKED_ITEMS(RB205_H_spark,"RB205_V_spark","RB205_NV_rangefinder")
    };
};
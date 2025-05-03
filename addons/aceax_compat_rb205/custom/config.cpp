class cfgPatches
{
    class aceax_compat_RB205_custom
	{
		requiredAddons[] =
        {
            "aceax_compat_RB205",
            "RB205_custom",
            "aceax_compat_RB205_main"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
        weapons[] = {};
        units[] = {};
	};
};

#include "macros.hpp"
#include "\aceax_compat_rb205\main\macros.hpp"

class XtdGearModels
{
    class CfgWeapons 
    {
        class RB205_aceax_compat_base;
        class aceax_compat_RB205_custom_base: RB205_aceax_compat_base
        {
            label = LABEL;
            options[] = 
            {
                "id",
                "variant"
            };
            class id
            {
                label = "ID";
                values[] =
				{
                    "0113",
                    "0955",
					"1312",
                    "1618",
                    "1972",
                    "2004",
                    "2058",
                    "2111",
                    "2187",
                    "2209",
                    "2420",
                    "2441",
                    "2609",
                    "3234",
                    "3340",
                    "3369",
                    "3697",
                    "4030",
                    "4040",
                    "4137",
                    "4562",
                    "4600",
                    "5283",
                    "5463",
                    "5567",
                    "5577",
                    "5884",
                    "6666",
                    "7005",
                    "7300",
                    "7565",
                    "7576",
                    "8550",
                    "9089"
				};
                class 0113
                {
                    description = "Tachanka";
                };
                class 0955
                {
                    description = "Mando";
                };
                class 1312
                {
                    description = "Shadow";
                };
                class 1618
                {
                    description = "Fugger";
                };
                class 1972
                {
                    description = "Akira";
                };
                class 2004
                {
                    description = "Lost";
                };
                class 2058
                {
                    description = "Lucky";
                };
                class 2111
                {
                    description = "Pain";
                };
                class 2187
                {
                    description = "Fire";
                };
                class 2209
                {
                    description = "Tyr";
                };
                class 2420
                {
                    description = "Zeegers";
                };
                class 2441
                {
                    description = "Gentleman";
                };
                class 2609
                {
                    description = "Kamaz";
                };
                class 3234
                {
                    description = "Paso";
                };
                class 3340
                {
                    description = "Slow";
                };
                class 3369
                {
                    description = "Phantom";
                };
                class 3697
                {
                    description = "Lightning";
                };
                class 4030
                {
                    description = "Ark";
                };
                class 4040
                {
                    description = "Firefly";
                };
                class 4137
                {
                    description = "Banger";
                };
                class 4562
                {
                    description = "Recker";
                };
                class 4600
                {
                    description = "Crossfire";
                };
                class 5283
                {
                    description = "Putzi";
                };
                class 5463
                {
                    description = "Junior";
                };
                class 5567
                {
                    description = "Flank";
                };
                class 5577
                {
                    description = "Scythe";
                };
                class 5884
                {
                    description = "Irwan";
                };
                class 6666
                {
                    description = "Sixes";
                };
                class 7005
                {
                    description = "Doc";
                };
                class 7300
                {
                    description = "Norway";
                };
                class 7565
                {
                    description = "Jumper";
                };
                class 7576
                {
                    description = "Jay";
                };
                class 8550
                {
                    description = "Spark";
                };
                class 9089
                {
                    description = "Unlucky";
                };
            };
        };

        class aceax_compat_RB205_custom_H: aceax_compat_RB205_custom_base
        {
            label = "Clone Helmet (Lore)";
        };

        class aceax_compat_RB205_custom_U: aceax_compat_RB205_custom_base
        {
            label = "Clone Armor (Lore)";
        };

        class aceax_compat_RB205_custom_V: aceax_compat_RB205_custom_base
        {
            label = "Clone Vest (Lore)";
        };
    };
    
    class CfgVehicles
    {
        class RB205_aceax_compat_base_B;
        class aceax_compat_RB205_custom_B_spark: RB205_aceax_compat_base_B
        {
            label = "Clone Commander Backpack";
            options[] = 
            {
                "variant"
            };
            class variant
            {
                label = "Variant";
                values[] =
				{
                    "default",
                    "jetpack"
				};
                class default
                {
                    label = "Default";
                };
                class jetpack
                {
                    label = "Jetpack";
                };
            };
        };
    };

    class CfgGlasses
    {
        class aceax_compat_RB205_custom_VIS_doc
        {
            label = "Clone Visor [7005]";
            author = "205th Recon Battalion";
            options[] =
			{
                "variant"
			};
            class variant
            {
                label = "Variant";
                values[] =
				{
					"dft",
                    "dmg",
				};
                class dft
                {
                    label = "Default";
                };
                class dmg
                {
                    label = "Damaged";
                };
            };
        };
    };
};

#include "XtdGearInfos.hpp"
class cfgPatches
{
    class aceax_compat_RB205_main
	{
		requiredAddons[] =
        {
            "aceax_compat_RB205",
            "RB205_main"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
        weapons[] = {};
        units[] = {};
	};
};

#include "macros.hpp"

class XtdGearModels
{
    class CfgWeapons 
    {
        class RB205_aceax_compat_base;
        class aceax_compat_RB205_main_base: RB205_aceax_compat_base
        {
            label = LABEL;
            options[] = 
            {
                "type",
                "rank",
                "camo",
                "squad",
                "role",
                "variant"
            };
            class type
            {
                label = "Type";
                values[] =
				{
                    "dft",
                    "jet",
                    "sct",
                    "plt",
                    "crw",
                    "snw",
                    "hzd",
                    "sof"
				};
                class dft
                {
                    label = "Default";
                    description = "Standardmäßige Ausrüstung";
                };
                class jet
                {
                    label = "Airborne";
                    description = "Luftlandetruppe";
                };
                class sct
                {
                    label = "ARF";
                    description = "(Advanced Recon Force), Aufklärer";
                };
                class plt
                {
                    label = "Pilot";
                    description = "Pilot";
                };
                class crw
                {
                    label = "Crewman";
                    description = "Panzerbesatzung";
                };
                class snw
                {
                    label = "Snow";
                    description = "Schneeausrüstung";
                };
                class hzd
                {
                    label = "Hazard";
                    description = "Schutzausrüstung";
                };
                class sof
                {
                    label = "ARC";
                    description = "(Advanced Recon Commando), Spezialeinheit";
                };
            };
            class camo
            {
                label = "Camouflage";
                values[] =
				{
                    "default",
					"arctic",
                    "woodland",
                    "jungle",
					"desert"
				};
                class default
                {
                    label = "Default";
                    image = IMAGE_CAMO_DEFAULT;
                    description = "Keine Tarnung";
                };
                class arctic
                {
                    label = "Arctic";
                    image = IMAGE_CAMO_ARCTIC;
                    description = "Schneetarn";
                };
                class woodland
                {
                    label = "Woodland";
                    image = IMAGE_CAMO_WOODLAND;
                    description = "Waldtarn";
                };
                class jungle
                {
                    label = "Jungle";
                    image = IMAGE_CAMO_JUNGLE;
                    description = "Tropentarn";
                };
                class desert
                {
                    label = "Desert";
                    image = IMAGE_CAMO_DESERT;
                    description = "Wüstentarn";
                };
            };
            class squad
            {
                label = "Squad";
                values[] =
				{
                    "none",
                    "1_1",
					"1_2",
					"1_3",
					"2_1",
					"3_1"
				};
                class none
                {
                    label = "Default";
                    description = "Kein Squad";
                    image = IMAGE_NONE;
                };
                class 1_1
                {
                    label = "";
                    description = "Zillo (1-1)";
                    image = IMAGE_ZILLO;
                };
                class 1_2
                {
                    label = "";
                    description = "Chimaera (1-2)";
                    image = IMAGE_CHIMAERA;
                };
                class 1_3
                {
                    label = "";
                    description = "Rancor (1-3)";
                    image = IMAGE_RANCOR;
                };
                class 2_1
                {
                    label = "";
                    description = "Krayt (2-1)";
                    image = IMAGE_KRAYT;
                };
                class 3_1
                {
                    label = "";
                    description = "Raven (3-1)";
                    image = IMAGE_RAVEN;
                };
            };
        };

        class aceax_compat_RB205_main_H: aceax_compat_RB205_main_base
        {
            label = "Clone Helmet";
            options[] = 
            {
                "type",
                "rank",
                "camo",
                "variant"
            };
        };

        class aceax_compat_RB205_main_U: aceax_compat_RB205_main_base
        {
            label = "Clone Armor";
            options[] = 
            {
                "type",
                "rank",
                "camo",
                "squad"
            };
        };

        class aceax_compat_RB205_main_V: aceax_compat_RB205_main_base
        {
            label = "Clone Vest";
            options[] = 
            {
                "type",
                "rank",
                "role"
            };
        };
    };
    
    class CfgVehicles
    {
        class RB205_aceax_compat_base_B;
        class aceax_compat_RB205_main_B_base: RB205_aceax_compat_base_B
        {
            label = LABEL;
            options[] = 
            {
                "type",
                "role",
                "camo"
            };
            class type
            {
                label = "Type";
                values[] =
				{
                    "dft",
                    "jet",
                    "sct",
                    "plt",
                    "crw",
                    "snw",
                    "hzd",
                    "sof"
				};
                class dft
                {
                    label = "Default";
                    description = "Standardmäßige Ausrüstung";
                };
                class jet
                {
                    label = "Airborne";
                    description = "Luftlandetruppe";
                };
                class sct
                {
                    label = "ARF";
                    description = "(Advanced Recon Force), Aufklärer";
                };
                class plt
                {
                    label = "Pilot";
                    description = "Pilot";
                };
                class crw
                {
                    label = "Crewman";
                    description = "Panzerbesatzung";
                };
                class snw
                {
                    label = "Snow";
                    description = "Schneeausrüstung";
                };
                class hzd
                {
                    label = "Hazard";
                    description = "Schutzausrüstung";
                };
                class sof
                {
                    label = "ARC";
                    description = "(Advanced Recon Commando), Spezialeinheit";
                };
            };
            class camo
            {
                label = "Camouflage";
                values[] =
				{
                    "default",
					"arctic",
                    "woodland",
                    "jungle",
					"desert"
				};
                class default
                {
                    label = "Default";
                    image = IMAGE_CAMO_DEFAULT;
                    description = "Keine Tarnung";
                };
                class arctic
                {
                    label = "Arctic";
                    image = IMAGE_CAMO_ARCTIC;
                    description = "Schneetarn";
                };
                class woodland
                {
                    label = "Woodland";
                    image = IMAGE_CAMO_WOODLAND;
                    description = "Waldtarn";
                };
                class jungle
                {
                    label = "Jungle";
                    image = IMAGE_CAMO_JUNGLE;
                    description = "Tropentarn";
                };
                class desert
                {
                    label = "Desert";
                    image = IMAGE_CAMO_DESERT;
                    description = "Wüstentarn";
                };
            };
        };

        class aceax_compat_RB205_main_B: aceax_compat_RB205_main_B_base
        {
            label = "Clone Backpack";
            options[] = 
            {
                "type",
                "role",
                "camo"
            };
        };

        class aceax_compat_RB205_main_B_radioMini: aceax_compat_RB205_main_B_base
        {
            label = "Clone Mini RTO Backpack";
            options[] = 
            {
                "color"
            };
            class color
            {
                label = "Color";
                values[] =
				{
                    "white",
                    "black"
				};
                class white
                {
                    label = "";
                    description = "Weiß";
                    image = "#(rgb,8,8,3)color(1,1,1,1)";
                };
                class black
                {
                    label = "";
                    description = "Schwarz";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
            };
        };

        class aceax_compat_RB205_main_B_arc: aceax_compat_RB205_main_B_base
        {
            label = "Clone ARC Backpack";
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
                    description = "(integrierter Drahtschneider und Klappspaten)";
                };
                class jetpack
                {
                    label = "Jetpack";
                    description = "(keine integrierten Werkzeuge)";
                };
            };
        };
    };
};

#include "XtdGearInfos.hpp"
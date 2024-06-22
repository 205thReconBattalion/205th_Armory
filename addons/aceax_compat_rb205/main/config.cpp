class cfgPatches
{
    class aceax_compat_RB205_main
	{
		requiredAddons[] =
        {
            "aceax_compat_RB205"
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
        class RB205_aceax_compat_base_H;
        class aceax_compat_RB205_main_H: RB205_aceax_compat_base_H
        {
            label = "P2";
            options[] = 
            {
                "type",
                "rank",
                "camo",
                "variation"
            };
            class type
            {
                label = "Type";
                values[] =
				{
                    "DEFAULT",
                    "jet",
                    "sct",
                    "plt",
                    "crw",
                    "sof",
                    "snw",
                    "hzd"
				};
                class DEFAULT
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
                class sof
                {
                    label = "ARC";
                    description = "(Advanced Recon Commando), Spezialeinheit";
                };
                class hzd
                {
                    label = "Hazard";
                    description = "Schutzausrüstung";
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
                };
                class arctic
                {
                    label = "Arctic";
                    image = IMAGE_CAMO_ARCTIC;
                };
                class woodland
                {
                    label = "Woodland";
                    image = IMAGE_CAMO_DESERT;
                };
                class jungle
                {
                    label = "Jungle";
                    image = IMAGE_CAMO_JUNGLE;
                };
                class desert
                {
                    label = "Desert";
                    image = IMAGE_CAMO_WOODLAND;
                };
            };
        };
    };
};

#include "XtdGearInfos.hpp"
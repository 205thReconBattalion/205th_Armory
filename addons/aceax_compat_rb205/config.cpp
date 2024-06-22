class cfgPatches
{
    class aceax_compat_RB205
	{
		requiredAddons[] =
        {
            "aceax_gearinfo"
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
        class RB205_aceax_compat_base
        {
            label = "BASE";
            options[] = 
            {
                "type",
                //"rank",
                "role",
                "variation"
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
                    "sof",
                    "snw",
                    "hzd"
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
                    label = "Scout";
                    description = "Aufklärer";
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
                class sof
                {
                    label = "SOF";
                    description = "Spezialeinheit";
                };
                class snw
                {
                    label = "Snow";
                    description = "Spezialausrüstung für Einsätze im Schnee";
                };
                class hzd
                {
                    label = "Hazard";
                    description = "Schutzausrüstung";
                };
            };
            /*class rank
            {
                label = "Rank";
                values[] =
				{
                    "cr",
                    "ct",
                    "clc",
                    "cp",
                    "cs",
                    "csm",
                    "cl",
                    "co",
                    "cc"
				};
            };*/
            class role
            {
                label = "Combat Role";
                values[] =
				{
                    "rifleman",
                    "rocket",
                    "eod",
                    "grenadier",
                    "heavy",
                    "marksman",
                    "medic",
                    "radio"
				};
                class rifleman
                {
                    label = "";
                    description = "Default";
                    image = IMAGE_RIFLEMAN;
                };
                class rocket
                {
                    label = "";
                    description = "AT/AA";
                    image = IMAGE_ROCKET;
                };
                class eod
                {
                    label = "";
                    description = "EOD";
                    image = IMAGE_EOD;
                };
                class grenadier
                {
                    label = "";
                    description = "Grenadier";
                    image = IMAGE_GRENADIER;
                };
                class heavy
                {
                    label = "";
                    description = "Heavy";
                    image = IMAGE_HEAVY;
                };
                class marksman
                {
                    label = "";
                    description = "Marksman";
                    image = IMAGE_MARKSMAN;
                };
                class medic
                {
                    label = "";
                    description = "Medic";
                    image = IMAGE_MEDIC;
                };
                class radio
                {
                    label = "";
                    description = "RTO";
                    image = IMAGE_RADIO;
                };
            };
            class variation
            {
                label = "Variation";
                values[] =
				{
                    "dft",
                    "var1",
                    "var2",
                    "var3"
				};
                class dft
                {
                    label = "Default";
                };
                class var1
                {
                    label = "I";
                };
                class var2
                {
                    label = "II";
                };
                class var3
                {
                    label = "III";
                };
            };
        };

        class RB205_aceax_compat_base_H: RB205_aceax_compat_base
        {
            label = "BASE_H";
            options[] = 
            {
                "type",
                "rank",
                "variation"
            };
            class rank
            {
                label = "Rank";
                values[] =
				{
                    "cr",
                    "ct",
                    "cp",
                    "cs",
                    "cl",
                    "co",
                    "cc"
				};
                class cr
                {
                    label = "CR";
                    description = "Recruit (CR)";
                };
                class ct
                {
                    label = "CT";
                    description = "Trooper (CT) - Specialist (CSP)";
                    image = IMAGE_CT;
                };
                class cp
                {
                    label = "CP";
                    description = "Lance Corporal (CLC) - Corporal (CP)";
                    image = IMAGE_CT;
                };
                class cs
                {
                    label = "CS";
                    description = "Sergeant (CS) - Sergeant-Major (CSM)";
                    image = IMAGE_CS;
                };
                class cl
                {
                    label = "CL";
                    description = "Lieutenant (CL)";
                    image = IMAGE_CL;
                };
                class co
                {
                    label = "CO";
                    description = "Captain (CO)";
                    image = IMAGE_CO;
                };
                class cc
                {
                    label = "CC";
                    description = "Commander (CC)";
                    image = IMAGE_CC;
                };
            };
        };

        class RB205_aceax_compat_base_U: RB205_aceax_compat_base
        {
            label = "BASE_U";
            options[] = 
            {
                "type",
                "rank",
                "variation"
            };
        };

        class RB205_aceax_compat_base_V: RB205_aceax_compat_base
        {
            label = "BASE_V";
            options[] = 
            {
                "type",
                "rank",
                "role"
            };
            class rank
            {
                label = "Rank";
                values[] =
				{
                    "ct",
					"clc",
					"cp",
					"cs",
					"csm",
					"cl",
					"co",
					"cc"
				};
                class ct
                {
                    label = "CT";
                    description = "Recruit (CR) - Specialist (CSP)";
                    image = IMAGE_CT;
                };
                class clc
                {
                    label = "CLC";
                    description = "Lance Corporal (CLC)";
                    image = IMAGE_CT;
                };
                class cp
                {
                    label = "CP";
                    description = "Corporal (CP)";
                    image = IMAGE_CT;
                };
                class cs
                {
                    label = "CS";
                    description = "Sergeant (CS)";
                    image = IMAGE_CS;
                };
                class csm
                {
                    label = "CSM";
                    description = "Sergeant-Major (CSM)";
                    image = IMAGE_CS;
                };
                class cl
                {
                    label = "CL";
                    description = "Lieutenant (CL)";
                    image = IMAGE_CL;
                };
                class co
                {
                    label = "CO";
                    description = "Captain (CO)";
                    image = IMAGE_CO;
                };
                class cc
                {
                    label = "CC";
                    description = "Commander (CC)";
                    image = IMAGE_CC;
                };
            };
        };
    };
    class cfgVehicles
    {
        class RB205_aceax_compat_base_B
        {
            label = "BASE_B";
            options[] = 
            {
                "type",
                "role"
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
                    "sof",
                    "snw",
                    "hzd"
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
                    label = "Scout";
                    description = "Aufklärer";
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
                class sof
                {
                    label = "SOF";
                    description = "Spezialeinheit";
                };
                class hzd
                {
                    label = "Hazard";
                    description = "Schutzausrüstung";
                };
            };
            class role
            {
                label = "Combat Role";
                values[] =
				{
                    "rifleman",
                    "rocket",
                    "eod",
                    "grenadier",
                    "heavy",
                    "marksman",
                    "medic",
                    "radio"
				};
                class rifleman
                {
                    label = "";
                    description = "Default";
                    image = IMAGE_RIFLEMAN;
                };
                class rocket
                {
                    label = "";
                    description = "AT/AA";
                    image = IMAGE_ROCKET;
                };
                class eod
                {
                    label = "";
                    description = "EOD";
                    image = IMAGE_EOD;
                };
                class grenadier
                {
                    label = "";
                    description = "Grenadier";
                    image = IMAGE_GRENADIER;
                };
                class heavy
                {
                    label = "";
                    description = "Heavy";
                    image = IMAGE_HEAVY;
                };
                class marksman
                {
                    label = "";
                    description = "Marksman";
                    image = IMAGE_MARKSMAN;
                };
                class medic
                {
                    label = "";
                    description = "Medic";
                    image = IMAGE_MEDIC;
                };
                class radio
                {
                    label = "";
                    description = "RTO";
                    image = IMAGE_RADIO;
                };
            };
        };
    };
};
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
            author = AUTHOR;
            label = "BASE";
            options[] = 
            {
                "type",
                "rank",
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
            class rank
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
                class cr
                {
                    label = "CR";
                    description = "Recruit";
                };
                class ct
                {
                    label = "CT";
                    description = "Trooper - Specialist";
                    image = IMAGE_CT;
                };
                class clc
                {
                    label = "CLC";
                    description = "Lance-Corporal (Fireteam-Lead)";
                    image = IMAGE_CT;
                };
                class cp
                {
                    label = "CP";
                    description = "Corporal (Asst. Squad-Lead)";
                    image = IMAGE_CT;
                };
                class cs
                {
                    label = "CS";
                    description = "Sergeant (Squad-Lead)";
                    image = IMAGE_CS;
                };
                class csm
                {
                    label = "CSM";
                    description = "Sergeant-Major (Asst. Platoon-Lead)";
                    image = IMAGE_CS;
                };
                class cl
                {
                    label = "CL";
                    description = "Lieutenant (Platoon-Lead)";
                    image = IMAGE_CL;
                };
                class co
                {
                    label = "CO";
                    description = "Captain (Asst. Company-Lead)";
                    image = IMAGE_CO;
                };
                class cc
                {
                    label = "CC";
                    description = "Commander (Company-Lead)";
                    image = IMAGE_CC;
                };
            };
            class role
            {
                label = "Combat Role";
                values[] =
				{
                    "rifleman",
                    "heavy",
                    "rocket",
                    "eod",
                    "grenadier",
                    "marksman",
                    "medic",
                    "radio",
                    "scuba"
				};
                class rifleman
                {
                    label = "";
                    description = "Default/ Rifleman (Schütze)";
                    image = IMAGE_RIFLEMAN;
                };
                class heavy
                {
                    label = "";
                    description = "Heavy (Automatik-Schütze)";
                    image = IMAGE_HEAVY;
                };
                class rocket
                {
                    label = "";
                    description = "AT/AA (Panzer-/ Flugabwehrschütze)";
                    image = IMAGE_ROCKET;
                };
                class eod
                {
                    label = "";
                    description = "EOD (Kampfmittelbeseitiger)";
                    image = IMAGE_EOD;
                };
                class grenadier
                {
                    label = "";
                    description = "Grenadier";
                    image = IMAGE_GRENADIER;
                };
                class marksman
                {
                    label = "";
                    description = "Marksman (Gruppenscharfschütze)";
                    image = IMAGE_MARKSMAN;
                };
                class medic
                {
                    label = "";
                    description = "Medic (Sanitäter)";
                    image = IMAGE_MEDIC;
                };
                class radio
                {
                    label = "";
                    description = "RTO (Funker)";
                    image = IMAGE_RADIO;
                };
                class scuba
                {
                    label = "Scuba";
                    description = "Scuba (Taucher)";
                    image = IMAGE_SCUBA;
                };
            };
            class variant
            {
                label = "Variant";
                values[] =
				{
                    "dft",
                    "var1",
                    "var2",
                    "var3",
                    "dmg"
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
                class dmg
                {
                    label = "Damaged";
                };
            };
        };
    };
    class cfgVehicles
    {
        class RB205_aceax_compat_base_B
        {
            author = AUTHOR;
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
            class role
            {
                label = "Combat Role";
                values[] =
				{
                    "rifleman",
                    "heavy",
                    "rocket",
                    "eod",
                    "grenadier",
                    "marksman",
                    "medic",
                    "radio",
                    "scuba"
				};
                class rifleman
                {
                    label = "";
                    description = "Default/ Rifleman (Schütze)";
                    image = IMAGE_RIFLEMAN;
                };
                class heavy
                {
                    label = "";
                    description = "Heavy (Automatik-Schütze)";
                    image = IMAGE_HEAVY;
                };
                class rocket
                {
                    label = "";
                    description = "AT/AA (Panzer-/ Flugabwehrschütze)";
                    image = IMAGE_ROCKET;
                };
                class eod
                {
                    label = "";
                    description = "EOD (Kampfmittelbeseitiger)";
                    image = IMAGE_EOD;
                };
                class grenadier
                {
                    label = "";
                    description = "Grenadier";
                    image = IMAGE_GRENADIER;
                };
                class marksman
                {
                    label = "";
                    description = "Marksman (Gruppenscharfschütze)";
                    image = IMAGE_MARKSMAN;
                };
                class medic
                {
                    label = "";
                    description = "Medic (Sanitäter)";
                    image = IMAGE_MEDIC;
                };
                class radio
                {
                    label = "";
                    description = "RTO (Funker)";
                    image = IMAGE_RADIO;
                };
                class scuba
                {
                    label = "Scuba";
                    description = "Scuba (Taucher)";
                    image = IMAGE_SCUBA;
                };
            };
        };
    };
};
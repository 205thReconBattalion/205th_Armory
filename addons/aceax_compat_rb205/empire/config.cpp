class cfgPatches
{
    class RB205_arsenalExtendedCompability
	{
		requiredAddons[] = {};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
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
        class aceax_compat_RB205_empire_base_officer: RB205_aceax_compat_base
        {
            label = "Imperial Officer";
            options[] =
			{
				"affiliation",
                "rank",
                "variant"
			};
            class affiliation
            {
                label = "Affiliation";
                values[] =
				{
                    "navy1",
                    "navy2",
                    "army",
                    "isb"
				};
                class navy1
                {
                    label = "Navy";
                    description = "Junior Officer | Ensign (Ens.) - Senior Lieutenant (Sr.Lt.)";
                    image = NAVY_GREY;
                };
                class navy2
                {
                    label = "Navy";
                    description = "Senior Officer | Captain (Cpt.) - Admiral (Adm.)";
                    image = NAVY_GREEN;
                };
                class army
                {
                    label = "Army";
                    description = "Stormtrooper | Sergeant-Major (Sgt.Mjr.) - Commander (Cmdr.)";
                    image = ARMY_BLACK;
                };
                class isb
                {
                    label = "ISB";
                    description = "Officer | Lieutenant (Lt.) - Major (Mjr.)";
                    image = ISB_WHITE;
                };
            };
            class rank
            {
                label = "Rank";
                values[] =
				{
                    "ens",
                    "lt",
                    "srlt",
                    "cpt",
                    "cmdr",
                    "adm"
				};
                class ens
                {
                    label = "Ens.";
                    description = "Ensign / Sergeant-Major / Agent";
                };
                class lt
                {
                    label = "Lt.";
                    description = "Lieutenant";
                };
                class srlt
                {
                    label = "Sr.Lt.";
                    description = "Senior Lieutenant";
                };
                class cpt
                {
                    label = "Cpt.";
                    description = "Captain";
                };
                class cmdr
                {
                    label = "Cmdr.";
                    description = "Commander / Major";
                };
                class adm
                {
                    label = "Adm.";
                    description = "Admiral";
                };
            };
            class variant
            {
                label = "Variant";
                values[] =
				{
                    "dft",
                    "lowered",
                    "armored",
                    "coat",
                    "agent"
				};
                class dft
                {
                    label = "Default";
                };
                class lowered
                {
                    label = "Lowered";
                };
                class armored
                {
                    label = "Armored";
                };
                class coat
                {
                    label = "Coat";
                };
                class agent
                {
                    label = "Agent";
                };
            };
        };
        class aceax_compat_RB205_empire_H_officer: aceax_compat_RB205_empire_base_officer
        {
            options[] =
			{
				"affiliation",
                "variant"
			};
        };
        class aceax_compat_RB205_empire_U_officer: aceax_compat_RB205_empire_base_officer
        {
            options[] =
			{
				"affiliation",
                "variant"
			};
        };
        class aceax_compat_RB205_empire_V_officer: aceax_compat_RB205_empire_base_officer
        {
            options[] =
			{
				"affiliation",
                "rank",
                "variant"
			};
        };

        class aceax_compat_RB205_empire_base: RB205_aceax_compat_base
        {
            label = "Imperial Soldier";
            options[] =
			{
				"type",
                "rank",
                "variant",
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
                    description = "Stormtrooper";
                };
                class jet
                {
                    label = "Airborne";
                    description = "Rockettrooper";
                };
                class sct
                {
                    label = "Scout";
                    description = "Scout Trooper";
                };
                class plt
                {
                    label = "Pilot";
                    description = "Tie Pilot";
                };
                class crw
                {
                    label = "Tank";
                    description = "Tank Trooper";
                };
                class sof
                {
                    label = "Death";
                    description = "Death Trooper";
                };
                class snw
                {
                    label = "Snow";
                    description = "Snowtrooper";
                };
                class hzd
                {
                    label = "Hazard";
                    description = "";
                };
            };
            /*class rank
            {
                label = "Rang";
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
                    description = "Trooper (CR - CSP)";
                };
                class clc
                {
                    label = "CLC";
                    description = "Lance-Corporal (CLC)";
                };
                class cp
                {
                    label = "CP";
                    description = "Corporal (CP)";
                };
                class cs
                {
                    label = "CS";
                    description = "Sergeant (CS)";
                };
                class csm
                {
                    label = "CSM";
                    description = "Sergeant-Major (CSM)";
                };
                class cl
                {
                    label = "CL";
                    description = "Lieutenant (CL)";
                };
                class co
                {
                    label = "CO";
                    description = "Captain (CO)";
                };
                class cc
                {
                    label = "CC";
                    description = "Commander (CC)";
                };
            };*/
            class variant
            {
                label = "Variant";
                values[] =
				{
                    "dft",
                    "dirt",
                    "sand",
                    "mud",
                    "shadow",
                    "grenadier",
                    "medic",
                    "rebreather",
                    "var1",
                    "var2"
				};
                class dft
                {
                    label = "Default";
                };
                class dirt
                {
                    label = "Dirt";
                };
                class sand
                {
                    label = "Sand";
                };
                class mud
                {
                    label = "Mud";
                };
                class shadow
                {
                    label = "Black";
                };
                class grenadier
                {
                    label = "Grenadier";
                };
                class medic
                {
                    label = "Medic";
                };
                class rebreather
                {
                    label = "Scuba";
                };
                class var1
                {
                    label = "I";
                };
                class var2
                {
                    label = "II";
                };
            };
            /*class spec
            {
                label = "Spezialisierung";
                values[] =
				{
                    "dft",
                    "heavy",
                    "medic",
                    "radio",
                    "rocket",
                    "eod"
				};
                class dft
                {
                    label = "Standard";
                };
                class heavy
                {
                    label = "Heavy";
                };
                class medic
                {
                    label = "Sanitäter";
                };
                class radio
                {
                    label = "RTO";
                };
                class rocket
                {
                    label = "AT/AA";
                };
                class eod
                {
                    label = "EOD";
                };
            };*/
        };
        class aceax_compat_RB205_empire_H: aceax_compat_RB205_empire_base
        {
            options[] =
			{
				"type",
                "variant"
			};
        };
        class aceax_compat_RB205_empire_U: aceax_compat_RB205_empire_base
        {
            options[] =
			{
				"type",
                "variant"
			};
        };
        class aceax_compat_RB205_empire_V: aceax_compat_RB205_empire_base
        {
            options[] =
			{
				"type",
                "rank",
                "variant"
			};
        };
    };
    class cfgVehicles
    {
        class RB205_aceax_compat_base_B;
        class aceax_compat_RB205_empire_B: RB205_aceax_compat_base_B
        {
            label = "Imperial Backpack";
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
                    description = "Stormtrooper";
                };
                class jet
                {
                    label = "Airborne";
                    description = "Rockettrooper";
                };
                class sct
                {
                    label = "Scout";
                    description = "Scout Trooper";
                };
                class plt
                {
                    label = "Pilot";
                    description = "Tie Pilot";
                };
                class crw
                {
                    label = "Tank";
                    description = "Tank Trooper";
                };
                class sof
                {
                    label = "Death";
                    description = "Death Trooper";
                };
                class snw
                {
                    label = "Snow";
                    description = "Snowtrooper";
                };
                class hzd
                {
                    label = "Hazard";
                    description = "";
                };
            };
            /*class spec
            {
                label = "Spezialisierung";
                values[] =
				{
                    "dft",
                    "heavy",
                    "medic",
                    "radio",
                    "rocket",
                    "eod"
				};
                class dft
                {
                    label = "Standard";
                };
                class heavy
                {
                    label = "Heavy";
                };
                class medic
                {
                    label = "Sanitäter";
                };
                class radio
                {
                    label = "RTO";
                };
                class rocket
                {
                    label = "AT/AA";
                };
                class eod
                {
                    label = "EOD";
                };
            };*/
        };
    };
};

#include "XtdGearInfos.hpp"
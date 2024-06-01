#define NAVY_GREY "#(rgb,8,8,3)color(0.408,0.412,0.42,1)"
#define NAVY_GREEN "#(rgb,8,8,3)color(0.235,0.255,0.227,1)"
#define ARMY_BLACK "#(rgb,8,8,3)color(0,0,0,1)"
#define ISB_WHITE "#(rgb,8,8,3)color(0.878,0.878,0.863,1)"

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

class XtdGearModels
{
    class CfgWeapons 
    {
        class RB205_emp_officer_base
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
                label = "Zugehörigkeit";
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
                label = "Rang";
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
                label = "Variante";
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
                    label = "Standard";
                };
                class lowered
                {
                    label = "Gesenkt";
                };
                class armored
                {
                    label = "Gepanzert";
                };
                class coat
                {
                    label = "Mantel";
                };
                class agent
                {
                    label = "Agent";
                };
            };
        };
        class RB205_emp_H_officer: RB205_emp_officer_base
        {
            options[] =
			{
				"affiliation",
                "variant"
			};
        };
        class RB205_emp_U_officer: RB205_emp_officer_base
        {
            options[] =
			{
				"affiliation",
                "variant"
			};
        };
        class RB205_emp_V_officer: RB205_emp_officer_base
        {
            options[] =
			{
				"affiliation",
                "rank",
                "variant"
			};
        };

        class RB205_emp_base
        {
            label = "Imperial Soldier";
            options[] =
			{
				"type",
                "rank",
                "variant",
                "spec"
			};
            class type
            {
                label = "Typ";
                values[] =
				{
                    "dft",
                    "ab",
                    "scout",
                    "plt",
                    "snow",
                    "tank",
                    "death"
				};
                class dft
                {
                    label = "Standard";
                    description = "Stormtrooper";
                };
                class ab
                {
                    label = "Airborne";
                    description = "Rockettrooper";
                };
                class scout
                {
                    label = "Scout";
                    description = "Scout Trooper";
                };
                class plt
                {
                    label = "Pilot";
                    description = "Tie Pilot";
                };
                class snow
                {
                    label = "Snow";
                    description = "Snowtrooper";
                };
                class tank
                {
                    label = "Tank";
                    description = "Tank Trooper";
                };
                class death
                {
                    label = "Death";
                    description = "Death Trooper";
                };
            };
            class rank
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
            };
            class variant
            {
                label = "Variante";
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
                    label = "Standard";
                };
                class dirt
                {
                    label = "Dreck";
                };
                class sand
                {
                    label = "Sand";
                };
                class mud
                {
                    label = "Schlamm";
                };
                class shadow
                {
                    label = "Schwarz";
                };
                class grenadier
                {
                    label = "Grenadier";
                };
                class medic
                {
                    label = "Sanitäter";
                };
                class rebreather
                {
                    label = "Atemgerät";
                };
                class var1
                {
                    label = "Var. I";
                };
                class var2
                {
                    label = "Var. II";
                };
            };
            class spec
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
            };
        };
        class RB205_emp_H: RB205_emp_base
        {
            options[] =
			{
				"type",
                "variant"
			};
        };
        class RB205_emp_U: RB205_emp_base
        {
            options[] =
			{
				"type",
                "variant"
			};
        };
        class RB205_emp_V: RB205_emp_base
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
        class RB205_emp_B
        {
            label = "Imperial Backpack";
            options[] =
			{
				"type",
                "spec"
			};
            class type
            {
                label = "Typ";
                values[] =
				{
                    "dft",
                    "ab",
                    "scout",
                    "plt",
                    "snow",
                    "tank",
                    "death"
				};
                class dft
                {
                    label = "Standard";
                    description = "Stormtrooper";
                };
                class ab
                {
                    label = "Airborne";
                    description = "Rockettrooper";
                };
                class scout
                {
                    label = "Scout";
                    description = "Scout Trooper";
                };
                class plt
                {
                    label = "Pilot";
                    description = "Tie Pilot";
                };
                class snow
                {
                    label = "Snow";
                    description = "Snowtrooper";
                };
                class tank
                {
                    label = "Tank";
                    description = "Tank Trooper";
                };
                class death
                {
                    label = "Death";
                    description = "Death Trooper";
                };
            };
            class spec
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
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
	{
        class RB205_emp_H_officer_grey
        {
            model = "RB205_emp_H_officer";
            affiliation = "navy1";
            variant = "dft";
        };
        class RB205_emp_H_officer_grey_lowered
        {
            model = "RB205_emp_H_officer";
            affiliation = "navy1";
            variant = "lowered";
        };
        class RB205_emp_H_officer_green
        {
            model = "RB205_emp_H_officer";
            affiliation = "navy2";
            variant = "dft";
        };
        class RB205_emp_H_officer_green_lowered
        {
            model = "RB205_emp_H_officer";
            affiliation = "navy2";
            variant = "lowered";
        };
        class RB205_emp_H_officer_helmet_green
        {
            model = "RB205_emp_H_officer";
            affiliation = "navy2";
            variant = "armored";
        };
        class RB205_emp_H_officer_black
        {
            model = "RB205_emp_H_officer";
            affiliation = "army";
            variant = "dft";
        };
        class RB205_emp_H_officer_black_lowered
        {
            model = "RB205_emp_H_officer";
            affiliation = "army";
            variant = "lowered";
        };
        class RB205_emp_H_officer_helmet_black
        {
            model = "RB205_emp_H_officer";
            affiliation = "army";
            variant = "armored";
        };
        class RB205_emp_H_officer_isb_agent
        {
            model = "RB205_emp_H_officer";
            affiliation = "isb";
            variant = "armored";
        };

        class RB205_emp_U_officer_grey
        {
            model = "RB205_emp_U_officer";
            affiliation = "navy1";
            variant = "dft";
        };
        class RB205_emp_U_officer_coat_grey
        {
            model = "RB205_emp_U_officer";
            affiliation = "navy1";
            variant = "coat";
        };
        class RB205_emp_U_officer_green
        {
            model = "RB205_emp_U_officer";
            affiliation = "navy2";
            variant = "dft";
        };
        class RB205_emp_U_officer_coat_green
        {
            model = "RB205_emp_U_officer";
            affiliation = "navy2";
            variant = "coat";
        };
        class RB205_emp_U_officer_black
        {
            model = "RB205_emp_U_officer";
            affiliation = "army";
            variant = "dft";
        };
        class RB205_emp_U_officer_coat_black
        {
            model = "RB205_emp_U_officer";
            affiliation = "army";
            variant = "coat";
        };
        class RB205_emp_U_officer_isb
        {
            model = "RB205_emp_U_officer";
            affiliation = "isb";
            variant = "dft";
        };
        class RB205_emp_U_officer_coat_isb
        {
            model = "RB205_emp_U_officer";
            affiliation = "isb";
            variant = "coat";
        };
        class RB205_emp_U_officer_isb_agent
        {
            model = "RB205_emp_U_officer";
            affiliation = "isb";
            variant = "agent";
        };
        
        class RB205_emp_V_navy_ensign
        {
            model = "RB205_emp_V_officer";
            affiliation = "navy1";
            rank = "ens";
            variant = "dft";
        };
        class RB205_emp_V_navy_lieutenant
        {
            model = "RB205_emp_V_officer";
            affiliation = "navy1";
            rank = "lt";
            variant = "dft";
        };
        class RB205_emp_V_navy_seniorLieutenant
        {
            model = "RB205_emp_V_officer";
            affiliation = "navy1";
            rank = "srlt";
            variant = "dft";
        };
        class RB205_emp_V_navy_captain
        {
            model = "RB205_emp_V_officer";
            affiliation = "navy2";
            rank = "cpt";
            variant = "dft";
        };
        class RB205_emp_V_navy_admiral
        {
            model = "RB205_emp_V_officer";
            affiliation = "navy2";
            rank = "adm";
            variant = "dft";
        };
        class RB205_emp_V_army_sergeantMajor
        {
            model = "RB205_emp_V_officer";
            affiliation = "army";
            rank = "ens";
            variant = "dft";
        };
        class RB205_emp_V_army_lieutenant
        {
            model = "RB205_emp_V_officer";
            affiliation = "army";
            rank = "lt";
            variant = "dft";
        };
        class RB205_emp_V_army_captain
        {
            model = "RB205_emp_V_officer";
            affiliation = "army";
            rank = "cpt";
            variant = "dft";
        };
        class RB205_emp_V_army_commander
        {
            model = "RB205_emp_V_officer";
            affiliation = "army";
            rank = "cmdr";
            variant = "dft";
        };
        class RB205_emp_V_isb_agent
        {
            model = "RB205_emp_V_officer";
            affiliation = "isb";
            rank = "ens";
            variant = "dft";
        };
        class RB205_emp_V_isb_lieutenant
        {
            model = "RB205_emp_V_officer";
            affiliation = "isb";
            rank = "lt";
            variant = "dft";
        };
        class RB205_emp_V_isb_captain
        {
            model = "RB205_emp_V_officer";
            affiliation = "isb";
            rank = "cpt";
            variant = "dft";
        };
        class RB205_emp_V_isb_major
        {
            model = "RB205_emp_V_officer";
            affiliation = "isb";
            rank = "cmdr";
            variant = "dft";
        };
        class RB205_emp_V_officer_armor_black
        {
            model = "RB205_emp_V_officer";
            affiliation = "army";
            rank = "ens";
            variant = "armored";
        };
        class RB205_emp_V_officer_armor_green
        {
            model = "RB205_emp_V_officer";
            affiliation = "navy2";
            rank = "ens";
            variant = "armored";
        };

        class RB205_emp_H_trooper
        {
            model = "RB205_emp_H";
            type = "dft";
            variant = "dft";
        };
        class RB205_emp_H_ab_trooper
        {
            model = "RB205_emp_H";
            type = "ab";
            variant = "dft";
        };
        class RB205_emp_H_scout_trooper
        {
            model = "RB205_emp_H";
            type = "scout";
            variant = "dft";
        };
        class RB205_emp_H_plt_trooper
        {
            model = "RB205_emp_H";
            type = "plt";
            variant = "dft";
        };
        class RB205_emp_H_snow_trooper
        {
            model = "RB205_emp_H";
            type = "snow";
            variant = "dft";
        };
        class RB205_emp_H_tank_trooper
        {
            model = "RB205_emp_H";
            type = "tank";
            variant = "dft";
        };
        class RB205_emp_H_death_trooper
        {
            model = "RB205_emp_H";
            type = "death";
            variant = "dft";
        };
        class RB205_emp_H_trooper_dirt
        {
            model = "RB205_emp_H";
            type = "dft";
            variant = "dirt";
        };
        class RB205_emp_H_trooper_sand
        {
            model = "RB205_emp_H";
            type = "dft";
            variant = "sand";
        };
        class RB205_emp_H_trooper_mud
        {
            model = "RB205_emp_H";
            type = "dft";
            variant = "mud";
        };
        class RB205_emp_H_trooper_shadow
        {
            model = "RB205_emp_H";
            type = "dft";
            variant = "shadow";
        };
        class RB205_emp_H_scout_trooper_camo
        {
            model = "RB205_emp_H";
            type = "scout";
            variant = "dirt";
        };
        class RB205_emp_H_scout_trooper_mud
        {
            model = "RB205_emp_H";
            type = "scout";
            variant = "mud";
        };
        class RB205_emp_H_scout_trooper_shadow
        {
            model = "RB205_emp_H";
            type = "scout";
            variant = "shadow";
        };
        
        class RB205_emp_U_trooper
        {
            model = "RB205_emp_U";
            type = "dft";
            variant = "dft";
        };
        class RB205_emp_U_scout_trooper
        {
            model = "RB205_emp_U";
            type = "scout";
            variant = "dft";
        };
        class RB205_emp_U_plt_trooper
        {
            model = "RB205_emp_U";
            type = "plt";
            variant = "dft";
        };
        class RB205_emp_U_snow_trooper
        {
            model = "RB205_emp_U";
            type = "snow";
            variant = "dft";
        };
        class RB205_emp_U_tank_trooper
        {
            model = "RB205_emp_U";
            type = "tank";
            variant = "dft";
        };
        class RB205_emp_U_death_trooper
        {
            model = "RB205_emp_U";
            type = "death";
            variant = "dft";
        };
        class RB205_emp_U_trooper_dirt
        {
            model = "RB205_emp_U";
            type = "dft";
            variant = "dirt";
        };
        class RB205_emp_U_trooper_sand
        {
            model = "RB205_emp_U";
            type = "dft";
            variant = "sand";
        };
        class RB205_emp_U_trooper_mud
        {
            model = "RB205_emp_U";
            type = "dft";
            variant = "mud";
        };
        class RB205_emp_U_trooper_shadow
        {
            model = "RB205_emp_U";
            type = "dft";
            variant = "shadow";
        };
        class RB205_emp_U_scout_trooper_camo
        {
            model = "RB205_emp_U";
            type = "scout";
            variant = "dirt";
        };
        class RB205_emp_U_scout_trooper_mud
        {
            model = "RB205_emp_U";
            type = "scout";
            variant = "mud";
        };
        class RB205_emp_U_scout_trooper_shadow
        {
            model = "RB205_emp_U";
            type = "scout";
            variant = "shadow";
        };
        
        class RB205_emp_V_ct
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "ct";
            variant = "dft";
        };
        class RB205_emp_V_clc
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "clc";
            variant = "dft";
        };
        class RB205_emp_V_cp
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "cp";
            variant = "dft";
        };
        class RB205_emp_V_cs
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "cs";
            variant = "dft";
        };
        class RB205_emp_V_csm
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "csm";
            variant = "dft";
        };
        class RB205_emp_V_cl
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "cl";
            variant = "dft";
        };
        class RB205_emp_V_co
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "co";
            variant = "dft";
        };
        class RB205_emp_V_cc
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "cc";
            variant = "dft";
        };
        class RB205_emp_V_medic
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "ct";
            variant = "medic";
        };
        class RB205_emp_V_grenadier
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "ct";
            variant = "grenadier";
        };
        class RB205_emp_V_rebreather
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "ct";
            variant = "rebreather";
        };
        class RB205_emp_V_scout_ct
        {
            model = "RB205_emp_V";
            type = "scout";
            rank = "ct";
            variant = "dft";
        };
        class RB205_emp_V_plt_ct
        {
            model = "RB205_emp_V";
            type = "plt";
            rank = "ct";
            variant = "dft";
        };
        class RB205_emp_V_snow_ct
        {
            model = "RB205_emp_V";
            type = "snow";
            rank = "ct";
            variant = "dft";
        };
        class RB205_emp_V_tank_ct
        {
            model = "RB205_emp_V";
            type = "tank";
            rank = "ct";
            variant = "dft";
        };
        class RB205_emp_V_shadow_ct
        {
            model = "RB205_emp_V";
            type = "dft";
            rank = "ct";
            variant = "shadow";
        };
        class RB205_emp_V_death
        {
            model = "RB205_emp_V";
            type = "death";
            rank = "ct";
            variant = "dft";
        };
        class RB205_emp_V_death_grenadier
        {
            model = "RB205_emp_V";
            type = "death";
            rank = "ct";
            variant = "grenadier";
        };
        class RB205_emp_V_death_lead
        {
            model = "RB205_emp_V";
            type = "death";
            rank = "cc";
            variant = "dft";
        };
        class RB205_emp_V_death_lead2
        {
            model = "RB205_emp_V";
            type = "death";
            rank = "cc";
            variant = "var1";
        };
        class RB205_emp_V_death_lead3
        {
            model = "RB205_emp_V";
            type = "death";
            rank = "cc";
            variant = "var2";
        };
    };
    class CfgVehicles
	{
        class RB205_B_emp_heavy
        {
            model = "RB205_emp_B";
            type = "dft";
            spec = "heavy";
        };
        class RB205_B_emp_medic
        {
            model = "RB205_emp_B";
            type = "dft";
            spec = "medic";
        };
        class RB205_B_emp_radio
        {
            model = "RB205_emp_B";
            type = "dft";
            spec = "radio";
        };
        class RB205_B_emp_rocket
        {
            model = "RB205_emp_B";
            type = "dft";
            spec = "rocket";
        };
        class RB205_B_emp_eod
        {
            model = "RB205_emp_B";
            type = "dft";
            spec = "eod";
        };
        class RB205_B_emp_ab
        {
            model = "RB205_emp_B";
            type = "ab";
            spec = "dft";
        };
        class RB205_B_emp_ab_heavy
        {
            model = "RB205_emp_B";
            type = "ab";
            spec = "heavy";
        };
        class RB205_B_emp_ab_medic
        {
            model = "RB205_emp_B";
            type = "ab";
            spec = "medic";
        };
        class RB205_B_emp_ab_radio
        {
            model = "RB205_emp_B";
            type = "ab";
            spec = "radio";
        };
        class RB205_B_emp_ab_rocket
        {
            model = "RB205_emp_B";
            type = "ab";
            spec = "rocket";
        };
        class RB205_B_emp_ab_eod
        {
            model = "RB205_emp_B";
            type = "ab";
            spec = "eod";
        };
        class RB205_B_emp_scout
        {
            model = "RB205_emp_B";
            type = "scout";
            spec = "dft";
        };
        class RB205_B_emp_plt
        {
            model = "RB205_emp_B";
            type = "plt";
            spec = "dft";
        };
        class RB205_B_emp_snow_heavy
        {
            model = "RB205_emp_B";
            type = "snow";
            spec = "heavy";
        };
        class RB205_B_emp_snow_medic
        {
            model = "RB205_emp_B";
            type = "snow";
            spec = "medic";
        };
        class RB205_B_emp_snow_radio
        {
            model = "RB205_emp_B";
            type = "snow";
            spec = "radio";
        };
        class RB205_B_emp_snow_rocket
        {
            model = "RB205_emp_B";
            type = "snow";
            spec = "rocket";
        };
        class RB205_B_emp_snow_eod
        {
            model = "RB205_emp_B";
            type = "snow";
            spec = "eod";
        };
        class RB205_B_emp_death
        {
            model = "RB205_emp_B";
            type = "death";
            spec = "dft";
        };
    };
};
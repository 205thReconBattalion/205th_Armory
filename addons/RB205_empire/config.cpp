class cfgPatches
{
    class RB205_empire
	{
		requiredAddons[]=
		{
			"RB205_core",
            "JMSLLTE_empire_helm_mod",
			"RB205_weapons"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		weapons[] =
		{
			"RB205_emp_H_trooper",
			"RB205_emp_H_ab_trooper",
			"RB205_emp_H_scout_trooper",
			"RB205_emp_H_plt_trooper",
			"RB205_emp_H_snow_trooper",
            "RB205_emp_H_tank_trooper",
            "RB205_emp_H_death_trooper",
            
			"RB205_emp_H_trooper_dirt",
			"RB205_emp_H_trooper_sand",
			"RB205_emp_H_trooper_mud",
			"RB205_emp_H_trooper_shadow",
            "RB205_emp_H_scout_trooper_camo",
			"RB205_emp_H_scout_trooper_mud",
			"RB205_emp_H_scout_trooper_shadow",

            "RB205_emp_H_officer_grey",
            "RB205_emp_H_officer_grey_lowered",
            "RB205_emp_H_officer_green",
            "RB205_emp_H_officer_green_lowered",
            "RB205_emp_H_officer_black",
            "RB205_emp_H_officer_black_lowered",
            "RB205_emp_H_officer_isb_agent",
            "RB205_emp_H_officer_helmet_black",
            "RB205_emp_H_officer_helmet_green",
            
			"RB205_emp_U_trooper",
			"RB205_emp_U_scout_trooper",
			"RB205_emp_U_plt_trooper",
			"RB205_emp_U_snow_trooper",
            "RB205_emp_U_tank_trooper",
            "RB205_emp_U_death_trooper",
            
			"RB205_emp_U_trooper_dirt",
			"RB205_emp_U_trooper_sand",
			"RB205_emp_U_trooper_mud",
			"RB205_emp_U_trooper_shadow",
            "RB205_emp_U_scout_trooper_camo",
			"RB205_emp_U_scout_trooper_mud",
			"RB205_emp_U_scout_trooper_shadow",

            "RB205_emp_U_officer_grey",
            "RB205_emp_U_officer_green",
            "RB205_emp_U_officer_black",
            "RB205_emp_U_officer_isb",
            "RB205_emp_U_officer_isb_agent",
            "RB205_emp_U_officer_coat_black",
            "RB205_emp_U_officer_coat_grey",
            "RB205_emp_U_officer_coat_green",
            "RB205_emp_U_officer_coat_isb",

            "RB205_emp_V_ct",
			"RB205_emp_V_clc",
			"RB205_emp_V_cp",
			"RB205_emp_V_cs",
			"RB205_emp_V_csm",
			"RB205_emp_V_cl",
			"RB205_emp_V_co",
			"RB205_emp_V_cc",
			"RB205_emp_V_medic",
			"RB205_emp_V_grenadier",
			"RB205_emp_V_rebreather",
            "RB205_emp_V_scout_ct",
            "RB205_emp_V_plt_ct",
            "RB205_emp_V_snow_ct",
            "RB205_emp_V_tank_ct",
            "RB205_emp_V_shadow_ct",
            "RB205_emp_V_death",
            "RB205_emp_V_death_grenadier",
            "RB205_emp_V_death_lead",
            "RB205_emp_V_death_lead2",
            "RB205_emp_V_death_lead3",

            "RB205_emp_V_navy_ensign",
            "RB205_emp_V_navy_lieutenant",
            "RB205_emp_V_navy_seniorLieutenant",
            "RB205_emp_V_navy_captain",
            "RB205_emp_V_navy_admiral",
            "RB205_emp_V_army_sergeantMajor",
            "RB205_emp_V_army_lieutenant",
            "RB205_emp_V_army_captain",
            "RB205_emp_V_army_commander",
            "RB205_emp_V_isb_agent",
            "RB205_emp_V_isb_lieutenant",
            "RB205_emp_V_isb_captain",
            "RB205_emp_V_isb_major",
            "RB205_emp_V_officer_armor_black",
            "RB205_emp_V_officer_armor_green",

            "RB205_emp_N_death"
		};
		units[] =
		{
            "RB205_B_emp_heavy",
            "RB205_B_emp_medic",
            "RB205_B_emp_rocket",
            "RB205_B_emp_eod",
            "RB205_B_emp_radio",
            "RB205_B_emp_ab",
            "RB205_B_emp_ab_heavy",
            "RB205_B_emp_ab_medic",
            "RB205_B_emp_ab_rocket",
            "RB205_B_emp_ab_eod",
            "RB205_B_emp_ab_radio",
            "RB205_B_emp_scout",
            "RB205_B_emp_plt",
            "RB205_B_emp_snow_heavy",
            "RB205_B_emp_snow_medic",
            "RB205_B_emp_snow_rocket",
            "RB205_B_emp_snow_eod",
            "RB205_B_emp_snow_radio",
            "RB205_B_emp_death",

            "RB205_emp_trooper",
            "RB205_emp_lanceCorporal",
            "RB205_emp_corporal",
            "RB205_emp_sergeant",
            "RB205_emp_sergeantMajor",
            "RB205_emp_lieutenant",
            "RB205_emp_captain",
            "RB205_emp_commander",

            "RB205_emp_trooper_dirt",
            "RB205_emp_trooper_sand",
            "RB205_emp_trooper_mud",
            "RB205_emp_trooper_shadow",

            "RB205_emp_ab_trooper",
            "RB205_emp_ab_lanceCorporal",
            "RB205_emp_ab_corporal",
            "RB205_emp_ab_sergeant",
            "RB205_emp_ab_sergeantMajor",
            "RB205_emp_ab_lieutenant",
            "RB205_emp_ab_captain",
            "RB205_emp_ab_commander",

            "RB205_emp_scout_trooper",
            "RB205_emp_scout_lanceCorporal",
            "RB205_emp_scout_corporal",
            "RB205_emp_scout_sergeant",
            "RB205_emp_scout_sergeantMajor",
            "RB205_emp_scout_lieutenant",
            "RB205_emp_scout_captain",
            "RB205_emp_scout_commander",
            
            "RB205_emp_scout_trooper_camo",
            "RB205_emp_scout_trooper_mud",
            "RB205_emp_scout_trooper_shadow",
            
            "RB205_emp_plt_trooper",
            "RB205_emp_snow_trooper",
            "RB205_emp_tank_trooper",
            "RB205_emp_death_trooper",
            "RB205_emp_death_trooper_commander",

            "RB205_emp_navy_ensign",
            "RB205_emp_navy_lieutenant",
            "RB205_emp_navy_seniorLieutenant",
            "RB205_emp_navy_captain",
            "RB205_emp_navy_admiral",
            "RB205_emp_navy_armored",
            "RB205_emp_navy_armored2",
            "RB205_emp_army_sergeantMajor",
            "RB205_emp_army_lieutenant",
            "RB205_emp_army_captain",
            "RB205_emp_army_commander",
            "RB205_emp_army_armored",
            "RB205_emp_isb_agent",
            "RB205_emp_isb_lieutenant",
            "RB205_emp_isb_captain",
            "RB205_emp_isb_major",
            "RB205_emp_army_officer_coat",
            "RB205_emp_navy_officer_coat",
            "RB205_emp_navy_officer_coat2",
            "RB205_emp_isb_officer_coat"
		};
	};
};

#include "macros.hpp"

class cfgWeapons
{
    /*
        HELMETS
    */
    class help_helmet_base;
    class RB205_helmet_base: help_helmet_base
    {
        class ItemInfo;
    };
    class RB205_emp_H_trooper: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Helmet";
        model = "JMSLLTE_empire\helmets\StormtrooperHelmet2clean.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_storm.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\stormtrooper2_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\StormtrooperHelmet2clean.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_ab_trooper: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Helmet";
        model = "JMSLLTE_empire\helmets\StormtrooperHelmetSky.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_storm.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\rockettrooper_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\StormtrooperHelmetSky.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_scout_trooper: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Helmet";
        model = "JMSLLTE_empire\helmets\ScouttrooperHelmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_scout.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\scouttrooper_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\ScouttrooperHelmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_plt_trooper: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Tie Pilot Helmet";
        model = "JMSLLTE_empire\helmets\TiePilotHelmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_tie.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\tiepilot_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\TiePilotHelmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_snow_trooper: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Helmet";
        model = "JMSLLTE_empire\helmets\SnowtrooperHelmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\snowtrooper_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\SnowtrooperHelmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_tank_trooper: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Tank Trooper Helmet";
        model = "JMSLLTE_empire\helmets\TanktrooperHelmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_shore.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\tanktrooper_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\TanktrooperHelmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_death_trooper: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Helmet";
        model = "JMSLLTE_empire\helmets\DeathtrooperHelmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_death.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\Deathtrooper_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\DeathtrooperHelmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    
    class RB205_emp_H_trooper_dirt: RB205_emp_H_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Helmet (Dirty)";
        model = "JMSLLTE_empire\helmets\StormtrooperHelmet2.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\stormtrooper2_helmet_dirty_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\StormtrooperHelmet2.p3d";
        };
    };
    class RB205_emp_H_trooper_sand: RB205_emp_H_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Helmet (Sandy)";
        model = "JMSLLTE_empire\helmets\StormtrooperHelmet2.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\stormtrooper2_helmet_sand_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\StormtrooperHelmet2.p3d";
        };
    };
    class RB205_emp_H_trooper_mud: RB205_emp_H_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Helmet (Muddy)";
        model = "JMSLLTE_empire\helmets\StormtrooperHelmet2dirty.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\stormtrooper2_helmet_mimban_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\StormtrooperHelmet2dirty.p3d";
        };
    };
    class RB205_emp_H_trooper_shadow: RB205_emp_H_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Shadowtrooper Helmet";
        model = "JMSLLTE_empire\helmets\StormtrooperHelmet2.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\stormtrooper2_helmet_shadow_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\StormtrooperHelmet2.p3d";
        };
    };
    class RB205_emp_H_scout_trooper_camo: RB205_emp_H_scout_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Helmet (Camo)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\scouttrooper_helmet_wood_co.paa"};
    };
    class RB205_emp_H_scout_trooper_mud: RB205_emp_H_scout_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Helmet (Muddy)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\scouttrooper_helmet_mimb_co.paa"};
    };
    class RB205_emp_H_scout_trooper_shadow: RB205_emp_H_scout_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Storm Commando Helmet";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\scouttrooper_helmet_black_co.paa"};
    };

    class RB205_emp_H_officer_base: RB205_helmet_base
    {
        ACCESS_FALSE
        model = "JMSLLTE_empire\helmets\Officer_cap.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_cap_bl.paa";
        hiddenSelections[] = {"Camo1"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\Officer_cap.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_officer_lowered_base: RB205_emp_H_officer_base
    {
        ACCESS_FALSE
        model = "JMSLLTE_empire\helmets\Officer_cap2.p3d";
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\Officer_cap2.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_officer_grey: RB205_emp_H_officer_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Cap (Grey)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_cap_grey_co.paa"};
    };
    class RB205_emp_H_officer_grey_lowered: RB205_emp_H_officer_lowered_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Cap (Grey) (Lowered)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_cap_grey_co.paa"};
    };
    class RB205_emp_H_officer_green: RB205_emp_H_officer_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Cap (Green)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_cap_mudtrooper_co.paa"};
    };
    class RB205_emp_H_officer_green_lowered: RB205_emp_H_officer_lowered_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Cap (Green) (Lowered)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_cap_mudtrooper_co.paa"};
    };
    class RB205_emp_H_officer_black: RB205_emp_H_officer_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Cap (Black)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_cap_black_co.paa"};
    };
    class RB205_emp_H_officer_black_lowered: RB205_emp_H_officer_lowered_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Cap (Black) (Lowered)";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_cap_black_co.paa"};
    };
    class RB205_emp_H_officer_isb_agent: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Agent Helmet";
        model = "JMSLLTE_empire\helmets\ISB_helmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_isb.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\isb_armor_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\ISB_helmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_officer_helmet_black: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Helmet (Black)";
        model = "JMSLLTE_empire\helmets\Officer_helmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_of.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_helmet_black_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\Officer_helmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_H_officer_helmet_green: RB205_helmet_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Helmet (Green)";
        model = "JMSLLTE_empire\helmets\Officer_helmet.p3d";
        picture = "\JMSLLTE_empire\helmets\data\ico\ico_helm_of.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\officer_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "JMSLLTE_empire\helmets\Officer_helmet.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    /*
        UNIFORMS
    */
    class help_uniform_base;
    class RB205_uniform_base: help_uniform_base
    {
        class ItemInfo;
    };
    class RB205_emp_U_trooper: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Armor";
        picture = "\JMSLLTE_empire\data\ico\ico_u_storm.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_trooper;
        };
    };
    class RB205_emp_U_scout_trooper: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Armor";
        picture = "\JMSLLTE_empire\data\ico\ico_u_scout.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_scout_trooper;
        };
    };
    class RB205_emp_U_plt_trooper: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] TIE Pilot Armor";
        picture = "\JMSLLTE_empire\data\ico\ico_u_crew.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_plt_trooper;
        };
    };
    class RB205_emp_U_snow_trooper: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Armor";
        picture = "\JMSLLTE_empire\data\ico\ico_u_snow.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_snow_trooper;
        };
    };
    class RB205_emp_U_tank_trooper: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Tank Trooper Armor";
        picture = "\JMSLLTE_empire\data\ico\ico_u_shore.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_tank_trooper;
        };
    };
    class RB205_emp_U_death_trooper: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Armor";
        picture = "\JMSLLTE_empire\data\ico\ico_u_death.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_death_trooper;
        };
    };

    class RB205_emp_U_trooper_dirt: RB205_emp_U_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Armor (Dirty)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_trooper_dirt;
        };
    };
    class RB205_emp_U_trooper_sand: RB205_emp_U_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Armor (Sandy)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_trooper_sand;
        };
    };
    class RB205_emp_U_trooper_mud: RB205_emp_U_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Armor (Muddy)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_trooper_mud;
        };
    };
    class RB205_emp_U_trooper_shadow: RB205_emp_U_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Shadowtrooper Armor";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_trooper_shadow;
        };
    };
    class RB205_emp_U_scout_trooper_camo: RB205_emp_U_scout_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Armor (Camo)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_scout_trooper_camo;
        };
    };
    class RB205_emp_U_scout_trooper_mud: RB205_emp_U_scout_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Armor (Muddy)";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_scout_trooper_mud;
        };
    };
    class RB205_emp_U_scout_trooper_shadow: RB205_emp_U_scout_trooper
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Storm Commando Armor";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_scout_trooper_shadow;
        };
    };

    class RB205_emp_U_officer_grey: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Officer Uniform (Grey)";
        picture = "\JMSLLTE_empire\data\ico\ico_u_officer.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_navy_ensign;
        };
    };
    class RB205_emp_U_officer_green: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Officer Uniform (Green)";
        picture = "\JMSLLTE_empire\data\ico\ico_u_officer.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_navy_captain;
        };
    };
    class RB205_emp_U_officer_black: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Army Officer Uniform";
        picture = "\JMSLLTE_empire\data\ico\ico_u_officer.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_army_sergeantMajor;
        };
    };
    class RB205_emp_U_officer_isb: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Officer Uniform";
        picture = "\JMSLLTE_empire\data\ico\ico_u_officer.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_isb_lieutenant;
        };
    };
    class RB205_emp_U_officer_isb_agent: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Agent Uniform";
        picture = "\JMSLLTE_empire\data\ico\ico_u_officer.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_isb_agent;
        };
    };
    class RB205_emp_U_officer_coat_black: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Army Officer Coat";
        picture = "\JMSLLTE_empire\data\ico\ico_u_coat.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_army_officer_coat;
        };
    };
    class RB205_emp_U_officer_coat_grey: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Officer Coat (Grey)";
        picture = "\JMSLLTE_empire\data\ico\ico_u_coat.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_navy_officer_coat;
        };
    };
    class RB205_emp_U_officer_coat_green: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Officer Coat (Green)";
        picture = "\JMSLLTE_empire\data\ico\ico_u_coat.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_navy_officer_coat2;
        };
    };
    class RB205_emp_U_officer_coat_isb: RB205_uniform_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Officer Coat";
        picture = "\JMSLLTE_empire\data\ico\ico_u_coat.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = RB205_emp_isb_officer_coat;
        };
    };
    /*
        VESTS
    */
    class help_vest_base;
    class RB205_vest_base: help_vest_base
    {
        class ItemInfo;
    };
    class RB205_vest_nco_base: RB205_vest_base
    {
        class ItemInfo;
    };
    class RB205_vest_co_base: RB205_vest_base
    {
        class ItemInfo;
    };
    class RB205_emp_V_ct: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Holster";
        model = "\JMSLLTE_empire\vests\StormtroperHolster.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperHolster.p3d";
            hiddenSelections[] = {};
        };
    };
    class RB205_emp_V_clc: RB205_vest_nco_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Pauldron (CLC)";
        model = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_stormWhite.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\pauldron_white_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_cp: RB205_vest_nco_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Pauldron (CP)";
        model = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_stormGrey.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\pauldron_grey_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_cs: RB205_vest_nco_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Pauldron (CS)";
        model = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_stormBlack.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\pauldron_black_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_csm: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Pauldron (CSM)";
        model = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_stormBlack.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\pauldron_black_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_cl: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Pauldron (CL)";
        model = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_stormBlue.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"RB205_empire\data\pauldron_blue_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_co: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Pauldron (CO)";
        model = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_stormRed.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\pauldron_red_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_cc: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Pauldron (CC)";
        model = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_stormOrange.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\pauldron_orange_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperPauldron.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };

    class RB205_emp_V_medic: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Vest <Medic>";
        model = "\JMSLLTE_empire\vests\StormtroperHeavy2.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\stormheavy_co.paa"};
        class ItemInfo: ItemInfo
        {
            containerClass = INV_VEST_MEDIC;
            uniformModel = "\JMSLLTE_empire\vests\StormtroperHeavy2.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_grenadier: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Vest <Grenadier>";
        model = "\JMSLLTE_empire\vests\StormtroperBand.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {};
        class ItemInfo: ItemInfo
        {
            containerClass = INV_VEST_GRENADIER;
            uniformModel = "\JMSLLTE_empire\vests\StormtroperBand.p3d";
            hiddenSelections[] = {};
        };
    };
    class RB205_emp_V_rebreather: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Vest <Rebreather>";
        model = "\JMSLLTE_empire\vests\TIEpilotVest.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_death.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\tiepilot_helmet_storm_co.paa"};
        class ItemInfo: ItemInfo
        {
            containerClass = INV_VEST_MEDIC;
            uniformModel = "\JMSLLTE_empire\vests\TIEpilotVest.p3d";
            hiddenSelections[] = {"Camo1"};
            vestType = "Rebreather";
        };
    };

    class RB205_emp_V_scout_ct: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Holster";
        model = "\JMSLLTE_empire\vests\ScouttrooperHolster.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\ScouttrooperHolster.p3d";
            hiddenSelections[] = {};
        };
    };
    class RB205_emp_V_plt_ct: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] TIE Pilot Rebreather";
        model = "\JMSLLTE_empire\vests\TIEpilotVest.p3d";
        picture = "\JMSLLTE_empire\vests\ico\Ico_v_pilarmor.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\helmets\data\tiepilot_helmet_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\TIEpilotVest.p3d";
            hiddenSelections[] = {"Camo1"};
            vestType = "Rebreather";
        };
    };
    class RB205_emp_V_snow_ct: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Vest";
        model = "\JMSLLTE_empire\vests\SnowtrooperArmor.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\atat_pilot_snow_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\SnowtrooperArmor.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_tank_ct: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Tank Trooper Vest";
        model = "\JMSLLTE_empire\vests\StormtroperArmor.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperArmor.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_shadow_ct: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Shadowtrooper Bandolier";
        model = "\JMSLLTE_empire\vests\StormtroperBand2.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperBand2.p3d";
            hiddenSelections[] = {};
        };
    };
    class RB205_emp_V_death: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Vest";
        model = "\JMSLLTE_empire\vests\DeathtrooperVest.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_death.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\Deathtrooper_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\DeathtrooperVest.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_death_grenadier: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Vest (Grenadier)";
        model = "\JMSLLTE_empire\vests\DeathtrooperHeavy.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_death.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\Deathtrooper_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\DeathtrooperHeavy.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_death_lead: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Vest (Commander 1)";
        model = "\JMSLLTE_empire\vests\DeathtrooperCom.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_deathBlack.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\Deathtrooper_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\DeathtrooperCom.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_death_lead2: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Vest (Commander 2)";
        model = "\JMSLLTE_empire\vests\DeathtrooperSpec.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_deathBlack.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\Deathtrooper_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\DeathtrooperSpec.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_death_lead3: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Vest (Commander 3)";
        model = "\JMSLLTE_empire\vests\DeathtrooperHeavyFull.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_deathBlack.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\Deathtrooper_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\DeathtrooperHeavyFull.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };

    class RB205_emp_V_navy_ensign: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Insignia Plaque (Ens.)";
        model = "\JMSLLTE_empire\vests\of_rank_attend.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofAtt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_attend.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_navy_lieutenant: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Insignia Plaque (Lt.)";
        model = "\JMSLLTE_empire\vests\of_rank_nh_lt.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofLtAlt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_nh_lt.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_navy_seniorLieutenant: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Insignia Plaque (Sr. Lt.)";
        model = "\JMSLLTE_empire\vests\of_rank_nh_lt.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofLtAlt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_nh_lt.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_navy_captain: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Insignia Plaque (Cpt.)";
        model = "\JMSLLTE_empire\vests\of_rank_nh_cap.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofCapALt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_nh_cap.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_navy_admiral: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Navy Insignia Plaque (Adm.)";
        model = "\JMSLLTE_empire\vests\of_rank_nh_maj.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofMajAlt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_nh_maj.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };

    class RB205_emp_V_army_sergeantMajor: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Army Insignia Plaque (Sgt. Maj.)";
        model = "\JMSLLTE_empire\vests\of_rank_ens.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_death.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_ens.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_army_lieutenant: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Army Insignia Plaque (Lt.)";
        model = "\JMSLLTE_empire\vests\of_rank_army_lt.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofArmyLt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_army_lt.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_army_captain: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Army Insignia Plaque (Cpt.)";
        model = "\JMSLLTE_empire\vests\of_rank_army_cpt.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofArmyCap.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_army_cpt.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_army_commander: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Army Insignia Plaque (Cmdr.)";
        model = "\JMSLLTE_empire\vests\of_rank_army_col.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofArmyCol.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_army_col.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };

    class RB205_emp_V_isb_agent: RB205_vest_co_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Agent Vest";
        model = "\JMSLLTE_empire\vests\isb_chestArmor.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\isb_armor_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\isb_chestArmor.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_isb_lieutenant: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Insignia Plaque (Lt.)";
        model = "\JMSLLTE_empire\vests\of_rank_navy_lt.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofNavyLt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_navy_lt.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_isb_captain: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Insignia Plaque (Cpt.)";
        model = "\JMSLLTE_empire\vests\of_rank_navy_cpt.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofNavyCpt.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_navy_cpt.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_isb_major: RB205_vest_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] ISB Insignia Plaque (Mjr.)";
        model = "\JMSLLTE_empire\vests\of_rank_navy_cmdr.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_ofNavyCmdr.paa";
        hiddenSelections[] = {"camo"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_rank_navy_cmdr.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };

    class RB205_emp_V_officer_armor_black: RB205_vest_nco_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Chest Armor (Black)";
        model = "\JMSLLTE_empire\vests\of_chestArmorForced.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\of_chestArmor_black_co.paa","JMSLLTE_empire\data\body\atat_pilot_black_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_chestArmorForced.p3d";
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class RB205_emp_V_officer_armor_green: RB205_vest_nco_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Officer Chest Armor (Green)";
        model = "\JMSLLTE_empire\vests\of_chestArmorForced.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\of_chestArmor_co.paa","JMSLLTE_empire\data\body\atat_pilot_green_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\of_chestArmorForced.p3d";
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };

    class RB205_nvg_base;
    class RB205_nvg_ti_base: RB205_nvg_base
    {
        class ItemInfo;
    };
    class RB205_emp_N_death: RB205_nvg_ti_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Scanner";
        picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_2_ui_ca.paa";
        model = "\JMSLLTE_empire\helmets\DeathtrooperScanner.p3d";
	    modelOptics = MODEL_OPTICS;
        class ItemInfo: ItemInfo
        {
            uniformModel = "JMSLLTE_empire\helmets\DeathtrooperScanner.p3d";
            modelOff = "JMSLLTE_empire\helmets\DeathtrooperScanner.p3d";
        };
    };
};

class cfgVehicles
{
    /*
        BACKPACKS
    */
    class RB205_backpack_base;

    class RB205_B_emp_heavy: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <Heavy>";
        model = "\JMSLLTE_empire\back_imp.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK;
    };
    class RB205_B_emp_medic: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <Medic>";
        model = "\JMSLLTE_empire\back_imp_surv.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_MEDIC;
    };
    class RB205_B_emp_rocket: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <AT/AA>";
        model = "\JMSLLTE_empire\back_imp.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_ROCKET;
    };
    class RB205_B_emp_eod: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <EOD>";
        model = "\JMSLLTE_scum\back_small_imp.p3d";
        picture = "\JMSLLTE_scum\data\ico\ico_b_small.paa";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_EOD;
    };
    class RB205_B_emp_radio: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <RTO>";
        model = "\JMSLLTE_empire\back_rad.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_RADIO;
    };
    class RB205_B_emp_ab: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_NONE;
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_heavy: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <Heavy>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK;
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_medic: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <Medic>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_MEDIC;
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_rocket: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <AT/AA>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_ROCKET;
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_eod: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <EOD>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_EOD;
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_radio: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <RTO>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_RADIO;
        JETPACK_TRUE
    };
    class RB205_B_emp_scout: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Backpack";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK;
    };
    class RB205_B_emp_plt: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Tie Pilot Transmitter";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_SCOUT;
        TFAR_RADIO_SMALL
    };
    class RB205_B_emp_snow_heavy: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <Heavy>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK;
    };
    class RB205_B_emp_snow_medic: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <Medic>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snowMed_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_MEDIC;
    };
    class RB205_B_emp_snow_rocket: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <AT/AA>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_ROCKET;
    };
    class RB205_B_emp_snow_eod: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <EOD>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_EOD;
    };
    class RB205_B_emp_snow_radio: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <RTO>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_RADIO;
    };
    class RB205_B_emp_death: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Death Trooper Transmitter";
	    mass = MASS_BACKPACK;
	    maximumload = INV_BACK_SOF;
    };
    /*
        UNITS
    */
    class RB205_unit_base;
    class RB205_unit_emp_base: RB205_unit_base
    {
        ACCESS_FALSE
        identityTypes[] = {"LanguageENG_F","Head_NATO"};
        nakedUniform = "lsd_bodyglove_uniform";
        side = 1;
        faction = "RB205_empire";
        weapons[]=
        {
            "RB205_E11_wScope",
            "RB205_emp_binocular",
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "RB205_E11_wScope",
            "RB205_emp_binocular",
            "Throw","Put"
        };
        magazines[]=
        {
            ENUM_8("RB205_Standard_Energy_Pack_red"),
            ENUM_3("RB205_thermalDet"),
            ENUM_2("RB205_smokeWhite"),
            ENUM_2("ACE_painkillers")
        };
        respawnmagazines[]=
        {
            ENUM_8("RB205_Standard_Energy_Pack_red"),
            ENUM_3("RB205_thermalDet"),
            ENUM_2("RB205_smokeWhite"),
            ENUM_2("ACE_painkillers")
        };
        items[]=
        {
            "ACE_EntrenchingTool",
            "ACE_Flashlight_XL50",
            ENUM_3("ACE_CableTie"),
            ENUM_25("ACE_packingBandage"),
            ENUM_4("ACE_Tourniquet")
        };
        respawnitems[]=
        {
            "ACE_EntrenchingTool",
            "ACE_Flashlight_XL50",
            ENUM_3("ACE_CableTie"),
            ENUM_25("ACE_packingBandage"),
            ENUM_4("ACE_Tourniquet")
        };
    };
    class RB205_emp_trooper: RB205_unit_emp_base
    {
        ACCESS_TRUE
        displayName = "(1-CT) Stormtrooper";
        uniformClass = "RB205_emp_U_trooper";
        model = "\JMSLLTE_empire\stormtrooperClear.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\StormtrooperBody_clean_co.paa"};
	    editorSubCategory = "RB205_empire_stormtrooper";
        //Inventory:
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_ct")
	    backpack = "";
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\StormtrooperBodyClean.rvmat","JMSLLTE_empire\data\body\StormtrooperBodyClean_injury.rvmat","JMSLLTE_empire\data\body\StormtrooperBodyClean_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_lanceCorporal: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(2-CLC) Stormtrooper Lance-Corporal";
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_clc")
    };
    class RB205_emp_corporal: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(3-CP) Stormtrooper Corporal";
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_cp")
    };
    class RB205_emp_sergeant: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(4-CS) Stormtrooper Sergeant";
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_cs")
    };
    class RB205_emp_sergeantMajor: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(5-CSM) Stormtrooper Sergeant-Major";
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_csm")
    };
    class RB205_emp_lieutenant: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(6-CL) Stormtrooper Lieutenant";
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_cl")
    };
    class RB205_emp_captain: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(7-CO) Stormtrooper Captain";
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_co")
    };
    class RB205_emp_commander: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(8-CC) Stormtrooper Commander";
        LINKED_ITEMS("RB205_emp_H_trooper","RB205_emp_V_cc")
    };
    class RB205_emp_trooper_dirt: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "Stormtrooper (Dirty)";
        uniformClass = "RB205_emp_U_trooper_dirt";
        model = "\JMSLLTE_empire\stormtrooper.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\StormtrooperBody_dirty_co.paa"};
        LINKED_ITEMS("RB205_emp_H_trooper_dirt","RB205_emp_V_ct")
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\StormtrooperBody.rvmat","JMSLLTE_empire\data\body\StormtrooperBody_injury.rvmat","JMSLLTE_empire\data\body\StormtrooperBody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_trooper_sand: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "Stormtrooper (Sandy)";
        uniformClass = "RB205_emp_U_trooper_sand";
        model = "\JMSLLTE_empire\stormtrooper.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\StormtrooperBody_sand_co.paa"};
        LINKED_ITEMS("RB205_emp_H_trooper_sand","RB205_emp_V_ct")
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\StormtrooperBody.rvmat","JMSLLTE_empire\data\body\StormtrooperBody_injury.rvmat","JMSLLTE_empire\data\body\StormtrooperBody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_trooper_mud: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "Stormtrooper (Muddy)";
        uniformClass = "RB205_emp_U_trooper_mud";
        model = "\JMSLLTE_empire\stormtrooperDirty.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\StormtrooperBody_mimban_co.paa"};
        LINKED_ITEMS("RB205_emp_H_trooper_mud","RB205_emp_V_ct")
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\StormtrooperBodyDirty.rvmat","JMSLLTE_empire\data\body\StormtrooperBodyDirty_injury.rvmat","JMSLLTE_empire\data\body\StormtrooperBodyDirty_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_trooper_shadow: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "Shadowtrooper";
        uniformClass = "RB205_emp_U_trooper_shadow";
        model = "\JMSLLTE_empire\stormtrooper.p3d";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\StormtrooperBody_shadow_co.paa"};
        LINKED_ITEMS("RB205_emp_H_trooper_shadow","RB205_emp_V_shadow_ct")
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\StormtrooperBody.rvmat","JMSLLTE_empire\data\body\StormtrooperBody_injury.rvmat","JMSLLTE_empire\data\body\StormtrooperBody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_ab_trooper: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(1-CT) Rockettrooper";
        editorSubCategory = "RB205_empire_rockettrooper";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_ct")
	    backpack = "RB205_B_emp_ab";
    };
    class RB205_emp_ab_lanceCorporal: RB205_emp_ab_trooper
    {
        ACCESS_TRUE
        displayName = "(2-CLC) Rockettrooper Lance-Corporal";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_clc")
    };
    class RB205_emp_ab_corporal: RB205_emp_ab_trooper
    {
        ACCESS_TRUE
        displayName = "(3-CP) Rockettrooper Corporal";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_cp")
    };
    class RB205_emp_ab_sergeant: RB205_emp_ab_trooper
    {
        ACCESS_TRUE
        displayName = "(4-CS) Rockettrooper Sergeant";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_cs")
    };
    class RB205_emp_ab_sergeantMajor: RB205_emp_ab_trooper
    {
        ACCESS_TRUE
        displayName = "(5-CSM) Rockettrooper Sergeant-Major";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_csm")
    };
    class RB205_emp_ab_lieutenant: RB205_emp_ab_trooper
    {
        ACCESS_TRUE
        displayName = "(6-CL) Rockettrooper Lieutenant";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_cl")
    };
    class RB205_emp_ab_captain: RB205_emp_ab_trooper
    {
        ACCESS_TRUE
        displayName = "(7-CO) Rockettrooper Captain";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_co")
    };
    class RB205_emp_ab_commander: RB205_emp_ab_trooper
    {
        ACCESS_TRUE
        displayName = "(8-CC) Rockettrooper Commander";
        LINKED_ITEMS("RB205_emp_H_ab_trooper","RB205_emp_V_cc")
    };
    class RB205_emp_scout_trooper: RB205_unit_emp_base
    {
        ACCESS_TRUE
        displayName = "(1-CT) Scout Trooper";
        uniformClass = "RB205_emp_U_scout_trooper";
        model = "\JMSLLTE_empire\scouttrooper.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\ScouttrooperBody_co.paa"};
	    editorSubCategory = "RB205_empire_scout";
        //Inventory:
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_scout_ct")
	    backpack = "RB205_B_emp_scout";
        weapons[]=
        {
            "RB205_EC17_wScope",
            "RB205_emp_binocular_scout",
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "RB205_EC17_wScope",
            "RB205_emp_binocular_scout",
            "Throw","Put"
        };
        magazines[]=
        {
            ENUM_5("RB205_Compact_Energy_Pack_red"),
            ENUM_3("RB205_thermalDet"),
            ENUM_2("RB205_smokeWhite"),
            ENUM_2("ACE_painkillers")
        };
        respawnmagazines[]=
        {
            ENUM_5("RB205_Compact_Energy_Pack_red"),
            ENUM_3("RB205_thermalDet"),
            ENUM_2("RB205_smokeWhite"),
            ENUM_2("ACE_painkillers")
        };
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\ScouttroperBody.rvmat","JMSLLTE_empire\data\body\ScouttroperBody_injury.rvmat","JMSLLTE_empire\data\body\ScouttroperBody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_scout_lanceCorporal: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "(2-CLC) Scout Trooper Lance-Corporal";
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_clc")
    };
    class RB205_emp_scout_corporal: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "(3-CP) Scout Trooper Corporal";
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_cp")
    };
    class RB205_emp_scout_sergeant: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "(4-CS) Scout Trooper Sergeant";
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_cs")
    };
    class RB205_emp_scout_sergeantMajor: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "(5-CSM) Scout Trooper Sergeant-Major";
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_csm")
    };
    class RB205_emp_scout_lieutenant: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "(6-CL) Scout Trooper Lieutenant";
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_cl")
    };
    class RB205_emp_scout_captain: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "(7-CO) Scout Trooper Captain";
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_co")
    };
    class RB205_emp_scout_commander: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "(8-CC) Scout Trooper Commander";
        LINKED_ITEMS("RB205_emp_H_scout_trooper","RB205_emp_V_cc")
    };
    class RB205_emp_scout_trooper_camo: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "Scout Trooper (Camo)";
        uniformClass = "RB205_emp_U_scout_trooper_camo";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\ScouttrooperBody_wood_co.paa"};
        LINKED_ITEMS("RB205_emp_H_scout_trooper_camo","RB205_emp_V_scout_ct")
    };
    class RB205_emp_scout_trooper_mud: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "Scout Trooper (Muddy)";
        uniformClass = "RB205_emp_U_scout_trooper_mud";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\ScouttrooperBody_mimb_co.paa"};
        LINKED_ITEMS("RB205_emp_H_scout_trooper_mud","RB205_emp_V_scout_ct")
    };
    class RB205_emp_scout_trooper_shadow: RB205_emp_scout_trooper
    {
        ACCESS_TRUE
        displayName = "Storm Commando";
        uniformClass = "RB205_emp_U_scout_trooper_shadow";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\ScouttrooperBody_black_co.paa"};
        LINKED_ITEMS("RB205_emp_H_scout_trooper_shadow","RB205_emp_V_scout_ct")
    };
    class RB205_emp_plt_trooper: RB205_unit_emp_base
    {
        ACCESS_TRUE
        displayName = "TIE Pilot";
        uniformClass = "RB205_emp_U_plt_trooper";
        model = "\JMSLLTE_empire\tiepilot.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\pilot_torso_co.paa","JMSLLTE_empire\data\body\pilot_legs_co.paa"};
	    editorSubCategory = "RB205_empire_other";
        //Inventory:
        LINKED_ITEMS("RB205_emp_H_plt_trooper","RB205_emp_V_plt_ct")
	    backpack = "RB205_B_emp_plt";
        weapons[]=
        {
            "RB205_SE14R",
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "RB205_SE14R",
            "Throw","Put"
        };
        magazines[]=
        {
            ENUM_5("RB205_Compact_Energy_Pack_red"),
            ENUM_2("RB205_smokeBlue"),
            ENUM_2("ACE_painkillers")
        };
        respawnmagazines[]=
        {
            ENUM_5("RB205_Compact_Energy_Pack_red"),
            ENUM_2("RB205_smokeBlue"),
            ENUM_2("ACE_painkillers")
        };
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\navycrewman.rvmat","JMSLLTE_empire\data\body\navycrewman_injury.rvmat","JMSLLTE_empire\data\body\navycrewman_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_snow_trooper: RB205_unit_emp_base
    {
        ACCESS_TRUE
        displayName = "Snowtrooper";
        uniformClass = "RB205_emp_U_snow_trooper";
        model = "\JMSLLTE_empire\snowtrooper.p3d";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\SnowtrooperBody_co.paa","JMSLLTE_empire\data\body\snowubka_co.paa"};
	    editorSubCategory = "RB205_empire_other";
        //Inventory:
        LINKED_ITEMS("RB205_emp_H_snow_trooper","RB205_emp_V_snow_ct")
	    backpack = "RB205_B_emp_snow_heavy";
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\SnowtrooperBody.rvmat","JMSLLTE_empire\data\body\SnowtrooperBody_injury.rvmat","JMSLLTE_empire\data\body\SnowtrooperBody_injury.rvmat","JMSLLTE_empire\data\body\SnowtrooperBody_clo.rvmat","JMSLLTE_empire\data\body\SnowtrooperBody_clo_injury.rvmat","JMSLLTE_empire\data\body\SnowtrooperBody_clo_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_tank_trooper: RB205_unit_emp_base
    {
        ACCESS_TRUE
        displayName = "Tank Trooper";
        uniformClass = "RB205_emp_U_tank_trooper";
        model = "\JMSLLTE_empire\shoretrooper.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\ShoretrooperBody_tank_co.paa"};
	    editorSubCategory = "RB205_empire_other";
        //Inventory:
        LINKED_ITEMS("RB205_emp_H_tank_trooper","RB205_emp_V_tank_ct")
	    backpack = "";
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\ShoretrooperBody.rvmat","JMSLLTE_empire\data\body\ShoretrooperBody_injury.rvmat","JMSLLTE_empire\data\body\ShoretrooperBody_injury.rvmat","JMSLLTE_empire\data\body\ShoretrooperBody_clo.rvmat","JMSLLTE_empire\data\body\ShoretrooperBody_clo_injury.rvmat","JMSLLTE_empire\data\body\ShoretrooperBody_clo_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_death_trooper: RB205_unit_emp_base
    {
        ACCESS_TRUE
        displayName = "Death Trooper";
        uniformClass = "RB205_emp_U_death_trooper";
        model = "\JMSLLTE_empire\deathtrooper.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\Deathtrooper_co.paa"};
	    editorSubCategory = "RB205_empire_other";
        //Inventory:
        LINKED_ITEMS("RB205_emp_H_death_trooper","RB205_emp_V_death")
	    backpack = "RB205_B_emp_death";
        weapons[]=
        {
            "RB205_E11D",
            "RB205_SE14R",
            "RB205_emp_binocular_scout",
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "RB205_E11D",
            "RB205_SE14R",
            "RB205_emp_binocular_scout",
            "Throw","Put"
        };
        magazines[]=
        {
            ENUM_8("RB205_Experimental_Energy_Pack_red"),
            ENUM_5("RB205_Compact_Energy_Pack_red"),
            ENUM_3("RB205_thermalDet"),
            ENUM_2("RB205_smokeWhite"),
            ENUM_2("ACE_painkillers")
        };
        respawnmagazines[]=
        {
            ENUM_8("RB205_Experimental_Energy_Pack_red"),
            ENUM_5("RB205_Compact_Energy_Pack_red"),
            ENUM_3("RB205_thermalDet"),
            ENUM_2("RB205_smokeWhite"),
            ENUM_2("ACE_painkillers")
        };
        class Wounds
        {
            mat[] = {"A3\Characters_F\OPFOR\Data\clothing.rvmat","A3\Characters_F\OPFOR\Data\clothing_injury.rvmat","A3\Characters_F\OPFOR\Data\clothing_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_death_trooper_commander: RB205_emp_death_trooper
    {
        ACCESS_TRUE
        displayName = "Death Trooper (Commander)";
        LINKED_ITEMS("RB205_emp_H_death_trooper","RB205_emp_V_death_lead")
    };
    class RB205_emp_officer_base: RB205_unit_emp_base
    {
        ACCESS_FALSE
        nakedUniform = "U_BasicBody";
        model = "\JMSLLTE_empire\officer.p3d";
        hiddenSelections[] = {"Camo1"};
	    editorSubCategory = "RB205_empire_officer";
        //Inventory:
	    backpack = "";
        weapons[]=
        {
            "RB205_SE14R",
            "RB205_emp_binocular_scout",
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "RB205_SE14R",
            "RB205_emp_binocular_scout",
            "Throw","Put"
        };
        magazines[]=
        {
            ENUM_3("RB205_Compact_Energy_Pack_red")
        };
        respawnmagazines[]=
        {
            ENUM_3("RB205_Compact_Energy_Pack_red")
        };
        class Wounds
        {
            mat[] = {"JMSLLTE_empire\data\body\of_body.rvmat","JMSLLTE_empire\data\body\of_body_injury.rvmat","JMSLLTE_empire\data\body\of_body_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };
    class RB205_emp_navy_ensign: RB205_emp_officer_base
    {
        ACCESS_TRUE
        displayName = "Navy Ensign (Ens.)";
        uniformClass = "RB205_emp_U_officer_grey";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_grey_co.paa"};
        LINKED_ITEMS("RB205_emp_H_officer_grey","RB205_emp_V_navy_ensign")
    };
    class RB205_emp_navy_lieutenant: RB205_emp_navy_ensign
    {
        ACCESS_TRUE
        displayName = "Navy Lieutenant (Lt.)";
        LINKED_ITEMS("RB205_emp_H_officer_grey","RB205_emp_V_navy_lieutenant")
    };
    class RB205_emp_navy_seniorLieutenant: RB205_emp_navy_ensign
    {
        ACCESS_TRUE
        displayName = "Navy Senior Lieutenant (Sr. Lt.)";
        LINKED_ITEMS("RB205_emp_H_officer_grey","RB205_emp_V_navy_seniorLieutenant")
    };
    class RB205_emp_navy_captain: RB205_emp_officer_base
    {
        ACCESS_TRUE
        displayName = "Navy Captain (Cpt.)";
        uniformClass = "RB205_emp_U_officer_green";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_green_co.paa"};
        LINKED_ITEMS("RB205_emp_H_officer_green","RB205_emp_V_navy_captain")
    };
    class RB205_emp_navy_admiral: RB205_emp_navy_captain
    {
        ACCESS_TRUE
        displayName = "Navy Admiral (Adm.)";
        LINKED_ITEMS("RB205_emp_H_officer_green","RB205_emp_V_navy_admiral")
    };
    class RB205_emp_navy_armored: RB205_emp_navy_ensign
    {
        ACCESS_TRUE
        displayName = "Navy Officer (Armored)";
        LINKED_ITEMS("RB205_emp_H_officer_helmet_black","RB205_emp_V_officer_armor_black")
    };
    class RB205_emp_navy_armored2: RB205_emp_navy_captain
    {
        ACCESS_TRUE
        displayName = "Navy Officer (Armored)";
        LINKED_ITEMS("RB205_emp_H_officer_helmet_green","RB205_emp_V_officer_armor_green")
    };
    class RB205_emp_army_sergeantMajor: RB205_emp_officer_base
    {
        ACCESS_TRUE
        displayName = "Army Sergeant-Major (Sgt. Mjr.)";
        uniformClass = "RB205_emp_U_officer_black";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_black_co.paa"};
        LINKED_ITEMS("RB205_emp_H_officer_black","RB205_emp_V_army_sergeantMajor")
    };
    class RB205_emp_army_lieutenant: RB205_emp_army_sergeantMajor
    {
        ACCESS_TRUE
        displayName = "Army Lieutenant (Lt.)";
        LINKED_ITEMS("RB205_emp_H_officer_black","RB205_emp_V_army_lieutenant")
    };
    class RB205_emp_army_captain: RB205_emp_army_sergeantMajor
    {
        ACCESS_TRUE
        displayName = "Army Captain (Cpt.)";
        LINKED_ITEMS("RB205_emp_H_officer_black","RB205_emp_V_army_captain")
    };
    class RB205_emp_army_commander: RB205_emp_army_sergeantMajor
    {
        ACCESS_TRUE
        displayName = "Army Commander (Cmdr.)";
        LINKED_ITEMS("RB205_emp_H_officer_black","RB205_emp_V_army_commander")
    };
    class RB205_emp_army_armored: RB205_emp_army_sergeantMajor
    {
        ACCESS_TRUE
        displayName = "Army Officer (Armored)";
        LINKED_ITEMS("RB205_emp_H_officer_helmet_black","RB205_emp_V_officer_armor_black")
    };
    class RB205_emp_isb_agent: RB205_unit_emp_base
    {
        ACCESS_TRUE
        displayName = "ISB Agent";
        uniformClass = "RB205_emp_U_officer_isb_agent";
        nakedUniform = "U_BasicBody";
        model = "\JMSLLTE_empire\officer.p3d";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_ISB_co.paa"};
	    editorSubCategory = "RB205_empire_officer";
        //Inventory:
	    backpack = "RB205_B_emp_scout";
        LINKED_ITEMS("RB205_emp_H_officer_isb_agent","RB205_emp_V_isb_agent")
    };
    class RB205_emp_isb_lieutenant: RB205_emp_officer_base
    {
        ACCESS_TRUE
        displayName = "ISB Lieutenant (Lt.)";
        uniformClass = "RB205_emp_U_officer_isb";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_ISBof_co.paa"};
        LINKED_ITEMS("RB205_emp_H_officer_black","RB205_emp_V_isb_lieutenant")
    };
    class RB205_emp_isb_captain: RB205_emp_isb_lieutenant
    {
        ACCESS_TRUE
        displayName = "ISB Captain (Cpt.)";
        LINKED_ITEMS("RB205_emp_H_officer_black","RB205_emp_V_isb_captain")
    };
    class RB205_emp_isb_major: RB205_emp_isb_lieutenant
    {
        ACCESS_TRUE
        displayName = "ISB Major (Maj.)";
        LINKED_ITEMS("RB205_emp_H_officer_black","RB205_emp_V_isb_major")
    };
    class RB205_emp_officer_coat_base: RB205_emp_officer_base
    {
        ACCESS_FALSE
        model = "\JMSLLTE_empire\officerCoat.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
	    editorSubCategory = "RB205_empire_officer";

    };
    class RB205_emp_army_officer_coat: RB205_emp_officer_coat_base
    {
        ACCESS_TRUE
        displayName = "Army Officer (Coat)";
        uniformClass = "RB205_emp_U_officer_coat_black";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_black_co.paa","JMSLLTE_empire\data\body\of_coat_black_co.paa"};
        LINKED_ITEMS_WITHOUT_VEST("RB205_emp_H_officer_black")
    };
    class RB205_emp_navy_officer_coat: RB205_emp_officer_coat_base
    {
        ACCESS_TRUE
        displayName = "Navy Officer (Coat)";
        uniformClass = "RB205_emp_U_officer_coat_grey";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_grey_co.paa","JMSLLTE_empire\data\body\of_coat_black_co.paa"};
        LINKED_ITEMS_WITHOUT_VEST("RB205_emp_H_officer_black")
    };
    class RB205_emp_navy_officer_coat2: RB205_emp_officer_coat_base
    {
        ACCESS_TRUE
        displayName = "Navy Officer (Coat)";
        uniformClass = "RB205_emp_U_officer_coat_green";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_green_co.paa","JMSLLTE_empire\data\body\of_coat_green_co.paa"};
        LINKED_ITEMS_WITHOUT_VEST("RB205_emp_H_officer_green")
    };
    class RB205_emp_isb_officer_coat: RB205_emp_officer_coat_base
    {
        ACCESS_TRUE
        displayName = "ISB Officer (Coat)";
        uniformClass = "RB205_emp_U_officer_coat_isb";
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\body\of_body_ISBof_co.paa","JMSLLTE_empire\data\body\of_coat_white_co.paa"};
        LINKED_ITEMS_WITHOUT_VEST("RB205_emp_H_officer_black")
    };
};
class cfgGlasses
{
    class G_Balaclava_TI_blk_F;
    class RB205_emp_G_stormtooper: G_Balaclava_TI_blk_F
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Balaclava";
    };
};

class cfgFactionClasses
{
	class RB205_empire
	{
		displayName = "205th Recon Battalion - Empire";
	};
};
class cfgEditorSubcategories
{
	class RB205_empire_stormtrooper
	{
		displayName = "Stormtrooper";
	};
	class RB205_empire_rockettrooper
	{
		displayName = "Rockettrooper";
	};
    class RB205_empire_scout
	{
		displayName = "Scout Trooper";
	};
    class RB205_empire_officer
    {
		displayName = "Officer";
	};
    class RB205_empire_other
	{
		displayName = "Other";
	};
};
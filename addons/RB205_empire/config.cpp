class cfgPatches
{
    class RB205_empire
	{
		requiredAddons[]=
		{
			"RB205_core",
            "JMSLLTE_empire_helm_mod"
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
            
			"RB205_emp_U_trooper",
			"RB205_emp_U_scout_trooper",
			"RB205_emp_U_plt_trooper",
			"RB205_emp_U_snow_trooper",

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
            "RB205_emp_V_snow_ct"
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

            "RB205_emp_trooper",
            "RB205_emp_lanceCorporal",
            "RB205_emp_corporal",
            "RB205_emp_sergeant",
            "RB205_emp_sergeantMajor",
            "RB205_emp_lieutenant",
            "RB205_emp_captain",
            "RB205_emp_commander",

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
            
            "RB205_emp_plt_trooper",            
            "RB205_emp_snow_trooper"
		};
	};
};

#include "\RB205_core\macros.hpp"

class cfgWeapons
{
    /*
        HELMETS
    */
    class H_HelmetB;
    class RB205_helmet_base: H_HelmetB
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
    /*
        UNIFORMS
    */
    class Uniform_Base;
    class RB205_uniform_base: Uniform_Base
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
    /*
        VESTS
    */
    class Vest_Camo_Base;
    class RB205_vest_base: Vest_Camo_Base
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
    class RB205_vest_medic_base: RB205_vest_base
    {
        class ItemInfo;
    };
    class RB205_vest_grenadier_base: RB205_vest_base
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
    class RB205_emp_V_medic: RB205_vest_medic_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Vest <Medic>";
        model = "\JMSLLTE_empire\vests\StormtroperHeavy2.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\vests\data\stormheavy_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\JMSLLTE_empire\vests\StormtroperHeavy2.p3d";
            hiddenSelections[] = {"Camo1"};
        };
    };
    class RB205_emp_V_grenadier: RB205_vest_grenadier_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Vest <Grenadier>";
        model = "\JMSLLTE_empire\vests\StormtroperBand.p3d";
        picture = "\JMSLLTE_empire\vests\ico\ico_v_storm.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {};
        class ItemInfo: ItemInfo
        {
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
};

#define LINKED_ITEMS(HELMET,VEST) \
linkedItems[] = \
{ \
	##HELMET##,##VEST##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch" \
}; \
respawnlinkedItems[] = \
{ \
	##HELMET##,##VEST##, \
	"ItemMap","ItemGPS","JLTS_clone_comlink","ItemCompass","ItemWatch" \
};

class cfgVehicles
{
    /*
        BACKPACKS
    */
    class RB205_backpack_base;
    class RB205_backpack_heavy_base;
    class RB205_backpack_medic_base;
    class RB205_backpack_rocket_base;
    class RB205_backpack_eod_base;
    class RB205_backpack_radio_base;
    class RB205_backpack_scout_base;

    class RB205_B_emp_heavy: RB205_backpack_heavy_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <Heavy>";
        model = "\JMSLLTE_empire\back_imp.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
    };
    class RB205_B_emp_medic: RB205_backpack_medic_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <Medic>";
        model = "\JMSLLTE_empire\back_imp_surv.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
    };
    class RB205_B_emp_rocket: RB205_backpack_rocket_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <AT/AA>";
        model = "\JMSLLTE_empire\back_imp.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
    };
    class RB205_B_emp_eod: RB205_backpack_eod_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <EOD>";
        model = "\JMSLLTE_scum\back_small_imp.p3d";
        picture = "\JMSLLTE_scum\data\ico\ico_b_small.paa";
    };
    class RB205_B_emp_radio: RB205_backpack_radio_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Stormtrooper Backpack <RTO>";
        model = "\JMSLLTE_empire\back_rad.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_imp.paa";
    };
    class RB205_B_emp_ab: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_heavy: RB205_backpack_heavy_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <Heavy>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_medic: RB205_backpack_medic_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <Medic>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_rocket: RB205_backpack_rocket_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <AT/AA>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_eod: RB205_backpack_eod_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <EOD>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
        JETPACK_TRUE
    };
    class RB205_B_emp_ab_radio: RB205_backpack_radio_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Rockettrooper Jetpack <RTO>";
        model = "\JMSLLTE_empire\back_skyrocket.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_skypack_co.paa"};
        JETPACK_TRUE
    };
    class RB205_B_emp_scout: RB205_backpack_scout_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Scout Trooper Backpack";
    };
    class RB205_B_emp_plt: RB205_backpack_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Tie Pilot Transmitter";
        TFAR_RADIO_SMALL
    };
    class RB205_B_emp_snow_heavy: RB205_backpack_heavy_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <Heavy>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
    };
    class RB205_B_emp_snow_medic: RB205_backpack_medic_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <Medic>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snowMed_co.paa"};
    };
    class RB205_B_emp_snow_rocket: RB205_backpack_rocket_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <AT/AA>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
    };
    class RB205_B_emp_snow_eod: RB205_backpack_eod_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <EOD>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
    };
    class RB205_B_emp_snow_radio: RB205_backpack_radio_base
    {
        ACCESS_TRUE
        displayName = "[205|EMP] Snowtrooper Backpack <RTO>";
        model = "\JMSLLTE_empire\back_snow.p3d";
        picture = "\JMSLLTE_empire\data\ico\ico_b_snow.paa";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"JMSLLTE_empire\data\back_snow_co.paa"};
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
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "RB205_E11_wScope",
            "Throw","Put"
        };
        magazines[]=
        {
            "RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag",
            "RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
            "RB205_smokeWhite","RB205_smokeWhite"
        };
        respawnmagazines[]=
        {
            "RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag","RB205_E11_mag",
            "RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
            "RB205_smokeWhite","RB205_smokeWhite"
        };
        items[]=
        {
            "ACE_EntrenchingTool",
            "ACE_Flashlight_XL50",
            "ACE_CableTie","ACE_CableTie","ACE_CableTie",
            "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
            "ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
            "ACE_painkillers","ACE_painkillers"
        };
        respawnitems[]=
        {
            "ACE_EntrenchingTool",
            "ACE_Flashlight_XL50",
            "ACE_CableTie","ACE_CableTie","ACE_CableTie",
            "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
            "ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
            "ACE_painkillers","ACE_painkillers"
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
    class RB205_emp_ab_trooper: RB205_emp_trooper
    {
        ACCESS_TRUE
        displayName = "(1-CT) Rockettrooper";
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
            "JMSLLTE_ec17pistol",
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "JMSLLTE_ec17pistol",
            "Throw","Put"
        };
        magazines[]=
        {
            "JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag",
            "RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
            "RB205_smokeWhite","RB205_smokeWhite"
        };
        respawnmagazines[]=
        {
            "JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag","JMSLLTE_EC17_15rnd_Mag",
            "RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
            "RB205_smokeWhite","RB205_smokeWhite"
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
            "3AS_SE14R",
            "Throw","Put"
        };
        respawnweapons[]=
        {
            "3AS_SE14R",
            "Throw","Put"
        };
        magazines[]=
        {
            "3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp",
            "RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
            "RB205_smokeWhite","RB205_smokeWhite"
        };
        respawnmagazines[]=
        {
            "3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp","3AS_16Rnd_EM20_Mag_Imp",
            "RB205_thermalDet","RB205_thermalDet","RB205_thermalDet",
            "RB205_smokeWhite","RB205_smokeWhite"
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
		ACCESS_TRUE
	};
};
class cfgEditorSubcategories
{
	class RB205_empire_stormtrooper
	{
		displayName = "Stormtrooper";
		ACCESS_TRUE
	};
    class RB205_empire_scout
	{
		displayName = "Scout Trooper";
		ACCESS_TRUE
	};
    class RB205_empire_other
	{
		displayName = "Other";
		ACCESS_TRUE
	};
};
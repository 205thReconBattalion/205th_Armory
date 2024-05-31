class cfgPatches
{
    class RB205_vehicles_empire
	{
		requiredAddons[]=
		{
			"RB205_vehicles"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_emp_74Z",
			"RB205_emp_WH",
			"RB205_emp_WH_TT",
			"RB205_emp_WH_Repair",
			"RB205_emp_WH_MG",
			"RB205_emp_WH_Rocket",
			"RB205_emp_WH_AA",
			//ARMORED
			"RB205_emp_itt",
			"RB205_emp_itt_logistic",
			"RB205_emp_itt_medic",
			"RB205_emp_tx130",
			"RB205_emp_tx130_gl",
			"RB205_emp_tx130_recon",
			"RB205_emp_tx130_super",
			"RB205_ATAT",
			"RB205_ATST",
			//STARFIGHTER
			"RB205_emp_laat",
			"RB205_emp_laatle",
			"RB205_emp_nuclass",
			"RB205_emp_rhoclass",
			"RB205_emp_purrgil",
			"RB205_emp_lambda",
			"RB205_emp_zetaclass",
			"RB205_emp_vwing",
			"RB205_emp_TIE_LN",
			"RB205_emp_TIE_IN",
			"RB205_emp_TIE_SA",
			"RB205_emp_TIE_SA_cluster",
			"RB205_emp_TIE_D",
			"RB205_emp_TIE_AD",
			//NAVAL
			"RB205_emp_catfish",
			"RB205_emp_catfish_mg",
			"RB205_emp_catfish_at",
			"RB205_emp_catfish_aa",
			//OTHER
			"RB205_emp_rhoclass_crate_barracks",
			"RB205_emp_rhoclass_crate_transport"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class JMSLLTE_B_veh_74z_imp_F;
	class RB205_emp_74Z: JMSLLTE_B_veh_74z_imp_F
	{
		ACCESS_TRUE
		displayName = "74-Z Speeder Bike";
		crew = "RB205_emp_scout_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_ground";
		hiddenSelectionsTextures[] = {"\JMSLLTE_vehicles_gr\74Z\data\74z_white_co.paa"};
		class TextureSources
		{
			class White
			{
				displayName = "White";
				author = "JMax";
				textures[] = {"\JMSLLTE_vehicles_gr\74Z\data\74z_white_co.paa"};
				factions[] = {"RB205_empire"};
			};
			class Grey
			{
				displayName = "Grey";
				author = "JMax";
				textures[] = {"\JMSLLTE_vehicles_gr\74Z\data\74z_grey_co.paa"};
				factions[] = {};
			};
			class Brown
			{
				displayName = "Brown";
				author = "JMax";
				textures[] = {"\JMSLLTE_vehicles_gr\74Z\data\74z_brown_co.paa"};
				factions[] = {};
			};
		};
	};
	class RB205_WH;
	class RB205_emp_WH: RB205_WH
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\Warthog\data\decals_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_WH_TT;
	class RB205_emp_WH_TT: RB205_WH_TT
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\transp_lopo_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa","\OPTRE_Vehicles\warthog\data\warthog_transport_decals_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_WH_Repair;
	class RB205_emp_WH_Repair: RB205_WH_Repair
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\warthog\data\net_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_WH_MG;
	class RB205_emp_WH_MG: RB205_WH_MG
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_WH_Rocket;
	class RB205_emp_WH_Rocket: RB205_WH_Rocket
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa","\OPTRE_Vehicles\warthog\data\turrets\m12_turret_decals_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_WH_AA;
	class RB205_emp_WH_AA: RB205_WH_AA
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa","\OPTRE_Vehicles\warthog\data\decals_ca.paa","\OPTRE_Vehicles\warthog\data\snow\M12HogMaav_interior_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\hog_apc_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	/*
		ARMORED
	*/
	class RB205_itt;
	class RB205_emp_itt: RB205_itt
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_itt\data\itt_co.paa","3as\3as_itt\data\glass_co.paa","3as\3as_itt\data\itt_int_back_co.paa","3as\3as_itt\data\itt_door_co.paa","3as\3as_itt\data\itt_int_front_co.paa","3as\3as_itt\data\itt_emiss_co.paa","3as\3as_itt\data\itt_turret_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_itt_logistic;
	class RB205_emp_itt_logistic: RB205_itt_logistic
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_itt\data\itt_logistic_co.paa","3as\3as_itt\data\glass_co.paa","3as\3as_itt\data\itt_int_back_co.paa","3as\3as_itt\data\itt_door_co.paa","3as\3as_itt\data\itt_int_front_co.paa","3as\3as_itt\data\itt_emiss_co.paa",""};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_itt_medic;
	class RB205_emp_itt_medic: RB205_itt_medic
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_itt\data\Medical\itt_medical_co.paa","3as\3as_itt\data\glass_co.paa","3as\3as_itt\data\itt_int_back_co.paa","3as\3as_itt\data\itt_door_co.paa","3as\3as_itt\data\itt_int_front_co.paa","3as\3as_itt\data\itt_emiss_co.paa",""};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_tx130;
	class RB205_emp_tx130: RB205_tx130
	{
		ACCESS_TRUE
		crew = "RB205_emp_tank_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_Imp_hull_co.paa","3AS\3AS_Saber\data\Saber_Imp_weapons_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_tx130_gl;
	class RB205_emp_tx130_gl: RB205_tx130_gl
	{
		ACCESS_TRUE
		crew = "RB205_emp_tank_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_imp_hull_co.paa","3AS\3AS_Saber\data\Saber_Imp_weapons_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_tx130_recon;
	class RB205_emp_tx130_recon: RB205_tx130_recon
	{
		ACCESS_TRUE
		crew = "RB205_emp_tank_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_Imp_hull_co.paa","3AS\3AS_Saber\data\Saber_weapons_scout_Imp_co.paa"};
		hiddenSelectionsMaterials[] = {"3AS\3AS_Saber\data\Saberhull.rvmat","3AS\3AS_Saber\data\Saberweapons_scout.rvmat"};
		class textureSources {};
	};
	class RB205_tx130_super;
	class RB205_emp_tx130_super: RB205_tx130_super
	{
		ACCESS_TRUE
		crew = "RB205_emp_tank_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Saber\data\Saber_Imp_hull_co.paa","3AS\3AS_Saber\data\Saber_Imp_weapons_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_atte;
	class RB205_emp_atte: RB205_atte
	{
		ACCESS_TRUE
		crew = "RB205_emp_tank_trooper";
		faction = "RB205_empire";
		hiddenselectionstextures[] = {"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_Imp_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_IMP_co.paa","3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa","3as\3as_atte\data\textures\3as_atte_armor_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class 3AS_ATAT;
	class RB205_ATAT: 3AS_ATAT
	{
		ACCESS_TRUE
		displayName = "AT-AT";
		crew = "RB205_emp_tank_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_tank";
	};
	class WM_ATST;
	class RB205_ATST: WM_ATST
	{
		ACCESS_TRUE
		displayName = "AT-ST";
		crew = "RB205_emp_tank_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_tank";
	};
	/*
		STARFIGHTER
	*/
	class RB205_laat;
	class RB205_emp_laat: RB205_laat
	{
		ACCESS_TRUE
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3AS_Laat\LAATI\data\Hull_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\wings_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\weapons_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\weapon_Details_Imp_CO.paa","3AS\3AS_Laat\LAATI\data\interior_Imp_CO.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_laatle;
	class RB205_emp_laatle: RB205_laatle
	{
		ACCESS_TRUE
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3AS\3as_LAAT\LAAT_LE\data\imperialpatrol01_CO.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_nuclass;
	class RB205_emp_nuclass: RB205_nuclass
	{
		ACCESS_TRUE
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\nu_class\data\hull_Imp_co.paa","3as\3as_republic_heli\nu_class\data\hull_front_imp_co.paa","3as\3as_republic_heli\nu_class\data\wings_Imp_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa","3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_rhoclass;
	class RB205_emp_rhoclass: RB205_rhoclass
	{
		ACCESS_TRUE
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\rho_class\data\hull_rho_Imp_co.paa","3as\3as_republic_heli\nu_class\data\hull_front_imp_co.paa","3as\3as_republic_heli\rho_class\data\wings_rho_Imp_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_co.paa","3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa","3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_purrgil;
	class RB205_emp_purrgil: RB205_purrgil
	{
		ACCESS_TRUE
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		hiddenselectionstextures[] = {"3as\3as_starships\data\hs_imp_ext_co.paa","3as\3as_starships\data\hs_int_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class WM_Lambda;
	class RB205_emp_lambda: WM_Lambda
	{
		ACCESS_TRUE
		displayName = "Lambda-Class T-4A Shuttle";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class JMSLLTE_veh_ZetaClass_inf_emp;
	class RB205_emp_zetaclass: JMSLLTE_veh_ZetaClass_inf_emp
	{
		ACCESS_TRUE
		displayName = "Zeta-Class Heavy Cargo Shuttle";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class RB205_vwing;
	class RB205_emp_vwing: RB205_vwing
	{
		ACCESS_TRUE
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		hiddenselectionstextures[] = {"3as\3AS_Vwing\data\vwing_imp_co.paa","3as\3AS_Vwing\data\vwing_int_co.paa","#(argb,8,8,3)color(0,0,0,1.0,CA)"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class WM_Tiefighter;
	class RB205_emp_TIE_LN: WM_Tiefighter
	{
		ACCESS_TRUE
		displayName = "TIE/LN (Fighter)";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieInterceptor;
	class RB205_emp_TIE_IN: WM_TieInterceptor
	{
		ACCESS_TRUE
		displayName = "TIE/IN (Interceptor)";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieBomber;
	class RB205_emp_TIE_SA: WM_TieBomber
	{
		ACCESS_TRUE
		displayName = "TIE/SA (Bomber)";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieBomber_Cluster;
	class RB205_emp_TIE_SA_cluster: WM_TieBomber_Cluster
	{
		ACCESS_TRUE
		displayName = "TIE/SA (Bomber - Cluster)";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieDefender;
	class RB205_emp_TIE_D: WM_TieDefender
	{
		ACCESS_TRUE
		displayName = "TIE/D (Defender)";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	class WM_TieAdvanced;
	class RB205_emp_TIE_AD: WM_TieAdvanced
	{
		ACCESS_TRUE
		displayName = "TIE/AD (Advanced)";
		crew = "RB205_emp_plt_trooper";
		faction = "RB205_empire";
		editorSubCategory = "RB205_veh_air";
	};
	/*
		NAVAL
	*/
	class optre_catfish_unarmed_f;
	class RB205_emp_catfish: optre_catfish_unarmed_f
	{
		ACCESS_TRUE
		displayName = "'Catfish' Water Glider";
		author = "205th Recon Battalion";
		crew = "RB205_emp_trooper";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa"};
		hiddenSelectionsMaterials[] = {};
		//Editor/ Zeus
		side = 1;
		faction = "RB205_empire";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
	};
	class RB205_catfish_mg;
	class RB205_emp_catfish_mg: RB205_catfish_mg
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\optre_vehicles\warthog\data\turrets\sight_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_catfish_at;
	class RB205_emp_catfish_at: RB205_catfish_at
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\optre_vehicles\warthog\data\turrets\m39_turret_co.paa","\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	class RB205_catfish_aa;
	class RB205_emp_catfish_aa: RB205_catfish_aa
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa","\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa","\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa","\OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa"};
		hiddenSelectionsMaterials[] = {};
	};
	/*
		OTHER
	*/
	class RB205_rhoclass_crate_barracks;
	class RB205_emp_rhoclass_crate_barracks: RB205_rhoclass_crate_barracks
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa","3as\3as_republic_heli\rho_class\data\crate_int_co.paa","3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa","3as\3as_republic_heli\rho_class\data\clone_bed_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
	class RB205_rhoclass_crate_transport;
	class RB205_emp_rhoclass_crate_transport: RB205_rhoclass_crate_transport
	{
		ACCESS_TRUE
		crew = "RB205_emp_trooper";
		faction = "RB205_empire";
		hiddenSelectionsTextures[] = {"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa","3as\3as_republic_heli\rho_class\data\crate_int_co.paa","3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa","3as\3as_republic_heli\rho_class\data\clone_bed_co.paa","3as\3as_republic_heli\rho_class\data\interior_co.paa"};
		hiddenSelectionsMaterials[] = {};
		class textureSources {};
	};
};
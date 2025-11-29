class cfgPatches
{
    class RB205_vehicles_waterGlider
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"optre_catfish"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_waterGlider_mg",
			"RB205_waterGlider_at",
			"RB205_waterGlider_aa"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"
#include "\RB205_vehicles\waterGlider\waterGlider_textures.hpp"

#define LAATC_LIFTABLE \
	tas_canBlift = 1; \
	tas_liftVars = "[[[[0,-3,-4]]], [0], [0]]";

class cfgVehicles
{
	class optre_catfish_unarmed_f;
	class optre_catfish_mg_f: optre_catfish_unarmed_f
	{
		class Turrets
		{
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
			class MainTurret;
		};
	};
	class RB205_waterGlider_mg: optre_catfish_mg_f
	{
		ACCESS_TRUE
		displayName = "'Aiwha' Water Glider (MG)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
		CARGO_S
		LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		WATERGLIDER_TEXTURES("\optre_vehicles\warthog\data\turrets\sight_co.paa")
		class Turrets: Turrets
		{
			class CargoTurret_1: CargoTurret_01{};
			class CargoTurret_2: CargoTurret_02{};
			class CargoTurret_3: CargoTurret_03{};
			class CargoTurret_4: CargoTurret_04{};
			class CargoTurret_5: CargoTurret_05{};
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RB205_wth_mg"
				};
				magazines[]=
				{
					"RB205_wth_mg_mag_1000rnd",
					"RB205_wth_mg_mag_1000rnd",
					"RB205_wth_mg_mag_1000rnd"
				};
			};
		};
	};

	class optre_catfish_aa_f;
	class RB205_waterGlider_aa: optre_catfish_aa_f
	{
		ACCESS_TRUE
		displayName = "'Aiwha' Water Glider (AA)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
		CARGO_S
		LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		WATERGLIDER_TEXTURES("\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa")
	};

	class optre_catfish_atgm_f;
	class RB205_waterGlider_at: optre_catfish_atgm_f
	{
		ACCESS_TRUE
		displayName = "'Aiwha' Water Glider (AT)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
		CARGO_S
		LAATC_LIFTABLE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		WATERGLIDER_TEXTURES("\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa")
		//Texture
	};
};
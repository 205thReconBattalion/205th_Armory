class cfgPatches
{
    class RB205_vehicles_catfish
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
			"RB205_catfish_mg",
			"RB205_catfish_at",
			"RB205_catfish_aa"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

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
		}
	}
	class RB205_catfish_mg: optre_catfish_mg_f
	{
		ACCESS_TRUE
		displayName = "'Catfish' Water Glider (MG)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"\RB205_vehicles\catfish\data\205_catfish_boat_co.paa",
			"\RB205_vehicles\catfish\data\205_catfish_interior_co.paa",
			"\RB205_vehicles\catfish\data\205_catfish_seats_co.paa",
			"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\optre_vehicles\warthog\data\turrets\sight_co.paa",
			""//\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"\RB205_vehicles\catfish\data\205_catfish_boat_co.paa",
					"\RB205_vehicles\catfish\data\205_catfish_interior_co.paa",
					"\RB205_vehicles\catfish\data\205_catfish_seats_co.paa",
					"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\optre_vehicles\warthog\data\turrets\sight_co.paa",
					""//\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
		hiddenselectionsMaterials[]=
		{
			"RB205_vehicles\catfish\data\205_catfish_boat.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"RB205_vehicles\catfish\data\205_catfish_boat.rvmat",
				"RB205_vehicles\catfish\data\205_catfish_boat.rvmat",
				"OPTRE_Vehicles\Catfish\data\optre_destroyed_boat.rvmat"
			};
		};
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
	class RB205_catfish_aa: optre_catfish_aa_f
	{
		ACCESS_TRUE
		displayName = "'Catfish' Water Glider (AA)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"\RB205_vehicles\catfish\data\205_catfish_boat_co.paa",
			"\RB205_vehicles\catfish\data\205_catfish_interior_co.paa",
			"\RB205_vehicles\catfish\data\205_catfish_seats_co.paa",
			"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"\RB205_vehicles\catfish\data\205_catfish_boat_co.paa",
					"\RB205_vehicles\catfish\data\205_catfish_interior_co.paa",
					"\RB205_vehicles\catfish\data\205_catfish_seats_co.paa",
					"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
		hiddenselectionsMaterials[]=
		{
			"RB205_vehicles\catfish\data\205_catfish_boat.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"RB205_vehicles\catfish\data\205_catfish_boat.rvmat",
				"RB205_vehicles\catfish\data\205_catfish_boat.rvmat",
				"OPTRE_Vehicles\Catfish\data\optre_destroyed_boat.rvmat"
			};
		};
	};

	class optre_catfish_atgm_f;
	class RB205_catfish_at: optre_catfish_atgm_f
	{
		ACCESS_TRUE
		displayName = "'Catfish' Water Glider (AT)";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_naval";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[] =
		{
			"\RB205_vehicles\catfish\data\205_catfish_boat_co.paa",
			"\RB205_vehicles\catfish\data\205_catfish_interior_co.paa",
			"\RB205_vehicles\catfish\data\205_catfish_seats_co.paa",
			"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			""//\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"\RB205_vehicles\catfish\data\205_catfish_boat_co.paa",
					"\RB205_vehicles\catfish\data\205_catfish_interior_co.paa",
					"\RB205_vehicles\catfish\data\205_catfish_seats_co.paa",
					"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					""//\optre_vehicles\warthog\data\turrets\m12_turret_decals_ca.paa
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
		hiddenselectionsMaterials[]=
		{
			"RB205_vehicles\catfish\data\205_catfish_boat.rvmat"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"RB205_vehicles\catfish\data\205_catfish_boat.rvmat",
				"RB205_vehicles\catfish\data\205_catfish_boat.rvmat",
				"OPTRE_Vehicles\Catfish\data\optre_destroyed_boat.rvmat"
			};
		};
	};
};
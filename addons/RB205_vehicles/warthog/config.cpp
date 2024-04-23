class cfgPatches
{
    class RB205_vehicles_warthog
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
			"RB205_WH",
			"RB205_WH_TT",
			"RB205_WH_Repair",
			"RB205_WH_MG",
			"RB205_WH_Rocket",
			"RB205_WH_AA"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"
#include "\RB205_vehicles\cfgammo.hpp"
#include "\RB205_vehicles\cfgmagazines.hpp"
#include "\RB205_vehicles\cfgweapons.hpp"


//class cfgWeapons {};
class cfgVehicles
{
	class OPTRE_M12_FAV;
	class OPTRE_M813_TT;
	class OPTRE_M914_RV;
	class OPTRE_M12_Base;
	class OPTRE_M12_LRV: OPTRE_M12_Base{
		class Turrets{
			class MainTurret;
		}
	}
	class OPTRE_M12A1_LRV;
	class OPTRE_M12R_AA;

	class RB205_WH: OPTRE_M12_FAV
	{
		ACCESS_TRUE
		displayName = "WTH";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\warthog\data\warthog_extupper.paa",
			"RB205_vehicles\warthog\data\warthog_extunder.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\warthog\data\warthog_extupper.paa",
					"RB205_vehicles\warthog\data\warthog_extunder.paa",
					"",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_WH_TT: OPTRE_M813_TT
	{
		ACCESS_TRUE
		displayName = "WTH/TT";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\warthog\data\warthog_extupper.paa",
			"RB205_vehicles\warthog\data\warthog_extunder.paa",
			"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
			""
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\warthog\data\warthog_extupper.paa",
					"RB205_vehicles\warthog\data\warthog_extunder.paa",
					"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
					"",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\warthog_transport_net_ca.paa",
					""
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_WH_Repair: OPTRE_M914_RV
	{
		ACCESS_TRUE
		displayName = "WTH/R";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\warthog\data\warthog_extupper.paa",
			"RB205_vehicles\warthog\data\warthog_extunder.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\net_ca.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\warthog\data\warthog_extupper.paa",
					"RB205_vehicles\warthog\data\warthog_extunder.paa",
					"",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\net_ca.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_WH_MG: OPTRE_M12_LRV
	{
		ACCESS_TRUE
		displayName = "WTH/MG";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\warthog\data\warthog_extupper.paa",
			"RB205_vehicles\warthog\data\warthog_extunder.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\warthog\data\warthog_extupper.paa",
					"RB205_vehicles\warthog\data\warthog_extunder.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"",
					"\OPTRE_Vehicles\warthog\data\turrets\sight_co.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
		class Turrets: Turrets
		{
			
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"205_wh_mg_wp"
				};
				magazines[]=
				{
					"205_1000rnd_mg_ma",
					"205_1000rnd_mg_ma"
				};
			};
		};
	};
	class RB205_WH_Rocket: OPTRE_M12A1_LRV
	{
		ACCESS_TRUE
		displayName = "WTH/AT";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\warthog\data\warthog_extupper.paa",
			"RB205_vehicles\warthog\data\warthog_extunder.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
			"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
			""
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] = 
				{
					"RB205_vehicles\warthog\data\warthog_extupper.paa",
					"RB205_vehicles\warthog\data\warthog_extunder.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
					"",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa",
					"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
					""
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
	class RB205_WH_AA: OPTRE_M12R_AA
	{
		ACCESS_TRUE
		displayName = "WTH/AA";
		author = "205th Recon Battalion";
		crew = "RB205_clone_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\warthog\data\warthog_extupper.paa",
			"RB205_vehicles\warthog\data\warthog_extunder.paa",
			"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
			"",
			"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\warthog\data\warthog_extupper.paa",
					"RB205_vehicles\warthog\data\warthog_extunder.paa",
					"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
					"",
					"\OPTRE_Vehicles\warthog\data\m12hogmaav_interior_co.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
		};
	};
};
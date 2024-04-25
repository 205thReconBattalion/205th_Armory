class cfgPatches
{
    class RB205_vehicles_v19
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_V19_Torrent"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_v19"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3as_V19_base;

	class RB205_v19: 3as_V19_base
	{
		ACCESS_TRUE
		displayName = "V-19";
		author = "205th Recon Battalion";
		crew = "RB205_clone_plt_trooper";
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenselectionstextures[] =
		{
			"3as\3as_v19\textures\wings_co.paa",
			"3as\3as_v19\textures\wing plates_co.paa",
			"3as\3as_v19\textures\hull_co.paa",
			"3as\3as_v19\textures\gun gear_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"3as\3as_v19\textures\pizzlepit_co.paa"
		};
		class TextureSources
		{
			/*class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] = TODO
				factions[] =
				{
					"RB205"
				};
			};*/
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3as_v19\textures\wings_co.paa",
					"3as\3as_v19\textures\wing plates_co.paa",
					"3as\3as_v19\textures\hull_co.paa",
					"3as\3as_v19\textures\gun gear_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"3as\3as_v19\textures\pizzlepit_co.paa"
				};
			};
		};
		//Weapons
		weapons[] =
		{
			"3as_V19_Medium_Cannon",
			"RB205_Missile_AA_SR",
			"RB205_Missile_AA_MR",
			"RB205_Missile_AG",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"PylonMissile_Missile_AMRAAM_D_x1","PylonMissile_Missile_AMRAAM_D_x1","PylonMissile_Missile_AMRAAM_D_x1","PylonMissile_Missile_AMRAAM_D_x1",
			"6Rnd_Missile_AGM_02_F",
			"240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	}
};
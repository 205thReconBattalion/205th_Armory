class cfgPatches
{
    class RB205_vehicles_laat_c
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_LAAT_Cargo"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_laatc"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3as_LAATC;

	class RB205_laatc: 3as_LAATC
	{
		ACCESS_TRUE
		displayName = "LAAT/C";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_co.paa",
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_co.paa",
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa",
			"3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
		};
		class TextureSources
		{
			/*class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\laat_c\data\laat_c_hull_co.paa",
					"RB205_vehicles\laat_c\data\laat_c_wings_co.paa",
					"RB205_vehicles\laat_c\data\laat_c_top_co.paa",
					"RB205_vehicles\laat_c\data\laat_c_detail_front_co.paa"
				};
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
					"3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_co.paa",
					"3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_co.paa",
					"3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa",
					"3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
				};
			};
			class Republic_Wampa
			{
				displayName = "Grand Army of the Republic - Wampa";
				author = "3AS";
				textures[] =
				{
					"\3AS\3AS_LAATC\data\Textures\LAAT_C_Hull_Wampa_co.paa",
					"\3AS\3AS_LAATC\data\Textures\LAAT_C_Wings_Wampa_co.paa",
					"\3AS\3AS_LAATC\data\Textures\LAAT_C_Top_co.paa",
					"\3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
				};
			};
		};
		//Weapons
		weapons[] =
		{
			"3as_LAAT_Medium_Canon",
			"RB205_Missile_AG",
			"RB205_Missile_AA_SR",
			"CMFlareLauncher"
		};
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
		//Vehicle Transport
		class VehicleTransport
		{
			class Carrier
			{
				loadingDistance = 10;
				loadingAngle = 60;
				cargoAlignment[] = {"center","front"};
				cargoBayDimensions[] = {"Limit1","limit2"};
				cargoSpacing[] = {0,0.15,0};
				disableHeightLimit = 1;
				exits[] = {"exit"};
				maxLoadMass = 200000;
				parachuteClassDefault = "B_Parachute_02_F";
				parachuteHeightLimitDefault = 50;
				unloadingInterval = 2;
			};
		};
	};
};
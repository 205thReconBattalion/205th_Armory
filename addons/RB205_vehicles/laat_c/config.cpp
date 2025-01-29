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
	class 3AS_LAAT_Cargo_Base;
	class 3AS_LAATC: 3AS_LAAT_Cargo_Base
	{
    class Components;
		class VehicleTransport
		{
			class Carrier;
		};
	};

	class RB205_laatc: 3AS_LAATC
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
			"RB205_AGM_Torrent_weapon",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"3as_LAAT_1000Rnd_Medium_shells",
			"RB205_AGM_Torrent_missile_2rnd",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="3as\3AS_LAAT\LAATI\data\ui\pylon_laat.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]={};
						attachment="";
						priority=10;
						maxweight=5000;
						UIposition[]={0.15,0.15};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.5,0.15};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]={};
						attachment="";
						priority=9;
						maxweight=5000;
						UIposition[]={0.1,0.25};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.55,0.25};
						mirroredMissilePos=3;
					};
				};
				class presets {};
			};
		};
		#include "\RB205_vehicles\laat\laat_sounds.hpp"
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
		//Vehicle Transport
		availableforsupporttypes[] = {"Transport"};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[] =
				{
					"Limit1",
					"limit2"
				};
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[] = {0,0.15,0};
				exits[] =
				{
					"exit"
				};
				maxLoadMass = 200000;
				disableHeightLimit = 1;
				loadingDistance = 10;
				loadingAngle = 60;
				unloadingInterval = 2;
				parachuteClassDefault = "B_Parachute_02_F";
				parachuteHeightLimitDefault = 50;
			};
		};
	};
};
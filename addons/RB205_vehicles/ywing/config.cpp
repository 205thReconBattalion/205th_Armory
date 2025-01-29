class cfgPatches
{
    class RB205_vehicles_ywing
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_BTLB_Bomber"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_ywing"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_BTLB_Bomber;
	class 3AS_BTLB_Bomber_ShadowLeader: 3AS_BTLB_Bomber
	{
		class Components;
	};
	class RB205_ywing: 3AS_BTLB_Bomber_ShadowLeader
	{
		ACCESS_TRUE
		displayName = "Y-Wing Bomber";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY_LIGHT
		CARGO_NONE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Texture
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\ywing\data\ywing_co.paa",
			"3as\3AS_btlb\data\detail_co.paa",
			"3as\3AS_btlb\data\interior_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\ywing\data\ywing_co.paa",
					"3as\3AS_btlb\data\detail_co.paa",
					"3as\3AS_btlb\data\interior_co.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_btlb\textures\chasis_shadowleader_co.paa",
					"3as\3AS_btlb\data\detail_co.paa",
					"3as\3AS_btlb\data\interior_co.paa"
				};
			};
			class Republic_91
			{
				displayName = "Grand Army of the Republic - 91st";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_BTLB\textures\Chasis_RedLeader_CO.paa",
					"3as\3AS_btlb\data\detail_co.paa",
					"3as\3AS_btlb\data\interior_co.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "3as\3AS_BTLB\data\ui\pylon_ywing.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] =
						{
							"B_BOMB_PYLON",
							"B_SDB_QUAD_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_GBUSDB_bombPylon";
						priority = 10;
						maxweight = 5000;
						UIposition[] = {0.15,0.15};//{0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.525,0.15};//{0.15,0.25};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1
					{
						hardpoints[] =
						{
							"B_BOMB_PYLON",
							"B_SDB_QUAD_RAIL",
							"ARC_EMP_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_GBU12_bombPylon";
						priority = 9;
						maxweight = 5000;
						UIposition[] = {0.15,0.25};//{0.55,0.35};
					};
					class pylons4: pylons3
					{
						UIposition[] = {0.525,0.25};//{0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1
					{
						hardpoints[] =
						{
							"B_BOMB_PYLON",
							"B_SDB_QUAD_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_AGM65_missilePylon_2rnd";
						priority = 7;
						maxweight = 5000;
						UIposition[] = {0.15,0.35};//{0.6,0.45};
					};
					class pylons6: pylons5
					{
						UIposition[] = {0.525,0.35};//{0.05,0.45};
						mirroredMissilePos = 5;
					};
					class pylons7: pylons1
					{
						hardpoints[] =
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_AGMHARM_missilePylon";
						priority = 9;
						maxweight = 5000;
						UIposition[] = {0.2,0.45};//{0.45,0.4};
					};
					class pylons8: pylons7
					{
						UIposition[] = {0.475,0.45};//{0.2,0.4};
						attachment = "RB205_BIM9X_missilePylon_3rnd";
						mirroredMissilePos = 7;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] =
						{
							"RB205_GBUSDB_bombPylon",
							"RB205_GBUSDB_bombPylon",
							"RB205_GBU12_bombPylon",
							"RB205_GBU12_bombPylon",
							"RB205_AGM65_missilePylon_2rnd",
							"RB205_AGM65_missilePylon_2rnd",
							"RB205_AGMHARM_missilePylon",
							"RB205_BIM9X_missilePylon_3rnd"
						};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] =
						{
							"RB205_GBUSDB_bombPylon",
							"RB205_GBUSDB_bombPylon",
							"RB205_GBU12_bombPylon",
							"RB205_GBU12_bombPylon",
							"RB205_GBU12_bombPylon",
							"RB205_CBU85_bombPylon",
							"RB205_AGM65_missilePylon_2rnd",
							"RB205_AGM65_missilePylon_2rnd"
						};
					};
				};
			};
		};
	};
};
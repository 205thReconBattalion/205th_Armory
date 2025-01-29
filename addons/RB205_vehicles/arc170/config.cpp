class cfgPatches
{
    class RB205_vehicles_arc170
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_arc_170"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_arc170"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class 3as_arc_170_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components;
	};
	class RB205_arc170: 3as_arc_170_base
	{
		ACCESS_TRUE
		displayName = "ARC-170";
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
		hiddenselectionstextures[] =
		{
			"RB205_vehicles\arc170\data\arc170_main_frame_co.paa",
			"RB205_vehicles\arc170\data\arc170_wings_engines_co.paa",
			"RB205_vehicles\arc170\data\arc170_guns_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\arc170\data\arc170_main_frame_co.paa",
					"RB205_vehicles\arc170\data\arc170_wings_engines_co.paa",
					"RB205_vehicles\arc170\data\arc170_guns_co.paa"
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
					"3as\3as_arc170\Data\Main_Frame_CO.paa",
					"3as\3as_arc170\Data\Wings_Engines_CO.paa",
					"3as\3as_arc170\Data\Guns_CO.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "3as\3AS_ARC170\data\ui\pylon_arc.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] =
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_AGM65_missilePylon_2rnd";
						priority = 10;
						maxweight = 5000;
						UIposition[] = {0.15,0.15};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.5,0.15};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1
					{
						hardpoints[] =
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_AGM65L_missilePylon_2rnd";
						priority = 9;
						maxweight = 5000;
						UIposition[] = {0.1,0.25};
					};
					class pylons4: pylons3
					{
						UIposition[] = {0.55,0.25};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1
					{
						hardpoints[] =
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_AMRAAM_missilePylon_2rnd";
						priority = 7;
						maxweight = 5000;
						UIposition[] = {0.55,0.35};
						mirroredMissilePos = 6;
					};
					class pylons6: pylons5
					{
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 0;
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
							"RB205_AGM65_missilePylon_2rnd",
							"RB205_AGM65_missilePylon_2rnd",
							"RB205_AGM65L_missilePylon_2rnd",
							"RB205_AGM65L_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon_2rnd"
						};
					};
					class AA
					{
						displayName = "AA";
						attachment[] =
						{
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_BIM9X_missilePylon_3rnd",
							"RB205_BIM9X_missilePylon_3rnd"
						};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] =
						{
							"RB205_AGM65_missilePylon_2rnd",
							"RB205_AGM65_missilePylon_2rnd",
							"RB205_AGM65L_missilePylon_2rnd",
							"RB205_AGM65L_missilePylon_2rnd",
							"RB205_AGMHARM_missilePylon",
							"RB205_AGMHARM_missilePylon"
						};
					};
				};
			};
		};
	};
};
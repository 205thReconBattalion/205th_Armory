class cfgPatches
{
    class RB205_vehicles_z95
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_Z95_base"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_z95"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Z95_VTOL_Dynamic_Base_F;
	class 3as_Z95_Republic: 3AS_Z95_VTOL_Dynamic_Base_F
	{
		class Components;
	};

	class RB205_z95: 3as_Z95_Republic
	{
		ACCESS_TRUE
		displayName = "Z-95 Headhunter";
		author = AUTHOR;
		crew = CREW_AIR;
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
			"RB205_vehicles\z95\data\z95_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\z95\data\z95_co.paa",
					"3AS\3as_Z95\Data\cockpit_co.paa"
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
					"3AS\3as_Z95\data\body_co.paa",
					"3AS\3as_Z95\data\cockpit_co.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "3as\3AS_Z95\Data\ui\pylon_z95.paa";
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
							"B_HARM_RAIL"
						};
						attachment = "RB205_AMRAAM_missilePylon_2rnd";
						priority = 10;
						maxweight = 5000;
						UIposition[] = {0.5,0.35};
						mirroredMissilePos = 2;
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.15,0.35};
						mirroredMissilePos = 0;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AGM65_RAIL",
							"B_HARM_RAIL"
						};
						attachment = "RB205_AGM65_missilePylon";
						priority = 9;
						maxweight = 5000;
						UIposition[] = {0.1,0.25};
						mirroredMissilePos = 0;
					};
					class pylons4: pylons3
					{
						UIposition[] = {0.525,0.25};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1
					{
						hardpoints[] =
						{
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL"
						};
						attachment = "RB205_BIM9X_missilePylon_3rnd";
						priority = 7;
						maxweight = 5000;
						UIposition[] = {0.575,0.15};
						mirroredMissilePos = 6;
					};
					class pylons6: pylons5
					{
						UIposition[] = {0.05,0.15};
						mirroredMissilePos = 0;
					};
					class Pylons7
					{
						hardpoints[] =
						{
							"z95_CANON_PYLON"
						};
						priority = 5;
						attachment = "3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells";
						maxweight = 4000;
						UIposition[] = {0.325,0.45};
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
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AGM65_missilePylon",
							"RB205_AGM65_missilePylon",
							"RB205_BIM9X_missilePylon_3rnd",
							"RB205_BIM9X_missilePylon_3rnd",
							"3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells"
						};
					};
					class AA
					{
						displayName = "AA";
						attachment[] =
						{
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon_2rnd",
							"RB205_AMRAAM_missilePylon",
							"RB205_AMRAAM_missilePylon",
							"RB205_BIM9X_missilePylon_3rnd",
							"RB205_BIM9X_missilePylon_3rnd",
							"3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells"
						};
					};
				};
			};
		};
	};
};
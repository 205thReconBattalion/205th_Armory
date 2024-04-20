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

class cfgWeapons {};
class cfgVehicles
{
	class 3as_arc_170_base;
	class Plane_Fighter_03_dynamicLoadout_base_F;

	class RB205_arc170: 3as_arc_170_base
	{
		ACCESS_TRUE
		displayName = "ARC-170";
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
		class Components{
		class TransportPylonsComponent
					{
						UIPicture="3as\3AS_ARC170\data\plane_ARC_pylon_ca.paa";
						class pylons
						{
							class pylons1
							{
								hardpoints[]=
								{
									"JMSLLTE_TS5_12RND_PROTON_PYLON"
								};
								attachment="PylonRack_JMSLLTE_12Rnd_Ts5_proton_missiless"; //PylonRack_Missile_BIM9X_x2
								priority=1;
								maxweight=500;
								turret[]={};
								UIposition[]={0.5,0.25};
							};
							class pylons2: pylons1
							{
								UIposition[]={0.15000001,0.25};
								mirroredMissilePos=1;
							};

							class pylons3: pylons1
							{
								hardpoints[]=
								{
									"JMSLLTE_BOMB_20RND_PYLON"
								};
								attachment="PylonRack_Missile_BIM9X_x2"; //PylonRack_Missile_BIM9X_x2
								priority=1;
								maxweight=600;
								bay=1;
								turret[]={};
								UIposition[]={0.55000001,0.34999999};
							};
							class pylons4: pylons3
							{
								UIposition[]={0.1,0.34999999};
								mirroredMissilePos=3;
							};
							class pylons5: pylons1
							{
								hardpoints[]=
								{
								"JMSLLTE_MR93_20RND_MISSILE_PYLON",
								"JMSLLTE_MS3_20RND_MISSILE_PYLON"
								};
								attachment="PylonRack_JMSLLTE_20Rnd_Ms3_missiles";
								priority=2;
								maxweight=500;
								UIposition[]={0.60000002,0.44999999};
							};
							class pylons6: pylons5
								{
								UIposition[]={0.050000001,0.44999999};
								mirroredMissilePos=5;
								};
						};
					};
				};
	};
};
class cfgPatches
{
    class RB205_vehicles_prowler
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"A3_Boat_F_Beta_SDV_01",
			"JLTS_drones_prowler"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_prowler"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class JLTS_UAV_prowler_gar;
	class RB205_prowler: JLTS_UAV_prowler_gar
	{
		ACCESS_TRUE
		displayName = "Prowler 1000";
		author = "205th Recon Battalion";
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		//Textures
		hiddenselectionstextures[] = 
		{
			"RB205_vehicles\prowler\data\205_prowler_co.paa"
		};
		//Backpack
		class assembleInfo
		{
			primary=0;
			base="";
			displayName="";
			assembleTo="";
			dissasembleTo[]=
			{
				"RB205_B_prowler"
			};
		};
	};
};
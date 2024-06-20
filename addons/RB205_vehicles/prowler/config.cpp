class cfgPatches
{
    class RB205_vehicles_prowler
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
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
		author = AUTHOR;
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
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {};
			primary = 0;
			base = "";
		};
		/*Copy for backpack:
		class assembleInfo
		{
			displayName = "Prowler 1000";
			assembleTo = "RB205_prowler";
			dissasembleTo[] = {};
			primary = 1;
			base = "";
		};
		Copy for vehicle:
		class assembleInfo
		{
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {"RB205_B_prowler"};
			primary = 0;
			base = "";
		};*/
	};
};
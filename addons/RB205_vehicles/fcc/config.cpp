class cfgPatches
{
    class RB205_vehicles_fcc
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Static_FCP"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_fcc"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_Republic_FCP;
	class RB205_fcc: 3AS_Republic_FCP
	{
		ACCESS_TRUE
		displayName = "Forward Command Center";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
        CARGO_M
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
	};
};

class Extended_PostInit_EventHandlers
{
	class RB205_FCC_PostInit
	{
		init = "call compile preProcessFileLineNumbers '\RB205_vehicles\fcc\XEH_postInit.sqf'";
	};
};

class CfgNotifications 
{ 
	class RB205_RespawnModule_text 
	{ 
		title = "Neue Respawnposition";									// Title displayed as text on black background. Filled by arguments. 
		iconPicture = "\a3\Modules_f\data\iconHQ_ca.paa";  				// Small icon displayed in left part. Colored by "color", filled by arguments. 
		iconText = "";   												// Short text displayed over the icon. Colored by "color", filled by arguments. 
		description = "Das Forward Command Center wurde errichtet!";  	// Brief description displayed as structured text. Colored by "color", filled by arguments. 
		color[] = {1,1,1,1}; 											// Icon and text color 
		duration = 5;   												// How many seconds will the notification be displayed 
		priority = 0;   												// Priority; higher number = more important; tasks in queue are selected by priority 
		difficulty[] = {};  											// Required difficulty settings. All listed difficulties has to be enabled 
	};
	class RB205_RespawnModule_text_destroyed
	{ 
		title = "Respawnposition verloren";
		iconPicture = "\a3\Modules_f\data\iconModule_ca.paa";
		iconText = "";
		description = "Das Forward Command Center wurde zerstört!";
		color[] = {1,1,1,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
};

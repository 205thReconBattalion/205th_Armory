class CfgPatches
{
	class RB205_logistics_vehicleSpawn
	{
		requiredAddons[]=
		{
			"RB205_vehicles_barc",
			"RB205_vehicles_atrt",
			"3AS_LAAT",
			"3AS_ATTE",
			"ace_interact_menu"
		};
		author = "205th Recon Battalion"
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_logistics_vehicleSpawn_postInit
	{
		init = "call compile preProcessFileLineNumbers '\RB205_logistics\vehicleSpawn\XEH_postInit.sqf'";
	};
};
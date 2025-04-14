class CfgPatches
{
	class RB205_logistics_vehicleDeploy
	{
		requiredAddons[]=
		{
			"RB205_vehicles_barc",
			"RB205_vehicles_atrt",
			"RB205_vehicles_laat",
			"RB205_vehicles_laat_c",
			"RB205_vehicles_atte",
			"ace_interact_menu"
		};
		author = "205th Recon Battalion";
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};
class Extended_PostInit_EventHandlers
{
	class RB205_logistics_vehicleDeploy_postInit
	{
		init = "call compile preProcessFileLineNumbers '\RB205_logistics\vehicleDeploy\XEH_postInit.sqf'";
	};
};
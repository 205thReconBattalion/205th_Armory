class CfgPatches
{
	class RB205_logistics_vehicleSpawn
	{
		requiredAddons[]=
		{
			"RB205_vehicles"
		};
		author = "205th Recon Battalion";
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};
class CfgFunctions
{
	class RB205_VS
	{
		class modWhitelist
		{
			file="\RB205_logistics\vehicleSpawn\functions";
            class createVehDeleter {};
            class createVehSpawnerLand {};
            class createVehSpawnerArmor {};
            class createVehSpawnerAir {};
            class createVehSpawnerLNaval {};
		};
	};
};
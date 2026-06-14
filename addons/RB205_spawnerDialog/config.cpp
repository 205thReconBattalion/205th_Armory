class CfgPatches
{
	class RB205_spawnerDialog
	{
		requiredAddons[] =
		{
			"RB205_vehicles"
		};
		requiredVersion = 1.0;
		author = "Putzi";
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class RB205_spawnerDialog
	{
		class spawnerDialog
		{
			file = "\RB205_spawnerDialog\functions";
			class openDialog{};
			class onVehicleSelected{};
			class createVehicleArray{};
			class onBtnClickSpawn{};
		};
	};
};

#include "UIElements\defines.hpp"
#include "UIElements\dialog.hpp"

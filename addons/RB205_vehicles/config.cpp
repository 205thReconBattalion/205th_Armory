class cfgPatches
{
    class RB205_vehicles
	{
		requiredAddons[]=
		{
			"RB205_main"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] = {};
	};
};

#include "macros.hpp"

class cfgWeapons {};
class cfgVehicles {};

class CfgEditorSubcategories
{
	class RB205_veh_ground
	{
		displayName = "Vehicles"; //Fahrzeuge
		ACCESS_TRUE
	};
	class RB205_veh_tank
	{
		displayName = "Vehicles - Armored"; //Fahrzeuge - Gepanzert
		ACCESS_TRUE
	};
	class RB205_veh_air
	{
		displayName = "Vehicles - Starfighter"; //Fahrzeuge - Sternenjäger
		ACCESS_TRUE
	};
	class RB205_veh_naval
	{
		displayName = "Vehicles - Naval"; //Fahrzeuge - ???
		ACCESS_TRUE
	};
	class RB205_veh_other
	{
		displayName = "Vehicles - Other"; //Fahrzeuge - Sonstige
		ACCESS_TRUE
	};
};
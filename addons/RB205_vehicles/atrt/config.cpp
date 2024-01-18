class cfgPatches
{
    class RB205_vehicles_atrt
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ATRT"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_atrt"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgVehicles
{
	class 3AS_ATRT;
	class RB205_atrt: 3AS_ATRT
	{
		ACCESS_TRUE
		displayName = "AT-RT";
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Weapons
		weapons[] =
		{
			"RB250_atrt_repeater"
		};
		magazines[] =
		{
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag"
		};
	};
};
class cfgWeapons
{
	class 3AS_ATRT_Weapon_F;
	class RB250_atrt_repeater: 3AS_ATRT_Weapon_F
	{
		displayName = "AT-RT Repeater";
		magazines[] =
		{
			"RB205_barc_mag"
		};
	};
};
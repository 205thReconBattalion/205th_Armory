class cfgPatches
{
    class RB205_logistics_identification_keycards_door_compat_ls
	{
		requiredAddons[]=
		{
			"RB205_logistics_identification_keycards",
			"ls_props_structures"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {};
		units[] = {
			"RB205_keycard_door_red_ls_prop_hallway_door",
			"RB205_keycard_door_orange_ls_prop_hallway_door",
			"RB205_keycard_door_yellow_ls_prop_hallway_door",
			"RB205_keycard_door_green_ls_prop_hallway_door",
			"RB205_keycard_door_blue_ls_prop_hallway_door"
		};
	};
};

#include "\RB205_logistics\identification\keycards\door_compat\userActions.hpp"

class CfgVehicles
{
	#include "ls_prop_hallway_door.hpp"
};
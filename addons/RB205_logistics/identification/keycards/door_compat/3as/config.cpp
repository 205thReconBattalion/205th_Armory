class cfgPatches
{
    class RB205_logistics_identification_keycards_door_compat_3as
	{
		requiredAddons[]=
		{
			"RB205_logistics_identification_keycards",
			"3AS_Prop_Interiors"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {};
		units[] = {
			"RB205_keycard_door_red_land_3AS_CIS_Door",
			"RB205_keycard_door_orange_land_3AS_CIS_Door",
			"RB205_keycard_door_yellow_land_3AS_CIS_Door",
			"RB205_keycard_door_green_land_3AS_CIS_Door",
			"RB205_keycard_door_blue_land_3AS_CIS_Door",

			"RB205_keycard_door_red_land_3AS_CIS_Door_Med",
			"RB205_keycard_door_orange_land_3AS_CIS_Door_Med",
			"RB205_keycard_door_yellow_land_3AS_CIS_Door_Med",
			"RB205_keycard_door_green_land_3AS_CIS_Door_Med",
			"RB205_keycard_door_blue_land_3AS_CIS_Door_Med",

			"RB205_keycard_door_red_land_3AS_CIS_Door_small",
			"RB205_keycard_door_orange_land_3AS_CIS_Door_small",
			"RB205_keycard_door_yellow_land_3AS_CIS_Door_small",
			"RB205_keycard_door_green_land_3AS_CIS_Door_small",
			"RB205_keycard_door_blue_land_3AS_CIS_Door_small",

			"RB205_keycard_door_red_land_3AS_Venator_Door",
			"RB205_keycard_door_orange_land_3AS_Venator_Door",
			"RB205_keycard_door_yellow_land_3AS_Venator_Door",
			"RB205_keycard_door_green_land_3AS_Venator_Door",
			"RB205_keycard_door_blue_land_3AS_Venator_Door",

			"RB205_keycard_door_red_land_3as_Orto_Door_Small",
			"RB205_keycard_door_orange_land_3as_Orto_Door_Small",
			"RB205_keycard_door_yellow_land_3as_Orto_Door_Small",
			"RB205_keycard_door_green_land_3as_Orto_Door_Small",
			"RB205_keycard_door_blue_land_3as_Orto_Door_Small",

			"RB205_keycard_door_red_3AS_FOB_Door_Prop",
			"RB205_keycard_door_orange_3AS_FOB_Door_Prop",
			"RB205_keycard_door_yellow_3AS_FOB_Door_Prop",
			"RB205_keycard_door_green_3AS_FOB_Door_Prop",
			"RB205_keycard_door_blue_3AS_FOB_Door_Prop",

			"RB205_keycard_door_prison_land_3AS_Prison_Blast_Door",
			"RB205_keycard_door_prison_land_3AS_Prison_Corridor_Short"
		};
	};
};

#include "\RB205_logistics\identification\keycards\door_compat\userActions.hpp"

class CfgVehicles
{
	#include "land_3AS_CIS_Door.hpp"
	#include "land_3AS_CIS_Door_Med.hpp"
	#include "land_3AS_CIS_Door_small.hpp"

	#include "land_3AS_Venator_Door.hpp"
	#include "land_3as_Orto_Door_Small.hpp"
	#include "land_3as_Orto_Hallway_Door.hpp"
	#include "3AS_FOB_Door_Prop.hpp"

	#include "land_3AS_Prison_Blast_Door.hpp"
	#include "land_3AS_Prison_Corridor_Short.hpp"
};
class cfgPatches
{
    class RB205_vehicles_atte
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ATTE"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_atte",
			"RB205_atte_pathfinder"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3as_ATTE_Base;
	class RB205_atte: 3as_ATTE_Base
	{
		ACCESS_TRUE
		displayName = "AT-TE";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		#include "\RB205_vehicles\atte\atte_textures.hpp"
	};
	/*class RB205_atte_pathfinder: RB205_atte
	{
		ACCESS_TRUE
		displayName = "AT-TE [Pathfinder]";
		animationList[] = {"ShowATTENuts",1,"ShowATTEIntPassenger",1,"ShowATTEIntBackPassenger",0,"ShowATTEIntCommand",0,"ShowATTERebelMod",1};
	};*/
};
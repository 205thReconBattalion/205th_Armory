class cfgPatches
{
    class RB205_main
	{
		requiredAddons[]=
		{
			"ls_armor_bluefor"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion"
		weapons[] =
		{
			"RB205_H_recruit"
		};
		units[] =
		{
			
		};
	};
};

#include "macros.hpp"
#include "HitpointsProtectionInfo.hpp"

class cfgWeapons
{
	#include "cfgWeapons.hpp"
};

class cfgVehicles
{
	#include "cfgVehicles.hpp"
};
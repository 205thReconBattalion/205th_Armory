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
			"RB205_H_recruit",
			"RB205_H_trooper",
			"RB205_H_corporal",
			"RB205_H_sergeant",
			"RB205_H_lieutenant",
			"RB205_H_recruit_arf",
			"RB205_H_trooper_arf",
			"RB205_H_corporal_arf",
			"RB205_H_sergeant_arf",
			"RB205_H_lieutenant_arf"
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


//////was läuft////////

//Hallo Welt
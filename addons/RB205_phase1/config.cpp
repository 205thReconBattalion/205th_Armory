class cfgPatches
{
    class RB205_phase1
	{
		requiredAddons[]=
		{
            "RB205_main",
			"ls_armor_bluefor"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =
		{
            "SW205_H_p1_trooper",
            "SW205_H_p1_sergeant",
            "SW205_H_p1_lieutenant",
            "SW205_H_p1_captain",
            "SW205_H_p1_commander",

            "SW205_H_p1_arf",
            "SW205_H_p1_plt",

            "SW205_U_p1_trooper",
            "SW205_U_p1_sergeant",
            "SW205_U_p1_lieutenant",
            "SW205_U_p1_captain",
            "SW205_U_p1_commander"
		};
		units[] =
		{
			"SW205_clone_p1_trooper",
			"SW205_clone_p1_sergeant",
			"SW205_clone_p1_lieutenant",
			"SW205_clone_p1_captain",
			"SW205_clone_p1_commander",
            
			"SW205_clone_p1_arf",
			"SW205_clone_p1_plt",

			"SW205_B_p1_heavy",
			"SW205_B_p1_medic",
			"SW205_B_p1_rocket",
            "SW205_B_p1_eod",
			"SW205_B_p1_radio",

			"SW205_B_p1_jetpack",
			"SW205_B_p1_jetpack_heavy",
			"SW205_B_p1_jetpack_medic",
			"SW205_B_p1_jetpack_rocket",
            "SW205_B_p1_jetpack_eod",
			"SW205_B_p1_jetpack_radio",

            "SW205_B_p1_arf"
		};
	};
};

#include "\RB205_main\macros.hpp"

#include "XtdGearModels.hpp"
class cfgWeapons
{
	#include "cfgWeapons.hpp"
};
class cfgVehicles
{
	#include "cfgVehicles.hpp"
};

class CfgEditorSubcategories
{
	class SW205_P1
	{
		displayName = "Phase I (Standard)";
		ACCESS_TRUE
	};
};
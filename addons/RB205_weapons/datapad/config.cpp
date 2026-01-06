class cfgPatches
{
	class RB205_weapons_datapad
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"3AS_Weapons_Roleplay",
			"ace_minedetector"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] =
		{
			"RB205_datapad"
		};
	};
};

#include "\RB205_weapons\macros.hpp"

class CfgWeapons
{
	class 3AS_RepublicDatapadPistol;
	class RB205_datapad: 3AS_RepublicDatapadPistol
	{
		baseWeapon = "RB205_datapad";
		author = "205th Recon Battalion";
		displayName = "[205] Datapad";
		displayNameShort = "Datapad";
		descriptionShort = "Gerät zur Verarbeitung von Daten";
		cursor = "RB205_CH_invisible";
		mass = MASS_WP_PISTOL;
	};
};

class ACE_detector {
    class detectors {
        class RB205_datapad
		{
            detectorPosition[] = {0,-0.1,0};
            radius = 8;
            sounds[] = {"ace_detector_1","ace_detector_2","ace_detector_3","ace_detector_4"};
            soundDistances[] = {0,2,4,6};
            soundIntervalDistances[] = {0,2,4,6};
            soundIntervals[] = {0.5,0.7,0.85,1};
        };
    };
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class UserActions
		{
			class RB205_scan_datapad
			{
				displayName = "$STR_JLTS_C_names_UAScanPolice";
				displayNameDefault = "";
				priority = 0;
				radius = 3;
				position = "camera";
				showWindow = 1;
				hideOnUse = 1;
				onlyForPlayer = 1;
				shortcut = "";
				condition = "this != JLTS_playerControlled && currentWeapon JLTS_playerControlled == 'RB205_datapad'";
				statement = "[this] call JLTS_fnc_contraband_openPoliceScanner";
			};
		};
	};
};
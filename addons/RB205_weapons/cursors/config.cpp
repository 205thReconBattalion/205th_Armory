class cfgPatches
{
	class RB205_weapons_cursors
	{
		requiredAddons[] =
		{
			
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeaponCursors
{
	class EmptyCursor;
	class RB205_CH_invisible: EmptyCursor{};

	class coil;
	class RB205_CH_default: coil{};

	//class laserdesignator;
	class cannon;
	class RB205_CH_shotgun: cannon{};
	
	class arifle;
	class RB205_CH_sniper: arifle{};

	class throw;
	class RB205_CH_flame: throw{};

	class RB205_CH_sidearm: throw
	{
		texture = "RB205_weapons\cursors\data\sidearm.paa";
	};

	class RB205_CH_sidearm_dual: throw
	{
		texture = "RB205_weapons\cursors\data\sidearm_dual.paa";
	};
};
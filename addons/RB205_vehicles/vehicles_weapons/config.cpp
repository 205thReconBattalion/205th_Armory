class cfgPatches
{
    class RB205_vehicles_weapons
	{
		requiredAddons[]=
		{
			"RB205_vehicles"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =
		{
			"RB205_Missile_AA_SR",
			"RB205_Missile_AA_MR",
			"RB205_Missile_AG"
		};
		units[] = {};
	};
};

class CfgWeapons
{
	

	class 3as_ARC_Missile_AA;
	class RB205_Missile_AA_SR: 3as_ARC_Missile_AA
	{
		displayName = "Air-to-Air (SR)";
		magazines[] =
		{
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3AS_PylonMissile_LAAT_8Rnd_Missile_AA"
		};
		lockingTargetSound[]=
		{
			"RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg",
			4,
			1
		};
		lockedTargetSound[]=
		{
			"RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg",
			4,
			1
		};
	};
	class weapon_AMRAAMLauncher;
	class RB205_Missile_AA_MR: weapon_AMRAAMLauncher
	{
		displayName = "Air-to-Air (MR)";
		magazines[] =
		{
			"PylonMissile_Missile_AMRAAM_D_x1"
		};
		lockingTargetSound[]=
		{
			"RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg",
			4,
			1
		};
		lockedTargetSound[]=
		{
			"RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg",
			4,
			1
		};
	};
	class Missile_AGM_02_Plane_CAS_01_F;
	class RB205_Missile_AG: Missile_AGM_02_Plane_CAS_01_F
	{
		displayName = "Air-to-Ground";
		magazines[] =
		{
			"6Rnd_Missile_AGM_02_F",
			"3AS_LAAT_8Rnd_Missile_AGM"
		};
		lockingTargetSound[]=
		{
			"RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg",
			4,
			1
		};
		lockedTargetSound[]=
		{
			"RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg",
			4,
			1
		};
	};
};
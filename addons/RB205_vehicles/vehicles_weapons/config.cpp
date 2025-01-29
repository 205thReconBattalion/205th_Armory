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
			"RB205_Missile_AG",

			"RB205_AGM_Torrent_weapon",
			"RB205_AA_Torrent_weapon",

			"RB205_wth_mg"
		};
		magazines[] =
		{
			"RB205_AGM_Torrent_missile_6rnd",
			"RB205_AGM_Torrent_missile_2rnd",
			"RB205_AA_Torrent_missile_4rnd",

			"RB205_wth_mg_mag_1000rnd"
		};
		ammo[] =
		{
			"RB205_AGM_Torrent_ammo",
			"RB205_AA_Torrent_ammo",

			"RB205_wth_mg_ammo"
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

	class weapon_AGM_65Launcher;
	class RB205_AGM_Torrent_weapon: weapon_AGM_65Launcher
	{
		displayName = "[205] Torrent Air-to-Ground Torpedo";
		magazines[] =
		{
			"RB205_AGM_Torrent_missile_6rnd",
			"RB205_AGM_Torrent_missile_2rnd"
		};
		model = "a3\weapons_f\empty.p3d";
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.41254,1,1100};
			soundBegin[] = {"begin1",1};
			soundSetShot[] = {"3AS_SmallMissile_Soundset","3AS_SmallMissile_Soundset"};
		};
		lockingTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
	}
	class weapon_BIM9xLauncher;
	class RB205_AA_Torrent_weapon: weapon_BIM9xLauncher
	{
		displayName = "[205] Torrent Air-to-Air Torpedo";
		magazines[] =
		{
			"RB205_AA_Torrent_missile_4rnd"
		};
		model = "a3\weapons_f\empty.p3d";
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.41254,1,1100};
			soundBegin[] = {"begin1",1};
			soundSetShot[] = {"3AS_SmallMissile_Soundset","3AS_SmallMissile_Soundset"};
		};
		lockingTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
	}

  	class HMG_127;
  	class OPTRE_M41_LAAG: HMG_127
	{
    	class FullAuto;
  	}
  	class RB205_wth_mg: OPTRE_M41_LAAG
	{
		magazines[] =
		{
			"RB205_wth_mg_mag_1000rnd",
		};
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundsetshot[] = { "3AS_Z6_SoundSet" };
			};
		};
  	};
};

class CfgMagazines
{
	class magazine_Missile_AGM_02_x1;
	class RB205_AGM_Torrent_missile_6rnd: magazine_Missile_AGM_02_x1
	{
		displayName = "[205] Torrent Air-to-Ground Torpedo";
        displayNameShort = "AG";
		model="3AS\3AS_arc170\Model\torrent_rail_x1";

		ammo = "RB205_AGM_Torrent_ammo";
		count = 6;
	};
	class RB205_AGM_Torrent_missile_2rnd: RB205_AGM_Torrent_missile_6rnd
	{
		count = 2;
	};
	class magazine_Missile_BIM9X_x1;
	class RB205_AA_Torrent_missile_4rnd: magazine_Missile_BIM9X_x1
	{
		displayName = "[205] Torrent Air-to-Air Torpedo";
        displayNameShort = "AA";

		ammo = "RB205_AA_Torrent_ammo";
		count = 4;
	};

	class OPTRE_1000Rnd_127x99_M41;
	class RB205_wth_mg_mag_1000rnd: OPTRE_1000Rnd_127x99_M41
	{
		displayName	= "[205] 1000x BlasTech Ammo";
		displayNameShort = "WTH/MG Ammo";
		ammo = "RB205_wth_mg_ammo";
	};
};

class CfgAmmo
{
	class Missile_AGM_02_F;
	class RB205_AGM_Torrent_ammo: Missile_AGM_02_F
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Blue_fly";
	};
    class ammo_Missile_BIM9X;
    class RB205_AA_Torrent_ammo: ammo_Missile_BIM9X
    {
        model = "3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Proton_Torpedo.p3d";
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Blue_fly";
		soundFly[] = {"\RB205_vehicles\vehicles_weapons\data\sounds\missile_aa_fly.ogg",0.56234133,1.5,700};
    };

  	class OPTRE_B_127x99_Ball;
  	class RB205_wth_mg_ammo: OPTRE_B_127x99_Ball
	{
    	model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
  	};
};
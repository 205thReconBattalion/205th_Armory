class CfgAmmo
{
    class ammo_Missile_BIM9X;
    class RB205_BIM9X_ammo: ammo_Missile_BIM9X
    {
        model = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Blue_fly";
		soundFly[] = {"\RB205_vehicles\vehicles_weapons\data\sounds\missile_aa_fly.ogg",0.56234133,1.5,700};
    };

    class ammo_Missile_AMRAAM_D;
    class RB205_AMRAAM_ammo: ammo_Missile_AMRAAM_D
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Blue_fly";
		soundFly[] = {"\RB205_vehicles\vehicles_weapons\data\sounds\missile_aa_fly.ogg",0.56234133,1.5,700};
	};

	class Missile_AGM_02_F;
	class RB205_AGM65_ammo: Missile_AGM_02_F
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Purple_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Purple_fly";
	};

	class ace_maverick_L: Missile_AGM_02_F
	{
		class ace_missileguidance;
	};
	class RB205_AGM65L_ammo: ace_maverick_L
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Concussion_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Purple_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Purple_fly";

        autoSeekTarget = 0;
        irLock = 0;
        laserLock = 0;
        manualControl = 0;
        missileLockMaxDistance = 16000;
        weaponLockSystem = 4;
		class ace_missileguidance: ace_missileguidance
		{
			enabled = 1;
            defaultSeekerType = "SALH";
            seekerTypes[] = {"SALH"};

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = {"LOAL"};

            seekerMaxRange = 16000;
		};
	};

	class ammo_Missile_HARM;
	class RB205_AGMHARM_ammo: ammo_Missile_HARM
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Purple_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Purple_fly";
	};


	class Bomb_04_F;
	class RB205_GBU12_ammo: Bomb_04_F
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_Proton_Bomb_C.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Proton_Bomb_C.p3d";
	};

	class ammo_Bomb_SDB;
	class RB205_GBUSDB_ammo: ammo_Bomb_SDB
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_AV_Round.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_AV_Round.p3d";
	};

	class BombCluster_01_Ammo_F;
	class RB205_CBU85_ammo: BombCluster_01_Ammo_F
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_Proton_Shell.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Proton_Shell.p3d";
	};

	class Bo_Mk82;
	class RB205_Mk82_ammo: Bo_Mk82
	{
		//model = "3as\3AS_VehicleWeapons\model\3AS_Proton_Bomb.p3d";
		//proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Proton_Bomb.p3d";

		model = "\RB205_vehicles\vehicles_weapons\data\plasma_bomb_fly.p3d";
		proxyShape = "\RB205_vehicles\vehicles_weapons\data\plasma_bomb.p3d";
		effectflare = "FlareShell";
		effectfly = "RB205_bomb_blue";
	};
};
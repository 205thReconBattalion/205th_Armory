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

	/*
		model = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Yellow_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Yellow_fly";
	*/

	class ammo_Missile_HARM;
	class RB205_AGMHARM_ammo: ammo_Missile_HARM
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_High_Energy_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Purple_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Purple_fly";
	};
};
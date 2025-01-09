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
    };

    class ammo_Missile_AMRAAM_D;
    class RB205_AMRAAM_ammo: ammo_Missile_AMRAAM_D
	{
		model = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		proxyShape = "3as\3AS_VehicleWeapons\model\3AS_Discord_Missile.p3d";
		effectsMissile = "3AS_Rocket_effect_Blue_fly";
		effectsMissileInit = "PylonBackEffects";
		effectFly = "3AS_Rocket_effect_Blue_fly";
	};
};
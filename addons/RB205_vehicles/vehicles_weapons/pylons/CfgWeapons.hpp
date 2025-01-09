class CfgWeapons
{
    class weapon_BIM9xLauncher;
    class RB205_BIM9X_weapon: weapon_BIM9xLauncher
    {
		displayName="[205] BIM-9X";
		magazines[]=
		{
			"RB205_BIM9X_missile",
			"RB205_BIM9X_missilePylon_3rnd"
		};
        /*magazines[] = {
            "magazine_Missile_BIM9X_x1",
            "PylonMissile_Missile_BIM9X_x1",
            "PylonRack_Missile_BIM9X_x1",
            "PylonRack_Missile_BIM9X_x2"
        };*/
		lockingTargetSound[]= { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[]= { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
    };

    class weapon_AMRAAMLauncher;
    class RB205_AMRAAM_weapon: weapon_AMRAAMLauncher
	{
		displayName="[205] AMRAAM";
		magazines[]=
		{
			"RB205_AMRAAM_missile",
			"RB205_AMRAAM_missilePylon",
			"RB205_AMRAAM_missilePylon_2rnd"
		};
        /*magazines[] = {
            "magazine_Missile_AMRAAM_x1",
            "PylonMissile_Missile_AMRAAM_C_x1",
            "PylonRack_Missile_AMRAAM_C_x1",
            "PylonRack_Missile_AMRAAM_C_x2",
            "PylonMissile_Missile_AMRAAM_D_x1",
            "PylonMissile_Missile_AMRAAM_D_INT_x1",
            "PylonRack_Missile_AMRAAM_D_x1",
            "PylonRack_Missile_AMRAAM_D_x2"
        };*/
		lockingTargetSound[]= { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[]= { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
	};
};
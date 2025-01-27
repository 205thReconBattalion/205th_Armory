class CfgWeapons
{
    class weapon_BIM9xLauncher;
    class RB205_BIM9X_weapon: weapon_BIM9xLauncher
    {
		displayName = "[205] BIM-9X";
		magazines[] =
		{
			"RB205_BIM9X_missile",
			"RB205_BIM9X_missilePylon_3rnd"
		};
		lockingTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"RB205_missile_aa_shot_SoundSet"};
		};
    };

    class weapon_AMRAAMLauncher;
    class RB205_AMRAAM_weapon: weapon_AMRAAMLauncher
	{
		displayName = "[205] AMRAAM";
		magazines[] =
		{
			"RB205_AMRAAM_missile",
			"RB205_AMRAAM_missilePylon",
			"RB205_AMRAAM_missilePylon_2rnd"
		};
		lockingTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"RB205_missile_aa_shot_SoundSet"};
		};
	};

    class weapon_AGM_65Launcher;
    class RB205_AGM65_weapon: weapon_AGM_65Launcher
	{
		displayName = "[205] AGM-65 Maverick G";
		magazines[] =
        {
            "RB205_AGM65_missile",
            "RB205_AGM65_missilePylon",
            "RB205_AGM65_missilePylon_2rnd"
        };
		lockingTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"RB205_missile_shot_SoundSet"};
		};
	};

    class ace_maverick_L_Launcher_Plane;
    class RB205_AGM65L_weapon: ace_maverick_L_Launcher_Plane
	{
		displayName = "[205] AGM-65 Maverick L";
		magazines[] =
        {
            "RB205_AGM65L_missile",
            "RB205_AGM65L_missilePylon",
            "RB205_AGM65L_missilePylon_2rnd"
        };
        weaponLockDelay = 0.1;
        weaponLockSystem = 0;
        ace_laser_canSelect = 1;
        ace_laser_showHud = 1;
        ace_maverick_enabled = 1;

		//lockingTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		//lockedTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"RB205_missile_shot_SoundSet"};
		};
	};

    class weapon_HARMLauncher;
    class RB205_AGMHARM_weapon: weapon_HARMLauncher
    {
        displayName = "[205] AGM-88C HARM";
        magazines[] =
        {
            "RB205_AGMHARM_missile",
            "RB205_AGMHARM_missilePylon"
        };
		lockingTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_target.ogg", 4, 1 };
		lockedTargetSound[] = { "RB205_vehicles\vehicles_weapons\data\sounds\missile_lock.ogg", 4, 1 };
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"RB205_missile_shot_SoundSet"};
		};
    };
};
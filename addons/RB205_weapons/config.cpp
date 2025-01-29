class cfgPatches
{
	class RB205_weapons
	{
		requiredAddons[] =
		{
			"3AS_Weapons",
			"JLTS_weapons_Z6",
			"JLTS_weapons_DP23",
			"CBA_Extended_EventHandlers",
			"CBA_MAIN"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		ammo[] =
		{
			"RB205_ammo_standard",
			"RB205_ammo_standard_red",
			"RB205_ammo_compact",
			"RB205_ammo_compact_red",
			"RB205_ammo_overcharged",
			"RB205_ammo_overcharged_red",
			"RB205_ammo_heavy",
			"RB205_ammo_heavy_red",
			"RB205_ammo_rapidFire",
			"RB205_ammo_experimental",
			"RB205_ammo_experimental_red",
			"RB205_ammo_scatter"
		};
		magazines[] =
		{
			"RB205_Standard_Energy_Pack",
			"RB205_Standard_Energy_Pack_red",
			"RB205_Compact_Energy_Pack",
			"RB205_Compact_Energy_Pack_red",
			"RB205_Overcharged_Energy_Pack",
			"RB205_Overcharged_Energy_Pack_red",
			"RB205_Heavy_Energy_Pack",
			"RB205_Heavy_Energy_Pack_red",
			"RB205_RapidFire_Energy_Pack",
			"RB205_Experimental_Energy_Pack",
			"RB205_Experimental_Energy_Pack_red",
			"RB205_Scatter_Energy_Pack"
		};
		weapons[] = {};
		units[] = {};
	};
};

class CfgAmmo
{
	class JLTS_bullet_rifle_blue;
	class JLTS_bullet_pistol_blue;
	class JLTS_bullet_sniper_blue;
	class JLTS_bullet_carbine_blue;

	/* STANDARD ENERGY PACK */
	class 3AS_EC50_BluePlasma;
	class RB205_ammo_standard: 3AS_EC50_BluePlasma
	{
		hit = 15;
		caliber = 1.95;
		waterFriction = -0.0099999998;
	};
	class RB205_ammo_standard_red: RB205_ammo_standard
	{
		model = "\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly = "3AS_PlasmaBolt_Red_Fly";
	};

	/* COMPACT ENERGY PACK */
	class 3AS_EC20_BluePlasma;
	class RB205_ammo_compact: 3AS_EC20_BluePlasma
	{
		hit = 15;
		caliber = 1.95;
	};
	class RB205_ammo_compact_red: RB205_ammo_compact
	{
		model = "\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly = "3AS_PlasmaBolt_Red_Fly";
	};

	/* OVERCHARGED ENERGY PACK */
	class 3AS_EC80_BluePlasma;
	class RB205_ammo_overcharged: 3AS_EC80_BluePlasma
	{
		hit = 25;
		caliber = 1.95;//3.21;
	};
	class RB205_ammo_overcharged_red: RB205_ammo_overcharged
	{
		model = "\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly = "3AS_PlasmaBolt_Red_Fly";
	};

	/* HEAVY ENERGY PACK*/
	class 3AS_EC40_BluePlasma;
	class RB205_ammo_heavy: 3AS_EC40_BluePlasma
	{
		hit = 10;
		caliber = 1.65;
	};
	class RB205_ammo_heavy_red: RB205_ammo_heavy
	{
		model = "\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly = "3AS_PlasmaBolt_Red_Fly";
	};

	/* ROTARY ENERGY PACK */
	class RB205_ammo_rapidFire: 3AS_EC40_BluePlasma//JLTS_bullet_carbine_blue
	{
		hit = 15;
		caliber = 1.65;
	};

	/* EXPERIMENTAL ENERGY PACK */
	class RB205_ammo_experimental: 3AS_EC50_BluePlasma
	{
		hit = 20;
		caliber = 1.95;
	};
	class RB205_ammo_experimental_red: RB205_ammo_experimental
	{
		model = "\3AS\3AS_Weapons\Data\tracer_red.p3d";
		effectFly = "3AS_PlasmaBolt_Red_Fly";
	};

	class JLTS_bullet_scatter_blue;
	class RB205_ammo_scatter: JLTS_bullet_scatter_blue
	{
		hit = 5;
		caliber = 1.2;
		timetolive = 1;
	};
};

class CfgMagazines
{
	// DC-15A, DC-15S, DC-15C
	class 3AS_45Rnd_EC50_Mag;
	class RB205_Standard_Energy_Pack: 3AS_45Rnd_EC50_Mag
	{
		displayName = "$STR_205_Standard_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Standard_Energy_Pack_DisplayNameShort";
		//picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		ammo = "RB205_ammo_standard";
		count = 60;
		mass = 8;
		tracersEvery = 1;
		lastRoundsTracer = 60;
		descriptionShort = "$STR_205_Standard_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};
	// E-11
	class RB205_Standard_Energy_Pack_red: RB205_Standard_Energy_Pack
	{
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		modelSpecial = "\3as\3AS_Weapons\Imperial\3as_E11_mag.p3d";
		modelSpecialIsProxy = 1;
		ammo = "RB205_ammo_standard_red";
		descriptionShort = "$STR_205_Standard_Energy_Pack_red_DescriptionShort";
	};

	// DC-17
	class 3AS_16Rnd_EC20_Mag;
	class RB205_Compact_Energy_Pack: 3AS_16Rnd_EC20_Mag
	{
		displayName = "$STR_205_Compact_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Compact_Energy_Pack_DisplayNameShort";
		//picture = "\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_mag_ui_ca.paa";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_pistol_b.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		ammo = "RB205_ammo_compact";
		count = 30;
		mass = 2;
		tracersEvery=1;
		lastRoundsTracer = 30;
		descriptionShort = "$STR_205_Compact_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};
	// SE-14r, RK-3, EC-17
	class RB205_Compact_Energy_Pack_red: RB205_Compact_Energy_Pack
	{
		picture = "\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		modelSpecial = "\3as\3AS_Weapons\Imperial\3as_SE14R_mag.p3d";
		modelSpecialIsProxy = 1;
		ammo = "RB205_ammo_compact_red";
		descriptionShort = "$STR_205_Compact_Energy_Pack_red_DescriptionShort";
	};

	// DC-15X, Valken-38X
	class 3AS_10Rnd_EC80_Mag;
	class RB205_Overcharged_Energy_Pack: 3AS_10Rnd_EC80_Mag
	{
		displayName = "$STR_205_Overcharged_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Overcharged_Energy_Pack_DisplayNameShort";
		//picture = "\MRC\JLTS\weapons\DC15x\data\ui\DC15X_mag_ui_ca.paa";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		ammo = "RB205_ammo_overcharged";
		count = 15;
		mass = 4;
		tracersEvery = 1;
		lastRoundsTracer = 15;
		descriptionShort = "$STR_205_Overcharged_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};
	// DLT-19X
	class RB205_Overcharged_Energy_Pack_red: RB205_Overcharged_Energy_Pack
	{
		picture = "\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		modelSpecial = "\3as\3AS_Weapons\Imperial\3as_DLT19X_mag.p3d";
		modelSpecialIsProxy = 1;
		ammo = "RB205_ammo_overcharged_red";
		descriptionShort = "$STR_205_Overcharged_Energy_Pack_red_DescriptionShort";
	};

	//DC-15L
	class 3AS_200Rnd_EC40_Mag;
	class RB205_Heavy_Energy_Pack: 3AS_200Rnd_EC40_Mag
	{
		displayName = "$STR_205_Heavy_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Heavy_Energy_Pack_DisplayNameShort";
		//picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		ammo = "RB205_ammo_heavy";
		count = 200;
		mass = 16;//23		
		tracersEvery = 1;
		lastRoundsTracer =  200;
		descriptionShort = "$STR_205_Heavy_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};
	// DLT-19
	class RB205_Heavy_Energy_Pack_red: RB205_Heavy_Energy_Pack
	{
		picture = "\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
		modelSpecial = "\3as\3AS_Weapons\Imperial\3as_DLT19_mag.p3d";
		modelSpecialIsProxy = 1;
		ammo = "RB205_ammo_heavy_red";
		descriptionShort = "$STR_205_Heavy_Energy_Pack_red_DescriptionShort";
	};

	//Z-6
	class JLTS_Z6_mag;
	class RB205_RapidFire_Energy_Pack: JLTS_Z6_mag
	{
		displayName = "$STR_205_RapidFire_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_RapidFire_Energy_Pack_DisplayNameShort";
		//picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		ammo = "RB205_ammo_rapidFire";
		count = 350;
		mass = 23;
		tracersEvery = 1;
		lastRoundsTracer = 350;
		descriptionShort = "$STR_205_RapidFire_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};

	//Westar-M5
	class 3AS_60Rnd_EC50_Mag;
	class RB205_Experimental_Energy_Pack: 3AS_60Rnd_EC50_Mag
	{
		displayName = "$STR_205_Experimental_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Experimental_Energy_Pack_DisplayNameShort";
		//picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_mag_ui_ca.paa";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		ammo = "RB205_ammo_experimental";
		count = 60;
		mass = 10;
		tracersEvery = 1;
		lastRoundsTracer = 60;
		descriptionShort = "$STR_205_Experimental_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
	};
	class RB205_Experimental_Energy_Pack_red: RB205_Experimental_Energy_Pack
	{
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		ammo = "RB205_ammo_experimental_red";
		descriptionShort = "$STR_205_Experimental_Energy_Pack_red_DescriptionShort";
	};

	//DP-23
	class JLTS_DP23_mag;
	class RB205_Scatter_Energy_Pack: JLTS_DP23_mag//3AS_45Rnd_EC50_Mag
	{
		displayName = "$STR_205_Scatter_Energy_Pack_DisplayName";
		displayNameShort = "$STR_205_Scatter_Energy_Pack_DisplayNameShort";
		//picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		ammo = "RB205_ammo_scatter";
		count = 20;
		mass = 8;
		tracersEvery = 1;
		lastRoundsTracer = 20;
		descriptionShort = "$STR_205_Scatter_Energy_Pack_DescriptionShort";
        author = "205th Recon Battalion";
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
	
	class RB205_CH_gl: throw{};

	class RB205_CH_t7ion: throw
	{
		texture = "RB205_weapons\data\t7ion_ch.paa";
	};

	class RB205_CH_sidearm: throw
	{
		texture = "RB205_weapons\data\sidearm.paa";
	};

	class RB205_CH_sidearm_dual: throw
	{
		texture = "RB205_weapons\data\sidearm_dual.paa";
	};
};



class Extended_PostInit_EventHandlers
{
	class RB205_weapons_PostInit
	{
		init="call compile preprocessFileLineNumbers '\RB205_weapons\XEH_postInit.sqf'";
	};
};
class CfgMovesBasic
{
	class Actions
	{
		class NoActions;
		class WBK_RotaryCanon_Moveset: NoActions
		{
			useFastMove = 1;
			turnSpeed = 2;
			throwGrenade[] = {"GestureThrowGrenade","Gesture"};
			WBK_SolarAux_RifleReload[] = { "WBK_SolarAux_RifleReload_Context", "Gesture" };
			WBK_SolarAux_RotaryReload[] = { "WBK_SolarAux_RotaryReload_Context", "Gesture" };
			WBK_SolarAux_HelmetOpen[] = { "WBK_SolarAux_HelmetOpen", "Gesture" };
			WBK_SolarAux_HelmetClose[] = { "WBK_SolarAux_HelmetClose", "Gesture" };
			LimpF="Rotary_Proper_Walk";
			LimpLF="Rotary_Proper_WalkFL";
			LimpRF="Rotary_Proper_WalkFR";
			LimpL="Rotary_Proper_WalkL";
			LimpR="Rotary_Proper_WalkR";
			LimpB="Rotary_Proper_WalkB";
			LimpLB="Rotary_Proper_WalkBL";
			LimpRB="Rotary_Proper_WalkBR";
		    stop="Rotary_Proper_Idle";
			default="Rotary_Proper_Idle";
			stopRelaxed="Rotary_Proper_Idle";
			TurnL="Rotary_Proper_TurnL";
			TurnR="Rotary_Proper_TurnR";
			TurnLRelaxed="Rotary_Proper_TurnL";
			TurnRRelaxed="Rotary_Proper_TurnR";
			WalkF="Rotary_Proper_Walk";
			PlayerWalkF="Rotary_Proper_Walk";
			WalkLF="Rotary_Proper_WalkFL";
			PlayerWalkLF="Rotary_Proper_WalkFL";
			WalkRF="Rotary_Proper_WalkFR";
			PlayerWalkRF="Rotary_Proper_WalkFR";
			WalkL="Rotary_Proper_WalkL";
			PlayerWalkL="Rotary_Proper_WalkL";
			WalkR="Rotary_Proper_WalkR";
			PlayerWalkR="Rotary_Proper_WalkR";
			WalkB="Rotary_Proper_WalkB";
			PlayerWalkB="Rotary_Proper_WalkB";
			WalkLB="Rotary_Proper_WalkBL";
			PlayerWalkLB="Rotary_Proper_WalkBL";
			WalkRB="Rotary_Proper_WalkBR";
			PlayerWalkRB="Rotary_Proper_WalkBR";
			SlowF="Rotary_Proper_Walk";
			PlayerSlowF="Rotary_Proper_Walk";
			SlowB="Rotary_Proper_WalkB";
			PlayerSlowB="Rotary_Proper_WalkB";
			PlayerFastF="AmovPercMevaSrasWrflDf";
			combat="Rotary_Proper_Walk";
			up="Rotary_Proper_Walk";
			down="AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon";
			Crouch = "AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon";
			gear="AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon";
			upDegree="ManPosNoWeapon";
			PlayerSlowLF="Rotary_Proper_WalkFL";
			PlayerSlowRF="Rotary_Proper_WalkFR";
			PlayerSlowL="Rotary_Proper_WalkL";
			PlayerSlowR="Rotary_Proper_WalkR";
			PlayerSlowLB="Rotary_Proper_WalkBL";
			PlayerSlowRB="Rotary_Proper_WalkBR";
			FastF="AmovPercMevaSrasWrflDf";
			FastLF="AmovPercMevaSrasWrflDfl";
			FastRF="AmovPercMevaSrasWrflDfr";
			FastL="AmovPercMevaSrasWrflDfl";
			FastR="AmovPercMevaSrasWrflDfr";
			FastLB="AmovPercMevaSrasWrflDfl";
			FastRB="AmovPercMevaSrasWrflDfr";
			TactF="Rotary_Proper_Walk";
			TactLF="Rotary_Proper_Walk";
			TactRF="Rotary_Proper_Walk";
			TactL="Rotary_Proper_WalkL";
			TactR="Rotary_Proper_WalkR";
			TactLB="Rotary_Proper_WalkBL";
			TactRB="Rotary_Proper_WalkBR";
			TactB="Rotary_Proper_WalkB";
			PlayerTactF="Rotary_Proper_Walk";
			PlayerTactLF="Rotary_Proper_WalkFL";
			PlayerTactRF="Rotary_Proper_WalkFR";
			PlayerTactL="Rotary_Proper_WalkL";
			PlayerTactR="Rotary_Proper_WalkR";
			PlayerTactLB="Rotary_Proper_WalkBL";
			PlayerTactRB="Rotary_Proper_WalkBR";
			PlayerTactB="Rotary_Proper_WalkB";
			Unconscious = "Unconscious";
			weaponOff = "AmovPercMstpSrasWpstDnon";
		};
		class WBK_RotaryCanon_Moveset_Walk: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_Walk";
			Up="Rotary_Proper_Walk";
			Crouch="Rotary_Proper_Walk";
			AdjustB="";
			Stand="Rotary_Proper_Walk";
		};
		class WBK_RotaryCanon_Moveset_TurnL: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_TurnL";
			Up="Rotary_Proper_TurnL";
			Crouch="Rotary_Proper_TurnL";
			AdjustB="";
			Stand="Rotary_Proper_TurnL";
		};
		class WBK_RotaryCanon_Moveset_TurnR: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_TurnR";
			Up="Rotary_Proper_TurnR";
			Crouch="Rotary_Proper_TurnR";
			AdjustB="";
			Stand="Rotary_Proper_TurnR";
		};
		class WBK_RotaryCanon_Moveset_WalkR: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkR";
			Up="Rotary_Proper_WalkR";
			Crouch="Rotary_Proper_WalkR";
			AdjustB="";
			Stand="Rotary_Proper_WalkR";
		};
		class WBK_RotaryCanon_Moveset_WalkL: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkL";
			Up="Rotary_Proper_WalkL";
			Crouch="Rotary_Proper_WalkL";
			AdjustB="";
			Stand="Rotary_Proper_WalkL";
		};
		class WBK_RotaryCanon_Moveset_WalkFL: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkFL";
			Up="Rotary_Proper_WalkFL";
			Crouch="Rotary_Proper_WalkFL";
			AdjustB="";
			Stand="Rotary_Proper_WalkFL";
		};
		class WBK_RotaryCanon_Moveset_WalkFR: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkFR";
			Up="Rotary_Proper_WalkFR";
			Crouch="Rotary_Proper_WalkFR";
			AdjustB="";
			Stand="Rotary_Proper_WalkFR";
		};
		class WBK_RotaryCanon_Moveset_WalkB: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkB";
			Up="Rotary_Proper_WalkB";
			Crouch="Rotary_Proper_WalkB";
			AdjustB="";
			Stand="Rotary_Proper_WalkB";
		};
		class WBK_RotaryCanon_Moveset_WalkBL: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkBL";
			Up="Rotary_Proper_WalkBL";
			Crouch="Rotary_Proper_WalkBL";
			AdjustB="";
			Stand="Rotary_Proper_WalkBL";
		};
		class WBK_RotaryCanon_Moveset_WalkBR: WBK_RotaryCanon_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Rotary_Proper_WalkBR";
			Up="Rotary_Proper_WalkBR";
			Crouch="Rotary_Proper_WalkBR";
			AdjustB="";
			Stand="Rotary_Proper_WalkBR";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSrasWrflDnon;
		class Rotary_Proper_Idle: AmovPercMstpSrasWrflDnon
		{
			interpolationSpeed = 1;
			ignoreMinPlayTime[] = {"Unconscious"};
			actions = "WBK_RotaryCanon_Moveset";
			file="RB205_weapons\data\anims\Rotary_Proper_Idle.rtm";
			speed=0.9;
			mask="BodyFull";
			headBobMode=0;
			headBobStrength = 0;
			forceAim=0;
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			connectFrom[]={};
			interpolateFrom[]={};
			InterpolateTo[] = {
				"Rotary_Proper_Idle",0.01,
				"Rotary_Proper_TurnL",0.02,
				"Rotary_Proper_TurnR",0.02,
				"Rotary_Proper_Walk",0.01,
				"Rotary_Proper_WalkR",0.01,
				"Rotary_Proper_WalkL",0.01,
				"Rotary_Proper_WalkFL",0.01,
				"Rotary_Proper_WalkFR",0.01,
				"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.01,
				"AmovPercMstpSrasWrflDnon_AinvPercMstpSrasWrflDnon",0.01,
				"Rotary_Proper_WalkB",0.01,
				"AmovPercMevaSrasWrflDf",0.01,
				"AmovPercMevaSrasWrflDfl",0.01,
				"AmovPercMevaSrasWrflDfr",0.01,
				"Rotary_Proper_WalkBL",0.01,
				"Rotary_Proper_WalkBR",0.01,
				"Unconscious",0.9
			};
		};
		class Rotary_Proper_Walk: Rotary_Proper_Idle
		{
			soundEdge[]={0.11,0.22,0.35,0.47,0.62,0.725,0.85,0.965};
			soundOverride="run";
			soundEnabled=1;
			interpolationSpeed = 1;
			actions = "WBK_RotaryCanon_Moveset_Walk";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk.rtm";
			speed=-5;
		};
		class Rotary_Proper_TurnL: Rotary_Proper_Idle
		{
			soundEdge[]={0.45,0.62};
			soundOverride="run";
			soundEnabled=1;
			interpolationSpeed = 6;
			looped = true;
			interpolationRestart = 2;
			actions = "WBK_RotaryCanon_Moveset_TurnL";
			file="RB205_weapons\data\anims\Rotary_Proper_TurnL.rtm";
			speed=-1.3;
		};
		class Rotary_Proper_TurnR: Rotary_Proper_TurnL
		{
			interpolationSpeed = 6;
			looped = true;
			interpolationRestart = 2;
			actions = "WBK_RotaryCanon_Moveset_TurnR";
			file="RB205_weapons\data\anims\Rotary_Proper_TurnR.rtm";
			speed=-1.3;
		};
		class Rotary_Proper_ToIdle: Rotary_Proper_Idle
		{
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEdge[]={0.28,0.67};
			soundOverride="run";
			soundEnabled=1;
			minPlayTime = 1;
			interpolationSpeed = 6;
			looped = false;
			interpolationRestart = 2;
			file="RB205_weapons\data\anims\Rotary_Proper_ToIdle.rtm";
			speed=-1.2;
		};
		class Rotary_Proper_WalkR: Rotary_Proper_Walk
		{
			soundEdge[]={0.10,0.25,0.43,0.58,0.78,0.92};
			soundOverride="run";
			soundEnabled=1;
			interpolationSpeed = 1;
			actions = "WBK_RotaryCanon_Moveset_WalkR";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk_R.rtm";
			speed=-4.7;
		};
		class Rotary_Proper_WalkL: Rotary_Proper_WalkR
		{
			speed=-5.15;
			actions = "WBK_RotaryCanon_Moveset_WalkL";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk_L.rtm";
		};
		class Rotary_Proper_WalkFL: Rotary_Proper_WalkR
		{
			speed=-4.6;
			actions = "WBK_RotaryCanon_Moveset_WalkFL";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk_FL.rtm";
		};
		class Rotary_Proper_WalkFR: Rotary_Proper_WalkR
		{
			speed=-4.6;
			actions = "WBK_RotaryCanon_Moveset_WalkFR";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk_FR.rtm";
		};
		class Rotary_Proper_WalkB: Rotary_Proper_WalkR
		{
			speed=-4.7;
			actions = "WBK_RotaryCanon_Moveset_WalkB";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk_B.rtm";
		};
		class Rotary_Proper_WalkBL: Rotary_Proper_WalkR
		{
			speed=-4.7;
			actions = "WBK_RotaryCanon_Moveset_WalkBL";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk_BL.rtm";
		};
		class Rotary_Proper_WalkBR: Rotary_Proper_WalkR
		{
			speed=-4.7;
			actions = "WBK_RotaryCanon_Moveset_WalkBR";
			file="RB205_weapons\data\anims\Rotary_Proper_Walk_BR.rtm";
		};
	};
};
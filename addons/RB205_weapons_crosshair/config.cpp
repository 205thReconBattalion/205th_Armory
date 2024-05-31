class cfgPatches
{
	class RB205_weapons_crosshair
	{
		requiredAddons[] =
		{
			"RB205_weapons_dc15a",
			"RB205_weapons_dc15c",
			"RB205_weapons_dc15l",
			"RB205_weapons_dc15s",
			"RB205_weapons_dc15x",
			"RB205_weapons_dc17",
			"RB205_weapons_dc17m",
			"RB205_weapons_dp23",
			"RB205_weapons_v38x",
			"RB205_weapons_westarM5",
			"RB205_weapons_z6",
			"RB205_weapons_e11",
			"RB205_weapons_dlt19",
			"RB205_weapons_dlt19x",
			"RB205_weapons_se14r",
			"RB205_weapons_rk3"
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
		texture = "RB205_weapons_crosshair\data\sidearm.paa";
	};

	class RB205_CH_sidearm_dual: throw
	{
		texture = "RB205_weapons_crosshair\data\sidearm_dual.paa";
	};
};

class CfgWeapons
{
	class 3AS_DC15A_F;
	class RB205_DC15A: 3AS_DC15A_F
	{
		cursor = "RB205_CH_default";
	};
	class 3AS_DC15A_GL;
	class RB205_DC15A_GL: 3AS_DC15A_GL
	{
		cursor = "RB205_CH_default";
	};
	
	class 3AS_DC15C_F;
	class RB205_DC15C: 3AS_DC15C_F
	{
		cursor = "RB205_CH_default";
	};
	class 3AS_DC15C_GL;
	class RB205_DC15C_GL: 3AS_DC15C_GL
	{
		cursor = "RB205_CH_default";
	};
	
	class 3AS_DC15L_F;
	class RB205_DC15L: 3AS_DC15L_F
	{
		cursor = "RB205_CH_default";
	};
	
	class 3AS_DC15S_F;
	class RB205_DC15S: 3AS_DC15S_F
	{
		cursor = "RB205_CH_default";
	};
	
	class JLTS_DC15X;
	class RB205_DC15X: JLTS_DC15X
	{
		cursor = "RB205_CH_sniper";
	};
	
	class 3AS_DC17S_F;
	class RB205_DC17: 3AS_DC17S_F
	{
		cursor = "RB205_CH_sidearm";
	};
	class RB205_DC17_Dual: RB205_DC17
	{
		cursor = "RB205_CH_sidearm_dual";
	};
	class SWLW_DC17;
	class RB205_DC17_alt: SWLW_DC17
	{
		cursor = "RB205_CH_sidearm";
	};

	class SWLW_DC17M;
	class RB205_DC17M: SWLW_DC17M
	{
		cursor = "RB205_CH_default";
	};
	
	class JLTS_DP23;
	class RB205_DP23: JLTS_DP23
	{
		cursor = "RB205_CH_shotgun";
	};

	class 3AS_Valken38X_F;
	class RB205_Valken38X: 3AS_Valken38X_F
	{
		cursor = "RB205_CH_sniper";
	};

	class 3AS_WestarM5_GL;
	class RB205_WestarM5: 3AS_WestarM5_GL
	{
		cursor = "RB205_CH_default";
	};
	
	class JLTS_Z6;
	class RB205_Z6: JLTS_Z6
	{
		cursor = "RB205_CH_default";
	};

	class 3AS_E11;
	class RB205_E11: 3AS_E11
	{
		cursor = "RB205_CH_default";
	};

	class 3AS_E11Stock;
	class RB205_E11_stock: 3AS_E11Stock
	{
		cursor = "RB205_CH_default";
	};

	class 3AS_E11_GL;
	class RB205_E11_gl: 3AS_E11_GL
	{
		cursor = "RB205_CH_default";
	};

	class 3AS_DLT19;
	class RB205_DLT19: 3AS_DLT19
	{
		cursor = "RB205_CH_default";
	};

	class 3AS_DLT19X;
	class RB205_DLT19X: 3AS_DLT19X
	{
		cursor = "RB205_CH_sniper";
	};

	class JMSLLTE_e11d;
	class RB205_E11D: JMSLLTE_e11d
	{
		cursor = "RB205_CH_default";
	};

	class 3AS_SE14R;
	class RB205_SE14R: 3AS_SE14R
	{
		cursor = "RB205_CH_sidearm";
	};

	class 3AS_RK3;
	class RB205_RK3: 3AS_RK3
	{
		cursor = "RB205_CH_sidearm";
	};

	class JMSLLTE_ec17pistol;
	class RB205_EC17: JMSLLTE_ec17pistol
	{
		cursor = "RB205_CH_sidearm";
	};
};
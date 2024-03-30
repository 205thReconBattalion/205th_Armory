class CfgPatches
{
	class knd_gadgets
	{
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F_Enoch_Loadorder",
			"OPTRE_Weapons_Ammo",
			"A3_Weapons_F",
			"cba_common",
			"ls_weapons"
		};
		weapons[]={};
		units[]={};
	};
};
class RscBackGround;
class RscProgress;
class RscTitles
{
	class KND_JenpackHUD
	{
		idd=46920;
		enableSimulation=1;
		movingEnable=0;
		fadeIn=0;
		fadeOut=1;
		duration=9.9999998e+010;
		onLoad="uiNamespace setVariable ['KND_JenpackHUD', _this select 0];";
		class controls
		{
			class Background: RscBackGround
			{
				idc=4948;
				x="profileNamespace getVariable ['IGUI_knd_jenpacks_grid_X',  (((0.85) - 0.125) * safezoneW + safezoneX)]";
				y="profileNamespace getVariable ['IGUI_knd_jenpacks_grid_Y',  (((0.2) + 0.04) * safezoneH + safezoneY)]";
				w="0.15*safezoneW";
				h="0.05*safezoneH";
			};
			class Fuel: RscProgress
			{
				idc=4947;
				x="profileNamespace getVariable ['IGUI_knd_jenpacks_grid_X',  (((0.85) - 0.125) * safezoneW + safezoneX)]";
				y="profileNamespace getVariable ['IGUI_knd_jenpacks_grid_Y',  (((0.2) + 0.04) * safezoneH + safezoneY)]";
				w="0.15*safezoneW";
				h="0.025*safezoneH";
			};
			class Heat: RscProgress
			{
				idc=4946;
				x="profileNamespace getVariable ['IGUI_knd_jenpacks_grid_X',  (((0.85) - 0.125) * safezoneW + safezoneX)]";
				y="(profileNamespace getVariable ['IGUI_knd_jenpacks_grid_Y',  (((0.2) + 0.04) * safezoneH + safezoneY)]) + ((0.025) * safezoneH)";
				w="0.15*safezoneW";
				h="0.025*safezoneH";
			};
		};
	};
};
class CfgUIGrids
{
	class IGUI
	{
		class Presets
		{
			class Arma3
			{
				class Variables
				{
					knd_jenpacks_grid[]=
					{
						
						{
							"(((0.85) - 0.125) * safezoneW + safezoneX)",
							"(((0.2) + 0.04) * safezoneH + safezoneY)",
							"0.15*safezoneW",
							"0.05*safezoneH"
						},
						"(((safezoneW / safezoneH) min 1.2) / 40)",
						"((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"
					};
				};
			};
		};
		class Variables
		{
			class knd_jenpacks_grid
			{
				displayName="Jetpacks HUD";
				description="Shows heat + fuel";
				preview="knd_gadgets_core\data\ui\jetpack_preview_co.paa";
				saveToProfile[]={0,1};
				canResize=0;
			};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class knd_postinit
	{
		init="call compile preprocessFileLineNumbers 'RB205_jetpack\xeh_postinit.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class knd_preinit
	{
		init="call compileScript ['\RB205_jetpack\XEH_preInit.sqf']";
	};
};
class CfgFunctions
{
	class knd
	{
		class Functions
		{
			/*class repulsor
			{
				file="knd_gadgets_core\functions\fn_repulsor.sqf";
			};*/
			/*class jerrycan
			{
				file="knd_gadgets_core\functions\fn_jerrycan.sqf";
			};*/
			class jetpack
			{
				file="RB205_jetpack\functions\fn_jetpack.sqf";
			};
			class jetpackHUD
			{
				file="RB205_jetpack\functions\fn_jetpackHUD.sqf";
			};
			class jetpackRefuel
			{
				file="RB205_jetpack\functions\fn_jetpackRefuel.sqf";
			};
			class hasjetpack
			{
				file="RB205_jetpack\functions\fn_hasJetpack.sqf";
			};
			class jetpackCheck
			{
				file="RB205_jetpack\functions\fn_jetpackCheck.sqf";
			};
			class jetpackParticles
			{
				file="RB205_jetpack\functions\fn_jetpackParticles.sqf";
			};
			class jetpack_variableSync
			{
				file="RB205_jetpack\functions\fn_jetpack_variableSync.sqf";
			};
		};
	};
};
class cfgweapons
{
	/*class knd_repulsor: knd_sonar_device
	{
		displayName="(KND) Repulsor";
		scope=2;
		descriptionshort="A wrist-mounted repulsor, used for knocking enemies down.";
		class iteminfo: CBA_MiscItem_ItemInfo
		{
			mass=20;
		};
	};*/
	class ace_itemcore;
	class CBA_MiscItem_ItemInfo;
	class knd_jerrycan: ace_itemcore
	{
		displayName="(KND) Fuel Can";
		scope=2;
		model="\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\structures_f\items\vessels\data\canisterfuel_co.paa"
		};
		picture="\knd_gadgets_core\data\ui\jerrycan_co.paa";
		class iteminfo: CBA_MiscItem_ItemInfo
		{
			mass=100;
		};
	};
	class knd_jetpackfuel: knd_jerrycan
	{
		displayname="(KND) Jetpack Fuel Can";
		class iteminfo: iteminfo
		{
			mass=30;
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class knd_jetpackrefuel
				{
					displayName="Refuel Jetpack";
					condition="(""knd_jetpackfuel"" in (items _player)) AND ([] call knd_fnc_hasJetpack)";
					exceptions[]={};
					statement="[""knd_jetpackfuel"",200] call knd_fnc_jetpackrefuel";
				};
				/*class knd_jerrycan
				{
					displayName="Drop Fuel Can";
					condition="(""knd_jerrycan"" in (items _player))";
					exceptions[]={};
					statement="[2,[],{([""Land_CanisterFuel_F"", ""knd_jerrycan""] call knd_fnc_jerrycan)},{},""Dropping Fuel Can...""] call ace_common_fnc_progressbar";
				};*/
			};
		};
	};
};
class ACE_Arsenal_Stats
{
	class statBase;
	class knd_jetpack_fuelTank: statBase
	{
		scope=2;
		priority=0.89999998;
		stats[]=
		{
			"knd_jetpack_fuelCapacity"
		};
		displayName="Fuel Capacity";
		tabs[]=
		{
			{5},
			{}
		};
		showBar=1;
		condition="(getNumber (_this select 1 >> 'knd_isJetpack') > 0) && getNumber (_this select 1 >> (_this select 0) select 0) > 0";
		barStatement="[(_this select 0) select 0,  _this select 1,  [[0,  500],  [0.01,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
	};
	class knd_jetpack_acceleration: knd_jetpack_fuelTank
	{
		displayName="Acceleration";
		priority=0.80000001;
		stats[]=
		{
			"knd_jetpack_acceleration"
		};
		barStatement="[(_this select 0) select 0,  _this select 1,  [[0,  15],  [0.01,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
	};
	class knd_jetpack_resistance: knd_jetpack_fuelTank
	{
		displayName="Drag";
		priority=0.69999999;
		stats[]=
		{
			"knd_jetpack_resistance"
		};
		barStatement="[(_this select 0) select 0,  _this select 1,  [[0,  10],  [0.01,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
	};
	class knd_jetpack_heatCoef: knd_jetpack_fuelTank
	{
		displayName="Heat-up";
		priority=0.60000002;
		stats[]=
		{
			"knd_jetpack_heatCoef"
		};
		barStatement="[(_this select 0) select 0,  _this select 1,  [[0,  15],  [0.01,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
	};
	class knd_jetpack_coolCoef: knd_jetpack_fuelTank
	{
		displayName="Cooling Rating";
		priority=0.5;
		stats[]=
		{
			"knd_jetpack_coolCoef"
		};
		barStatement="[(_this select 0) select 0,  _this select 1,  [[0,  15],  [0.01,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
	};
	class knd_jetpack_fuelCoef: knd_jetpack_fuelTank
	{
		displayName="Fuel Consumption";
		priority=0.40000001;
		stats[]=
		{
			"knd_jetpack_fuelCoef"
		};
		barStatement="[(_this select 0) select 0,  _this select 1,  [[0,  15],  [0.01,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
	};
	class knd_jetpack_jumpCoef: knd_jetpack_fuelTank
	{
		displayName="Jump Rating";
		priority=0.30000001;
		stats[]=
		{
			"knd_jetpack_jumpCoef"
		};
		barStatement="[(_this select 0) select 0,  _this select 1,  [[0,  15],  [0.01,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
	};
};

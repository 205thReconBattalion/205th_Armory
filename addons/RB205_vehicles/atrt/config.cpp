class cfgPatches
{
    class RB205_vehicles_atrt
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ATRT",
			"3AS_Main_Function_Library"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_atrt"
		};
		weapons[] =
		{
			"RB205_atrt_uniform",
			"RB205_atrt_repeater"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

//class CBA_Extended_EventHandlers_base;

class cfgVehicles
{
	class 3AS_ATRT_Base;
	class RB205_atrt: 3AS_ATRT_Base
	{
		ACCESS_TRUE
		displayName = "AT-RT";
		author = AUTHOR;
		icon = "RB205_vehicles\atrt\data\icon_atrt.paa";
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
		//Texture
		model="\3AS\ATRT\3AS_ATRT.p3d";
		modelSides[]={3,1,0,2};
		hiddenSelectionsMaterials[] =
		{
			"RB205_vehicles\atrt\data\atrt.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\atrt\data\atrt_co.paa"
		};
		nakedUniform = "RB205_atrt_uniform";
		uniformClass = "RB205_atrt_uniform";
		//Weapons
		weapons[] =
		{
			"RB205_atrt_repeater"
		};
		magazines[] =
		{
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag",
			"RB205_barc_mag"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch",
			"ItemRadio"
		};
		respawnWeapons[]={};
		respawnMagazines[]={};
		canBleed = 0;
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
		moves = "CfgMovesATRT_RB205";
		//gestures = "CfgGesturesATRT";
	};
};

class cfgWeapons
{
	class UniformItem;

	class 3AS_ATRT_Uniform;
	class RB205_atrt_uniform: 3AS_ATRT_Uniform
	{
		displayName = "AT-RT";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "RB205_atrt";
			containerClass = "Supply10";
			mass = 5;
		};
	};
	
	class 3AS_ATRT_Weapon_F;
	class RB205_atrt_repeater: 3AS_ATRT_Weapon_F
	{
		displayName = "AT-RT Repeater";
		magazines[] =
		{
			"RB205_barc_mag"
		};
		recoil = "recoil_smg_03";
		recoilProne = "assaultRifleBase";
		cursor = "EmptyCursor";
		cursorAim = "RB205_CH_atrt";
		class LinkedItems
		{
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
		fireLightDiffuse[] = {0,0,1};
	};
};

class CfgWeaponCursors
{
	class throw;
	class RB205_CH_atrt: throw
	{
		texture = "\A3\ui_f\data\igui\cfg\weaponcursors\rocket_gs.paa";
	};
};

class cfgFunctions
{
	class RB205
	{
		class RB205_ATRT
		{
			file = "\RB205_vehicles\atrt\functions";
			class initATRT
			{
			};
			class mountATRT
			{
			};
			class dismountATRT
			{
			};
			class unstuckATRT
			{
			};
			class repairATRT
			{
			};
			class repairAfterCollisionATRT
			{
			};
			class disassembleATRT
			{
			};
		};
	};
};

class Extended_Init_EventHandlers
{
	class RB205_atrt
	{
		class RB205_atrt_Init
		{
			init = "(_this select 0) call RB205_fnc_initATRT";
		};
	};
};

class CfgMovesWalker;
class CfgMovesATRT_RB205: CfgMovesWalker
{
	class Default;
	class StandBase;
	class ManActions;
	class States
	{
		class DeadState: Default
		{
			actions="DeadActions";
			file="3AS\ATRT\3AS_ATRT_Idle";
			//file = "\RB205_vehicles\atrt\anim\atrt_destroyed.rtm";
			speed=100;
			looped=0;
			onLandBeg=1;
			onLandEnd=1;
			soundEnabled=0;
			terminal=1;
			ragdoll=1;
			headBobMode=4;
			headBobStrength=-1;
			disableWeapons=1;
			disableWeaponsLong=1;
		};
		class Unconscious: DeadState
		{
			terminal=0;
		};
		class TransAnimBase: Default
		{
			idle="";
			mask="headTorso";
			stamina=0;
			relSpeedMin=0.5;
			static=1;
			looped=0;
			leaningFactorBeg=1;
			leaningFactorEnd=1;
			leftHandIKBeg=1;
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
			soundEnabled=1;
			soundEdge[]={0.01};
			headBobStrength=0.164179;
			headBobMode=2;
			interpolationSpeed=3;
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class ATRT_Noweapon: StandBase
		{
			stamina=0;
			canPullTrigger=1;
			blockMobileSwitching=0;
			aimPrecision=7;
			turnSpeed=2;
			actions="Walker_default_actions";
			file="\3AS\ATRT\3AS_ATRT_Move";
			speed="50/100";
			soundOverride="sprint";
			duty=0;
			showWeaponAim=1;
			collisionShape="A3\anims_f\Data\Geom\Sdr\Perc_Mrun_Slow_Wrfl.p3d";
			leaningFactorBeg=0;
			leaningFactorEnd=0;
			limitGunMovement=0.2;
			soundEdge[]={0.5,1};
			static=1;
			relSpeedMin=0.7;
			relSpeedMax=1.1;
			visibleSize=0.9;
			head="Turret";
			aiming="Turret";
			aimingBody="Turret";
			interpolationSpeed=2.5;
			rightHandIKCurve[]={1};
			leftHandIKCurve[]={1};
			InterpolateTo[]=
			{
				"Walker_Idle",
				0.02,
				"Unconscious",
				0.02
			};
			disableWeaponsLong=0;
			disableWeapons=1;
			headBobMode=0;
			headBobStrength=0;
		};
		class Walker_move: StandBase
		{
			stamina=0;
			canPullTrigger=1;
			aimPrecision=7;
			turnSpeed=0.5;
			actions="Walker_default_actions";
			file="\3AS\ATRT\3AS_ATRT_Move";
			speed=0.6;
			soundOverride="sprint";
			duty=0;
			showWeaponAim=1;
			collisionShape="3AS\ATRT\3AS_ATRT_Collision.p3d";
			leaningFactorBeg=0;
			leaningFactorEnd=0;
			limitGunMovement=1;
			soundEdge[]={0.2,0.7};
			static=1;
			relSpeedMin=0;
			relSpeedMax=0;
			visibleSize=0.9;
			head="Turret";
			aiming="Turret";
			aimingBody="Turret";
			headBobStrength=0;
			interpolationSpeed=2.5;
			rightHandIKCurve[]={0};
			leftHandIKCurve[]={0};
			InterpolateTo[]=
			{
				"Walker_run",
				1,
				"Walker_idle",
				1
			};
			InterpolateFrom[]=
			{
				"Walker_run",
				1,
				"Walker_idle",
				1
			};
			disableWeaponsLong=0;
			disableWeapons=0;
		};
		class Walker_move_back: Walker_move
		{
			file="\3AS\ATRT\3AS_ATRT_Move_Back";
			InterpolateTo[]=
			{
				"Walker_idle",
				0.02
			};
			InterpolateFrom[]=
			{
				"Walker_idle",
				0.02
			};
		};
		class Walker_run: Walker_move
		{
			file="\3AS\ATRT\3AS_ATRT_Run";
			speed=1;
			InterpolateTo[]=
			{
				"Walker_move",
				1
			};
			InterpolateFrom[]=
			{
				"Walker_move",
				1
			};
		};
		class Walker_StrafeL: Walker_move
		{
			file="\3AS\ATRT\3AS_ATRT_StrafeL";
			speed=1;
			soundEdge[]={};
			InterpolateTo[]=
			{
				"Walker_idle",
				1
			};
			InterpolateFrom[]=
			{
				"Walker_idle",
				1
			};
		};
		class Walker_StrafeR: Walker_move
		{
			file="\3AS\ATRT\3AS_ATRT_StrafeR";
			speed=1;
			soundEdge[]={};
			InterpolateTo[]=
			{
				"Walker_idle",
				1
			};
			InterpolateFrom[]=
			{
				"Walker_idle",
				1
			};
		};
		class Walker_TurnL: Walker_move
		{
			file="\3AS\ATRT\3AS_ATRT_TurnL";
			speed=1;
			soundEdge[]={};
			InterpolateTo[]=
			{
				"Walker_idle",
				1
			};
			InterpolateFrom[]=
			{
				"Walker_idle",
				1
			};
		};
		class Walker_TurnR: Walker_move
		{
			file="\3AS\ATRT\3AS_ATRT_TurnR";
			speed=1;
			soundEdge[]={};
			InterpolateTo[]=
			{
				"Walker_idle",
				1
			};
			InterpolateFrom[]=
			{
				"Walker_idle",
				1
			};
		};
		class Walker_idle: Walker_move
		{
			file="\3AS\ATRT\3AS_ATRT_Idle";
			speed="30/250";
			soundEdge[]={};
			InterpolateTo[]=
			{
				"Walker_move",
				1,
				"Walker_move_back",
				1,
				"Walker_StrafeL",
				1,
				"Walker_StrafeR",
				1,
				"ATRT_deactivate",
				1
			};
			InterpolateFrom[]=
			{
				"Walker_move",
				1,
				"Walker_move_back",
				1,
				"Walker_StrafeL",
				1,
				"Walker_StrafeR",
				1,
				"ATRT_deactivate",
				1
			};
		};

		class ATRT_destroyed: StandBase
		{
			actions="DeadActions";
			file = "\RB205_vehicles\atrt\anim\atrt_destroyed";
			speed="30/250";
			soundEdge[]={};
			InterpolateTo[]={};
			InterpolateFrom[]={};
		};
		class ATRT_deactivate: StandBase
		{
			variantsPlayer[]={};
			actions="RifleKneelLowActions";
			duty=-0.6;
			speed=0.6;
			file = "\RB205_vehicles\atrt\anim\atrt_deactivate";
			visibleSize=0.3;
			aimprecision=0.5;
			camShakeFire=0.5;
			collisionShape="A3\anims_f\data\geom\sdr\Pknl_Wrfl_Low.p3d";
			interpolationSpeed=4;
			ConnectTo[]=
			{
				"ATRT_deactivated",
				1
			};
			InterpolateTo[]=
			{
				"ATRT_deactivated",
				1
			};
		};
		class ATRT_deactivated: StandBase
		{
			variantsPlayer[]={};
			actions="RifleKneelLowActions";
			duty=-0.6;
			file = "\RB205_vehicles\atrt\anim\atrt_deactivated";
			visibleSize=0.3;
			aimprecision=0.5;
			camShakeFire=0.5;
			collisionShape="A3\anims_f\data\geom\sdr\Pknl_Wrfl_Low.p3d";
			interpolationSpeed=4;
			ConnectTo[]=
			{
				"ATRT_activated",
				1
			};
			InterpolateTo[]=
			{
				"ATRT_activated",
				1
			};
		};
		class ATRT_activated: StandBase
		{
			variantsPlayer[]={};
			actions="RifleKneelLowActions";
			speed=0.6;
			duty=-0.6;
			file = "\RB205_vehicles\atrt\anim\atrt_activated";
			visibleSize=0.3;
			aimprecision=0.5;
			camShakeFire=0.5;
			collisionShape="A3\anims_f\data\geom\sdr\Pknl_Wrfl_Low.p3d";
			interpolationSpeed=4;
			ConnectTo[]=
			{
				"Walker_idle",
				1
			};
			InterpolateTo[]=
			{
				"Walker_idle",
				1
			};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed=1;
			upDegree=-1;
			stance="ManStanceUndefined";
			limitFast=5;
			leanRRot=0;
			leanRShift=0;
			leanLRot=0;
			leanLShift=0;
			useFastMove=0;
		};
		class DeadActions: NoActions
		{
			upDegree="ManPosDead";
			stance="ManStanceProne";
			LadderOnDown="";
			LadderOnUp="";
			TestDriver="";
			TestDriverOut="";
			startSwim="";
			surfaceSwim="";
			bottomSwim="";
			TestGunner="";
			Die="DeadState";
		};
		class Walker_default_actions: NoActions
		{
			upDegree="ManPosStand";
			stance="ManStanceStand";
			turnSpeed=1;
			limitFast=4;
			leanRRot=0.57;
			leanRShift=0.1;
			leanLRot=0.57;
			leanLShift=0.07;
			default="Walker_idle";
			stop="Walker_idle";
			playerstop="Walker_idle";
			Die="Unconscious";
			Unconscious="Unconscious";
			PrimaryWeapon="Walker_idle";
			Combat="Walker_idle";
			Stand="Walker_idle";
			PlayerStand="Walker_idle";
			PlayerCrouch="ATRT_deactivated";
			Crouch="ATRT_deactivated";
			Civil="Walker_idle";
			TactF="Walker_move";
			TurnL="Walker_TurnL";
			TurnR="Walker_TurnR";
			TurnLRelaxed="Walker_TurnL";
			TurnRRelaxed="Walker_TurnR";
			WalkL="Walker_StrafeL";
			WalkR="Walker_StrafeR";
			SlowL="Walker_StrafeL";
			SlowR="Walker_StrafeR";
			PlayerSlowL="Walker_StrafeL";
			PlayerSlowR="Walker_StrafeR";
			FastL="Walker_StrafeL";
			FastR="Walker_StrafeR";
			TactL="Walker_StrafeL";
			TactR="Walker_StrafeR";
			PlayerTactF="Walker_move";
			WalkF="Walker_move";
			PlayerWalkF="Walker_move";
			SlowF="Walker_move";
			PlayerSlowF="Walker_move";
			FastF="Walker_run";
			TactB="Walker_move_back";
			PlayerTactB="Walker_move_back";
			WalkB="Walker_move_back";
			PlayerWalkB="Walker_move_back";
			SlowB="Walker_move_back";
			PlayerSlowB="Walker_move_back";
			FastB="Walker_move_back";
		};
	};
};
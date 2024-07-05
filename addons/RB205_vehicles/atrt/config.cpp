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
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
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
			/*class mountATRT
			{
			};*/
			class unstuckATRT
			{
			};
			class repairAfterCollisionATRT
			{
			};
			class disassembleATRT
			{
			};
			class repairATRT
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
class cfgPatches
{
    class RB205_vehicles_atrt
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ATRT"
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

class cfgVehicles
{
	class 3AS_ATRT;
	class RB205_atrt: 3AS_ATRT
	{
		ACCESS_TRUE
		displayName = "AT-RT";
		icon = "RB205_vehicles\atrt\data\icon_atrt.paa";
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_ground";
		editorPreview = "";
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
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\atrt\data\atrt_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"RB205_vehicles\atrt\data\atrt.rvmat"
		};
		nakedUniform="RB205_atrt_uniform";
		uniformClass="RB205_atrt_uniform";
	};
};

class cfgWeapons
{
	class UniformItem;

	class 3AS_ATRT_Uniform;
	class RB205_atrt_uniform: 3AS_ATRT_Uniform
	{
		displayName="AT-RT";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="RB205_atrt";
			containerClass="Supply10";
			mass=5;
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
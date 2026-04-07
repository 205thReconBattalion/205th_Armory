class cfgPatches
{
	class RB205_weapons_explosives
	{
		requiredAddons[] =
		{
			"ls_weapons_explosives"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_explosive_detpack_editor",
			"RB205_explosive_detpack_zeus",
			"RB205_explosive_demoCharge_editor",
			"RB205_explosive_demoCharge_zeus",

			"RB205_explosive_detpack_place",
			"RB205_explosive_demoCharge_place"
		};
		weapons[] = {};
		magazines[] =
		{
			"RB205_explosive_detpack",
			"RB205_explosive_demoCharge"
		};
		ammo[] =
		{
			"RB205_explosive_detpack_ammo",
			"RB205_explosive_demoCharge_ammo"
		};
	};
};

class CfgMagazines
{
	class DemoCharge_Remote_Mag;
	class RB205_explosive_magazine_base: DemoCharge_Remote_Mag
	{
		useAction = 0;
		ace_explosives_isSticky = 1;
		ace_explosives_placeable = 1;
		allowedSlots[] = {701,901};
		author = "205th Recon Battalion";
	};
	class RB205_explosive_detpack: RB205_explosive_magazine_base
	{
		scope = 2;
		displayName = "[205] Detonation Pack";
		descriptionShort = "Wirkung: Explosiv (Medium)";
		model = "\ls\core\addons\weapons_explosives\detpack\ls_explosive_detpack.p3d";
		picture = "\ls\core\addons\weapons_explosives\data\ui\detpack_ui_ca.paa";
		ammo = "RB205_explosive_detpack_ammo";
		ace_explosives_setupObject = "RB205_explosive_detpack_place";
		mass = 10;
	};
	class RB205_explosive_demoCharge: RB205_explosive_magazine_base
	{
		scope = 2;
		displayName = "[205] Demolition Charge";
		descriptionShort = "Wirkung: Explosiv (Groß)";
		model = "\ls\core\addons\weapons_explosives\demoCharge\ls_explosive_demoCharge.p3d";
		picture = "\ls\core\addons\weapons_explosives\data\ui\demoCharge_ui_ca.paa";
		ammo = "RB205_explosive_demoCharge_ammo";
		ace_explosives_setupObject = "RB205_explosive_demoCharge_place";
		mass = 20;
	};
};

class CfgAmmo
{
	class DemoCharge_Remote_Ammo;
	class RB205_explosive_ammo_base: DemoCharge_Remote_Ammo
	{
		scope = 0;
		author = "205th Recon Battalion";
		explosionEffects = "MineNondirectionalExplosionSmall";
		craterEffects = "MineNondirectionalCraterSmall";
		whistleDist = 32;
		mineInconspicuousness = 5;
		mineTrigger = "RemoteTrigger";
		soundHit[] =
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge.wss",
			3.1622777,
			1,
			1500
		};
		soundActivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Placement_01.wss",
			1.58489,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_Deactivate_01.wss",
			1.58489,
			1,
			20
		};
		soundTrigger[]=
		{
			"A3\Sounds_F_Orange\arsenal\explosives\Handling\ExplosiveCharge_TouchOff_01.wss",
			1,
			1,
			20
		};
	};
	class RB205_explosive_detpack_ammo: RB205_explosive_ammo_base
	{
		scope = 2;
		model = "\ls\core\addons\weapons_explosives\detpack\ls_explosive_detpack.p3d";
		mineModelDisabled = "\ls\core\addons\weapons_explosives\detpack\ls_explosive_detpack_defused.p3d";
		hit = 2500;
		indirectHit = 2500;
		indirectHitRange = 3;
		defaultMagazine = "RB205_explosive_detpack";
	};
	class RB205_explosive_demoCharge_ammo: RB205_explosive_ammo_base
	{
		scope = 2;
		model = "\ls\core\addons\weapons_explosives\demoCharge\ls_explosive_demoCharge.p3d";
		mineModelDisabled = "\ls\core\addons\weapons_explosives\demoCharge\ls_explosive_demoCharge_defused.p3d";
		hit = 8500;
		indirectHit = 4500;
		indirectHitRange = 10;
		defaultMagazine = "RB205_explosive_demoCharge";
	};
};

class CfgVehicles
{
	class MineBase;
	class ModuleExplosive_F;
	class RB205_explosive_detpack_editor: MineBase
	{
		scope = 2;
		scopeCurator = 0;
		author = "205th Recon Battalion";
		displayName = "Detonation Pack";
		model = "\ls\core\addons\weapons_explosives\detpack\ls_explosive_detpack.p3d";
		editorPreview = "\ls\core\addons\weapons_explosives\data\ui\editorPreviews\ls_explosive_detpack.jpg";
		ammo = "RB205_explosive_detpack_ammo";
	};
	class RB205_explosive_detpack_zeus: ModuleExplosive_F
	{
		scopeCurator = 2;
		author = "205th Recon Battalion";
		displayName = "Detonation Pack";
		icon = "iconExplosiveGP";
		editorPreview = "\ls\core\addons\weapons_explosives\data\ui\editorPreviews\ls_explosive_detpack.jpg";
		explosive = "RB205_explosive_detpack_ammo";
	};
	class RB205_explosive_demoCharge_editor: MineBase
	{
		scope = 2;
		scopeCurator = 0;
		author = "205th Recon Battalion";
		displayName = "Demolition Charge";
		model = "\ls\core\addons\weapons_explosives\demoCharge\ls_explosive_demoCharge.p3d";
		editorPreview = "\ls\core\addons\weapons_explosives\data\ui\editorPreviews\ls_explosive_demoCharge.jpg";
		ammo = "RB205_explosive_demoCharge_ammo";
	};
	class RB205_explosive_demoCharge_zeus: ModuleExplosive_F
	{
		scopeCurator = 2;
		author = "205th Recon Battalion";
		displayName = "Demolition Charge";
		icon = "iconExplosiveGP";
		editorPreview = "\ls\core\addons\weapons_explosives\data\ui\editorPreviews\ls_explosive_demoCharge.jpg";
		explosive = "RB205_explosive_demoCharge_ammo";
	};

	class Items_base_F;
	class ace_explosives_place: Items_base_F
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class RB205_explosive_detpack_place: ace_explosives_place
	{
		scope = 1;
		author = "205th Recon Battalion";
		displayName = "Detonation Pack";
		model = "\ls\core\addons\weapons_explosives\detpack\ls_explosive_detpack_defused.p3d";
		ace_offset[] = {0,0,0};
	};
	class RB205_explosive_demoCharge_place: ace_explosives_place
	{
		scope = 1;
		author = "205th Recon Battalion";
		displayName = "Demolition Charge";
		model = "\ls\core\addons\weapons_explosives\demoCharge\ls_explosive_demoCharge_defused.p3d";
		ace_offset[] = {0,0,0};
	};
};

class CfgWeapons
{
	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"RB205_explosive_detpack_muzzle",
			"RB205_explosive_demoCharge_muzzle"
		};
		class PutMuzzle;
		class RB205_explosive_muzzle_base: PutMuzzle
		{
			autoReload = 0;
			enableAttack = 1;
			showToPlayer = 0;
			magazines[] = {};
		};
		class RB205_explosive_detpack_muzzle: RB205_explosive_muzzle_base
		{
			displayName = "Detonation Pack";
			magazines[] =
			{
				"RB205_explosive_detpack"
			};
		};
		class RB205_explosive_demoCharge_muzzle: RB205_explosive_muzzle_base
		{
			displayName = "Demolition Charge";
			magazines[] =
			{
				"RB205_explosive_demoCharge"
			};
		};
	};
};
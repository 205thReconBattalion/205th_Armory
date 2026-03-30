class cfgPatches
{
	class RB205_weapons_binocular
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"SWLB_equipment_binoculars"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
		{
			"RB205_binocular",
			"RB205_binocular_arf"
		};
	};
};

class CfgWeapons
{
	class ls_clone_electrobinoculars;
	class RB205_binocular: ls_clone_electrobinoculars
	{
		displayName = "$STR_205_BINO_M_DisplayName";
		displayNameShort = "$STR_205_BINO_M_DisplayNameShort";
		descriptionShort = "Freigegeben für: Alle";
        author = "205th Recon Battalion";
		picture = "\RB205_weapons\binoculars\data\ui_binocular.paa";
		hiddenSelectionsMaterials[] =
		{
			"\RB205_weapons\binoculars\data\binocular.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"\RB205_weapons\binoculars\data\RB205_binocular_co.paa"
		};
		visionMode[] = { "Normal", "NVG" };
	};

	class ls_clone_electrobinocularsCommander;
	class RB205_binocular_arf: ls_clone_electrobinocularsCommander
	{
		displayName = "$STR_205_BINO_E_DisplayName";
		displayNameShort = "$STR_205_BINO_E_DisplayNameShort";
		descriptionShort = "Freigegeben für: ARF, CL+";
        author = "205th Recon Battalion";
		picture = "\RB205_weapons\binoculars\data\ui_binocular_arf.paa";
		hiddenSelectionsMaterials[] =
		{
			"\RB205_weapons\binoculars\data\binocular_arf.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"\RB205_weapons\binoculars\data\RB205_binocular_arf_blk_co.paa"
		};
		visionMode[] = { "Normal", "NVG", "TI" };
	    thermalMode[] = {0};
	};
};
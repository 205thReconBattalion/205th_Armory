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
		displayName = "[205] Clone Trooper Binocular";
		displayNameShort = "Binocular";
		descriptionShort = "Freigegeben für: Alle";
        author = "205th Recon Battalion";
		picture = "\RB205_weapons\data\ui\binocular.paa";
		hiddenSelectionsMaterials[] =
		{
			"\RB205_weapons\data\materials\binocular.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"\RB205_weapons\data\RB205_binocular_co.paa"
		};
		visionMode[] = { "Normal", "NVG" };
	};

	class ls_clone_electrobinocularsCommander;
	class RB205_binocular_arf: ls_clone_electrobinocularsCommander
	{
		displayName = "[205] Clone ARF Trooper Binocular";
		displayNameShort = "Binocular";
		descriptionShort = "Freigegeben für: ARF, CL+";
        author = "205th Recon Battalion";
		picture = "\RB205_weapons\data\ui\binocular_arf.paa";
		hiddenSelectionsMaterials[] =
		{
			"\RB205_weapons\data\materials\binocular_arf.rvmat"
		};
		hiddenSelectionsTextures[] =
		{
			"\RB205_weapons\data\RB205_binocular_arf_blk_co.paa"
		};
		visionMode[] = { "Normal", "NVG", "TI" };
	    thermalMode[] = {0};
	};
};
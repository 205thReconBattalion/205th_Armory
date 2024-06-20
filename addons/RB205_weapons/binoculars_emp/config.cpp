class cfgPatches
{
	class RB205_weapons_binocular_emp
	{
		requiredAddons[] =
		{
			"RB205_weapons",
			"JMSLLTE_wep_binocular"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
		{
			"RB205_emp_binocular",
			"RB205_emp_binocular_scout"
		};
	};
};

class CfgWeapons
{
	class JMSLLTE_W_TD23_white_F;
	class RB205_emp_binocular: JMSLLTE_W_TD23_white_F
	{
		displayName = "[205|EMP] Stormtrooper Binocular";
		displayNameShort = "Binocular";
		descriptionShort = "Freigegeben für: Alle";
        author = "205th Recon Battalion";
		picture = "\RB205_weapons\data\ui\binocular.paa";
		visionMode[] = { "Normal", "NVG" };
	};

	class JMSLLTE_W_TD23_black_F;
	class RB205_emp_binocular_scout: JMSLLTE_W_TD23_black_F
	{
		displayName = "[205|EMP] Scout Trooper Binocular";
		displayNameShort = "Binocular";
		descriptionShort = "Freigegeben für: Scout, CL+";
        author = "205th Recon Battalion";
		picture = "\RB205_weapons\data\ui\binocular.paa";
		visionMode[] = { "Normal", "NVG", "TI" };
	    thermalMode[] = {0};
	};
};
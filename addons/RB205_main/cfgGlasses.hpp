class G_Diving;
class RB205_diving_inv: G_Diving
{
	ACCESS_TRUE
	author = "205th Recon Battalion";
	displayName = "[205] Clone Scuba Visor";
	model = "";
	picture = "\RB205_main\data\ui\other\icon_scubaVisor.paa";
	mass = 0;
};

class G_Combat;
class RB205_VIS_base : G_Combat
{
	ACCESS_FALSE
	author = "205th Recon Battalion";
	model = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	identityTypes[] = {};
	mass = 2;
};
class RB205_VIS : RB205_VIS_base
{
	ACCESS_FALSE
	displayName = "[205] Clone Visor";
	picture = "\RB205_main\data\ui\other\icon_visor.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\NV_default_co.paa",
		"",
		""
	};
};
class RB205_VIS_com : RB205_VIS_base
{
	ACCESS_FALSE
	displayName = "[205] Clone Commander Visor";
	picture = "\RB205_main\data\ui\other\icon_visor_com.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\NV_default_co.paa",
		"RB205_main\data\default\NV_default_co.paa",
		"RB205_main\data\default\NV_default_co.paa"
	};
};
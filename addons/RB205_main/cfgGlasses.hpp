class G_Diving;
class RB205_diving_inv: G_Diving
{
	ACCESS_TRUE
	author = AUTHOR;
	displayName = "[205] Clone Scuba Visor";
	picture = "\RB205_main\data\ui\other\icon_scubaVisor.paa";
	model = "";
	mass = 0;
};

class G_Combat;
class RB205_VIS_base : G_Combat
{
	ACCESS_FALSE
	author = AUTHOR;
	model = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3"
	};
	identityTypes[] = {};
	mass = MASS_VISOR;
	mode = 4;
};
class RB205_VIS : RB205_VIS_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Visor";
	picture = "\RB205_main\data\ui\other\icon_visor.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\VIS_default_co.paa",
		"",
		""
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\NV_dft.rvmat",
		"",
		""
	};
	identityTypes[] = { "RB205_VIS", 1 };
};
class RB205_VIS_com : RB205_VIS_base
{
	ACCESS_FALSE
	displayName = "[205] Clone Commander Visor";
	picture = "\RB205_main\data\ui\other\icon_visor_com.paa";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\VIS_base_co.paa",
		"RB205_main\data\default\VIS_base_co.paa",
		"RB205_main\data\default\VIS_base_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"RB205_main\data\materials\NV_dft.rvmat",
		"RB205_main\data\materials\NV_dft.rvmat",
		"RB205_main\data\materials\NV_dft.rvmat"
	};
};
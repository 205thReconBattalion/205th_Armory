#include "cfgVehicles_baseClasses.hpp"

/*
	DEFAULT UNITS
*/

class RB205_clone_recruit: RB205_clone_base
{
	ACCESS_TRUE
	displayName = "Clone Recruit";
	uniformclass = "RB205_U_recruit";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_recruit_upper_co.paa",
		"RB205_main\data\default\U_recruit_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	editorSubCategory = "RB205_1AP";
	rank = "PRIVATE";
};
class RB205_clone_trooper: RB205_clone_recruit
{
	ACCESS_TRUE
	displayName = "Clone Trooper";
	uniformclass = "RB205_U_trooper";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_enl_upper_co.paa",
		"RB205_main\data\default\U_enl_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	editorSubCategory = "RB205_1AP";
	rank = "PRIVATE";
};
class RB205_clone_corporal: RB205_clone_trooper
{
	ACCESS_TRUE
	displayName = "Clone Trooper (Corporal)";
	uniformclass = "RB205_U_corporal";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	editorSubCategory = "RB205_1AP";
	rank = "CORPORAL";
};
class RB205_clone_sergeant: RB205_clone_corporal
{
	ACCESS_TRUE
	displayName = "Clone Trooper (Sergeant)";
	uniformclass = "RB205_U_sergeant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	editorSubCategory = "RB205_1AP";
	rank = "SERGEANT";
};
class RB205_clone_lieutenant: RB205_clone_sergeant
{
	ACCESS_TRUE
	displayName = "Clone Trooper (Lieutenant)";
	uniformclass = "RB205_U_lieutenant";
	hiddenselectionsTextures[] =
	{
		"RB205_main\data\default\U_nco_upper_co.paa",
		"RB205_main\data\default\U_nco_lower_co.paa",
		"RB205_main\data\default\U_undersuit_co.paa"
	};
	editorSubCategory = "RB205_1AP";
	rank = "LIEUTENANT";
};
#include "cfgVehicles_baseClasses.hpp"

class RB205_clone_recruit: RB205_U_base
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
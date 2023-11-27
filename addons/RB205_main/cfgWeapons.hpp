#include "cfgWeapons_baseClasses.hpp"

/*
	DEFAULT HELMETS
*/

class RB205_H_recruit: RB205_H_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\default\H_recruit_co.paa",
		"\ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
	};
};
class RB205_H_trooper: RB205_H_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\default\H_enl_co.paa",
		"\RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_corporal: RB205_H_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\default\H_nco_co.paa",
		"\RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_sergeant: RB205_H_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\default\H_nco_co.paa",
		"\RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_lieutenant: RB205_H_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\default\H_nco_co.paa",
		"\RB205_main\data\default\visor_p2_co.paa"
	};
};

/*
	ARF HELMETS
*/

class RB205_H_arf_recruit: RB205_H_arf_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_recruit_co.paa",
		"",
		"\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
};
class RB205_H_arf_trooper: RB205_H_arf_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_enl_co.paa",
		"",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_corporal: RB205_H_arf_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_sergeant: RB205_H_arf_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_lieutenant: RB205_H_arf_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};

class RB205_H_arfF_recruit: RB205_H_arfF_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_recruit_co.paa",
		"\RB205_main\data\arf\H_arf_flaps_co.paa",
		"\ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
};
class RB205_H_arfF_trooper: RB205_H_arfF_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_enl_co.paa",
		"\RB205_main\data\arf\H_arf_flaps_co.paa",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_corporal: RB205_H_arfF_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_nco_co.paa",
		"\RB205_main\data\arf\H_arf_flaps_co.paa",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_sergeant: RB205_H_arfF_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_nco_co.paa",
		"\RB205_main\data\arf\H_arf_flaps_co.paa",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_lieutenant: RB205_H_arfF_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"\RB205_main\data\arf\H_arf_nco_co.paa",
		"\RB205_main\data\arf\H_arf_flaps_co.paa",
		"\RB205_main\data\arf\visor_arf_co.paa"
	};
};
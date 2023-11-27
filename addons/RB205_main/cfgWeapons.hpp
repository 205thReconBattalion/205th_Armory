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
		"RB205_main\data\default\H_recruit_co.paa",
		"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
	};
};
class RB205_H_trooper: RB205_H_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_enl_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_corporal: RB205_H_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_nco_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_sergeant: RB205_H_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_nco_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};
class RB205_H_lieutenant: RB205_H_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\default\H_nco_co.paa",
		"RB205_main\data\default\visor_p2_co.paa"
	};
};

/*
	AIRBORNE HELMETS
*/

class RB205_ab_recruit: RB205_H_ab_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_recruit_co.paa",
		"lsd_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
	};
};
class RB205_ab_trooper: RB205_ab_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_enl_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
	};
};
class RB205_ab_corporal: RB205_ab_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_nco_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
	};
};
class RB205_ab_sergeant: RB205_ab_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_nco_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
	};
};
class RB205_ab_lieutenant: RB205_ab_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone Airborne Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\airborne\H_ab_nco_co.paa",
		"RB205_main\data\airborne\visor_ab_co.paa"
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
		"RB205_main\data\arf\H_arf_recruit_co.paa",
		"",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
};
class RB205_H_arf_trooper: RB205_H_arf_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_enl_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_corporal: RB205_H_arf_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_sergeant: RB205_H_arf_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arf_lieutenant: RB205_H_arf_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};

class RB205_H_arfF_recruit: RB205_H_arfF_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_recruit_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"ls_armor_bluefor\helmet\gar\arf\data\helmet_co.paa"
	};
};
class RB205_H_arfF_trooper: RB205_H_arfF_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_enl_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_corporal: RB205_H_arfF_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_sergeant: RB205_H_arfF_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};
class RB205_H_arfF_lieutenant: RB205_H_arfF_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone ARF Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arf\H_arf_nco_co.paa",
		"RB205_main\data\arf\H_arf_flaps_co.paa",
		"RB205_main\data\arf\visor_arf_co.paa"
	};
};

/*
	PILOT HELMETS
*/

class RB205_H_plt_recruit: RB205_H_plt_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_recruit_co.paa",
		"ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
	};
};
class RB205_H_plt_trooper: RB205_H_plt_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_enl_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};
class RB205_H_plt_corporal: RB205_H_plt_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_nco_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};
class RB205_H_plt_sergeant: RB205_H_plt_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_nco_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};
class RB205_H_plt_lieutenant: RB205_H_plt_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone Pilot Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\pilot\H_plt_nco_co.paa",
		"RB205_main\data\pilot\visor_plt_co.paa"
	};
};

/*
	SNOW HELMETS
*/

class RB205_H_snow_recruit: RB205_H_snow_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Recruit Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_recruit_co.paa"
	};
};
class RB205_H_snow_trooper: RB205_H_snow_recruit
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_enl_co.paa"
	};
};
class RB205_H_snow_corporal: RB205_H_snow_trooper
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet (Corporal)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_nco_co.paa"
	};
};
class RB205_H_snow_sergeant: RB205_H_snow_corporal
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet (Sergeant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_nco_co.paa"
	};
};
class RB205_H_snow_lieutenant: RB205_H_snow_sergeant
{
	ACCESS_TRUE
	displayName = "[205] Clone Snow Trooper Helmet (Lieutenant)";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\snow\H_snow_nco_co.paa"
	};
};

/*
	ARC HELMET
*/

class RB205_H_arc_trooper: RB205_H_arc_base
{
	ACCESS_TRUE
	displayName = "[205] Clone ARC Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"RB205_main\data\arc\H_arc_co.paa",
		"RB205_main\data\arc\visor_arc_co.paa",
		"RB205_main\data\arc\H_arc_co.paa"
	};
};

/*
	UNIFORMS
*/

class RB205_U_recruit: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Recruit Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_recruit;
    };
};
class RB205_U_trooper: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_trooper;
    };
};
class RB205_U_corporal: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor (Corporal)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_corporal;
    };
};
class RB205_U_sergeant: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor (Sergeant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_sergeant;
    };
};
class RB205_U_lieutenant: RB205_U_base
{
	ACCESS_TRUE
	displayName = "[205] Clone Trooper Armor (Lieutenant)";
	class ItemInfo: ItemInfo
    {
        uniformClass = RB205_clone_lieutenant;
    };
};
class CfgPatches
{
	class RB205_roleDialog
	{
		requiredAddons[] = {};
		requiredVersion = 1.0;
		author = "Putzi";
		units[] = {};
		weapons[] = {};
	};
};
class cfgFunctions
{
    class RB205_roleDialog
    {
        class onBtnClick
        {
            file = "RB205_roleDialog\functions";
            class onBtnClickARC {};
            class onBtnClickARF {};
            class onBtnClickATAA {};
            class onBtnClickCrewman {};
            class onBtnClickEOD {};
            class onBtnClickGren {};
            class onBtnClickHeavy {};
            class onBtnClickMarksman {};
            class onBtnClickMedic {};
            class onBtnClickPilot {};
            class onBtnClickRifleman {};
            class onBtnClickRTO {};
        };
    };
};






#include "UIElements\defines.hpp"
#include "UIElements\dialog.hpp"
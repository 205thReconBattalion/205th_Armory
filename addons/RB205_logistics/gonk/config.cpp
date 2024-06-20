class CfgPatches
{
	class RB205_logistics_gonk
	{
		requiredAddons[] =
		{
			"RB205_logistics",
			"3AS_Prop_Droids"
		};
		requiredVersion = 1.0;
		author = "205th Recon Battalion";
		units[] =
		{
			"RB205_gonk_base",
			"RB205_gonk_aio",
			"RB205_gonk_arsenal",
			"RB205_gonk_heal",
			"RB205_gonk_restricted"
		};
		weapons[] = {};
	};
};

#include "\RB205_logistics\macro.hpp"

class DefaultEventhandlers;
class CfgVehicles
{
	
	class 3as_GNK;
	class RB205_gonk_base: 3as_GNK
	{
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_gonk";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		scope = 1;
	};
	class Land_3AS_Medical_Droid;
	class RB205_med_base: Land_3AS_Medical_Droid
	{
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_gonk";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		scope = 1;
	};

	class RB205_gonk_aio: RB205_gonk_base
	{
		displayName = "[205] Gonk (All In One)";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\gonk\scripts\aio.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};
	class RB205_gonk_arsenal: RB205_gonk_base
	{
		displayName = "[205] Gonk (Arsenal)";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\gonk\scripts\arsenal.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};
	class RB205_gonk_heal: RB205_med_base
	{
		displayName = "[205] Medical Droid";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\gonk\scripts\heal.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};
	class RB205_gonk_restricted: RB205_gonk_base
	{
		displayName = "[205] Gonk (Restricted)";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\gonk\scripts\restricted.sqf';";
		};
		scope		= 2;
		scopeCurator= 2;
	};
};

class CfgEditorSubcategories
{
	class RB205_gonk
	{
		displayName = "Droids";
	};
};
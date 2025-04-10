class CfgPatches
{
	class RB205_logistics_utilities
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
			"RB205_droid_gonk",
			"RB205_droid_med"
		};
		weapons[] = {};
	};
};

#include "\RB205_logistics\macro.hpp"

class DefaultEventhandlers;
class CfgVehicles
{
	
	class 3as_GNK;
	class RB205_droid_gonk: 3as_GNK
	{
		displayName = "GNK-Series Power Droid";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\utilities\scripts\addActions_gonk.sqf';";
		};
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_utilities";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
	};
	class Land_3AS_Medical_Droid;
	class RB205_droid_med: Land_3AS_Medical_Droid
	{
		displayName = "FX-6 Medical Assistant Droid";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\utilities\scripts\addActions_med.sqf';";
		};
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_utilities";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
	};
};

class CfgEditorSubcategories
{
	class RB205_utilities
	{
		displayName = "Utilities";
	};
};
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
			"RB205_droid_med",
			"RB205_console_admin",
			"RB205_fuel_barrel",
			"RB205_fortification_container"
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
		scopeCurator = 2;
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
	class 3AS_Terminal_Short_Communicator;
	class RB205_console_admin: 3AS_Terminal_Short_Communicator
	{
		displayName = "Admin Console";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\RB205_logistics\utilities\scripts\addActions_admin.sqf';";
		};
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_utilities";
	};
	class 3AS_Small_Fuel_Barrel;
	class RB205_fuel_barrel: 3AS_Small_Fuel_Barrel
	{
		displayName = "Fuel Barrel";
		ace_refuel_fuelCargo = 200;
		ace_refuel_hooks[] = {{0,0,0}};
		ace_refuel_hoseLength = 5;
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_utilities";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
	};
	class 3AS_Supply_Large_Prop;
	class RB205_fortification_container: 3AS_Supply_Large_Prop
	{
		displayName = "Fortifications Container";
		tas_canBlift = 1;
		tas_liftVars = "[[[[0,-4,-6.5]]], [-0.001], [-0.4]]";
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_utilities";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 20;
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
		ace_cargo_noRename = 1;

		model = "3as\3as_props\crates\models\3as_Republic_Container_prop.p3d";
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\land_3as_Republic_Container_prop.jpg";
		class AnimationSources
		{
			class open_left_door
			{
				animPeriod = 2;
				initPhase = 0;
				source = "user";
			};
			class open_right_door
			{
				animPeriod = 2;
				initPhase = 0;
				source = "user";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayName = "Open Door";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition = "((this animationPhase 'open_doorb1') < 0.5)";
				onlyForPlayer = 0;
				position = "door1_radius";
				priority = 0.4;
				radius = 2;
				statement = "[this,'open_doorb1',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_doort1',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				condition = "((this animationPhase 'open_doorb1') >= 0.5)";
				priority = 0.2;
				statement = "[this,'open_doorb1',0] call BIS_fnc_DoorNoHandleClose;[this,'open_doort1',0] call BIS_fnc_DoorNoHandleClose";
			};
			class OpenDoor_2: OpenDoor_1
			{
				displayName = "Open door";
				condition = "((this animationPhase 'open_doorb2') < 0.5)";
				position = "door2_radius";
				statement = "[this,'open_doorb2',2] call BIS_fnc_DoorNoHandleOpen;[this,'open_doort2',2] call BIS_fnc_DoorNoHandleOpen";
			};
			class CloseDoor_2: CloseDoor_1
			{
				displayName = "Close door";
				condition = "((this animationPhase 'open_doorb2') >= 0.5)";
				position = "door2_radius";
				statement = "[this,'open_doorb2',0] call BIS_fnc_DoorNoHandleClose;[this,'open_doort2',0] call BIS_fnc_DoorNoHandleClose";
			};
		};
	};
};

class CfgEditorSubcategories
{
	class RB205_utilities
	{
		displayName = "Utilities";
	};
};
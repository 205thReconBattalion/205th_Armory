class CfgPatches
{
	class RB205_logistics_fortificationBuilding
	{
		requiredAddons[] =
		{
			"RB205_logistics",
			"RB205_logistics_utilities",
			"3AS_Prop_Crates"
		};
		requiredVersion = 1.0;
		author = "205th Recon Battalion";
		units[] =
		{
			"RB205_fortification_container",
			"RB205_fortification_container_small",
			"RB205_fuel_barrel",
			"RB205_veh_ammo_crate",
			"RB205_repair_crate"
		};
		weapons[] = {};
	};
};

#include "\RB205_logistics\macro.hpp"

class DefaultEventhandlers;
class CfgVehicles
{
	class 3AS_Supply_Large_Prop;
	class RB205_fortification_container: 3AS_Supply_Large_Prop
	{
		displayName = "Fortifications Container";
		tas_canBlift = 1;
		tas_liftVars = "[[[[0,-4,-6.5]]], [-0.001], [-0.4]]";
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_fortificationBuilding";
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

		mti_fortify_canSave = 1;
		mti_fortify_availablePresets[] = {
			"RB205_fort_shieldBarricade", -1,
			"RB205_fort_shortWall", -1,
			"RB205_fort_hbarrier", -1,
			"RB205_fort_hbarrier_wall", -1,
			"RB205_fort_hbarrier_big", -1,
			"RB205_fort_building", -1,
			"RB205_fort_misc", -1
		};
	};
	class RB205_fortification_container_small: 3AS_Supply_Large_Prop
	{
		displayName = "Fortifications Container (Small)";
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_fortificationBuilding";
		ace_cargo_size = 5;
		ace_cargo_canLoad = 1;
		ace_cargo_noRename = 0;
		ace_cargo_blockUnloadCarry = 0;
		ace_dragging_canCarry = 0;
		DRAGGABLE

		model = "3as\3as_props\crates\models\mediumcrate_gar.p3d";
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\3AS_Mediumcrate_GAR_Prop.jpg";
		
		mti_fortify_availablePresets[] = {
			"RB205_fort_shieldBarricade", -1,
			"RB205_fort_shortWall", -1,
			"RB205_fort_hbarrier", -1,
			"RB205_fort_hbarrier_wall", -1,
			"RB205_fort_hbarrier_big", -1,
			"RB205_fort_building", -1,
			"RB205_fort_misc", -1
		};
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
		editorSubcategory = "RB205_fortificationBuilding";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		editorPreview = "";
	};
	class 3AS_Crate_LargeAmmo;
	class RB205_veh_ammo_crate: 3AS_Crate_LargeAmmo
	{
		displayName = "Vehicle Ammo Crate";
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_fortificationBuilding";
		ace_cargo_size = 5;
		ace_cargo_canLoad = 1;
		ace_cargo_noRename = 0;
		ace_cargo_blockUnloadCarry = 0;
		ace_dragging_canCarry = 0;
		DRAGGABLE
		ace_rearm_defaultSupply = 2500;
		editorPreview = "";
	};
	class 3AS_Small_Box_9_Prop;
	class RB205_repair_crate: 3AS_Small_Box_9_Prop
	{
		displayName = "Repair Crate";
		author = AUTHOR;
		editorCategory = "RB205_prop";
		editorSubcategory = "RB205_fortificationBuilding";
		ACE_CARGO
		CARRYABLE
		DRAGGABLE
		ace_isRepairFacility = 1;
		ace_repair_canRepair = 1;
		editorPreview = "";
	};
};

class CfgEditorSubcategories
{
	class RB205_fortificationBuilding
	{
		displayName = "Fortification Building";
	};
};

class ACEX_Fortify_Presets
{
	class RB205_fort_light
	{
        displayName = "Republic Fortifications (Light)";
        objects[] = {
            {"Land_OPTRE_ConstructionBarrier2", 3},
            {"Land_OPTRE_Cone", 1}
        };
    };
	class RB205_fort_medium
	{
        displayName = "Republic Fortifications (Medium)";
        objects[] = {
			{"3AS_Short_Wall", 3},
            {"3AS_Short_Wall_Long", 3},
			{"3AS_Short_Wall_Curved", 3},
			{"3AS_Short_Wall_Post", 3},
			{"3AS_Short_Wall_Bunker", 10},
			
			{"land_3AS_light_s_reb", 3},
			{"land_3as_Ladder3", 3}
        };
    };
    class RB205_fort_heavy
	{
        displayName = "Republic Fortifications (Heavy)";
        objects[] = {
			{"3as_hbarrier_1", 3},
			{"3as_hbarrier_3", 3},
			{"3as_hbarrier_5", 3},
			{"3as_hbarricade", 3},
			{"3as_hbarrierwall_1", 5},
			{"3as_hbarrierWall_4", 5},
			{"3as_hbarrierWall_6", 5},
			{"3as_hbarrierWall_corner3", 5},
			{"3as_hbarrierWall_cornerinv3", 5},
			{"3as_hbarrierWall_Corridor", 5},
			{"3as_hbarrier_Ramp", 3},

            {"3as_hbarrier_big", 8},
            {"3as_hbarrier_big4", 8},
			{"3as_hbarrier_big6", 8},
			{"3as_hbarrier_bunker", 15},
			{"3as_hbarrier_Tower", 30},

			{"land_3as_GuardShack", 20},
			{"Land_OPTRE_hard_tent_urban", 20},
			{"Aux212_Mobile_Support_Bridge_Straight", 10},
			{"land_3as_Hedgehog", 1},
			{"land_3as_Dragonstooth", 1},
			{"land_3AS_light_s_reb", 3},
			{"3as_FOB_Banner_prop", 1},
			{"land_3as_Ladder3", 3},
			{"land_3as_Ladder5", 3}
        };
    };

	#define category0 "Road Barrier"
	#define category1 "Shield Barricade"
	#define category2 "Short Wall"
	#define category3 "H-Barrier"
	#define category4 "H-Barrier (Wall)"
	#define category5 "H-Barrier (Big)"
	#define category6 "Building"
	#define category8 "Misc"

	class RB205_fort_allInOne {
        displayName = "Republic Fortifications (All In One)";
        objects[] = {
			{"Land_OPTRE_ConstructionBarrier2", 3, category0},
            {"Land_OPTRE_Cone", 1, category0},

			{"3AS_Shield_1_Prop", 2, category1},
            {"3AS_Shield_3_Prop", 2, category1},
			{"3AS_Shield_5_Prop", 2, category1},
			{"3AS_Shield_C_Prop", 2, category1},

			{"3AS_Short_Wall", 2, category2},
            {"3AS_Short_Wall_Long", 2, category2},
			{"3AS_Short_Wall_Curved", 2, category2},
			{"3AS_Short_Wall_Post", 2, category2},
			{"3AS_Short_Wall_Bunker", 5, category2},

            {"3as_hbarrier_1", 3, category3},
			{"3as_hbarrier_3", 3, category3},
			{"3as_hbarrier_5", 3, category3},
			{"3as_hbarricade", 3, category3},

			{"3as_hbarrierwall_1", 5, category4},
			{"3as_hbarrierWall_4", 5, category4},
			{"3as_hbarrierWall_6", 5, category4},
			{"3as_hbarrierWall_corner3", 5, category4},
			{"3as_hbarrierWall_cornerinv3", 5, category4},
			{"3as_hbarrierWall_Corridor", 5, category4},
			{"3as_hbarrier_Ramp", 3, category4},

            {"3as_hbarrier_big", 8, category5},
            {"3as_hbarrier_big4", 8, category5},
			{"3as_hbarrier_big6", 8, category5},
			{"3as_hbarrier_bunker", 15, category5},
			{"3as_hbarrier_Tower", 30, category5},

			{"land_3as_GuardShack", 20, category6},
			{"Land_OPTRE_hard_tent_urban", 20, category6},

			{"land_3as_Hedgehog", 1, category8},
			{"land_3as_Dragonstooth", 1, category8},
			{"land_3AS_light_s_reb", 3, category8},
			{"3as_FOB_Banner_prop", 1, category8},
			{"land_3as_Ladder3", 3, category8},
			{"land_3as_Ladder5", 3, category8},
			{"Aux212_Mobile_Support_Bridge_Straight", 10, category8}
        };
    };
};

#define MTI_FORTIFY_ADD(CLASSNAME,COST,LIMIT) \
	class _xx_##CLASSNAME { \
		name = #CLASSNAME; \
		cost = COST; \
		limit = LIMIT; \
	}

class mti_fortify_presets {
	class Default {
        scope = 0; // controls visibility of the preset, scope > 0 makes it visible
        displayName = ""; // The name of the preset, displayed in the fortify interaction menu
        backpackOnly = 0; // if this is 1, this preset can only be used with backpacks
        category = ""; // Presets can be assigned to a category which will make the ace menu less cluttered
        condition = "true"; // Condition that has to be met in order to further filter who can access a given preset, passed arguments are [_target,_player]
        class Objects {}; // this sub-class contains all objects (from CfgVehicles) that are available in this preset
    };

	class RB205_fort_shieldBarricade: Default {
        scope = 1;
        displayName = "Shield Barricade";
        category = "";
        class Objects {
            MTI_FORTIFY_ADD(3AS_Shield_1_Prop, 2, -1);
			MTI_FORTIFY_ADD(3AS_Shield_3_Prop, 2, -1);
			MTI_FORTIFY_ADD(3AS_Shield_5_Prop, 2, -1);
			MTI_FORTIFY_ADD(3AS_Shield_C_Prop, 2, -1);
        };
    };
    class RB205_fort_shortWall: Default {
        scope = 1;
        displayName = "Short Wall";
        category = "";
        class Objects {
			MTI_FORTIFY_ADD(3AS_Short_Wall, 2, -1);
			MTI_FORTIFY_ADD(3AS_Short_Wall_Long, 2, -1);
			MTI_FORTIFY_ADD(3AS_Short_Wall_Curved, 2, -1);
			MTI_FORTIFY_ADD(3AS_Short_Wall_Post, 2, -1);
			MTI_FORTIFY_ADD(3AS_Short_Wall_Bunker, 5, -1);
        };
    };
    class RB205_fort_hbarrier: Default {
        scope = 1;
        displayName = "H-Barrier";
        category = "";
        class Objects {
			MTI_FORTIFY_ADD(3as_hbarrier_1, 3, -1);
			MTI_FORTIFY_ADD(3as_hbarrier_3, 3, -1);
			MTI_FORTIFY_ADD(3as_hbarrier_5, 3, -1);
			MTI_FORTIFY_ADD(3as_hbarricade, 3, -1);
        };
    };
    class RB205_fort_hbarrier_wall: Default {
        scope = 1;
        displayName = "H-Barrier (Wall)";
        category = "";
        class Objects {
			MTI_FORTIFY_ADD(3as_hbarrierwall_1, 5, -1);
			MTI_FORTIFY_ADD(3as_hbarrierWall_4, 5, -1);
			MTI_FORTIFY_ADD(3as_hbarrierWall_6, 5, -1);
			MTI_FORTIFY_ADD(3as_hbarrierWall_corner3, 5, -1);
			MTI_FORTIFY_ADD(3as_hbarrierWall_cornerinv3, 5, -1);
			MTI_FORTIFY_ADD(3as_hbarrierWall_Corridor, 5, -1);
			MTI_FORTIFY_ADD(3as_hbarrier_Ramp, 3, -1);
        };
    };
    class RB205_fort_hbarrier_big: Default {
        scope = 1;
        displayName = "H-Barrier (Big)";
        category = "";
        class Objects {
			MTI_FORTIFY_ADD(3as_hbarrier_big, 8, -1);
			MTI_FORTIFY_ADD(3as_hbarrier_big4, 8, -1);
			MTI_FORTIFY_ADD(3as_hbarrier_big6, 8, -1);
			MTI_FORTIFY_ADD(3as_hbarrier_bunker, 15, -1);
			MTI_FORTIFY_ADD(3as_hbarrier_Tower, 30, -1);
        };
    };
    class RB205_fort_building: Default {
        scope = 1;
        displayName = "Building";
        category = "";
        class Objects {
			MTI_FORTIFY_ADD(land_3as_GuardShack, 20, -1);
			MTI_FORTIFY_ADD(Land_OPTRE_hard_tent_urban, 20, -1);
        };
    };
    class RB205_fort_misc: Default {
        scope = 1;
        displayName = "Misc";
        category = "";
        class Objects {
			MTI_FORTIFY_ADD(land_3as_Hedgehog, 1, -1);
			MTI_FORTIFY_ADD(land_3as_Dragonstooth, 1, -1);
			MTI_FORTIFY_ADD(land_3AS_light_s_reb, 3, -1);
			MTI_FORTIFY_ADD(3as_FOB_Banner_prop, 1, -1);
			MTI_FORTIFY_ADD(land_3as_Ladder3, 3, -1);
			MTI_FORTIFY_ADD(land_3as_Ladder5, 3, -1);
			MTI_FORTIFY_ADD(Aux212_Mobile_Support_Bridge_Straight, 10, -1);
        };
    };
};

class Extended_PostInit_EventHandlers
{
    class RB205_logistics_fortificationBuilding
    {
        clientInit = "call compile preprocessFileLineNumbers '\RB205_logistics\fortificationBuilding\XEH_postInit.sqf'";
    };
};
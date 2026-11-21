class cfgPatches
{
    class RB205_vehicles_fcc
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Static_FCP",
			"RB205_logistics_fortificationBuilding"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_fcc"
		};
		weapons[] = {};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class SensorTemplateActiveRadar;

class cfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_Republic_FCP: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Components;
			};
		};
		class Components;
	};
	class RB205_fcc: 3AS_Republic_FCP
	{
		ACCESS_TRUE
		displayName = "Forward Command Center";
		author = AUTHOR;
		crew = CREW_DEFAULT;
		VEH_INVENTORY
        CARGO_M
		ace_cargo_canLoad = 0;															//Nur per LAAT/C verladbar, nicht per ACE
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_other";
		editorPreview = "";
		class UserActions {};
		//TFAR: Overlay der 205th-Funkrucksäcke, LR-Funk auch auf allen Passagierplätzen
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_isolatedAmount = 0.0;
		tf_RadioType = "RB205_B_radio";
		TFAR_AdditionalLR_Cargo[] = {0, 1, 2, 3, 4};
		//Radar (20 km), nur im aufgebauten Zustand aktiv (siehe fnc_updateLocal.sqf)
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 15000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 120;
						aimDown = -30;
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//Sensor- und Drohnenanzeige für den Commander-Sitz
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {5000, 10000, 20000, 2500};
								resource = "RscCustomInfoSensors";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {5000, 10000, 20000, 2500};
								resource = "RscCustomInfoSensors";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
				};
			};
		};
	};

	//Befestigungskiste des FCC: Presets und Speichern wie beim großen Fortifications Container
	class RB205_fortification_container;
	class RB205_fcc_fortificationCrate: RB205_fortification_container
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Fortifications Crate (FCC)";
		author = AUTHOR;
		model = "3as\3as_props\crates\models\mediumcrate_gar.p3d";
		editorPreview = "\3as\3as_props\Crates\EditorPreviews\3AS_Mediumcrate_GAR_Prop.jpg";
		tas_canBlift = 0;
		ace_cargo_size = 1;
		ace_cargo_noRename = 0;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0;
		class AnimationSources {};
		class UserActions {};
	};
};

class CfgFunctions
{
	class RB205_fcc
	{
		tag = "RB205_fcc";

		class FCC
		{
			class deploy							{file = "\RB205_vehicles\fcc\functions\fnc_deploy.sqf";};
			class undeploy							{file = "\RB205_vehicles\fcc\functions\fnc_undeploy.sqf";};
			class removeFeatures					{file = "\RB205_vehicles\fcc\functions\fnc_removeFeatures.sqf";};
			class setService						{file = "\RB205_vehicles\fcc\functions\fnc_setService.sqf";};
			class findAmmoCrate						{file = "\RB205_vehicles\fcc\functions\fnc_findAmmoCrate.sqf";};
			class storeAmmoCrate					{file = "\RB205_vehicles\fcc\functions\fnc_storeAmmoCrate.sqf";};
			class initRadios						{file = "\RB205_vehicles\fcc\functions\fnc_initRadios.sqf";};
			class updateAlarm						{file = "\RB205_vehicles\fcc\functions\fnc_updateAlarm.sqf";};
			class updateLocal						{file = "\RB205_vehicles\fcc\functions\fnc_updateLocal.sqf";};
			class launchDrone						{file = "\RB205_vehicles\fcc\functions\fnc_launchDrone.sqf";};
			class recallDrone						{file = "\RB205_vehicles\fcc\functions\fnc_recallDrone.sqf";};
			class openConfirmDialog					{file = "\RB205_vehicles\fcc\functions\fnc_openConfirmDialog.sqf";};
			class onConfirm							{file = "\RB205_vehicles\fcc\functions\fnc_onConfirm.sqf";};
			class startDeploy						{file = "\RB205_vehicles\fcc\functions\fnc_startDeploy.sqf";};
			class updateMedical						{file = "\RB205_vehicles\fcc\functions\fnc_updateMedical.sqf";};
			class updateAmbience					{file = "\RB205_vehicles\fcc\functions\fnc_updateAmbience.sqf";};
			class updateDroneLink					{file = "\RB205_vehicles\fcc\functions\fnc_updateDroneLink.sqf";};
			class handleRespawn						{file = "\RB205_vehicles\fcc\functions\fnc_handleRespawn.sqf";};
		};
		class Intel
		{
			class intelInit							{file = "\RB205_vehicles\fcc\functions\fnc_intelInit.sqf";};
			class intelGetFcc						{file = "\RB205_vehicles\fcc\functions\fnc_intelGetFcc.sqf";};
			class intelUpdate						{file = "\RB205_vehicles\fcc\functions\fnc_intelUpdate.sqf";};
			class intelClear						{file = "\RB205_vehicles\fcc\functions\fnc_intelClear.sqf";};
			class intelGetMarkerType				{file = "\RB205_vehicles\fcc\functions\fnc_intelGetMarkerType.sqf";};
			class intelCreateControls				{file = "\RB205_vehicles\fcc\functions\fnc_intelCreateControls.sqf";};
			class intelIconEnter					{file = "\RB205_vehicles\fcc\functions\fnc_intelIconEnter.sqf";};
			class intelIconLeave					{file = "\RB205_vehicles\fcc\functions\fnc_intelIconLeave.sqf";};
			class intelShowTooltip					{file = "\RB205_vehicles\fcc\functions\fnc_intelShowTooltip.sqf";};
			class intelHideTooltip					{file = "\RB205_vehicles\fcc\functions\fnc_intelHideTooltip.sqf";};
			class intelInitUnit						{file = "\RB205_vehicles\fcc\functions\fnc_intelInitUnit.sqf";};
			class intelUpdateTracers				{file = "\RB205_vehicles\fcc\functions\fnc_intelUpdateTracers.sqf";};
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class RB205_FCC_PreInit
	{
		init = "call compile preProcessFileLineNumbers '\RB205_vehicles\fcc\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers
{
	class RB205_FCC_PostInit
	{
		init = "call compile preProcessFileLineNumbers '\RB205_vehicles\fcc\XEH_postInit.sqf'";
	};
};

class CfgNotifications
{
	class RB205_RespawnModule_text
	{
		title = "Forward Command Center";								// Title displayed as text on black background. Filled by arguments.
		iconPicture = "\a3\Modules_f\data\iconHQ_ca.paa";  				// Small icon displayed in left part. Colored by "color", filled by arguments.
		iconText = "";   												// Short text displayed over the icon. Colored by "color", filled by arguments.
		description = "Uplink established. Respawn available.";  		// Brief description displayed as structured text. Colored by "color", filled by arguments. Nur eine Zeile, sonst wird sie abgeschnitten.
		color[] = {1,1,1,1}; 											// Icon and text color
		duration = 5;   												// How many seconds will the notification be displayed
		priority = 0;   												// Priority; higher number = more important; tasks in queue are selected by priority
		difficulty[] = {};  											// Required difficulty settings. All listed difficulties has to be enabled
	};
	class RB205_RespawnModule_text_destroyed
	{
		title = "Forward Command Center";
		iconPicture = "\a3\Modules_f\data\iconModule_ca.paa";
		iconText = "";
		description = "Command post destroyed! Respawn lost.";
		color[] = {1,1,1,1};
		duration = 5;
		priority = 0;
		difficulty[] = {};
	};
	class RB205_fcc_underAttack
	{
		title = "Forward Command Center";
		iconPicture = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\danger_ca.paa";
		iconText = "";
		description = "%1";
		color[] = {1,0.35,0.25,1};
		duration = 7;
		priority = 5;
		difficulty[] = {};
	};
	class RB205_fcc_secured
	{
		title = "Forward Command Center";
		iconPicture = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\defend_ca.paa";
		iconText = "";
		description = "%1";
		color[] = {1,1,1,1};
		duration = 5;
		priority = 4;
		difficulty[] = {};
	};
};

//Bestätigungsfenster im Holo-Stil der 205th-Benachrichtigungen
//Der Rahmen hat das Seitenverhältnis 2:1. Eine x-Einheit ist auf jedem Bildschirm 4/3 so breit wie eine y-Einheit hoch,
//deshalb ergibt Breite = Höhe * 1,5 immer 2:1. Der Text steht im inneren Feld des Rahmens (ca. 15-85 % / 24-67 %).
#define FCC_QUOTE(var)		#var
#define FCC_DLG_H			(0.46 * safezoneH)
#define FCC_DLG_W			(FCC_DLG_H * 1.5)
#define FCC_DLG_X			(0.5 - FCC_DLG_W / 2)
#define FCC_DLG_Y			(0.5 - FCC_DLG_H / 2)
#define FCC_DLG_INNER_X		(FCC_DLG_X + FCC_DLG_W * 0.15)
#define FCC_DLG_INNER_W		(FCC_DLG_W * 0.7)
#define FCC_DLG_BUTTON_W	(FCC_DLG_W * 0.17)
#define FCC_DLG_BUTTON_Y	(FCC_DLG_Y + FCC_DLG_H * 0.595)
#define FCC_DLG_BUTTON_H	(FCC_DLG_H * 0.065)
#define FCC_DLG_FONT		(0.016 * safezoneH)
#define FCC_HOLO_BLUE		{0.18, 0.72, 1, 1}
#define FCC_HOLO_DARK		{0.02, 0.06, 0.11, 0.9}

class RscText;
class RscStructuredText;
class RscPicture;
class RscButton;

class RB205_fcc_confirmDialog
{
	idd = 205800;
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "uiNamespace setVariable ['RB205_fcc_confirmDisplay', _this select 0]";
	onUnload = "uiNamespace setVariable ['RB205_fcc_confirmDisplay', displayNull]";

	class controlsBackground
	{
		class Frame: RscPicture
		{
			idc = -1;
			x = FCC_QUOTE(FCC_DLG_X);
			y = FCC_QUOTE(FCC_DLG_Y);
			w = FCC_QUOTE(FCC_DLG_W);
			h = FCC_QUOTE(FCC_DLG_H);
			colorText[] = {1, 1, 1, 0.9};
			text = "\RB205_notification\UIElements\Hintergrund.paa";
		};
	};
	class controls
	{
		class Header: RscText
		{
			idc = 205801;
			x = FCC_QUOTE(FCC_DLG_INNER_X);
			y = FCC_QUOTE(FCC_DLG_Y + FCC_DLG_H * 0.245);
			w = FCC_QUOTE(FCC_DLG_INNER_W);
			h = FCC_QUOTE(FCC_DLG_H * 0.06);
			font = "EtelkaMonospacePro";
			sizeEx = FCC_QUOTE(FCC_DLG_FONT * 1.05);
			colorText[] = FCC_HOLO_BLUE;
			shadow = 0;
			text = "";
		};
		class Divider: RscText
		{
			idc = -1;
			x = FCC_QUOTE(FCC_DLG_INNER_X);
			y = FCC_QUOTE(FCC_DLG_Y + FCC_DLG_H * 0.31);
			w = FCC_QUOTE(FCC_DLG_INNER_W);
			h = FCC_QUOTE(0.002 * safezoneH);
			colorBackground[] = {0.11, 0.37, 0.53, 1};
			text = "";
		};
		class Body: RscStructuredText
		{
			idc = 205802;
			x = FCC_QUOTE(FCC_DLG_INNER_X);
			y = FCC_QUOTE(FCC_DLG_Y + FCC_DLG_H * 0.33);
			w = FCC_QUOTE(FCC_DLG_INNER_W);
			h = FCC_QUOTE(FCC_DLG_H * 0.25);
			size = FCC_QUOTE(FCC_DLG_FONT);
			colorBackground[] = {0, 0, 0, 0};
			class Attributes
			{
				font = "EtelkaMonospacePro";
				color = "#5FBFE8";
				align = "left";
				valign = "top";
				shadow = 0;
			};
		};
		class ButtonConfirm: RscButton
		{
			idc = 205803;
			default = 1;
			x = FCC_QUOTE(FCC_DLG_INNER_X + FCC_DLG_INNER_W - FCC_DLG_BUTTON_W);
			y = FCC_QUOTE(FCC_DLG_BUTTON_Y);
			w = FCC_QUOTE(FCC_DLG_BUTTON_W);
			h = FCC_QUOTE(FCC_DLG_BUTTON_H);
			text = "";
			font = "EtelkaMonospacePro";
			sizeEx = FCC_QUOTE(FCC_DLG_FONT);
			shadow = 0;
			colorText[] = {0.02, 0.06, 0.11, 1};
			colorDisabled[] = {0.02, 0.06, 0.11, 0.5};
			colorBackground[] = {0.18, 0.72, 1, 0.85};
			colorBackgroundActive[] = {0.45, 0.85, 1, 1};
			colorBackgroundDisabled[] = {0.18, 0.72, 1, 0.3};
			colorFocused[] = {0.45, 0.85, 1, 1};
			colorShadow[] = {0, 0, 0, 0};
			colorBorder[] = {0, 0, 0, 0};
			offsetX = 0;
			offsetY = 0;
			offsetPressedX = 0;
			offsetPressedY = 0;
			action = "call RB205_fcc_fnc_onConfirm";
		};
		class ButtonCancel: ButtonConfirm
		{
			idc = 205804;
			default = 0;
			x = FCC_QUOTE(FCC_DLG_INNER_X + FCC_DLG_INNER_W - FCC_DLG_BUTTON_W * 2.1);
			text = "ABORT";
			colorText[] = FCC_HOLO_BLUE;
			colorBackground[] = FCC_HOLO_DARK;
			colorBackgroundActive[] = {0.05, 0.16, 0.26, 1};
			colorFocused[] = {0.05, 0.16, 0.26, 1};
			action = "closeDialog 2";
		};
	};
};

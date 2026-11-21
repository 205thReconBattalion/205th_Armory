/*
 * Forward Command Center (RB205_fcc)
 *
 * Läuft über Extended_PostInit_EventHandlers auf allen Maschinen.
 * Errichten, Abbauen, Versorgung, Alarm und Drohne laufen ausschließlich auf dem Server.
 * Clients schicken nur Server-Events (ACE-Interaktion) und kümmern sich um alles,
 * was nur lokal sichtbar oder hörbar ist (Karten-Intel, Lazarett-Bereich, Ambiente, Drohnen-Terminal).
 *
 * Variablen am FCC:
 * RB205_fcc_deployed       <BOOL>   global, aufgebaut ja/nein
 * RB205_fcc_contested      <BOOL>   global, wird gerade angegriffen
 * RB205_fcc_drone          <OBJECT> global, aktuelle Aufklärungsdroide
 * RB205_fcc_droneReadyAt   <NUMBER> global, CBA_missionTime ab der eine neue Droide startbar ist
 * RB205_fcc_radarContacts  <ARRAY>  global, Radar-Kontakte [Ziel, Luftziel, Beziehung]
 * RB205_fcc_deployData     <ARRAY>  nur auf dem Server: [Respawn, Droiden, Marker, Kisten]
 */

//Alle FCCs, die diese Maschine kennt
RB205_fcc_registry = [];

["RB205_fcc", "initPost", {
	params ["_fcc"];
	RB205_fcc_registry pushBackUnique _fcc;
	if (isServer) then {
		_fcc call RB205_fcc_fnc_initRadios;
	};
}, true, [], true] call CBA_fnc_addClassEventHandler;

//Killed feuert nur dort, wo das FCC lokal ist (Server oder z.B. der Commander), daher an den Server weiterleiten
["RB205_fcc", "Killed", {
	params ["_fcc"];
	["RB205_fcc_destroyed", [_fcc]] call CBA_fnc_serverEvent;
}] call CBA_fnc_addClassEventHandler;

//Bei Zerstörung löscht ACE geladene Kisten oder wirft sie (je nach ACE-Einstellung) heraus.
//Herausgeworfene Kisten eines FCC werden ebenfalls gelöscht. Das Event geht an den Besitzer der Kiste, daher auf allen Maschinen.
["ace_cargo_unloadedCargoOnKilled", {
	params ["_item", "_vehicle"];
	if (_vehicle isKindOf "RB205_fcc") then {deleteVehicle _item};
}] call CBA_fnc_addEventHandler;

//Befehle an die KI der Drohne müssen dort ausgeführt werden, wo sie lokal ist
["RB205_fcc_droneMove", {
	params ["_unit", "_position"];
	_unit doMove _position;
}] call CBA_fnc_addEventHandler;

//Radar ein-/ausschalten und Radar-Kontakte verteilen
[{call RB205_fcc_fnc_updateLocal}, 2] call CBA_fnc_addPerFrameHandler;

//Server

if (isServer) then {
	["RB205_fcc_deploy", {_this call RB205_fcc_fnc_deploy}] call CBA_fnc_addEventHandler;
	["RB205_fcc_undeploy", {_this call RB205_fcc_fnc_undeploy}] call CBA_fnc_addEventHandler;
	["RB205_fcc_storeAmmoCrate", {_this call RB205_fcc_fnc_storeAmmoCrate}] call CBA_fnc_addEventHandler;
	["RB205_fcc_launchDrone", {_this call RB205_fcc_fnc_launchDrone}] call CBA_fnc_addEventHandler;
	["RB205_fcc_recallDrone", {(_this select 0) call RB205_fcc_fnc_recallDrone}] call CBA_fnc_addEventHandler;

	//FCC zerstört

	["RB205_fcc_destroyed", {
		params ["_fcc"];
		if !(_fcc getVariable ["RB205_fcc_deployed", false]) exitWith {};

		[_fcc, false] call RB205_fcc_fnc_removeFeatures;                                           //Geladene Kisten: siehe ace_cargo_unloadedCargoOnKilled oben
		_fcc setVariable ["RB205_fcc_deployed", false, true];

		["RB205_fcc_notification", ["RB205_RespawnModule_text_destroyed"]] call CBA_fnc_globalEvent;
	}] call CBA_fnc_addEventHandler;

	//FCC gelöscht (z.B. durch Zeus), sonst blieben Droiden, Marker und Respawn zurück

	["RB205_fcc", "Deleted", {
		params ["_fcc"];
		if !(_fcc getVariable ["RB205_fcc_deployed", false]) exitWith {};

		[_fcc, false, true] call RB205_fcc_fnc_removeFeatures;
	}] call CBA_fnc_addClassEventHandler;

	//Aufklärungsdroide außer Reichweite: zurück zum FCC fliegen

	["RB205_fcc_droneReturn", {
		params ["_fcc"];
		private _drone = _fcc getVariable ["RB205_fcc_drone", objNull];
		if (!alive _drone || {isNull driver _drone}) exitWith {};

		["RB205_fcc_droneMove", [driver _drone, getPosATL _fcc], driver _drone] call CBA_fnc_targetEvent;
	}] call CBA_fnc_addEventHandler;

	//Angriffsalarm
	[{call RB205_fcc_fnc_updateAlarm}, 5] call CBA_fnc_addPerFrameHandler;
};

//Clients

if (!hasInterface) exitWith {};

["RB205_fcc_notification", {
	params ["_template", ["_arguments", ["", ""]]];
	[_template, _arguments] call BIS_fnc_showNotification;
}] call CBA_fnc_addEventHandler;

["RB205_fcc_hint", {
	params ["_text"];
	[_text, 2.5] call ace_common_fnc_displayTextStructured;
}] call CBA_fnc_addEventHandler;

call RB205_fcc_fnc_intelInit;
[{call RB205_fcc_fnc_updateMedical}, 2] call CBA_fnc_addPerFrameHandler;
[{call RB205_fcc_fnc_updateAmbience}, 1] call CBA_fnc_addPerFrameHandler;
[{call RB205_fcc_fnc_updateDroneLink}, 0.5] call CBA_fnc_addPerFrameHandler;

//Respawn: Spieler vom Commander-Sitz auf einen Passagierplatz setzen
[{!isNull player}, {
	player addEventHandler ["Respawn", {_this call RB205_fcc_fnc_handleRespawn}];
}] call CBA_fnc_waitUntilAndExecute;

//ACE-Integration

private _deployFCC = [
	"RB205_fcc_deploy",
	"<t color='#2EB8FF'>Establish Forward Command</t>",
	"",
	{
		params ["_target"];
		[_target, "deploy"] call RB205_fcc_fnc_openConfirmDialog;
	},
	{
		params ["_target"];
		alive _target && {!(_target getVariable ["RB205_fcc_deployed", false])};
	}
] call ace_interact_menu_fnc_createAction;
["RB205_fcc", 0, ["ACE_MainActions"], _deployFCC, true] call ace_interact_menu_fnc_addActionToClass;

private _undeployFCC = [
	"RB205_fcc_undeploy",
	"<t color='#2EB8FF'>Break Down Forward Command</t>",
	"",
	{
		params ["_target"];
		[_target, "undeploy"] call RB205_fcc_fnc_openConfirmDialog;
	},
	{
		params ["_target"];
		alive _target && {_target getVariable ["RB205_fcc_deployed", false]};
	}
] call ace_interact_menu_fnc_createAction;
["RB205_fcc", 0, ["ACE_MainActions"], _undeployFCC, true] call ace_interact_menu_fnc_addActionToClass;

//Munitionskiste einlagern (nur sinnvoll, wenn der ACE-Munitionsvorrat begrenzt ist)
private _storeAmmo = [
	"RB205_fcc_storeAmmoCrate",
	"<t color='#2EB8FF'>Stockpile Ammo Crate</t>",
	"",
	{
		params ["_target", "_player"];
		["RB205_fcc_storeAmmoCrate", [_target, _target call RB205_fcc_fnc_findAmmoCrate, _player]] call CBA_fnc_serverEvent;
	},
	{
		params ["_target"];
		alive _target
		&& {_target getVariable ["RB205_fcc_deployed", false]}
		&& {(missionNamespace getVariable ["ace_rearm_supply", 0]) == 1}
		&& {RB205_fcc_ammoCapacity > 0}
		&& {!isNull (_target call RB205_fcc_fnc_findAmmoCrate)};
	}
] call ace_interact_menu_fnc_createAction;
["RB205_fcc", 0, ["ACE_MainActions"], _storeAmmo, true] call ace_interact_menu_fnc_addActionToClass;

//Aufklärungsdroide, nur vom Commander-Sitz
private _launchDrone = [
	"RB205_fcc_launchDrone",
	"<t color='#2EB8FF'>Launch Prowler Recon Droid</t>",
	"",
	{
		params ["_target", "_player"];
		["RB205_fcc_launchDrone", [_target, _player]] call CBA_fnc_serverEvent;
	},
	{
		params ["_target", "_player"];
		_player isEqualTo gunner _target
		&& {_target getVariable ["RB205_fcc_deployed", false]}
		&& {!alive (_target getVariable ["RB205_fcc_drone", objNull])}
		&& {CBA_missionTime >= (_target getVariable ["RB205_fcc_droneReadyAt", 0])};
	}
] call ace_interact_menu_fnc_createAction;
["RB205_fcc", 1, ["ACE_SelfActions"], _launchDrone, true] call ace_interact_menu_fnc_addActionToClass;

private _recallDrone = [
	"RB205_fcc_recallDrone",
	"<t color='#2EB8FF'>Recall Prowler Recon Droid</t>",
	"",
	{
		params ["_target"];
		["RB205_fcc_recallDrone", [_target]] call CBA_fnc_serverEvent;
	},
	{
		params ["_target", "_player"];
		_player isEqualTo gunner _target && {alive (_target getVariable ["RB205_fcc_drone", objNull])};
	}
] call ace_interact_menu_fnc_createAction;
["RB205_fcc", 1, ["ACE_SelfActions"], _recallDrone, true] call ace_interact_menu_fnc_addActionToClass;

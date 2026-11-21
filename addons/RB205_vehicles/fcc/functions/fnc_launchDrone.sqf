/*
 * Startet die Aufklärungsdroide (Prowler 1000) eines aufgebauten FCC. Nur auf dem Server.
 * Pro FCC gibt es höchstens eine Droide. Nach ihrer Zerstörung gilt eine Abklingzeit.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 * 1: Spieler für die Rückmeldung <OBJECT> (default: objNull)
 */

params [["_fcc", objNull, [objNull]], ["_unit", objNull, [objNull]]];

if (!isServer) exitWith {};
if (!alive _fcc || {!(_fcc getVariable ["RB205_fcc_deployed", false])}) exitWith {};
if (alive (_fcc getVariable ["RB205_fcc_drone", objNull])) exitWith {};

private _readyAt = _fcc getVariable ["RB205_fcc_droneReadyAt", 0];
if (CBA_missionTime < _readyAt) exitWith {
	["RB205_fcc_hint", [format ["Recon droid not ready yet (%1 s).", ceil (_readyAt - CBA_missionTime)]], _unit] call CBA_fnc_targetEvent;
};

private _position = _fcc getPos [8, getDir _fcc + 90];
_position set [2, 20];

private _drone = createVehicle ["RB205_prowler", _position, [], 0, "FLY"];
createVehicleCrew _drone;
_drone setDir getDir _fcc;
_drone flyInHeight 40;

_drone setVariable ["RB205_fcc_parent", _fcc, true];
_fcc setVariable ["RB205_fcc_drone", _drone, true];

//MPKilled feuert überall, unabhängig davon, wer die Droide gerade steuert
_drone addMPEventHandler ["MPKilled", {
	params ["_drone"];
	if (!isServer) exitWith {};

	private _fcc = _drone getVariable ["RB205_fcc_parent", objNull];
	if ((_fcc getVariable ["RB205_fcc_drone", objNull]) isNotEqualTo _drone) exitWith {};

	_fcc setVariable ["RB205_fcc_drone", objNull, true];
	_fcc setVariable ["RB205_fcc_droneReadyAt", CBA_missionTime + RB205_fcc_droneCooldown, true];
}];

["RB205_fcc_hint", ["Prowler recon droid airborne. Take control via the action menu."], _unit] call CBA_fnc_targetEvent;

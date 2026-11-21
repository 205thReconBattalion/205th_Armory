/*
 * Bestätigungs-Button des Holo-Fensters. Nur auf Clients.
 * Errichten startet den Fortschrittsbalken, Abbauen geht direkt an den Server.
 */

private _data = uiNamespace getVariable ["RB205_fcc_confirmData", []];
uiNamespace setVariable ["RB205_fcc_confirmData", nil];
closeDialog 1;

_data params [["_fcc", objNull], ["_mode", ""]];
if (isNull _fcc) exitWith {};

if (_mode == "deploy") then {
	//Erst im nächsten Frame, damit sich das Fenster vorher sauber schließt
	[RB205_fcc_fnc_startDeploy, [_fcc]] call CBA_fnc_execNextFrame;
} else {
	["RB205_fcc_undeploy", [_fcc]] call CBA_fnc_serverEvent;
};

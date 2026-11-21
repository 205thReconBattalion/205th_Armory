/*
 * Holt die Aufklärungsdroide eines FCC zurück (löscht sie). Ohne Abklingzeit. Nur auf dem Server.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 */

params [["_fcc", objNull, [objNull]]];

if (!isServer) exitWith {};

private _drone = _fcc getVariable ["RB205_fcc_drone", objNull];
if (isNull _drone) exitWith {};
_fcc setVariable ["RB205_fcc_drone", objNull, true];

{_drone deleteVehicleCrew _x} forEach crew _drone;
deleteVehicle _drone;

/*
 * Baut ein Forward Command Center ab. Nur auf dem Server.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 *
 * Example:
 * ["RB205_fcc_undeploy", [_fcc]] call CBA_fnc_serverEvent;
 */

params [["_fcc", objNull, [objNull]]];

if (!isServer) exitWith {};
if (!alive _fcc || {!(_fcc getVariable ["RB205_fcc_deployed", false])}) exitWith {};

_fcc animateSource ["ramp", 2];
playSound3D ["A3\Sounds_F\structures\doors\ServoRamp\ServoRampSound_1.wss", _fcc];

[_fcc, true] call RB205_fcc_fnc_removeFeatures;
_fcc setVariable ["RB205_fcc_deployed", false, true];

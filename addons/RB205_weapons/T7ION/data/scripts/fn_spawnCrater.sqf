// Leaves a small crater under a human or droid hit directly by the T-7. Runs on the server.
params ["_unit"];

if (!(_unit isKindOf "CAManBase") || {!isNull objectParent _unit}) exitWith {};

// Finds the real surface below the feet, which can also be a floor or a roof.
private _feet = getPosASL _unit;
private _surfaces = lineIntersectsSurfaces [_feet vectorAdd [0, 0, 0.5], _feet vectorAdd [0, 0, -1.5], _unit, objNull, true, 1];
if (_surfaces isEqualTo []) exitWith {};
(_surfaces select 0) params ["_surfacePos", "_surfaceNormal"];

private _crater = createSimpleObject ["Crater", _surfacePos];

// Changing the orientation resets the scale, so it has to be set first.
_crater setVectorUp _surfaceNormal;
_crater setObjectScale 0.3;

// Removed after 5 minutes, so craters do not pile up during a long mission.
[{deleteVehicle _this}, _crater, 300] call CBA_fnc_waitAndExecute;

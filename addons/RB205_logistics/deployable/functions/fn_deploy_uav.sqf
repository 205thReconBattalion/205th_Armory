if !(hasInterface) exitWith {false;};

params [
	["_unit",objNull,[objNull]],
	["_item","",[""]]
];

if (_item isEqualTo "") exitWith {}; 

closeDialog 602;
[_unit, "AmovPercMrunSlowWrflDf_AmovPercMstpSrasWrflDnon_gthStart"] remoteExec ["switchMove", 0];

private _vehicletype = nil;
_vehicletype = "RB205_prowler";

private _dir = getDir _unit;
private _uav = ([getPos _unit, _dir, _vehicletype,  side _unit] call BIS_fnc_spawnVehicle) select 0;

true;
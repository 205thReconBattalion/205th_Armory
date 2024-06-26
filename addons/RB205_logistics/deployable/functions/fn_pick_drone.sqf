if !(hasInterface) exitWith {};

params [
	["_drone",objNull,[objNull]]
];

if (isNull _drone) exitWith {}; 

private _pos = getPosATL _drone;
private _dir = getDir _drone;

deleteVehicle _drone;
[player, "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] remoteExec ["switchMove", 0];		
private _drone = createVehicle ["RB205_prowler_packed", _pos, [], 0, "CAN_COLLIDE"];
_drone setDir _dir;
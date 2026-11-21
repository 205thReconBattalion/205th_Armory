// Spark sound and particles on an object hit by the ion disruptor. Local effects only.
params ["_target"];

if (!hasInterface) exitWith {};

_target say3D selectRandom ["spark1","spark11","spark2","spark22","spark4"];

private _e_static = "#particlesource" createVehicleLocal (getPosATL _target);
_e_static setParticleCircle [1, [0, 0, 0]];
_e_static setParticleRandom [0.35, [0.5, 0.5, 0.5], [0.175, 0.175, 0.175], 0.15, 0.05, [0, 0, 0, 1], 1, 0];
_e_static setParticleParams [["\A3\data_f\blesk1", 1, 0, 1], "", "SpaceObject", 1, 0.35, [0, 0, 0], [0, 0, -2], 0.05, 10, 7.9,0, [0, 0.0175, 0], [[1, 1, 0.1, 1], [1, 1, 1, 1]], [0.01], 1, 0, "", "", _target, 0, false, -1, [[100,100,100,1],[0,0,1,0.01]]];
_e_static setDropInterval 0.35;

[{deleteVehicle _this}, _e_static, 1] call CBA_fnc_waitAndExecute;

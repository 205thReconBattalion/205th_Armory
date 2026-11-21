/*
 * Errichtet ein Forward Command Center. Nur auf dem Server.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 *
 * Example:
 * ["RB205_fcc_deploy", [_fcc]] call CBA_fnc_serverEvent;
 */

params [["_fcc", objNull, [objNull]]];

if (!isServer) exitWith {};
if (!alive _fcc || {_fcc getVariable ["RB205_fcc_deployed", false]}) exitWith {};                   //Schutz gegen doppeltes Errichten
_fcc setVariable ["RB205_fcc_deployed", true, true];
_fcc setVariable ["RB205_fcc_contested", false, true];

_fcc animateSource ["ramp", 0];
playSound3D ["A3\Sounds_F\structures\doors\ServoRamp\ServoRampSound_1.wss", _fcc];

private _respawn = [missionNamespace, _fcc, "Forward Command Center"] call BIS_fnc_addRespawnPosition;

//GNK- und Medical-Droide. Versatz und Drehung relativ zum Standpunkt des FCC (im Editor ausgemessen).
private _origin = _fcc worldToModel ASLToAGL getPosASL _fcc;
private _droids = [
	["RB205_droid_gonk", [-0.189, -1.717, 0.995], 195.687],
	["RB205_droid_med", [0.868, -1.925, 0.995], 111.537]
] apply {
	_x params ["_class", "_offset", "_direction"];

	private _droid = createVehicle [_class, [0, 0, 0], [], 0, "CAN_COLLIDE"];
	_droid setPosASL AGLToASL (_fcc modelToWorld (_origin vectorAdd _offset));
	_droid attachTo [_fcc];                                                                           //Ohne Versatz: aktuelle relative Position bleibt
	_droid setDir _direction;                                                                         //Bei angehängten Objekten relativ zum FCC

	//Die Droiden gehören zum FCC und sollen nicht weggetragen oder verladen werden
	[_droid, false, [0, 1.2, 0], 0, false, true] call ace_dragging_fnc_setDraggable;
	[_droid, false, [0, 1.2, 0], 0, false, true] call ace_dragging_fnc_setCarryable;
	[_droid, -1] call ace_cargo_fnc_setSize;
	_droid
};

private _marker = createMarker [format ["RB205_fcc_mapMarker_%1", hashValue _fcc], _fcc];             //Eindeutiger Name pro FCC
_marker setMarkerType "JLTS_loc_commandpost";

[_fcc, 10] call ace_cargo_fnc_setSpace;

private _crates = [                                                                                   //Resupply- und Befestigungskisten
	"RB205_resupply_weapons_arsenal",
	"RB205_resupply_medical_arsenal",
	"RB205_resupply_equipment_arsenal",
	"RB205_resupply_complete_arsenal",
	"RB205_resupply_base",
	"RB205_fcc_fortificationCrate"
] apply {
	private _crate = _x createVehicle (getPos _fcc);
	[_crate, _fcc, true] call ace_cargo_fnc_loadItem;
	_crate
};

[_fcc, true] call RB205_fcc_fnc_setService;

_fcc setVariable ["RB205_fcc_deployData", [_respawn, _droids, _marker, _crates]];

["RB205_fcc_notification", ["RB205_RespawnModule_text"]] call CBA_fnc_globalEvent;

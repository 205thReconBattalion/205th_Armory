/*
 * Ermittelt das NATO-Symbol einer Gruppe anhand ihrer Fahrzeuge.
 *
 * Arguments:
 * 0: Gruppe <GROUP>
 *
 * Return Value:
 * Marker-Typ, z.B. "o_armor" <STRING>
 */

params [["_group", grpNull, [grpNull]]];

private _prefix = switch (side _group) do {
	case west: {"b_"};
	case east: {"o_"};
	case independent: {"n_"};
	default {""};
};

private _vehicles = [];
private _infantry = 0;
private _cars = 0;
private _apcs = 0;
private _tanks = 0;
private _antiAir = 0;
private _helicopters = 0;
private _planes = 0;
private _uavs = 0;
private _boats = 0;
private _artillery = 0;
private _mortars = 0;
private _rearm = 0;
private _repair = 0;
private _refuel = 0;
private _medic = 0;

{
	private _vehicle = vehicle _x;
	if (_vehicle isEqualTo _x) then {
		_infantry = _infantry + 1;
	} else {
		if (alive _vehicle && {!(_vehicle in _vehicles)}) then {
			_vehicles pushBack _vehicle;
			private _config = configOf _vehicle;

			if (_vehicle isKindOf "Car") then {_cars = _cars + 1};
			if (_vehicle isKindOf "Tank") then {_tanks = _tanks + 1};
			if (
				_vehicle isKindOf "Wheeled_APC_F"
				|| {_vehicle isKindOf "APC_Tracked_01_base_F"}
				|| {_vehicle isKindOf "APC_Tracked_02_base_F"}
				|| {_vehicle isKindOf "APC_Tracked_03_base_F"}
			) then {_apcs = _apcs + 1};
			if (getNumber (_config >> "radarType") > 0) then {_antiAir = _antiAir + 1};
			if (getNumber (_config >> "artilleryScanner") > 0 || {_vehicle isKindOf "StaticCannon"}) then {_artillery = _artillery + 1};
			if (_vehicle isKindOf "StaticMortar") then {_mortars = _mortars + 1};
			if (_vehicle isKindOf "Helicopter") then {_helicopters = _helicopters + 1};
			if (_vehicle isKindOf "Plane") then {_planes = _planes + 1};
			if (unitIsUAV _vehicle) then {_uavs = _uavs + 1};
			if (_vehicle isKindOf "Ship") then {_boats = _boats + 1};
			if (getNumber (_config >> "attendant") > 0) then {_medic = _medic + 1};
			if (getNumber (_config >> "transportAmmo") > 0) then {_rearm = _rearm + 1};
			if (getNumber (_config >> "transportFuel") > 0) then {_refuel = _refuel + 1};
			if (getNumber (_config >> "transportRepair") > 0) then {_repair = _repair + 1};
		};
	};
} forEach units _group;

//Spätere Zeilen haben Vorrang
private _type = "unknown";
if (_infantry > 0) then {_type = "inf"};
if (_cars > 0) then {_type = "motor_inf"};
if (_tanks > 0) then {_type = "armor"};
if (_apcs > 0) then {_type = "mech_inf"};
if (_antiAir > 0) then {_type = "antiair"};
if (_artillery > 0) then {_type = "art"};
if (_mortars > 0) then {_type = "mortar"};
if (_rearm + _refuel > 0) then {_type = "support"};
if (_repair > 0) then {_type = "maint"};
if (_medic > 0) then {_type = "med"};
if (_medic + _rearm + _refuel + _repair > 1) then {_type = "support"};
if (_boats > 0) then {_type = "naval"};
if (_helicopters > 0) then {_type = "air"};
if (_planes > 0) then {_type = "plane"};
if (_uavs > 0) then {_type = "uav"};

_prefix + _type

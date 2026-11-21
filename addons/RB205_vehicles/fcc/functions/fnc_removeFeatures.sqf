/*
 * Entfernt alles, was beim Errichten erzeugt wurde. Nur auf dem Server.
 * Kisten werden nur beim Abbauen gelöscht. Bei Zerstörung werden nur die geladenen Kisten gelöscht (siehe XEH_postInit),
 * bereits abgeladene bleiben stehen.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 * 1: Kisten entfernen <BOOL>
 * 2: FCC wird gerade gelöscht <BOOL> (default: false)
 */

params ["_fcc", "_removeCrates", ["_isDeleted", false]];

(_fcc getVariable ["RB205_fcc_deployData", []]) params [
	["_respawn", []],
	["_droids", []],
	["_marker", ""],
	["_crates", []]
];
_fcc setVariable ["RB205_fcc_deployData", nil];

if (_respawn isNotEqualTo []) then {
	_respawn call BIS_fnc_removeRespawnPosition;
};
{deleteVehicle _x} forEach _droids;
deleteMarker _marker;
_fcc call RB205_fcc_fnc_recallDrone;
_fcc setVariable ["RB205_fcc_respawnBlocked", false];

//Ein gerade gelöschtes Objekt braucht keine neuen globalen Variablen mehr
if (!_isDeleted) then {
	[_fcc, false] call RB205_fcc_fnc_setService;
	_fcc setVariable ["RB205_fcc_contested", false, true];
};

if (_removeCrates) then {
	{
		//Kisten können inzwischen ausgeladen oder in ein anderes Fahrzeug geladen worden sein
		private _holder = attachedTo _x;
		if (!isNull _holder && {_x in (_holder getVariable ["ace_cargo_loaded", []])}) then {
			[_x, _holder] call ace_cargo_fnc_removeCargoItem;                                        //Löscht die Kiste und gibt den Laderaum frei
		} else {
			deleteVehicle _x;
		};
	} forEach (_crates select {!isNull _x});
};

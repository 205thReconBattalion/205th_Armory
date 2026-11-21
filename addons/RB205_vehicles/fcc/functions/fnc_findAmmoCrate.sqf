/*
 * Sucht eine ACE-Munitionskiste (z.B. RB205_veh_ammo_crate) am FCC, die eingelagert werden kann.
 * Kisten, die gerade getragen werden oder in einem Fahrzeug geladen sind, zählen nicht.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 *
 * Return Value:
 * Munitionskiste oder objNull <OBJECT>
 */

params [["_fcc", objNull, [objNull]]];

private _crates = (_fcc nearObjects 12) select {
	_x isNotEqualTo _fcc
	&& {alive _x}
	&& {isNull attachedTo _x}
	&& {!(_x isKindOf "AllVehicles")}
	&& {[_x] call ace_rearm_fnc_isSource}
};

_crates param [0, objNull]

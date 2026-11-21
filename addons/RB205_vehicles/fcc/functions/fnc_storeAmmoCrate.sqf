/*
 * Lagert den Vorrat einer Munitionskiste im FCC ein. Nur auf dem Server.
 * Es wird nur so viel übernommen, wie ins FCC passt. Eine leere Kiste wird gelöscht.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 * 1: Munitionskiste <OBJECT>
 * 2: Spieler für die Rückmeldung <OBJECT> (default: objNull)
 */

params [["_fcc", objNull, [objNull]], ["_crate", objNull, [objNull]], ["_unit", objNull, [objNull]]];

if (!isServer) exitWith {};
if (!alive _fcc || {!(_fcc getVariable ["RB205_fcc_deployed", false])}) exitWith {};
if ((missionNamespace getVariable ["ace_rearm_supply", 0]) != 1) exitWith {};

//Erneut prüfen, die Lage kann sich seit der Interaktion geändert haben
if (
	!alive _crate
	|| {!isNull attachedTo _crate}
	|| {(_crate distance _fcc) > 15}
	|| {_crate isKindOf "AllVehicles"}
	|| {!([_crate] call ace_rearm_fnc_isSource)}
) exitWith {};

private _stored = (_fcc getVariable ["ace_rearm_currentSupply", 0]) max 0;
private _space = RB205_fcc_ammoCapacity - _stored;
if (_space <= 0) exitWith {
	["RB205_fcc_hint", ["Ammunition stores are already full."], _unit] call CBA_fnc_targetEvent;
};

private _crateSupply = [_crate] call ace_rearm_fnc_getSupplyCount;
private _transfer = _crateSupply min _space;
if (_transfer <= 0) exitWith {
	["RB205_fcc_hint", ["This crate is empty."], _unit] call CBA_fnc_targetEvent;
};

[_fcc, _stored + _transfer] call ace_rearm_fnc_setSupplyCount;

if (_crateSupply - _transfer <= 0) then {
	deleteVehicle _crate;
} else {
	[_crate, _crateSupply - _transfer] call ace_rearm_fnc_setSupplyCount;
};

["RB205_fcc_hint", [format ["%1 supply points stockpiled (%2 / %3).", round _transfer, round (_stored + _transfer), round RB205_fcc_ammoCapacity]], _unit] call CBA_fnc_targetEvent;

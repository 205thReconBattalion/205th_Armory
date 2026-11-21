/*
 * Schaltet Reparieren, Aufmunitionieren und Betanken über ACE ein oder aus. Nur auf dem Server.
 * Beim Ausschalten wird der Restbestand gespeichert und beim nächsten Einschalten wiederhergestellt.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 * 1: Einschalten <BOOL>
 *
 * Die ACE-Variablen werden teilweise direkt gesetzt, weil ACE keine öffentliche Funktion
 * zum vorübergehenden Abschalten einer Quelle hat:
 * ace_rearm_currentSupply < 0 deaktiviert eine Munitionsquelle (siehe ace_rearm_fnc_isSource),
 * ace_refuel_capacity = -1 blendet die Tank-Aktionen aus (siehe ace_refuel XEH_postInit).
 */

//Anschluss des Tankschlauchs in Modellkoordinaten [rechts, vorne, oben]: Mitte der Rückwand, ca. 0,9 m über dem Boden.
//Das Modell reicht von -4,74 bis 4,74 m (hinten/vorne) und von -2,06 bis 2,06 m (unten/oben).
#define FUEL_HOOK [0, -4.5, -1.2]

params ["_fcc", "_enable"];

if (_enable) then {
	_fcc setVariable ["ACE_isRepairVehicle", true, true];

	if (RB205_fcc_ammoCapacity > 0) then {
		private _ammo = (_fcc getVariable ["RB205_fcc_storedAmmo", RB205_fcc_ammoCapacity]) min RB205_fcc_ammoCapacity;
		[_fcc, _ammo] call ace_rearm_fnc_makeSource;
	};

	if (RB205_fcc_fuelCapacity > 0) then {
		private _fuel = (_fcc getVariable ["RB205_fcc_storedFuel", RB205_fcc_fuelCapacity]) min RB205_fcc_fuelCapacity;

		//makeSource legt die ACE-Aktionen nur beim ersten Mal an, danach reicht die Kapazität
		if (isNil {_fcc getVariable "ace_refuel_initSource_jipID"}) then {
			[_fcc, RB205_fcc_fuelCapacity, [FUEL_HOOK]] call ace_refuel_fnc_makeSource;
		} else {
			_fcc setVariable ["ace_refuel_capacity", RB205_fcc_fuelCapacity, true];
		};
		[_fcc, _fuel] call ace_refuel_fnc_setFuel;
	};
} else {
	private _ammo = _fcc getVariable ["ace_rearm_currentSupply", -1];
	if (_ammo >= 0) then {
		_fcc setVariable ["RB205_fcc_storedAmmo", _ammo];
	};
	_fcc setVariable ["ace_rearm_currentSupply", -1, true];

	if ((_fcc getVariable ["ace_refuel_capacity", -1]) > 0) then {
		_fcc setVariable ["RB205_fcc_storedFuel", [_fcc] call ace_refuel_fnc_getFuel];
	};
	_fcc setVariable ["ace_refuel_currentFuelCargo", 0, true];                                       //Beendet auch laufendes Tanken
	_fcc setVariable ["ace_refuel_capacity", -1, true];

	_fcc setVariable ["ACE_isRepairVehicle", false, true];
};

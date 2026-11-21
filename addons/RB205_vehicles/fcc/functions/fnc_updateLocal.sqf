/*
 * Läuft alle 2 s auf jeder Maschine.
 * - Das Radar ist nur im aufgebauten Zustand aktiv. enableVehicleSensor wirkt nur lokal,
 *   deshalb auf allen Maschinen ausführen (auch nach einem Besitzerwechsel).
 * - getSensorTargets funktioniert nur dort, wo das FCC lokal ist. Der Besitzer verteilt
 *   die Radar-Kontakte deshalb über eine globale Variable an alle (für das Karten-Intel).
 */

RB205_fcc_registry = RB205_fcc_registry - [objNull];

{
	private _fcc = _x;
	private _active = alive _fcc && {_fcc getVariable ["RB205_fcc_deployed", false]};
	_fcc enableVehicleSensor ["ActiveRadarSensorComponent", _active];

	if (local _fcc) then {
		private _contacts = [];
		if (_active && {RB205_fcc_intelRadarContacts}) then {
			{
				_x params ["_target", "_type", "_relationship"];
				if (_relationship != "friendly" && {alive _target}) then {
					_contacts pushBack [_target, _type == "air", _relationship];
				};
			} forEach getSensorTargets _fcc;
		};

		//Nur bei Änderungen senden
		if (_contacts isNotEqualTo (_fcc getVariable ["RB205_fcc_radarContacts", []])) then {
			_fcc setVariable ["RB205_fcc_radarContacts", _contacts, true];
		};
	};
} forEach RB205_fcc_registry;

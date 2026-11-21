/*
 * Angriffsalarm. Läuft alle 5 s auf dem Server.
 * Sind genug Feinde im Umkreis eines aufgebauten FCC, gilt es als angegriffen:
 * Sirene, Meldung an alle und (optional) Respawn gesperrt. Erst nach 15 s ohne Feinde wieder sicher.
 */

#define SIREN_SOUND "3as\3as_props\SoundProps\Sounds\Siren1.ogg"
#define SIREN_INTERVAL 15
#define CLEAR_CHECKS 3

{
	private _fcc = _x;
	if (!alive _fcc || {!(_fcc getVariable ["RB205_fcc_deployed", false])}) then {continue};

	private _side = [getNumber (configOf _fcc >> "side")] call BIS_fnc_sideType;
	private _enemies = 0;
	{
		private _units = if (_x isKindOf "CAManBase") then {[_x]} else {crew _x};
		{
			if (alive _x && {!captive _x} && {[_side, side group _x] call BIS_fnc_sideIsEnemy}) then {
				_enemies = _enemies + 1;
			};
		} forEach _units;
	} forEach (_fcc nearEntities [["CAManBase", "LandVehicle", "Air", "Ship"], RB205_fcc_alarmRadius]);

	private _contested = _fcc getVariable ["RB205_fcc_contested", false];

	if (_enemies >= RB205_fcc_alarmThreshold) then {
		_fcc setVariable ["RB205_fcc_clearChecks", 0];

		if (!_contested) then {
			_fcc setVariable ["RB205_fcc_contested", true, true];
			_fcc setVariable ["RB205_fcc_nextSiren", 0];

			//Meldungen höchstens eine kurze Zeile, längere Texte schneidet die Benachrichtigung ab
			private _text = "Under attack!";
			if (RB205_fcc_alarmRespawnBlock) then {
				private _data = _fcc getVariable ["RB205_fcc_deployData", []];
				private _respawn = _data param [0, []];
				if (_respawn isNotEqualTo []) then {
					_respawn call BIS_fnc_removeRespawnPosition;
					_data set [0, []];
					_fcc setVariable ["RB205_fcc_respawnBlocked", true];
					_text = "Under attack! Respawn suspended.";
				};
			};

			if (RB205_fcc_alarmNotification) then {
				["RB205_fcc_notification", ["RB205_fcc_underAttack", [_text]]] call CBA_fnc_globalEvent;
			};
		};

		if (RB205_fcc_alarmSiren && {CBA_missionTime >= (_fcc getVariable ["RB205_fcc_nextSiren", 0])}) then {
			playSound3D [SIREN_SOUND, objNull, false, getPosASL _fcc, 3, 1, 400];
			_fcc setVariable ["RB205_fcc_nextSiren", CBA_missionTime + SIREN_INTERVAL];
		};
	} else {
		if (_contested) then {
			private _clearChecks = (_fcc getVariable ["RB205_fcc_clearChecks", 0]) + 1;
			_fcc setVariable ["RB205_fcc_clearChecks", _clearChecks];

			if (_clearChecks >= CLEAR_CHECKS) then {
				_fcc setVariable ["RB205_fcc_contested", false, true];

				private _text = "Area secured.";
				if (_fcc getVariable ["RB205_fcc_respawnBlocked", false]) then {
					private _data = _fcc getVariable ["RB205_fcc_deployData", []];
					if (_data isNotEqualTo []) then {
						_data set [0, [missionNamespace, _fcc, "Forward Command Center"] call BIS_fnc_addRespawnPosition];
					};
					_fcc setVariable ["RB205_fcc_respawnBlocked", false];
					_text = "Area secured. Respawn restored.";
				};

				if (RB205_fcc_alarmNotification) then {
					["RB205_fcc_notification", ["RB205_fcc_secured", [_text]]] call CBA_fnc_globalEvent;
				};
			};
		};
	};
} forEach RB205_fcc_registry;

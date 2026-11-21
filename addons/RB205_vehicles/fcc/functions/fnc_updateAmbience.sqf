/*
 * Atmosphäre: leise Konsolengeräusche und gelegentlicher Funkverkehr an einem aufgebauten FCC.
 * Läuft jede Sekunde auf jedem Client. Alle Sounds werden nur lokal abgespielt,
 * damit jeder Spieler sie über die Addon-Optionen selbst ein- und ausschalten kann.
 * Sounds aus 3AS: Republik-Konsole (terminal_data2) und Kommunikator-Terminal (terminal_short_communicator).
 */

#define CONSOLE_SOUND "3as\3as_Terrain_Universal\Terrain_Sounds\terminal_data2.ogg"
#define RADIO_SOUND "3as\3as_Terrain_Universal\Terrain_Sounds\terminal_short_communicator.ogg"
#define RADIO_LENGTH 120
#define RANGE 15

if (isNil "RB205_fcc_ambience") then {
	RB205_fcc_ambience = [objNull, -1, -1, 0, 0];                                                    //[FCC, Konsolen-ID, Funk-ID, Funk-Ende, nächster Funk]
};
RB205_fcc_ambience params ["_current", "_consoleId", "_radioId", "_radioEnd", "_nextRadio"];

private _fcc = objNull;
{
	if (alive _x && {_x getVariable ["RB205_fcc_deployed", false]} && {(player distance _x) < RANGE}) exitWith {
		_fcc = _x;
	};
} forEach RB205_fcc_registry;

//Anderes oder kein FCC in der Nähe: alles stoppen
if (_fcc isNotEqualTo _current) then {
	if (_consoleId >= 0) then {stopSound _consoleId};
	if (_radioId >= 0) then {stopSound _radioId};
	_consoleId = -1;
	_radioId = -1;
	_nextRadio = time + 5 + random 15;
};

if (isNull _fcc) exitWith {
	RB205_fcc_ambience = [objNull, -1, -1, 0, _nextRadio];
};

private _position = getPosASL _fcc;

//Konsole: Endlosschleife
if (RB205_fcc_ambienceConsole && {RB205_fcc_ambienceVolume > 0}) then {
	if (_consoleId < 0 || {(soundParams _consoleId) isEqualTo []}) then {
		_consoleId = playSound3D [CONSOLE_SOUND, objNull, false, _position, RB205_fcc_ambienceVolume, 1, RANGE, 0, true, true];
	};
} else {
	if (_consoleId >= 0) then {stopSound _consoleId};
	_consoleId = -1;
};

//Funk: alle 30 bis 90 s ein kurzer Ausschnitt aus dem Kommunikator-Funkverkehr
if (RB205_fcc_ambienceRadio && {RB205_fcc_ambienceVolume > 0}) then {
	if (_radioId >= 0 && {time > _radioEnd || {(soundParams _radioId) isEqualTo []}}) then {
		stopSound _radioId;
		_radioId = -1;
		_nextRadio = time + 30 + random 60;
	};
	if (_radioId < 0 && {time > _nextRadio}) then {
		_radioId = playSound3D [RADIO_SOUND, objNull, false, _position, RB205_fcc_ambienceVolume, 1, RANGE, random (RADIO_LENGTH - 15), true];
		_radioEnd = time + 5 + random 7;
	};
} else {
	if (_radioId >= 0) then {stopSound _radioId};
	_radioId = -1;
};

RB205_fcc_ambience = [_fcc, _consoleId, _radioId, _radioEnd, _nextRadio];

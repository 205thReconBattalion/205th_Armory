/*
 * Drohnensteuerung ohne eigenes UAV-Terminal. Läuft alle 0,5 s auf jedem Client.
 * Sitzt der Spieler auf dem Commander-Sitz eines aufgebauten FCC mit Aufklärungsdroide,
 * bekommt er vorübergehend ein UAV-Terminal in den GPS-Platz und wird mit der Droide verbunden.
 * Beim Aussteigen (oder wenn die Droide weg ist) wird sein ursprünglicher Gegenstand zurückgegeben.
 */

#define TERMINAL "B_UavTerminal"

if (isNil "RB205_fcc_droneLink") then {
	RB205_fcc_droneLink = [];                                                                         //[Einheit, verbundene Droide, ursprünglicher GPS-Gegenstand]
};

private _drone = objNull;
private _fcc = objectParent player;

if (
	alive player
	&& {!isNull _fcc}
	&& {_fcc isKindOf "RB205_fcc"}
	&& {alive _fcc}
	&& {player isEqualTo gunner _fcc}
	&& {_fcc getVariable ["RB205_fcc_deployed", false]}
) then {
	_drone = _fcc getVariable ["RB205_fcc_drone", objNull];

	//Außerhalb der Reichweite bricht die Verbindung ab und die Droide fliegt zurück
	if (alive _drone && {RB205_fcc_droneRange > 0} && {(_drone distance2D _fcc) > RB205_fcc_droneRange}) then {
		_drone = objNull;
		if (time > (missionNamespace getVariable ["RB205_fcc_droneReturnSent", -1]) + 10) then {
			RB205_fcc_droneReturnSent = time;
			["RB205_fcc_droneReturn", [_fcc]] call CBA_fnc_serverEvent;
			["Uplink lost. The recon droid is returning to the command post.", 3] call ace_common_fnc_displayTextStructured;
		};
	};
};

if (alive _drone) then {
	if (RB205_fcc_droneLink isEqualTo []) then {
		private _index = (assignedItems player) findIf {((_x call BIS_fnc_itemType) select 1) in ["GPS", "UAVTerminal"]};
		private _gpsItem = if (_index < 0) then {""} else {(assignedItems player) select _index};
		if (_gpsItem != "") then {player unlinkItem _gpsItem};
		player linkItem TERMINAL;
		RB205_fcc_droneLink = [player, objNull, _gpsItem];
	};

	if ((RB205_fcc_droneLink select 1) isNotEqualTo _drone) then {
		player connectTerminalToUAV _drone;
		RB205_fcc_droneLink set [1, _drone];
	};
} else {
	if (RB205_fcc_droneLink isNotEqualTo []) then {
		RB205_fcc_droneLink params ["_unit", "", "_gpsItem"];
		RB205_fcc_droneLink = [];
		if (isNull _unit) exitWith {};

		//Nach einem Respawn gehört das Terminal der alten Einheit, die neue bleibt unberührt
		if (_unit isEqualTo player) then {
			player connectTerminalToUAV objNull;
		};
		_unit unlinkItem TERMINAL;
		if (_gpsItem != "") then {_unit linkItem _gpsItem};
	};
};

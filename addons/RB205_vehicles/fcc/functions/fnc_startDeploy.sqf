/*
 * Fortschrittsbalken beim Errichten. Dauer aus der Addon-Option RB205_fcc_deployDuration. Nur auf Clients.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 */

params [["_fcc", objNull, [objNull]]];

if (RB205_fcc_deployDuration <= 0) exitWith {
	["RB205_fcc_deploy", [_fcc]] call CBA_fnc_serverEvent;
};

[
	RB205_fcc_deployDuration,
	[_fcc],
	{
		(_this select 0) params ["_fcc"];
		["RB205_fcc_deploy", [_fcc]] call CBA_fnc_serverEvent;
	},
	{},
	"Establishing tactical uplink...",
	{
		(_this select 0) params ["_fcc"];
		alive _fcc
		&& {!(_fcc getVariable ["RB205_fcc_deployed", false])}
		&& {(ACE_player distance _fcc) < 15};
	}
] call ace_common_fnc_progressBar;

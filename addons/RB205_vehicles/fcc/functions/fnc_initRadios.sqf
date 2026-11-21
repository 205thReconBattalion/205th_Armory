/*
 * Stellt die LR-Funkgeräte des FCC (Commander und alle Passagierplätze) auf die Standardfrequenzen ein.
 * Nur auf dem Server. Bereits vorhandene Einstellungen (z.B. von Spielern geändert) bleiben erhalten.
 *
 * Arguments:
 * 0: FCC <OBJECT>
 */

params [["_fcc", objNull, [objNull]]];

if (!isServer || {isNull _fcc}) exitWith {};

//Verschlüsselung wie beim Funkrucksack, damit Rucksack und FCC sich hören
private _codeVariable = getText (configFile >> "CfgVehicles" >> getText (configOf _fcc >> "tf_RadioType") >> "tf_encryptionCode");

//TFAR muss initialisiert sein. Ohne TFAR passiert nach 30 s einfach nichts.
[{
	params ["", "_codeVariable"];
	!isNil "TFAR_fnc_generateLrSettings"
	&& {!isNil "TFAR_default_radioVolume"}
	&& {_codeVariable == "" || {!isNil _codeVariable}}
}, {
	params ["_fcc", "_codeVariable"];
	if (isNull _fcc) exitWith {};

	private _frequencies = ["50", "55", "50.1", "51", "52", "53", "55.1", "55.2"];
	private _code = missionNamespace getVariable [_codeVariable, ""];

	//Commander-Sitz und Passagierplätze, Namen wie in TFAR_fnc_vehicleLr
	private _radios = ["gunner_radio_settings"] + ((getArray (configOf _fcc >> "TFAR_AdditionalLR_Cargo")) apply {
		format ["cargoUnit_%1_radio_setting", _x]
	});

	{
		private _radio = _x;
		if (isNil {_fcc getVariable _radio}) then {
			private _settings = true call TFAR_fnc_generateLrSettings;                               //Kanal 9 behält eine zufällige Frequenz
			private _channels = _settings select 2;
			{
				_channels set [_forEachIndex, _x];
			} forEach _frequencies;
			_settings set [0, 0];                                                                    //Kanal 1 aktiv
			_settings set [4, _code];
			_fcc setVariable [_radio, _settings, true];
		};
	} forEach _radios;
}, [_fcc, _codeVariable], 30] call CBA_fnc_waitUntilAndExecute;

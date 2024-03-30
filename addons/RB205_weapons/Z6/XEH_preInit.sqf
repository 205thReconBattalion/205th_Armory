_category = ["205th Recon Battalion - Weapons", "Z-6 Rotary Blaster"];

["RB205_setting_z6shield_timeToLive", "TIME", ["Schild Aktivierungszeit", "Zeit, die das Schild aktiv bleibt"], _category, [0, 300, 30], 1] call cba_settings_fnc_init;

["RB205_setting_z6shield_cooldownTimer", "TIME", ["Schild Cooldown-Zeit", "Zeit, die es dauert bis das Schild nach dem deaktivieren wieder einsetzbar ist"], _category, [0, 1800, 120], 1] call cba_settings_fnc_init;

//["RB205_setting_z6shield_showAceInteractions", "CHECKBOX", ["ACE Interaktionen anzeigen", "Sollen die ACE Interaktionen zum (De-)Aktivieren des Schildes angezeigt werden?"], _category, true] call cba_settings_fnc_init;

["RB205_setting_z6shield_showProgressbarForCooldown", "CHECKBOX", ["Cooldown-Balken anzeigen", "Soll eine Fortschrittanzeige angezeigt werden, die angibt, wann das Schild wieder einsatzbereit ist?"], _category, true] call cba_settings_fnc_init;



#include "\a3\ui_f\hpp\defineDIKCodes.inc"

[_category, "", ["Schild aktivieren/deaktivieren", "Taste zum aktivieren bzw. vorzeitigen deaktivieren des Schildes"],
{
	//hint "KEY DOWN";
	_this call RB205_z6_fnc_activateShield
},
{}, [DIK_TAB, [false, false, false]]] call CBA_fnc_addKeybind;
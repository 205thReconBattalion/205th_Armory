/*
 * Author: Spark (205th Recon Battalion)
 * Deletes the AT-RT to simulate Loading him into another vehicle
 *
 * Arguments:
 * atrt: Object - The AT-RT to teleport
 *
 * Return Value:
 * None
 *
 * Example:
 * atrt call RB205_fnc_disassembleATRT;
 */

params ["_atrt"];

atrtHelp = _atrt;
[
    ["Are you sure you want to disassemble the AT-RT? This will render the AT-RT useless and cannot be undone."],
    "Disassemble AT-RT",
    {
        if _confirmed then {
            deleteVehicle atrtHelp;
        };
    },
    "",
    ""
] call CAU_UserInputMenus_fnc_guiMessage;
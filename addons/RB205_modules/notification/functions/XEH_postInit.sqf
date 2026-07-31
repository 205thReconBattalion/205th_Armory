private _hasZEN = isClass (
    configFile >> "CfgPatches" >> "zen_custom_modules"
);

if (!_hasZEN) exitWith {
    diag_log "[RB205 Notification] Zeus Enhanced wurde nicht gefunden.";
};

[
    "205th Recon Battalion",
    "Nachricht senden",
    {
        params ["_position", "_attachedObject"];

        [
            "Nachricht an alle Spieler",
            [
                ["EDIT:MULTI","Nachricht: ",["",{},8],true]
            ],
            {
                params ["_values", "_arguments"];

                private _text = _values param [0, "", [""]];


                [
                    _text,
                    []
                ] remoteExecCall [
                    "RB205_notification_fnc_openDialog",
                    -2,
                    false
                ];
            },
            {},
            []
        ] call zen_dialog_fnc_create;
    },
    "\RB205_notification\UIElements\Hintergrund.paa"
] call zen_custom_modules_fnc_register;

[
    "205th Recon Battalion",
    "Nachricht senden Anim",
    {
        params ["_position", "_attachedObject"];

        [
            "Nachricht an alle Spieler",
            [
                ["EDIT:MULTI","Nachricht: ",["",{},8],true]
            ],
            {
                params ["_values", "_arguments"];

                private _text = _values param [0, "", [""]];


                [
                    _text,
                    []
                ] remoteExecCall [
                    "RB205_notification_fnc_openDialogSlow",
                    -2,
                    false
                ];
            },
            {},
            []
        ] call zen_dialog_fnc_create;
    },
    "\RB205_notification\UIElements\Hintergrund.paa"
] call zen_custom_modules_fnc_register;
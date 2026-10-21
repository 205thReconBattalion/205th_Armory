/*
 * Cabin Lights extracted from the supplied XEH_postInit.sqf.
 * Original light implementation: DartRuffian / 21st Auxiliary Assets.
 *
 * Started automatically by CfgFunctions, postInit = 1.
 * Register the killed handler on all machines. Light handlers and ACE
 * self-actions are registered on player clients only.
 */

if (missionNamespace getVariable ["RB205_vehicles_cabinLightsInitialized", false]) exitWith {};
missionNamespace setVariable ["RB205_vehicles_cabinLightsInitialized", true];

// Killed is local to the vehicle owner, which may be a server or headless client.
["AllVehicles", "killed", {
    params [["_vehicle", objNull, [objNull]]];
    if (isNull _vehicle || {!local _vehicle}) exitWith {};

    private _lightPositions = _vehicle call RB205_vehicles_fnc_getCabinLightPositions;
    if (_lightPositions isEqualTo []) exitWith {};

    _vehicle setVariable ["RB205_vehicles_cabinLightMode", 0, true];

    if (isMultiplayer) then {
        // Replace this vehicle's last color event with an off event for JIP clients.
        private _jipID = format ["RB205_vehicles_cabinLights_%1", netId _vehicle];
        ["RB205_vehicles_removeCabinLights", [_vehicle], _jipID] call CBA_fnc_globalEventJIP;
        [_jipID, _vehicle] call CBA_fnc_removeGlobalEventJIP;
    } else {
        ["RB205_vehicles_removeCabinLights", [_vehicle]] call CBA_fnc_localEvent;
    };

    nil;
}, true, ["CAManBase"]] call CBA_fnc_addClassEventHandler;

if (!hasInterface) exitWith {};

// This event is deliberately not stored for JIP. Only current occupants hear it.
["RB205_vehicles_cabinLightSignal", {
    params ["_vehicle", "_mode"];
    if (isNull _vehicle || {!alive _vehicle}) exitWith {};
    if (isNull player || {!alive player}) exitWith {};
    if (objectParent player isNotEqualTo _vehicle) exitWith {};
    if !(_mode in [1, 2]) exitWith {};

    // One stock Arma sound, with a low pitch for HOLD and a high pitch for GO.
    private _pitch = if (_mode == 1) then {0.65} else {1.4};
    playSoundUI ["A3\Sounds_F\sfx\blip1.wss", 0.8, _pitch];
}] call CBA_fnc_addEventHandler;

// Follow the synchronized mode, including after boarding, respawn and JIP.
// This local check sends no network events and never plays sounds itself.
[{
    call RB205_vehicles_fnc_updateCabinLightIndicator;
}, 0.1] call CBA_fnc_addPerFrameHandler;

["RB205_vehicles_removeCabinLights", {
    params ["_vehicle"];
    if (isNull _vehicle) exitWith {};

    {
        deleteVehicle _x;
    } forEach (_vehicle getVariable ["RB205_vehicles_cabinLights", []]);

    _vehicle setVariable ["RB205_vehicles_cabinLights", []];
}] call CBA_fnc_addEventHandler;

["RB205_vehicles_createCabinLights", {
    params ["_vehicle", "_color"];
    if (isNull _vehicle) exitWith {};

    // Remove this client's old lights before creating the new color.
    ["RB205_vehicles_removeCabinLights", [_vehicle]] call CBA_fnc_localEvent;

    // Also reject an older create event replayed for a vehicle that is now a wreck.
    if (!alive _vehicle) exitWith {};

    private _lightPositions = _vehicle call RB205_vehicles_fnc_getCabinLightPositions;
    private _lights = [];

    {
        private _light = "#lightreflector" createVehicleLocal [0, 0, 0];
        _light setLightColor _color;
        _light setLightAmbient _color;
        _light setLightIntensity 100;
        _light setLightConePars [180, 45, 1];
        _light attachTo [_vehicle, _x];
        [_light, -90, 0] call BIS_fnc_setPitchBank;
        _lights pushBack _light;
    } forEach _lightPositions;

    // Light objects stay local. Only the chosen mode is broadcast separately.
    _vehicle setVariable ["RB205_vehicles_cabinLights", _lights];

    if !(_vehicle getVariable ["RB205_vehicles_cabinLightsCleanupAdded", false]) then {
        _vehicle setVariable ["RB205_vehicles_cabinLightsCleanupAdded", true];
        _vehicle addEventHandler ["Deleted", {
            params ["_vehicle"];
            {
                deleteVehicle _x;
            } forEach (_vehicle getVariable ["RB205_vehicles_cabinLights", []]);
        }];
    };
}] call CBA_fnc_addEventHandler;

// Register through ACE's API so existing vehicle ACE_SelfActions are preserved.
// Inheritance also covers vehicle classes first encountered later in a mission.
// The condition hides this menu on vehicles without configured light positions.
private _parentAction = [
    "RB205_vehicles_cabinLights",
    "Cabin Lights",
    "",
    {},
    {
        params ["_target", "_player"];
        [_target, _player] call RB205_vehicles_fnc_canSetCabinLights && {
            [_player, _target, []] call ace_common_fnc_canInteractWith
        };
    }
] call ace_interact_menu_fnc_createAction;

["AllVehicles", 1, ["ACE_SelfActions"], _parentAction, true] call ace_interact_menu_fnc_addActionToClass;

{
    _x params ["_mode", "_displayName"];

    private _action = [
        format ["RB205_vehicles_cabinLights_%1", _mode],
        _displayName,
        "",
        {
            params ["_target", "_player", "_actionParams"];
            // Recheck access when executing, in case it changed while the menu was open.
            if !([_target, _player] call RB205_vehicles_fnc_canSetCabinLights) exitWith {};
            [_target, _actionParams select 0] call RB205_vehicles_fnc_setCabinLights;
        },
        {
            params ["_target", "_player", "_actionParams"];
            (_target getVariable ["RB205_vehicles_cabinLightMode", 0]) isNotEqualTo (_actionParams select 0);
        },
        {},
        [_mode]
    ] call ace_interact_menu_fnc_createAction;

    ["AllVehicles", 1, ["ACE_SelfActions", "RB205_vehicles_cabinLights"], _action, true] call ace_interact_menu_fnc_addActionToClass;
} forEach [
    [0, "Disabled"],
    [1, "<t color='#FF0000'>Red</t>"],
    [2, "<t color='#00FF00'>Green</t>"]
];

nil;

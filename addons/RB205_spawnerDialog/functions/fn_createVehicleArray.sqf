params ["_vehicleArray"];
_rb205_vehicles_applied = _vehicleArray apply {  
    [
        _x,
        getText (configFile >> "CfgVehicles" >> _x >> "displayName"),
        str getNumber (configFile >> "CfgVehicles" >> _x >> "ace_cargo_space"),
        getText (configFile >> "CfgVehicles" >> _x >> "icon"),
        str ([_x, true] call BIS_fnc_crewCount),
        _x regexReplace ["^([^_]+_[^_]+).*", "$1"]
    ]
};
_rb205_vehicles_applied;
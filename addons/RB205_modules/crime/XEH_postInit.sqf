private _hasZen = isClass (configFile >> "CfgPatches" >> "zen_custom_modules");

if !(_hasZen) exitWith
{
	diag_log "******CBA and/or ZEN not detected. They are required for this mod.";
};

if (!hasInterface) exitWith {};

["Wanted System", "Edit Criminal Records",
    {
        params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]];
        private _unit = _logic;
        if (!alive _unit || !(_unit isKindOf "CAManBase")) exitWith {
		    hint "No Unit selected";
	    };

        _currentEntry = _unit getVariable ["JLTS_contraband_var_infoCriminal",""];

        ["Add Entry", 
        [
            ["EDIT:MULTI","Eintrag: ",[_currentEntry,{},8],true]
        ],{

            params["_values","_arguments"];
            _newEntry = _values select 0;
            _unit = _arguments select 0;

            [_unit,_newEntry,"JLTS_contraband_var_infoCriminal"] call RB205_Modules_Crime_fnc_addEntry;
            
        
        },{},[_unit]] call zen_dialog_fnc_create;
    }, "\RB205_modules\crime\UIElements\addEntryModule.paa"
] call zen_custom_modules_fnc_register;	

["Wanted System", "Edit Special Info",
    {
        params [["_pos",[0,0,0],[[]],3], ["_logic",objNull,[objNull]]];
        private _unit = _logic;
        if (!alive _unit || !(_unit isKindOf "CAManBase")) exitWith {
		    hint "No Unit selected";
	    };

        _currentEntry = _unit getVariable ["JLTS_contraband_var_infoSpecial",""];

        ["Add Entry", 
        [
            ["EDIT:MULTI","Eintrag: ",[_currentEntry,{},8],true]
        ],{

            params["_values","_arguments"];
            _newEntry = _values select 0;
            _unit = _arguments select 0;

            [_unit,_newEntry,"JLTS_contraband_var_infoSpecial"] call RB205_Modules_Crime_fnc_addEntry;
            
        
        },{},[_unit]] call zen_dialog_fnc_create;
    }, "\RB205_modules\crime\UIElements\addEntryModule.paa"
] call zen_custom_modules_fnc_register;	
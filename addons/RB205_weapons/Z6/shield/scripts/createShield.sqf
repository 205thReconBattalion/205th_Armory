player spawn
{
    params["_unit"];
    //Play Shield Start Sound
    ["3AS\3AS_Main\functions\Throwables\Sounds\enable.ogg", _unit, false, getPos _unit, 5, 0.7, 25] remoteExec ["playSound3D", 0];

    //Spawn Shield
    private _TAS_Throwable_Object = (configFile >> "CfgAmmo" >> "ShieldGrenade_Ammo" >> "TAS_Throwable_Object") call BIS_fnc_getCfgData;
    private _TAS_Shield = _TAS_Throwable_Object createVehicle getPos _unit;
    _unit setVariable ["RB205_TAS_Personal_Shield_Object", _TAS_Shield, true];
    _TAS_Shield attachTo [_unit, [0.3, 1, -0.3], "Weapon", true];
    _TAS_Shield setdir 0;
}
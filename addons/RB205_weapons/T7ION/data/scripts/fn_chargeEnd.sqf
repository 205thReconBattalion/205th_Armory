// Ends charging, whatever the outcome: stops the per frame handler, the charge ring and the sound.
params ["_unit"];

[RB205_T7ION_chargeHandle] call CBA_fnc_removePerFrameHandler;
RB205_T7ION_chargeHandle = nil;

("RB205_T7ION_chargeRing" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

["rb205_ion_chargeSoundStopEvent", [_unit]] call CBA_fnc_globalEvent;

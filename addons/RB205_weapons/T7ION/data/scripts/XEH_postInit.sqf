["rb205_disintegrateEvent", {  
	params ["_target","_projectileOwner"]; 
	
	_target setDamage [1,true,_projectileOwner,_projectileOwner]; 
	hideObjectGlobal _target;
}] call CBA_fnc_addEventHandler;  

["ace_firedPlayer", {
	call RB205_T7ION_fnc_onFired;
	}] call CBA_fnc_addEventHandler;

["ace_firedNonPlayer", {
	call RB205_T7ION_fnc_onFired;
	}] call CBA_fnc_addEventHandler;
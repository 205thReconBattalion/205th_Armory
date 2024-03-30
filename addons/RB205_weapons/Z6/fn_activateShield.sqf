RB205_z6shield_timeToLive = RB205_setting_z6shield_timeToLive;
RB205_z6shield_cooldownTimer = RB205_setting_z6shield_cooldownTimer;
RB205_z6shield_showProgressbarForCooldown = RB205_setting_z6shield_showProgressbarForCooldown;

//WENN: nur beim 1. Mal
if (isNil "RB205_z6shield_active") then {
	RB205_z6shield_active = false;
	RB205_z6shield_toDeactivate = false;
	RB205_z6Shield_lastDeactivated = 0 - RB205_z6shield_cooldownTimer;
};

0 spawn
{
	//WENN: aktuelle Waffe ist die Z-6 UND Cooldown ist abgelaufen UND Spieler ist aktuell nicht in einem Fahrzeug
	if ((currentWeapon (vehicle player) == "RB205_Z6") && (time > RB205_z6Shield_lastDeactivated + RB205_z6shield_cooldownTimer) && (vehicle player == player)) then
	{
		//WENN: Z-6 Schild ist deaktiviert
		if (!RB205_z6shield_active) then
		{
			RB205_z6shield_active = true;
			RB205_z6shield_toDeactivate = false;

			//Schild wird aktiviert und Ton abgespielt
			playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", player, false, getPos player, 5, 0.7, 25];
			z6shield_object = "Shield_Deployed" createVehicle getPos player;
			z6shield_object attachTo [player, [0.3, 1, -0.3], "Weapon", true];
			z6shield_object setdir 0;
			RB205_z6shield_activationTime = time;
		} else
		{
			RB205_z6shield_toDeactivate = true;
		};
		
		//timeToLive wird abgewartet oder vorzeitig beendet	   
		waitUntil {
			(time > RB205_z6shield_activationTime + RB205_z6shield_timeToLive)
			|| (RB205_z6shield_toDeactivate == true)
			|| (!alive player)
			|| (vehicle player != player)
			|| (currentWeapon (vehicle player) != "RB205_Z6")
		};

		//Schild wird deaktiviert und Ton abgespielt
		playSound3D ["3AS\3AS_Shield\shield_grenade\disable.ogg", player, false, getPos player, 5, 0.7, 25];
		sleep 0.5;
		detach z6shield_object;
		deleteVehicle z6shield_object;
		RB205_z6shield_active = false;

		//Cooldown Timer wird gestartet
		RB205_z6shield_toDeactivate = false;
		RB205_z6Shield_lastDeactivated = time;
		if (RB205_z6shield_showProgressbarForCooldown) then {
			["Z-6 Schild lädt wieder auf", RB205_z6shield_cooldownTimer, {true}, {}, {}, [], false, false, false] call CBA_fnc_progressBar;
		};
	};
};
/*
 * Forward Command Center (RB205_fcc) - Addon-Optionen
 * Läuft über Extended_PreInit_EventHandlers auf allen Maschinen.
 * isGlobal 1 = Wert des Servers gilt für alle, 0 = jeder Spieler stellt selbst ein.
 */

#define CATEGORY(sub) ["[205] Forward Command Center", sub]

//Aufbau und Respawn

[
	"RB205_fcc_deployDuration", "SLIDER",
	["Deployment Duration", "Seconds it takes to establish the Forward Command Center. 0 = instant."],
	CATEGORY("Deployment & Respawn"), [0, 300, 30, 0], 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_respawnPreferPassenger", "CHECKBOX",
	["Prefer Passenger Seats", "Players respawning at the Forward Command Center are moved from the commander seat to a free passenger seat."],
	CATEGORY("Deployment & Respawn"), true, 1
] call CBA_fnc_addSetting;

//Versorgung

[
	"RB205_fcc_fuelCapacity", "SLIDER",
	["Fuel Capacity", "Liters of fuel a Forward Command Center can store. 0 = no refueling."],
	CATEGORY("Supply"), [0, 10000, 1200, 0], 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_ammoCapacity", "SLIDER",
	["Ammunition Capacity", "Rearm supply points a Forward Command Center can store. Only used if the ACE rearm supply is limited. 0 = no rearming."],
	CATEGORY("Supply"), [0, 20000, 5000, 0], 1
] call CBA_fnc_addSetting;

//Feldlazarett

[
	"RB205_fcc_medicalEnabled", "CHECKBOX",
	["Enable Field Hospital", "The area around a deployed Forward Command Center counts as an ACE medical facility."],
	CATEGORY("Field Hospital"), true, 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_medicalRadius", "SLIDER",
	["Radius", "Approximate radius in meters around the Forward Command Center that counts as a medical facility."],
	CATEGORY("Field Hospital"), [7.5, 50, 15, 1], 1
] call CBA_fnc_addSetting;

//Karten-Intel

[
	"RB205_fcc_intelEnabled", "CHECKBOX",
	["Enable Map Intel", "Shows enhanced intel on the map while seated in a deployed Forward Command Center."],
	CATEGORY("Map Intel"), true, 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_intelAccess", "LIST",
	["Access", "Who receives the map intel inside a deployed Forward Command Center."],
	CATEGORY("Map Intel"), [[0, 1], ["Commander only", "Commander and passengers"], 0], 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_intelMinGroupSize", "SLIDER",
	["Minimum Group Size", "Groups on foot with fewer units are not shown."],
	CATEGORY("Map Intel"), [1, 10, 2, 0], 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_intelShotTracers", "CHECKBOX",
	["Shot Tracers", "Shows shots of revealed groups and friendly players as short tracers on the map."],
	CATEGORY("Map Intel"), true, 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_intelRadarContacts", "CHECKBOX",
	["Radar Contacts", "Shows contacts detected by the Forward Command Center radar on the map."],
	CATEGORY("Map Intel"), true, 1
] call CBA_fnc_addSetting;

//Angriffsalarm

[
	"RB205_fcc_alarmRadius", "SLIDER",
	["Detection Radius", "Radius in meters in which enemies count towards an attack on the Forward Command Center."],
	CATEGORY("Attack Alarm"), [50, 1000, 50, 0], 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_alarmThreshold", "SLIDER",
	["Enemy Threshold", "Number of enemies inside the detection radius needed to raise the alarm."],
	CATEGORY("Attack Alarm"), [1, 20, 3, 0], 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_alarmSiren", "CHECKBOX",
	["Siren", "Sounds a siren at the Forward Command Center while it is under attack."],
	CATEGORY("Attack Alarm"), true, 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_alarmNotification", "CHECKBOX",
	["Notification", "Notifies all players when the Forward Command Center comes under attack and when it is secured again."],
	CATEGORY("Attack Alarm"), true, 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_alarmRespawnBlock", "CHECKBOX",
	["Block Respawn", "Disables respawning at the Forward Command Center while it is under attack."],
	CATEGORY("Attack Alarm"), true, 1
] call CBA_fnc_addSetting;

//Atmosphäre (pro Spieler)

[
	"RB205_fcc_ambienceConsole", "CHECKBOX",
	["Console Sounds", "Plays quiet console sounds near a deployed Forward Command Center."],
	CATEGORY("Ambience"), true, 0
] call CBA_fnc_addSetting;

[
	"RB205_fcc_ambienceRadio", "CHECKBOX",
	["Radio Chatter", "Plays occasional radio chatter near a deployed Forward Command Center."],
	CATEGORY("Ambience"), true, 0
] call CBA_fnc_addSetting;

[
	"RB205_fcc_ambienceVolume", "SLIDER",
	["Volume", "Volume of the Forward Command Center ambience."],
	CATEGORY("Ambience"), [0, 5, 1.5, 1], 0
] call CBA_fnc_addSetting;

//Aufklärungsdroide

[
	"RB205_fcc_droneCooldown", "SLIDER",
	["Cooldown", "Seconds until a new recon droid can be launched after the previous one was destroyed."],
	CATEGORY("Recon Droid"), [0, 1800, 300, 0], 1
] call CBA_fnc_addSetting;

[
	"RB205_fcc_droneRange", "SLIDER",
	["Control Range", "Maximum distance in meters between recon droid and Forward Command Center. Beyond it the uplink drops and the droid returns. 0 = unlimited."],
	CATEGORY("Recon Droid"), [0, 20000, 0, 0], 1
] call CBA_fnc_addSetting;

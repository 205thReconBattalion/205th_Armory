/*
 * Karten-Intel im FCC. Basiert auf spk_enhancedMapInfo (RKAG), angepasst für das FCC:
 * - nur aktiv, solange der Spieler in einem aufgebauten FCC sitzt (Zugriff per Addon-Option)
 * - zusätzlich Radar-Kontakte des FCC
 * - Schuss-Marker nur für aufgedeckte Gruppen und befreundete Spieler
 *
 * Alles hier ist rein lokal, es entsteht kein Netzwerkverkehr. Läuft einmal pro Client.
 * Achtung: Läuft gleichzeitig das eigenständige spk_enhancedMapInfo, bleibt diese Version inaktiv.
 */

RB205_fcc_intelActive = false;
RB205_fcc_intelShowIcons = true;                                                                    //Checkbox auf der Karte
RB205_fcc_intelGroups = [];                                                                         //[[Gruppe, Icon-ID, Marker-Typ], ...]
RB205_fcc_intelRadarMarkers = [];
RB205_fcc_intelTracers = [];                                                                        //[[Marker, Richtung, Ende], ...]
RB205_fcc_intelTracerCount = 0;
RB205_fcc_intelHoverGroup = grpNull;                                                                //Gruppe, deren Tooltip gerade angezeigt wird
RB205_fcc_intelHoverGroups = [];                                                                    //Alle Gruppen unter dem Mauszeiger, zuletzt betretene am Ende

addMissionEventHandler ["Map", {
	params ["_isOpened"];
	if (_isOpened) then {
		call RB205_fcc_fnc_intelCreateControls;
	} else {
		RB205_fcc_intelHoverGroups = [];
		call RB205_fcc_fnc_intelHideTooltip;
	};
}];

[{call RB205_fcc_fnc_intelUpdate}, 1] call CBA_fnc_addPerFrameHandler;
[{call RB205_fcc_fnc_intelUpdateTracers}, 0] call CBA_fnc_addPerFrameHandler;

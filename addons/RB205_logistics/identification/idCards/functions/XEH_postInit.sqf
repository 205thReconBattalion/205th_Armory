_conditionShowIDClone = {
	"JLTS_ids_gar_army" in (items _player) && !visibleMap;
};

_conditionShowIDRepublicDiplomat = {
	"RB205_ids_rep_diplomat" in (items _player) && !visibleMap;
};

_conditionShowIDCISDiplomat = {
	"RB205_ids_cis_diplomat" in (items _player) && !visibleMap;
};

_conditionShowIDRepublicCivilian = {
	"JLTS_ids_rep_civ" in (items _player) && !visibleMap;
};

_conditionShowIDCISCivilian = {
	"RB205_ids_cis_civ" in (items _player) && !visibleMap;
};

_conditionShowIDCivilian = {
	"RB205_ids_neutral_civ" in (items _player) && !visibleMap;
};

_conditionShowID = {
	true;
};

_conditionTakeID = {
	true;
};

_conditionTakeIDRepublicDiplomat = {
	"RB205_ids_rep_diplomat" in (items _target) && !(isPlayer _target);
};

_conditionTakeIDCISDiplomat = {
	//RB205_ids_cis_diplomat" in (items target); muss noch hinzugefügt werden, sobald die ID-Cards für die Diplomaten fertig sind
	"JLTS_ids_gar_army" in (items _target) && !([_target, false] call ace_common_fnc_isPlayer);
};

_conditionTakeIDRepublicCivilian = {
	"JLTS_ids_rep_civ" in (items _target) && !([_target, false] call ace_common_fnc_isPlayer);
};

_conditionTakeIDCISCivilian = {
	"RB205_ids_cis_civ" in (items _target) && !([_target, false] call ace_common_fnc_isPlayer);
};

_conditionTakeIDCivilian = {
	"RB205_ids_neutral_civ" in (items _target) && !([_target, false] call ace_common_fnc_isPlayer);
};




_action_RB205_showID = ["RB205_showIdCard","Show ID Card","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {},_conditionShowID] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions"], _action_RB205_showID, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase", 1, ["ACE_SelfActions"], _action_RB205_showID, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_showIDClone = ["RB205_showIdCardClone","Clone Identification Code","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[_player, _target, "clone","show"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionShowIDClone] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_showIdCard"], _action_RB205_showIDClone, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase", 1, ["ACE_SelfActions","RB205_showIdCard"], _action_RB205_showIDClone, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_showIDRepublicDiplomat = ["RB205_showIdCardRepublicDiplomat","Republic Diplomat","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[_player, _target, "diplomatRep","show"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionShowIDRepublicDiplomat] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_showIdCard"], _action_RB205_showIDRepublicDiplomat, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase", 1, ["ACE_SelfActions","RB205_showIdCard"], _action_RB205_showIDRepublicDiplomat, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_showIDCISDiplomat = ["RB205_showIdCardCISDiplomat","CIS Diplomat","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[_player, _target, "diplomatCIS","show"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionShowIDCISDiplomat] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_showIdCard"], _action_RB205_showIDCISDiplomat, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase", 1, ["ACE_SelfActions","RB205_showIdCard"], _action_RB205_showIDCISDiplomat, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_showIDRepublicCivilian = ["RB205_showIdCardRepublicCivilian","Republic Civilian","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[_player, _target, "civilianRep","show"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionShowIDRepublicCivilian] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_showIdCard"], _action_RB205_showIDRepublicCivilian, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase", 1, ["ACE_SelfActions","RB205_showIdCard"], _action_RB205_showIDRepublicCivilian, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_showIDCISCivilian = ["RB205_showIdCardCISCivilian","CIS Civilian","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[_player, _target, "civilianCIS","show"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionShowIDCISCivilian] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_showIdCard"], _action_RB205_showIDCISCivilian, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase", 1, ["ACE_SelfActions","RB205_showIdCard"], _action_RB205_showIDCISCivilian, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_showIDCivilian = ["RB205_showIdCardNeutralCivilian","Neutral Civilian","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[_player, _target, "civilianNeutral","show"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionShowIDCivilian] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_showIdCard"], _action_RB205_showIDCivilian, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase", 1, ["ACE_SelfActions","RB205_showIdCard"], _action_RB205_showIDCivilian, true] call ace_interact_menu_fnc_addActionToClass;

// Take

_action_RB205_takeID = ["RB205_takeIdCard","Take ID Card","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {},_conditionTakeID] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions"], _action_RB205_takeID, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_takeIDRepublicDiplomat = ["RB205_takeIdCardRepublicDiplomat","Republic Diplomat","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[ _target, _player, "diplomatRep","take"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionTakeIDRepublicDiplomat] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_takeIdCard"], _action_RB205_takeIDRepublicDiplomat, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_takeIDCISDiplomat = ["RB205_takeIdCardCISDiplomat","CIS Diplomat","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[ _target, _player, "diplomatCIS","take"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionTakeIDCISDiplomat] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_takeIdCard"], _action_RB205_takeIDCISDiplomat, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_takeIDRepublicCivilian = ["RB205_takeIdCardRepublicCivilian","Republic Civilian","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[ _target, _player, "civilianRep","take"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionTakeIDRepublicCivilian] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_takeIdCard"], _action_RB205_takeIDRepublicCivilian, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_takeIDCISCivilian = ["RB205_takeIdCardCISCivilian","CIS Civilian","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[ _target, _player, "civilianCIS","take"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionTakeIDCISCivilian] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_takeIdCard"], _action_RB205_takeIDCISCivilian, true] call ace_interact_menu_fnc_addActionToClass;

_action_RB205_takeIDCivilian = ["RB205_takeIdCardNeutralCivilian","Neutral Civilian","\RB205_logistics\identification\idCards\UIElements\aceIdCardLogo.paa", {[ _target, _player, "civilianNeutral","take"] call RB205_IdCards_fnc_gatherIdCardInfo},_conditionTakeIDCivilian] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions","RB205_takeIdCard"], _action_RB205_takeIDCivilian, true] call ace_interact_menu_fnc_addActionToClass;



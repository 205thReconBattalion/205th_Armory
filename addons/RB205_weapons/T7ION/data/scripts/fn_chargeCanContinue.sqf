// Whether the unit can start or keep charging. Runs every frame while charging.
params ["_unit"];

alive _unit
&& {_unit == ACE_player}
&& {lifeState _unit != "INCAPACITATED"}
&& {[_unit] call RB205_T7ION_fnc_chargeBlocksFire}
&& {!weaponLowered _unit}
// weaponLowered is always false while sprinting, so sprinting is read from the animation.
&& {((toLower animationState _unit) find "meva") == -1}
&& {((weaponState _unit) select 5) == 0}
// The same mouse button also operates these menus.
&& {!dialog}
&& {!visibleMap}
&& {!isActionMenuVisible}
&& {commandingMenu == ""}
&& {isNull curatorCamera}
&& {isNull findDisplay 49}
&& {isNull findDisplay 602}
&& {(missionNamespace getVariable ["ace_interact_menu_openedMenuType", -1]) == -1}

removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

// ARMOR
player forceAddUniform "RB205_U_arf_trooper";
player addVest "RB205_V_arf_ct";
player addHeadgear "RB205_H_arf_trooper";
player addBackpack "RB205_B_arf";

player linkItem "ItemMap";
player linkItem "B_UavTerminal";
player linkItem "JLTS_clone_comlink";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "RB205_NV_arf_antenna";
player addWeapon "RB205_binocular_arf";

// PRIMARY WEAPON
player addWeapon "RB205_DC15S";
player addPrimaryWeaponItem "3AS_optic_holo_DC15S";
player addPrimaryWeaponItem "RB205_Standard_Energy_Pack";
// SECONDARY WEAPON
player addWeapon "RB205_DC17_alt";
player addSecondaryWeaponItem "RB205_Compact_Energy_Pack";
player addSecondaryWeaponItem "JLTS_stun_mag_long";

// UNIFORM
player setVariable ["ACE_IsEngineer", 0, true]; 
player setVariable ["ACE_isEOD", 0, true]; 
player setVariable ["ace_medical_medicClass", 0, true]; 

player addItemToUniform "JLTS_ids_gar_army";
player addItemToUniform "ACE_EntrenchingTool";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "JLTS_repairkit_weapon_mini";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_CableTie";};

for "_i" from 1 to 30 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};

// VEST
for "_i" from 1 to 10 do {player addItemToVest "RB205_Standard_Energy_Pack";};
for "_i" from 1 to 3 do {player addItemToVest "RB205_Compact_Energy_Pack";};
for "_i" from 1 to 3 do {player addItemToVest "JLTS_stun_mag_long";};

for "_i" from 1 to 3 do {player addItemToVest "RB205_thermalDet";};
for "_i" from 1 to 2 do {player addItemToVest "RB205_smokeWhite";};
for "_i" from 1 to 1 do {player addItemToVest "RB205_smokeGreen";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_IR_Strobe_Item";};

// BACKPACK
for "_i" from 1 to 20 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_salineIV";};
player addItemToBackpack "ACE_salineIV_500";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_bodyBag";};
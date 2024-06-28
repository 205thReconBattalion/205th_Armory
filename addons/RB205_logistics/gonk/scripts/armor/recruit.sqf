removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

// ARMOR
player forceAddUniform "RB205_U_recruit";
player addVest "RB205_V_ct";
player addHeadgear "RB205_H_recruit";

player linkItem "ItemMap";
player linkItem "ItemGPS";
player linkItem "JLTS_clone_comlink";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "RB205_NV_chip";
player addWeapon "RB205_binocular";

// PRIMARY WEAPON
player addWeapon "RB205_DC15A";
player addPrimaryWeaponItem "RB205_Standard_Energy_Pack";
// SECONDARY WEAPON
player addWeapon "RB205_DC17";
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
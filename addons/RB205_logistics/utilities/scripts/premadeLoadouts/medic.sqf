removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

// ARMOR
player forceAddUniform "RB205_U_trooper";
player addVest "RB205_V_medic";
player addHeadgear "RB205_H_trooper";
player addBackpack "RB205_B_medic";

player linkItem "ItemMap";
player linkItem "ItemGPS";
player linkItem "JLTS_clone_comlink";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "RB205_NV";
player addWeapon "RB205_binocular";

// PRIMARY WEAPON
player addWeapon "RB205_DC15S";
player addPrimaryWeaponItem "3AS_optic_holo_DC15S";
player addPrimaryWeaponItem "RB205_Standard_Energy_Pack";
// SECONDARY WEAPON
player addWeapon "RB205_DC17_alt";
player addSecondaryWeaponItem "RB205_Compact_Energy_Pack";
player addSecondaryWeaponItem "JLTS_stun_mag_long";

// UNIFORM
player addItemToUniform "JLTS_ids_gar_army";
player addItemToUniform "JLTS_ids_gar_medical";
player addItemToUniform "ACE_EntrenchingTool";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "JLTS_repairkit_weapon_mini";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_CableTie";};

for "_i" from 1 to 50 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_painkillers";};

// VEST
for "_i" from 1 to 15 do {player addItemToVest "RB205_Standard_Energy_Pack";};
for "_i" from 1 to 5 do {player addItemToVest "RB205_Compact_Energy_Pack";};
for "_i" from 1 to 3 do {player addItemToVest "JLTS_stun_mag_long";};

for "_i" from 1 to 3 do {player addItemToVest "RB205_thermalDet";};
for "_i" from 1 to 3 do {player addItemToVest "RB205_smokeWhite";};
for "_i" from 1 to 1 do {player addItemToVest "RB205_smokeGreen";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_IR_Strobe_Item";};

// BACKPACK
player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 50 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 50 do {player addItemToBackpack "ACE_suture";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_salineIV";};
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_250";};
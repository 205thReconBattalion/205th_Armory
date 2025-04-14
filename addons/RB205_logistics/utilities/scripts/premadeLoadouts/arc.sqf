removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

// ARMOR
player forceAddUniform "RB205_U_arc_trooper";
player addVest "RB205_V_arc";
player addHeadgear "RB205_H_arc_trooper";
player addBackpack "RB205_B_arc";
player addGoggles "RB205_arc_bracer";

player linkItem "ItemMap";
player linkItem "ItemGPS";
player linkItem "JLTS_clone_comlink";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "RB205_NV_rangefinder";
player addWeapon "RB205_binocular_arf";

// PRIMARY WEAPON
player addWeapon "RB205_WestarM5";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "3AS_Optic_Scope_WestarM5";
player addPrimaryWeaponItem "RB205_Experimental_Energy_Pack";
player addPrimaryWeaponItem "RB205_ugl_he_6rnd";
// SECONDARY WEAPON
player addWeapon "RB205_DC17_Dual";
player addSecondaryWeaponItem "RB205_Compact_Energy_Pack";
player addSecondaryWeaponItem "JLTS_stun_mag_long";
// TERITARY WEAPONS
player addWeapon "RB205_RPS6_disposable_base";

// UNIFORM
player addItemToUniform "JLTS_ids_gar_army";
player addItemToUniform "ACE_EntrenchingTool";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "JLTS_repairkit_weapon_mini";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_CableTie";};

for "_i" from 1 to 30 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_painkillers";};

// VEST
for "_i" from 1 to 10 do {player addItemToVest "RB205_Experimental_Energy_Pack";};
for "_i" from 1 to 3 do {player addItemToVest "RB205_Compact_Energy_Pack";};
for "_i" from 1 to 3 do {player addItemToVest "JLTS_stun_mag_long";};

for "_i" from 1 to 3 do {player addItemToVest "RB205_thermalDet";};
for "_i" from 1 to 3 do {player addItemToVest "RB205_smokeWhite";};
for "_i" from 1 to 1 do {player addItemToVest "RB205_smokeGreen";};
for "_i" from 1 to 3 do {player addItemToVest "RB205_droidPopper";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_IR_Strobe_Item";};

// BACKPACK
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "ACE_M26_Clacker";
player addItemToBackpack "MineDetector";
player addItemToBackpack "JLTS_repairkit_weapon";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_salineIV";};
player addItemToBackpack "ACE_salineIV_500";
for "_i" from 1 to 20 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_splint";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_epinephrine";};
player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 2 do {player addItemToBackpack "RB205_sonicDet";};
for "_i" from 1 to 5 do {player addItemToBackpack "RB205_ugl_he_6rnd";};
for "_i" from 1 to 3 do {player addItemToBackpack "RB205_ugl_smoke_red";};
for "_i" from 1 to 5 do {player addItemToBackpack "RB205_ugl_flare_white";};
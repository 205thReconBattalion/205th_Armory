class cfgPatches
{
    class RB205_core
	{
		requiredAddons[] =
        {
            "A3_Characters_F"
        };
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
        weapons[] =
		{
            "RB205_helmet_base",
            "RB205_uniform_base",
            "RB205_vest_base",
            "RB205_vest_nco_base",
            "RB205_vest_co_base"
        };
        units[] =
		{
            "RB205_unit_base",
            "RB205_backpack_base"
        };
	};
};

#include "macros.hpp"

class cfgWeapons
{
    class H_HelmetB;
    class help_helmet_base: H_HelmetB
    {
        class ItemInfo;
    };
    class RB205_helmet_base: help_helmet_base
    {
        ACCESS_FALSE
        author = AUTHOR;
        picture = LOGO;
        descriptionShort = "";
        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = ACE_HEARING_VOLUME;
        subItems[] = {};
        class ItemInfo: ItemInfo
        {
            mass = MASS_HELMET;
            allowedSlots[] = {605,901};
            modelSides[] = {6};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.5;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 8;
                    passThrough = 0.5;
                };
            };
        };
    };

    class Uniform_Base;
    class help_uniform_base: Uniform_Base
    {
        class ItemInfo;
    };
    class RB205_uniform_base: help_uniform_base
    {
        ACCESS_FALSE
        author = AUTHOR;
        picture = LOGO;
        descriptionShort = "";
        class ItemInfo: ItemInfo
        {
            mass = MASS_UNIFORM;
            containerClass = INV_UNIFORM;
            modelSides[] = {6};
            uniformClass = "RB205_unit_base";
            uniformModel = "-";
            //uniformType = "Neopren";
        };
    };

    class Vest_Camo_Base;
    class help_vest_base: Vest_Camo_Base
    {
        class ItemInfo;
    };
    class RB205_vest_base: help_vest_base
    {
        ACCESS_FALSE
        author = AUTHOR;
        picture = LOGO;
        descriptionShort = "";
        class ItemInfo: ItemInfo
        {
            mass = MASS_VEST;
            containerClass = INV_VEST;
            class HitpointsProtectionInfo{};
        };
    };
    class RB205_vest_nco_base: RB205_vest_base
    {
        ACCESS_FALSE
        class ItemInfo: ItemInfo
        {
            mass = MASS_VEST_NCO;
            containerClass = INV_VEST_NCO;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=10;
                    PassThrough=0.30000001;
                };
                class Arms
                {
                    hitpointName="HitArms";
                    armor=4;
                    passThrough=0.30000001;
                };
                class Legs
                {
                    hitpointName="HitLegs";
                    armor=6;
                    passThrough=0.30000001;
                };
            };
        };
    };
    class RB205_vest_co_base: RB205_vest_base
    {
        ACCESS_FALSE
        class ItemInfo: ItemInfo
        {
            mass = MASS_VEST_CO;
            containerClass = INV_VEST_CO;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=30;
                    PassThrough=0.30000001;
                };
                class Arms
                {
                    hitpointName="HitArms";
                    armor=6;
                    passThrough=0.30000001;
                };
                class Legs
                {
                    hitpointName="HitLegs";
                    armor=6;
                    passThrough=0.30000001;
                };
            };
        };
    };

    class NVGoggles;
    class help_nvg_base: NVGoggles
    {
        class ItemInfo;
    };
    class RB205_nvg_base: help_nvg_base
    {
        ACCESS_FALSE
        author = AUTHOR;
        picture = LOGO;
        descriptionShort = "NV";
        visionMode[] = { "Normal", "NVG" };
        class ItemInfo: ItemInfo
        {
            mass = MASS_NVG;
        };
    };
    class RB205_nvg_ti_base: RB205_nvg_base
    {
        ACCESS_FALSE
        descriptionShort = "NV/TI";
        visionMode[] = { "Normal", "NVG", "TI" };
	    thermalMode[] = {0};
    };
};

class cfgVehicles
{
    class SoldierWB;
    class B_Soldier_base_F: SoldierWB
    {
        class HitPoints;
    };
    class RB205_unit_base: B_Soldier_base_F
    {
        ACCESS_FALSE
        author = AUTHOR;
        //Combat Role:
        icon = ICON_DEFAULT;
        identityTypes[] = {"LanguageENG_F","WhiteHead_01"};
        engineer = "false";
        canDeactivateMines = "false";
        camouflage = CAMOUFLAGE_DEFAULT;
        //Armor Values:
        armor = 2;
        armorStructural = 4;
        explosionShielding = 0.40000001;
        minTotalDamageThreshold = 0.001;
        impactDamageMultiplier = 0.5;
        class HitPoints: HitPoints
        {
            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.80000001;
                radius=0.079999998;
                explosionShielding=0.1;
                minimalHit=0.0099999998;
            };
            class HitNeck: HitFace
            {
                armor=1;
                material=-1;
                name="neck";
                passThrough=0.80000001;
                radius=0.1;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
            };
            class HitHead: HitNeck
            {
                armor=1;
                material=-1;
                name="head";
                passThrough=0.80000001;
                radius=0.2;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
                depends="HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor=8;
                material=-1;
                name="pelvis";
                passThrough=0.80000001;
                radius=0.23999999;
                explosionShielding=3;
                visual="injury_body";
                minimalHit=0.0099999998;
                depends="";
            };
            class HitAbdomen: HitPelvis
            {
                armor=6;
                material=-1;
                name="spine1";
                passThrough=0.80000001;
                radius=0.16;
                explosionShielding=3;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor=6;
                material=-1;
                name="spine2";
                passThrough=0.33000001;
                radius=0.18000001;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitChest: HitDiaphragm
            {
                armor=8;
                material=-1;
                name="spine3";
                passThrough=0.33000001;
                radius=0.18000001;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitBody: HitChest
            {
                armor=1000;
                material=-1;
                name="body";
                passThrough=1;
                radius=0;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor=6;
                material=-1;
                name="arms";
                passThrough=1;
                radius=0.1;
                explosionShielding=3;
                visual="injury_hands";
                minimalHit=0.0099999998;
                depends="0";
            };
            class HitHands: HitArms
            {
                armor=6;
                material=-1;
                name="hands";
                passThrough=1;
                radius=0.1;
                explosionShielding=1;
                visual="injury_hands";
                minimalHit=0.0099999998;
                depends="HitArms";
            };
            class HitLegs: HitHands
            {
                armor=6;
                material=-1;
                name="legs";
                passThrough=1;
                radius=0.14;
                explosionShielding=3;
                visual="injury_legs";
                minimalHit=0.0099999998;
                depends="0";
            };
            class Incapacitated: HitLegs
            {
                armor=1000;
                material=-1;
                name="body";
                passThrough=1;
                radius=0;
                explosionShielding=3;
                visual="";
                minimalHit=0;
                depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            class HitLeftArm
            {
                armor=6;
                material=-1;
                name="hand_l";
                passThrough=1;
                radius=0.079999998;
                explosionShielding=3;
                visual="injury_hands";
                minimalHit=0.0099999998;
            };
            class HitRightArm: HitLeftArm
            {
                name="hand_r";
            };
            class HitLeftLeg
            {
                armor=6;
                material=-1;
                name="leg_l";
                passThrough=1;
                radius=0.1;
                explosionShielding=3;
                visual="injury_legs";
                minimalHit=0.0099999998;
            };
            class HitRightLeg: HitLeftLeg
            {
                name="leg_r";
            };
        };
    };

    class Bag_Base;
    class RB205_backpack_base: Bag_Base
    {
        ACCESS_FALSE
        author = AUTHOR;
        picture = LOGO;
		model = "\RB205_core\data\B_invisible.p3d";
        descriptionShort = "";
	    maximumLoad = 0;
		mass = 0;
    };
};

class CfgEditorCategories
{
	class RB205_prop
	{
		displayName = "[205] Props";
	};
};
class CfgEditorSubcategories
{
	class RB205_other
	{
		displayName = "Other";
	};
};
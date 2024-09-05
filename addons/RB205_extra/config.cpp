class CfgPatches
{
    class RB205_extra
	{
		requiredAddons[] =
        {
            "RB205_logistics"
        };
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =
        {
            "RB205_rebreather",

            "RB205_medal_service1",
            "RB205_medal_service2",
            "RB205_medal_service3",
            "RB205_medal_serviceKIA",
            "RB205_medal_bravery",
            "RB205_medal_infiltration",
            "RB205_medal_medical",
            "RB205_medal_melee",
            "RB205_medal_recruitment",
            "RB205_medal_pow",
            "RB205_medal_aircraft",
            "RB205_medal_tank",
            "RB205_medal_clarityInCrisis",
            "RB205_medal_heroes",
            "RB205_medal_oriramikad"
        };
		units[] =
        {
            "RB205_carbonite"
        };
	};
};

#include "\RB205_main\macros.hpp"

class CBA_Extended_EventHandlers_base;

class CfgGlasses
{
    class G_Combat;
    class RB205_extra_base: G_Combat
    {
        ACCESS_FALSE
        picture = "\RB205_main\data\ui\other\RB205_logo.paa";
        descriptionShort = "";
		descriptionUse = "";
        mass = 1;
        mode = 4;
        identityTypes[] = {};
    };

	class RB205_arc_bracer: RB205_extra_base
	{
        ACCESS_TRUE
		displayname = "[205] Clone ARC Bracer";
		picture="\RB205_extra\data\ui\arc_bracer.paa";
		model = "\RB205_extra\arc_bracer.p3d";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterials[] =
        {
            "\RB205_extra\data\arc_bracer\camo1.rvmat",
            "\RB205_extra\data\arc_bracer\camo2.rvmat"
        };
		hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\arc_bracer\camo1_co.paa",
            "\RB205_extra\data\arc_bracer\camo2_co.paa"
        };
	};

    class RB205_scythe_attachments: RB205_extra_base
    {
        ACCESS_TRUE
        displayname = "[205] Clone Lieutenant Scythe's Attachments";
		model = "\RB205_extra\scythe_accessories.p3d";
        hiddenSelections[] =
        {
            "pouch",
            "insignialt",
            "knife"
        };
		hiddenSelectionsMaterials[] =
        {
            "\RB205_extra\data\scythe\pouch.rvmat",
            "\RB205_extra\data\scythe\insignialt.rvmat",
            "\RB205_extra\data\scythe\knife.rvmat"
        };
		hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\scythe\pouch_co.paa",
            "\RB205_extra\data\scythe\insignialt_co.paa",
            "\RB205_extra\data\scythe\knife_co.paa"
        };
    };
};

class CfgWeapons
{
    class NVGoggles;
    class RB205_extra_base_nvg: NVGoggles
    {
        ACCESS_FALSE
        picture = "\RB205_main\data\ui\other\RB205_logo.paa";
        descriptionShort = "";
		descriptionUse = "";
        class ItemInfo
        {
            type = 616;
            mass = 1;
        };
    };

    class RB205_rebreather: RB205_extra_base_nvg
    {
        ACCESS_TRUE
        displayname = "[205] Rebreather";
        model = "\RB205_extra\rebreather.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] =
        {
            "\RB205_extra\data\rebreather\camo1.rvmat"
        };
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\rebreather\camo1_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\RB205_extra\rebreather.p3d";
            modelOff = "\RB205_extra\rebreather.p3d";
            hiddenSelections[] = {"camo1"};
        };
        CBRN_protectionLevel = "2";
    };

    class RB205_medal_base: RB205_extra_base_nvg
    {
        ACCESS_FALSE
		model = "\RB205_extra\medal.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterials[] =
        {
            "\RB205_extra\data\medal\camo1.rvmat"
        };
        visionMode[] = {"Normal"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\RB205_extra\medal.p3d";
            modelOff = "\RB205_extra\medal.p3d";
            hiddenSelections[] = {"camo1"};
        };
    };
    
    class RB205_medal_service1: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Veteran of War Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_service1.paa"
        };
    };
    class RB205_medal_service2: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Distinctive Veteran of War Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_service2.paa"
        };
    };
    class RB205_medal_service3: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Outstanding Veteran of War Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_service3.paa"
        };
    };
    class RB205_medal_serviceKIA: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Crescent of Service Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_serviceKIA.paa"
        };
    };

    class RB205_medal_bravery: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Medal of Bravery";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_bravery.paa"
        };
    };
    class RB205_medal_infiltration: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Medal of Infiltration";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_infiltration.paa"
        };
    };
    class RB205_medal_medical: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Medical Aid Cross";
        descriptionShort = "Trotz vieler Verletzte und großem Stress sind die Träger des Medical Aid Cross über sich hinausgewachsen und haben durch ihren Einsatz vielen Klonen das Leben gerettet.";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_medical.paa"
        };
    };
    class RB205_medal_melee: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Melee Combat Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_melee.paa"
        };
    };
    class RB205_medal_recruitment: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Medal of Recruitment";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_recruitment.paa"
        };
    };
    class RB205_medal_pow: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Prisoner of War Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_pow.paa"
        };
    };
    class RB205_medal_aircraft: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Ace Aircraft Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_aircraft.paa"
        };
    };
    class RB205_medal_tank: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Ace Tankery Medal";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_tank.paa"
        };
    };
    
    class RB205_medal_clarityInCrisis: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Chancellor Palpetine Award for Clarity in Crisis";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_clarityInCrisis.paa"
        };
    };
    class RB205_medal_heroes: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Cross of Heroes";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_heroes.paa"
        };
    };
    class RB205_medal_oriramikad: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Award of Ori'Ramikad";
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\medal\medal_oriramikad.paa"
        };
    };
    
    class RB205_medal_crimsonStar: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205|Medal] Crimson Star";
		model = "\RB205_extra\navymedal.p3d";
        hiddenSelections[] =
        {
            "medaille",
            "band",
            "edelstein"
        };
        hiddenSelectionsMaterials[] =
        {
            "\RB205_extra\data\navymedal\medaille.rvmat",
            "\RB205_extra\data\navymedal\band.rvmat",
            "\RB205_extra\data\navymedal\edelstein.rvmat"
        };
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\navymedal\medaille_co.paa",
            "\RB205_extra\data\navymedal\band_co.paa",
            "\RB205_extra\data\navymedal\edelstein_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\RB205_extra\navymedal.p3d";
            modelOff = "\RB205_extra\navymedal.p3d";
            hiddenSelections[] = {"medaille","band","edelstein"};
        };
    };
};

class CfgVehicles
{
    class Land_Basketball_01_F;
    class RB205_carbonite: Land_Basketball_01_F
    {
        ACCESS_TRUE
        displayname= "Carbonite";
        editorcategory = "RB205_prop";
        editorsubcategory = "RB205_other";
		editorPreview = "";
        model="\RB205_extra\carbonite.p3d";
        hiddenSelections[] =
        {
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[] =
        {
            "\RB205_extra\data\carbonite\camo1_co.paa",
            "\RB205_extra\data\carbonite\camo2_co.paa",
            "\RB205_extra\data\carbonite\camo3_co.paa"
        };
        hiddenSelectionsMaterial[] =
        {
            "\RB205_extra\data\carbonite\camo1.rvmat",
            "\RB205_extra\data\carbonite\camo2.rvmat",
            "\RB205_extra\data\carbonite\camo3.rvmat"
        };
        description= "";
        destrType= "DestructNo";
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0,1.5,0};
        ace_Dragging_carryDirection = 0;
        ace_dragging_ignoreWeight = 1;
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
        armor = 10000;
        class SimpleObject
        {
            eden = 1;
        };
    };
};

class Extended_PostInit_EventHandlers
{
	class RB205_extra_carbonite_postInit
	{
		init = "call compile preProcessFileLineNumbers '\RB205_extra\functions\XEH_postInit.sqf'";
	};
};
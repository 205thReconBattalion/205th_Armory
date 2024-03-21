class cfgPatches
{
    class RB205_accessories
	{
		requiredAddons[] = {};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =
        {
            "RB205_medal_base"
        };
		units[] = {};
	};
};

#include "\RB205_main\macros.hpp"

class cfgWeapons
{
    class NVGoggles;
    class RB205_medal_base: NVGoggles
    {
        ACCESS_TRUE
        displayname = "[205] Medal";
		picture = "\RB205_main\data\ui\other\RB205_logo.paa";
		descriptionUse = "";

		model = "\RB205_accessories\medal.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsMaterial[] =
        {
            "\RB205_accessories\data\medal\medal.rvmat"
        };
		hiddenSelectionsTextures[] =
        {
            "\RB205_accessories\data\medal\medal_co.paa"
        };

        visionMode[] = {"Normal"};
        class ItemInfo
        {
            type = 616;
            uniformModel = "\RB205_accessories\medal.p3d";
            modelOff = "\RB205_accessories\medal.p3d";
            mass = 1;
            hiddenSelections[] = {"camo1"};
        };
    };

    /*class RB205_medal_2: RB205_medal_base
    {
        ACCESS_TRUE
        displayname = "[205] Medal 2";
        hiddenSelectionsTextures[] =
        {
            "\RB205_accessories\data\medal\medal2_co.paa"
        };
    };*/
};

class CfgGlasses
{
    class G_Combat;
    class RB205_accessories_base: G_Combat
    {
        ACCESS_FALSE
        picture = "\RB205_main\data\ui\other\RB205_logo.paa";
		descriptionUse = "";
        mass = 1;
        mode = 4;
        identityTypes[] = {};
    };

	class RB205_arc_bracer: RB205_accessories_base
	{
        ACCESS_TRUE
		author = "Norway";
		displayname = "[205] Clone ARC Bracer";
		picture="\RB205_accessories\data\ui\arc_bracer.paa";
		descriptionUse = "";

		model = "\RB205_accessories\arc_bracer.p3d";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsMaterial[] =
        {
            "\RB205_accessories\data\arc_bracer\camo1.rvmat",
            "\RB205_accessories\data\arc_bracer\camo2.rvmat"
        };
		hiddenSelectionsTextures[] =
        {
            "\RB205_accessories\data\arc_bracer\camo1_co.paa",
            "\RB205_accessories\data\arc_bracer\camo2_co.paa"
        };
	};
};
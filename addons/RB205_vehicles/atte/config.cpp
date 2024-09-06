class cfgPatches
{
    class RB205_vehicles_atte
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_ATTE"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_atte"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3as_ATTE_Base;
	class RB205_atte: 3as_ATTE_Base
	{
		ACCESS_TRUE
		displayName = "AT-TE";
		author = AUTHOR;
		crew = CREW_ARMORED;
		VEH_INVENTORY
		CARGO_L
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_tank";
		editorPreview = "";
		hiddenSelectionsMaterials[] =
		{
			"RB205_vehicles\atte\data\atte_shell.rvmat",
			"3as\3as_atte\data\textures\Cockpit.rvmat",
			"RB205_vehicles\atte\data\atte_detail.rvmat",
			"RB205_vehicles\atte\data\atte_legs.rvmat",
			"3as\3as_atte\data\textures\Glass.rvmat",
			"3as\3as_atte\data\textures\Armor.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"RB205_vehicles\atte\data\atte_shell.paa",
			"RB205_vehicles\atte\data\atte_cockpit.paa",
			"RB205_vehicles\atte\data\atte_detail.paa",
			"RB205_vehicles\atte\data\atte_legs.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
			"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
		};
		class textureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\atte\data\atte_shell.paa",
					"RB205_vehicles\atte\data\atte_cockpit.paa",
					"RB205_vehicles\atte\data\atte_detail.paa",
					"RB205_vehicles\atte\data\atte_legs.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[] =
				{
					"RB205"
				};
			};
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_TCW_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_Imp_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_Imp_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
			};
		};
	};
};
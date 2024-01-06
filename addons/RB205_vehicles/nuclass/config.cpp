class cfgPatches
{
    class RB205_vehicles_nuclass
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_nu"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_nuclass"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_Nuclass;

	class RB205_nuclass: 3AS_Nuclass
	{
		ACCESS_TRUE
		displayName = "Nu-Class Shuttle";
		author = "205th Recon Battalion";
		crew = "RB205_clone_plt_trooper";
		VEH_INVENTORY
		CARGO_XL
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"3AS\3as_nu\data\exterior_CO.paa",
			"3AS\3as_nu\data\wings_CO.paa",
			"3as\3as_Nu\data\interior_co.paa",
			"3as\3as_Nu\data\cockpit_doors_co.paa"
		};
		class TextureSources
		{
			/*class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] = TODO
				factions[] =
				{
					"RB205"
				};
			};*/
			/*class RB205_chimaera
			{
				displayName = "205th Recon Battalion - Chimaera";
				author = "205th Recon Battalion";
				textures[] = TODO
			};*/
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_nu\data\exterior_CO.paa",
					"3AS\3as_nu\data\wings_CO.paa",
					"3as\3as_Nu\data\interior_co.paa",
					"3as\3as_Nu\data\cockpit_doors_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3as_nu\data\exterior_blank_CO.paa",
					"3AS\3as_nu\data\wings_blank_CO.paa",
					"3as\3as_Nu\data\interior_co.paa",
					"3as\3as_Nu\data\cockpit_doors_blank_co.paa"
				};
			};
		};
	};
};
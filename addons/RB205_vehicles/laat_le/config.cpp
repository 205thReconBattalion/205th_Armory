class cfgPatches
{
    class RB205_vehicles_laat_le
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3as_LAAT_LE"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_laatle"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_Patrol_LAAT_Republic;

	class RB205_laatle: 3AS_Patrol_LAAT_Republic
	{
		ACCESS_TRUE
		displayName = "LAAT/LE";
		author = "205th Recon Battalion";
		crew = "RB205_clone_plt_trooper";
		VEH_INVENTORY
		CARGO_S
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		//Textures
		hiddenSelectionsTextures[] =
		{
			"RB205_vehicles\laat_le\data\laat_le_base_co.paa"
		};
		class TextureSources
		{
			class Default
			{
				displayName = "205th Recon Battalion";
				author = "205th Recon Battalion";
				textures[] =
				{
					"RB205_vehicles\laat_le\data\laat_le_base_co.paa"
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
					"3AS\3AS_LAAT\LAAT_LE\data\republicpatrol01_co.paa",
				};
			};
			class Police
			{
				displayName = "Grand Army of the Republic - Police";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_LAAT\LAAT_LE\data\policepatrol01_co.paa",
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_LAAT\LAAT_LE\data\imperialpatrol01_co.paa",
				};
			};
		};
	};
};
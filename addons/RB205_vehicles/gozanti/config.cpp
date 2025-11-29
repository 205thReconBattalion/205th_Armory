class cfgPatches
{
    class RB205_vehicles_gozanti
	{
		requiredAddons[]=
		{
			"RB205_vehicles",
			"3AS_Imperial_Air_Gozanti"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] =	{};
		units[] =
		{
			"RB205_gozanti"
		};
	};
};

#include "\RB205_vehicles\macros.hpp"
#include "\RB205_vehicles\inventory.hpp"

class cfgWeapons {};
class cfgVehicles
{
	class 3AS_Gozanti_Republic;

	class RB205_gozanti: 3AS_Gozanti_Republic
	{
		ACCESS_TRUE
		displayName = "Gozanti Cruiser";
		author = AUTHOR;
		crew = CREW_AIR;
		VEH_INVENTORY
		CARGO_XL
		//Editor/ Zeus
		side = 1;
		faction = "RB205";
		editorSubcategory = "RB205_veh_air";
		editorPreview = "";
		//Textures
		hiddenselectionstextures[] =
		{
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo_Republic_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo2_Republic_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
			"3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
		};
		textureList[] =
		{
			"Republic",	1,
			"Empire",	0
		};
		class TextureSources
		{
			class Republic
			{
				displayName = "Grand Army of the Republic";
				author = "3AS";
				textures[] =
				{
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo_Republic_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo2_Republic_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
				};
			};
			class Empire
			{
				displayName = "Galactic Empire";
				author = "3AS";
				textures[] = {
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo2_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
					"3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
				};
			};
		};
		#include "\RB205_vehicles\sounds_aircraft_alarm.hpp"
	};
};
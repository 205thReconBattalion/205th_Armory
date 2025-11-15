hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\vwing\data\vwing_main.rvmat",
	"RB205_vehicles\vwing\data\vwing_droid.rvmat",
	"RB205_vehicles\vwing\data\vwing_wings.rvmat"
};
hiddenselectionstextures[] =
{
	"RB205_vehicles\vwing\data\vwing_main_co.paa",
	"RB205_vehicles\vwing\data\vwing_droid_co.paa",
	"RB205_vehicles\vwing\data\vwing_wings_co.paa"
};
textureList[] =
{
	"Default", 1,
	"Republic", 0,
	"Empire", 0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\vwing\data\vwing_main_co.paa",
			"RB205_vehicles\vwing\data\vwing_droid_co.paa",
			"RB205_vehicles\vwing\data\vwing_wings_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3AS\3AS_Vwing\data\vwing_main_co.paa",
			"3AS\3AS_Vwing\data\Vwing_AstromechDroid_co.paa",
			"3AS\3AS_Vwing\data\vwing_wings_co.paa"
		};
	};
	class Empire
	{
		displayName = "Galactic Empire";
		author = "3AS";
		textures[] =
		{
			"3AS\3AS_Vwing\data\vwing_main_Imp_co.paa",
			"3AS\3AS_Vwing\data\vwing_astromechdroid_Imp_co.paa",
			"3AS\3AS_Vwing\data\vwing_wings_Imp_co.paa"
		};
	};
};
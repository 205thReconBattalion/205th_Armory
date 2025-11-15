hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\arc170\data\arc170_main_frame.rvmat",
	"RB205_vehicles\arc170\data\arc170_wings_engines.rvmat",
	"RB205_vehicles\arc170\data\arc170_guns.rvmat"
};
hiddenselectionstextures[] =
{
	"RB205_vehicles\arc170\data\arc170_main_frame_co.paa",
	"RB205_vehicles\arc170\data\arc170_wings_engines_co.paa",
	"RB205_vehicles\arc170\data\arc170_guns_co.paa"
};
textureList[] =
{
	"Default",	1,
	"Republic",	0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\arc170\data\arc170_main_frame_co.paa",
			"RB205_vehicles\arc170\data\arc170_wings_engines_co.paa",
			"RB205_vehicles\arc170\data\arc170_guns_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3as\3as_arc170\Data\Main_Frame_CO.paa",
			"3as\3as_arc170\Data\Wings_Engines_CO.paa",
			"3as\3as_arc170\Data\Guns_CO.paa"
		};
	};
};
hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\sdv\data\sdv_ext.rvmat"
};
hiddenSelectionsTextures[] =
{
	"RB205_vehicles\sdv\data\sdv_ext_co.paa"
};
textureList[] =
{
	"Default",	1,
	"Republic",	0,
	"Empire",	0
};
class textureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\sdv\data\sdv_ext_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"
		};
	};
	class Empire
	{
		displayName = "Galactic Empire";
		author = "3AS";
		textures[] =
		{
			"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"
		};
	};
};
hiddenSelectionsTextures[] =
{
	"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Exterior_co.paa",
	"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Interior_co.paa",
	"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Wings_co.paa"
};
textureList[] =
{
	"Default",	1,
	"Republic",	0,
	"Empire",	0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Exterior_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Interior_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Wings_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Exterior_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Interior_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Wings_co.paa"
		};
	};
	class Empire
	{
		displayName = "Galactic Empire";
		author = "3AS";
		textures[] =
		{
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Exterior_Imp_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Interior_co.paa",
			"\3AS\3AS_Republic_Heli\LAS\data\3AS_LAS_Wings_Imp_co.paa"
		};
	};
};
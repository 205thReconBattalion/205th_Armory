hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\laat_le\data\laat_le_hull.rvmat"
};
hiddenSelectionsTextures[] =
{
	"RB205_vehicles\laat_le\data\laat_le_hull_co.paa"
};
textureList[] =
{
	"Default",			1,
	"Republic",			0,
	"Police",			0,
	"Empire",			0
};
class TextureSources
{
	class Default
	{
		displayName = "205th Recon Battalion";
		author = "205th Recon Battalion";
		textures[] =
		{
			"RB205_vehicles\laat_le\data\laat_le_hull_co.paa"
		};
		factions[] = {"RB205"};
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
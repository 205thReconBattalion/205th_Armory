hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\px10\data\px10_hull.rvmat",
	"3as\3as_rebel_armor\px10_cav\textures\PX10CAVIntBack.rvmat",
	"3as\3as_rebel_armor\px10_cav\textures\PX10CAVIntFront.rvmat",
	"RB205_vehicles\px10\data\px10_fuel.rvmat",
	"RB205_vehicles\px10\data\px10_crane.rvmat"
};
hiddenSelectionsTextures[] =
{
	"RB205_vehicles\px10\data\px10_hull_co.paa",
	"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
	"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
	"RB205_vehicles\px10\data\px10_fuel_co.paa",
	"RB205_vehicles\px10\data\px10_crane_co.paa"
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
			"RB205_vehicles\px10\data\px10_hull_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
			"RB205_vehicles\px10\data\px10_fuel_co.paa",
			"RB205_vehicles\px10\data\px10_crane_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Republic_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Republic_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10crane_Republic_co.paa"
		};
	};
	class Empire
	{
		displayName = "Galactic Empire";
		author = "3AS";
		textures[] =
		{
			"3as\3AS_Rebel_Armor\PX10_Cav\Textures\PX10CAV_Imp_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10fuel_Imp_co.paa",
			"3as\3as_rebel_armor\px10_cav\textures\px10crane_co.paa"
		};
	};
};
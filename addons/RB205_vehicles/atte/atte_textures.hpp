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
	"RB205_vehicles\atte\data\atte_shell_co.paa",
	"RB205_vehicles\atte\data\atte_cockpit_co.paa",
	"RB205_vehicles\atte\data\atte_detail_co.paa",
	"RB205_vehicles\atte\data\atte_legs_co.paa",
	"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
	"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
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
			"RB205_vehicles\atte\data\atte_shell_co.paa",
			"RB205_vehicles\atte\data\atte_cockpit_co.paa",
			"RB205_vehicles\atte\data\atte_detail_co.paa",
			"RB205_vehicles\atte\data\atte_legs_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
			"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
		};
		factions[] = {"RB205"};
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
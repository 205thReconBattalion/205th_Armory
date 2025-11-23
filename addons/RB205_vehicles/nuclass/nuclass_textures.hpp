hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\nuclass\data\nuclass_hull.rvmat",
	"RB205_vehicles\nuclass\data\nuclass_hull_front.rvmat",
	"RB205_vehicles\nuclass\data\nuclass_wings.rvmat",
	"3as\3as_republic_heli\rho_class\data\cockpit.rvmat",
	"3as\3as_republic_heli\rho_class\data\cockpit_interfaces.rvmat",
	"3as\3as_republic_heli\rho_class\data\interior.rvmat",
	"3as\3as_republic_heli\rho_class\data\interior_optional.rvmat"
};
hiddenSelectionsTextures[] =
{
	"RB205_vehicles\nuclass\data\nuclass_hull_co.paa",
	"RB205_vehicles\nuclass\data\nuclass_hull_front_co.paa",
	"RB205_vehicles\nuclass\data\nuclass_wings_co.paa",
	"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
	"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
	"3as\3as_republic_heli\rho_class\data\interior_co.paa",
	"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
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
			"RB205_vehicles\nuclass\data\nuclass_hull_co.paa",
			"RB205_vehicles\nuclass\data\nuclass_hull_front_co.paa",
			"RB205_vehicles\nuclass\data\nuclass_wings_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
		};
		factions[] = {"RB205"};
	};
	class Republic
	{
		displayName = "Grand Army of the Republic";
		author = "3AS";
		textures[] =
		{
			"3as\3as_republic_heli\nu_class\data\hull_co.paa",
			"3as\3as_republic_heli\nu_class\data\hull_front_co.paa",
			"3as\3as_republic_heli\nu_class\data\wings_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
		};
	};
	class Empire
	{
		displayName = "Galactic Empire";
		author = "3AS";
		textures[] = {
			"3as\3as_republic_heli\nu_class\data\hull_Imp_co.paa",
			"3as\3as_republic_heli\nu_class\data\hull_front_imp_co.paa",
			"3as\3as_republic_heli\nu_class\data\wings_Imp_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
		};
	};
};
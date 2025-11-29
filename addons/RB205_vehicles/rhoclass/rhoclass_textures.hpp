hiddenSelectionsMaterials[] =
{
	"RB205_vehicles\rhoclass\data\rhoclass_hull.rvmat",
	"RB205_vehicles\rhoclass\data\rhoclass_hull_front.rvmat",
	"RB205_vehicles\rhoclass\data\rhoclass_wings.rvmat",
	"3as\3as_republic_heli\rho_class\data\cockpit.rvmat",
	"3as\3as_republic_heli\rho_class\data\cockpit_interfaces.rvmat",
	"3as\3as_republic_heli\rho_class\data\interior.rvmat",
	"3as\3as_republic_heli\rho_class\data\interior_optional.rvmat"
};
hiddenSelectionsTextures[] =
{
	"RB205_vehicles\rhoclass\data\rhoclass_hull_co.paa",
	"RB205_vehicles\rhoclass\data\rhoclass_hull_front_co.paa",
	"RB205_vehicles\rhoclass\data\rhoclass_wings_co.paa",
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
			"RB205_vehicles\rhoclass\data\rhoclass_hull_co.paa",
			"RB205_vehicles\rhoclass\data\rhoclass_hull_front_co.paa",
			"RB205_vehicles\rhoclass\data\rhoclass_wings_co.paa",
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
			"3as\3as_republic_heli\rho_class\data\hull_rho_co.paa",
			"3as\3as_republic_heli\nu_class\data\hull_front_co.paa",
			"3as\3as_republic_heli\rho_class\data\wings_rho_co.paa",
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
		textures[] = 
		{
			"3as\3as_republic_heli\rho_class\data\hull_rho_Imp_co.paa",
			"3as\3as_republic_heli\nu_class\data\hull_front_imp_co.paa",
			"3as\3as_republic_heli\rho_class\data\wings_rho_Imp_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_co.paa",
			"3as\3as_republic_heli\rho_class\data\cockpit_interfaces_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_co.paa",
			"3as\3as_republic_heli\rho_class\data\interior_optional_co.paa"
		};
	};
};
class Damage
{
	mat[] =
	{
		"RB205_vehicles\rhoclass\data\rhoclass_hull.rvmat",
		"3as\3AS_Republic_Heli\Rho_Class\data\damage\Hull_Rho_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",

		"RB205_vehicles\rhoclass\data\rhoclass_hull_front.rvmat",
		"3as\3AS_Republic_Heli\Rho_Class\data\damage\Hull_Front_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
		
		"RB205_vehicles\rhoclass\data\rhoclass_wings.rvmat",
		"3as\3AS_Republic_Heli\Rho_Class\data\damage\Wings_Rho_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
		
		"3as\3as_republic_heli\rho_class\data\glass_cockpit.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_destruct.rvmat",
		
		"3as\3AS_Republic_Heli\Rho_Class\data\interior.rvmat",
		"3as\3AS_Republic_Heli\Rho_Class\data\damage\interior_damage.rvmat",
		"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat",

		"3as\3AS_Republic_Heli\Rho_Class\data\Interior_Optional.rvmat",
		"3as\3AS_Republic_Heli\Rho_Class\data\damage\interior_optional_damage.rvmat",
		"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
	};
	tex[] = {};
};
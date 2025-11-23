#define RHO_CRATE_TEXTURES(EXT_TEXTURE) \
hiddenSelectionsMaterials[] = \
{ \
	"RB205_vehicles\rhoclass\data\rhoclass_crate_ext.rvmat", \
	"3as\3as_republic_heli\rho_class\data\crate_int.rvmat", \
	"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa", \
	"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa", \
	"3as\3as_republic_heli\rho_class\data\interior_co.paa" \
}; \
hiddenSelectionsTextures[] = \
{ \
	##EXT_TEXTURE##, \
	"3as\3as_republic_heli\rho_class\data\crate_int_co.paa", \
	"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa", \
	"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa", \
	"3as\3as_republic_heli\rho_class\data\interior_co.paa" \
}; \
textureList[] = \
{ \
	"Default",			1, \
	"Republic",			0, \
	"Empire",			0 \
}; \
class TextureSources \
{ \
	class Default \
	{ \
		displayName = "205th Recon Battalion"; \
		author = "205th Recon Battalion"; \
		textures[] = \
		{ \
			##EXT_TEXTURE##, \
			"3as\3as_republic_heli\rho_class\data\crate_int_co.paa", \
			"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa", \
			"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa", \
			"3as\3as_republic_heli\rho_class\data\interior_co.paa" \
		}; \
		factions[] = {"RB205"}; \
	}; \
	class Republic \
	{ \
		displayName = "Grand Army of the Republic"; \
		author = "3AS"; \
		textures[] =  \
		{ \
			"3as\3as_republic_heli\rho_class\data\crate_ext_co.paa", \
			"3as\3as_republic_heli\rho_class\data\crate_int_co.paa", \
			"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa", \
			"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa", \
			"3as\3as_republic_heli\rho_class\data\interior_co.paa" \
		}; \
	}; \
	class Empire \
	{ \
		displayName = "Galactic Empire"; \
		author = "3AS"; \
		textures[] =  \
		{ \
			"3as\3as_republic_heli\rho_class\data\crate_ext_Imp_co.paa", \
			"3as\3as_republic_heli\rho_class\data\crate_int_co.paa", \
			"3as\3as_republic_heli\rho_class\data\variant_barracks_co.paa", \
			"3as\3as_republic_heli\rho_class\data\clone_bed_co.paa", \
			"3as\3as_republic_heli\rho_class\data\interior_co.paa" \
		}; \
	}; \
};
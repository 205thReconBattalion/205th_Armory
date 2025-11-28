#define WATERGLIDER_TEXTURES(TURRET_TEXTURE) \
hiddenselectionsMaterials[]= \
{ \
	"RB205_vehicles\waterGlider\data\waterGlider_boat.rvmat" \
}; \
hiddenSelectionsTextures[] = \
{ \
	"RB205_vehicles\waterGlider\data\waterGlider_boat_co.paa", \
	"RB205_vehicles\waterGlider\data\waterGlider_int2_co.paa", \
	"RB205_vehicles\waterGlider\data\waterGlider_seats_co.paa", \
	"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa", \
	"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa", \
	##TURRET_TEXTURE##, \
	"" \
}; \
textureList[] = \
{ \
	"Default",	1, \
	"Republic",	0, \
	"Empire",	0 \
}; \
class textureSources \
{ \
	class Default \
	{ \
		displayName = "205th Recon Battalion"; \
		author = "205th Recon Battalion"; \
		textures[] = \
		{ \
			"RB205_vehicles\waterGlider\data\waterGlider_boat_co.paa", \
			"RB205_vehicles\waterGlider\data\waterGlider_int2_co.paa", \
			"RB205_vehicles\waterGlider\data\waterGlider_seats_co.paa", \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa", \
			"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa", \
			##TURRET_TEXTURE##, \
			"" \
		}; \
		factions[] = {"RB205"}; \
	}; \
	class Republic \
	{ \
		displayName = "Grand Army of the Republic"; \
		author = "OPTRE"; \
		textures[] = \
		{ \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa", \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa", \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa", \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa", \
			"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa", \
			##TURRET_TEXTURE##, \
			"" \
		}; \
	}; \
	class Empire \
	{ \
		displayName = "Galactic Empire"; \
		author = "OPTRE"; \
		textures[] = \
		{ \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_boat_co.paa", \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa", \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa", \
			"\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa", \
			"\OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa", \
			##TURRET_TEXTURE##, \
			"" \
		}; \
	}; \
};
/*class Damage
{
	tex[]={};
	mat[]=
	{
		"RB205_vehicles\waterGlider\data\205_waterGlider_boat.rvmat",
		"RB205_vehicles\waterGlider\data\205_waterGlider_boat.rvmat",
		"OPTRE_Vehicles\catfish\data\optre_destroyed_boat.rvmat"
	};
};*/
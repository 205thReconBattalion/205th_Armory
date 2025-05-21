#define LABEL "GAR P2"


/* IMAGE CAMOUFLAGE */

#define IMAGE_CAMO_DEFAULT 	"#(rgb,8,8,3)color(0,0,0,1)"
#define IMAGE_CAMO_ARCTIC 	"\aceax_compat_rb205\main\data\background_arctic.jpg"
#define IMAGE_CAMO_DESERT 	"\aceax_compat_rb205\main\data\background_desert.jpg"
#define IMAGE_CAMO_JUNGLE 	"\aceax_compat_rb205\main\data\background_jungle.jpg"
#define IMAGE_CAMO_WOODLAND "\aceax_compat_rb205\main\data\background_woodland.jpg"


/* IMAGE SQUADS */

#define IMAGE_NONE		"#(rgb,8,8,3)color(0,0,0,1)"
#define IMAGE_ZILLO		"\aceax_compat_rb205\main\data\1_1_zillo.jpg"
#define IMAGE_CHIMAERA	"\aceax_compat_rb205\main\data\1_2_chimaera.jpg"
#define IMAGE_RANCOR	"\aceax_compat_rb205\main\data\1_3_rancor.jpg"
#define IMAGE_WAMPA		"\aceax_compat_rb205\main\data\1_4_wampa.jpg"
#define IMAGE_NEXU		"\aceax_compat_rb205\main\data\2_1_nexu.jpg"
#define IMAGE_BANSHEE	"\aceax_compat_rb205\main\data\3_1_banshee.jpg"


/* XtdGearInfos */

#define H(CLASS,TYPE,RANK,CAMO,VAR) \
	class ##CLASS## \
	{ \
		model = "aceax_compat_RB205_main_H"; \
		type = ##TYPE##; \
		rank = ##RANK##; \
		camo = ##CAMO##; \
		variant = ##VAR##; \
	};

#define U(CLASS,TYPE,RANK,CAMO,SQUAD) \
	class ##CLASS## \
	{ \
		model = "aceax_compat_RB205_main_U"; \
		type = ##TYPE##; \
		rank = ##RANK##; \
		camo = ##CAMO##; \
		squad = ##SQUAD##; \
	};

#define V(CLASS,TYPE,RANK,ROLE) \
	class ##CLASS## \
	{ \
		model = "aceax_compat_RB205_main_V"; \
		type = ##TYPE##; \
		rank = ##RANK##; \
		role = ##ROLE##; \
	};
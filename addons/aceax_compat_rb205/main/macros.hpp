#define LABEL "GAR P2"


/* IMAGE CAMOUFLAGE */

#define IMAGE_CAMO_DEFAULT 	"#(rgb,8,8,3)color(0,0,0,1)"
#define IMAGE_CAMO_ARCTIC 	"\aceax_compat_rb205\main\data\background_arctic.jpg"
#define IMAGE_CAMO_DESERT 	"\aceax_compat_rb205\main\data\background_desert.jpg"
#define IMAGE_CAMO_JUNGLE 	"\aceax_compat_rb205\main\data\background_jungle.jpg"
#define IMAGE_CAMO_WOODLAND "\aceax_compat_rb205\main\data\background_woodland.jpg"


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
#define LABEL "GAR P2 (Lore)"

/* XtdGearInfos */

#define H_CUSTOM(CLASS,ID,VAR) \
	class ##CLASS## \
	{ \
		model = "aceax_compat_RB205_custom_H"; \
		id = ##ID##; \
		variant = ##VAR##; \
	};

#define U_CUSTOM(CLASS,ID,VAR) \
	class ##CLASS## \
	{ \
		model = "aceax_compat_RB205_custom_U"; \
		id = ##ID##; \
		variant = ##VAR##; \
	};

#define V_CUSTOM(CLASS,ID,VAR) \
	class ##CLASS## \
	{ \
		model = "aceax_compat_RB205_custom_V"; \
		id = ##ID##; \
		variant = ##VAR##; \
	};
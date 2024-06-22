#define H(CLASS,TYPE,RANK,CAMO,VAR) \
	class ##CLASS## \
	{ \
		model = "aceax_compat_RB205_main_H"; \
		type = ##TYPE##; \
		rank = ##RANK##; \
		camo = ##CAMO##; \
		var = ##VAR##; \
	};

class XtdGearInfos
{
    class CfgWeapons
	{
		H(RB205_H_recruit,"DEFAULT","cr","default","dft")
		H(RB205_H_trooper,"DEFAULT","ct","default","dft")
		H(RB205_H_corporal,"DEFAULT","cp","default","dft")
		H(RB205_H_sergeant,"DEFAULT","cs","default","dft")
		H(RB205_H_lieutenant,"DEFAULT","cl","default","dft")

		H(RB205_H_ab_recruit,"jet","cr","default","dft")
		H(RB205_H_ab_trooper,"jet","ct","default","dft")
		H(RB205_H_ab_corporal,"jet","cp","default","dft")
		H(RB205_H_ab_sergeant,"jet","cs","default","dft")
		H(RB205_H_ab_lieutenant,"jet","cl","default","dft")

		H(RB205_H_arf_recruit,"sct","cr","default","dft")
		H(RB205_H_arf_trooper,"sct","ct","default","dft")
		H(RB205_H_arf_corporal,"sct","cp","default","dft")
		H(RB205_H_arf_sergeant,"sct","cs","default","dft")
		H(RB205_H_arf_lieutenant,"sct","cl","default","dft")

		H(RB205_H_arfF_trooper,"sct","ct","default","var1")
		H(RB205_H_arfF_corporal,"sct","cp","default","var1")
		H(RB205_H_arfF_sergeant,"sct","cs","default","var1")
		H(RB205_H_arfF_lieutenant,"sct","cl","default","var1")

		H(RB205_H_arf_trooper_arctic,"sct","ct","arctic","dft")
		H(RB205_H_arf_trooper_desert,"sct","ct","desert","dft")
		H(RB205_H_arf_trooper_jungle,"sct","ct","jungle","dft")
		H(RB205_H_arf_trooper_woodland,"sct","ct","woodland","dft")

		H(RB205_H_plt_recruit,"plt","cr","default","dft")
		H(RB205_H_plt_trooper,"plt","ct","default","dft")
		H(RB205_H_plt_corporal,"plt","cp","default","dft")
		H(RB205_H_plt_sergeant,"plt","cs","default","dft")
		H(RB205_H_plt_lieutenant,"plt","cl","default","dft")

		H(RB205_H_snow_recruit,"snw","cr","default","dft")
		H(RB205_H_snow_trooper,"snw","ct","default","dft")
		H(RB205_H_snow_corporal,"snw","cp","default","dft")
		H(RB205_H_snow_sergeant,"snw","cs","default","dft")
		H(RB205_H_snow_lieutenant,"snw","cl","default","dft")

		H(RB205_H_arc_trooper,"arc","ct","default","dft")
	};
};
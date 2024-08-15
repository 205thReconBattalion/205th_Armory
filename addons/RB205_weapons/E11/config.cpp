class cfgPatches
{
    class RB205_weapons_e11
	{
		requiredAddons[]=
		{
			"RB205_weapons",
			"3AS_Weapons_Imperial"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
		{
			"RB205_E11",
			"RB205_E11_wScope",
			"RB205_E11_stock",
			"RB205_E11_gl"
		};
	};
};

class cfgWeapons
{
	class 3AS_E11;
	class RB205_E11: 3AS_E11
	{
		displayName = "$STR_205_E11_DisplayName";
		displayNameShort = "$STR_205_E11_DisplayNameShort";
		descriptionShort = "Blastergewehr des Imperium<br />Freigegeben für: Alle";
		magazines[] =
		{
			"RB205_Standard_Energy_Pack_red"
		};
		magazineWell[] = {};
		modes[] = {"FullAuto","Single"};
	};
	class RB205_E11_wScope: RB205_E11
	{
		scopeArsenal = 0;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "3AS_Imp_Optic_E11";
				slot = "CowsSlot";
			};
		};
	};

	class 3AS_E11Stock;
	class RB205_E11_stock: 3AS_E11Stock
	{
		displayName = "$STR_205_E11_STOCK_DisplayName";
		displayNameShort = "$STR_205_E11_DisplayNameShort";
		descriptionShort = "Blastergewehr des Imperium<br />Freigegeben für: Alle";
		magazines[] =
		{
			"RB205_Standard_Energy_Pack_red"
		};
		magazineWell[] = {};
		modes[] = {"FullAuto","Single"};
	};

	class 3AS_E11GL_Base_F;
	class 3AS_E11_GL: 3AS_E11GL_Base_F
	{
		class 3AS_E11GL;
	};
	class RB205_E11_gl: 3AS_E11_GL
	{
		displayName = "$STR_205_E11_GL_DisplayName";
		displayNameShort = "$STR_205_E11_GL_DisplayNameShort";
		descriptionShort = "Blastergewehr des Imperium<br />Freigegeben für: Grenadier";
		magazines[] =
		{
			"RB205_Standard_Energy_Pack_red"
		};
		magazineWell[] = {};
		modes[] = {"FullAuto","Single"};
		muzzles[] =
		{
			"this",
			"RB205_E11GL"
		};
		class RB205_E11GL: 3AS_E11GL
		{
			displayName = "E-11-GL";
			magazines[] =
			{
				"RB205_ugl_he"
			};
			magazineWell[] =
			{
				"RB205_ugl_1rnd"
			};
		};
	};
};
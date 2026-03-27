class cfgPatches
{
    class RB205_logistics_identification_keycards
	{
		requiredAddons[]=
		{
			"RB205_logistics"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {
			"RB205_keycard_red",
			"RB205_keycard_orange",
			"RB205_keycard_yellow",
			"RB205_keycard_green",
			"RB205_keycard_blue",
			"RB205_keycard_master",
			"RB205_keycard_prison"
		};
		units[] = {
			"RB205_GH_keycard_red",
			"RB205_GH_keycard_orange",
			"RB205_GH_keycard_yellow",
			"RB205_GH_keycard_green",
			"RB205_GH_keycard_blue",
			"RB205_GH_keycard_master",
			"RB205_GH_keycard_prison"
		};
	};
};

class cfgWeapons {
	class JLTS_intel_datacard;
	class RB205_keycard_base: JLTS_intel_datacard
	{
		scope = 1;
		author = "205th Recon Battalion";
		displayName = "Keycard";
		descriptionShort = "Eine Schlüsselkarte, die Zugriff auf gesicherte Bereiche gewährt. Die Farbe gibt an, welche Türen geöffnet werden können.";
	};

	class RB205_keycard_red: RB205_keycard_base
	{
		scope = 2;
		displayName = "Keycard (Red)";
		picture = "\RB205_logistics\identification\keycards\data\keycard_red_ca.paa";
	};
	class RB205_keycard_orange: RB205_keycard_base
	{
		scope = 2;
		displayName = "Keycard (Orange)";
		picture = "\RB205_logistics\identification\keycards\data\keycard_orange_ca.paa";
	};
	class RB205_keycard_yellow: RB205_keycard_base
	{
		scope = 2;
		displayName = "Keycard (Yellow)";
		picture = "\RB205_logistics\identification\keycards\data\keycard_yellow_ca.paa";
	};
	class RB205_keycard_green: RB205_keycard_base
	{
		scope = 2;
		displayName = "Keycard (Green)";
		picture = "\RB205_logistics\identification\keycards\data\keycard_green_ca.paa";
	};
	class RB205_keycard_blue: RB205_keycard_base
	{
		scope = 2;
		displayName = "Keycard (Blue)";
		picture = "\RB205_logistics\identification\keycards\data\keycard_blue_ca.paa";
	};
	class RB205_keycard_master: RB205_keycard_base
	{
		scope = 2;
		displayName = "Keycard (Master)";
		picture = "\RB205_logistics\identification\keycards\data\keycard_black_ca.paa";
		descriptionShort = "Eine Universal-Schlüsselkarte, die Zugriff auf gesicherte Bereiche aller Farben gewährt.";
	};
	
	class RB205_keycard_prison: RB205_keycard_base
	{
		scope = 2;
		displayName = "Keycard (Prison)";
		picture = "\RB205_logistics\identification\keycards\data\keycard_black_ca.paa";
		descriptionShort = "Eine Schlüsselkarte, die Zugriff zum Gefängnistrakt gewährt.";
		//picture = "\MRC\JLTS\contraband\Intel\data\ui\datacard_ui_ca.paa";
	};
};

#define EDITOR_CATEGORY "RB205_prop_extra"
#define EDITOR_SUBCATEGORY "RB205_extraContent_accessCards"
class CfgVehicles
{
	class JLTS_GH_intel_datacard;
	class RB205_GH_keycard_base: JLTS_GH_intel_datacard {
		scope = 1;
		scopeCurator = 1;
		author = "205th Recon Battalion";
		displayName = "Keycard";
		editorCategory = "RB205_props_keycards";
		editorSubcategory = "RB205_props_keycards_gh";
		class TransportItems {
			class RB205_accessCard_cis {
				name = "RB205_accessCard_cis";
				count = 1;
			};
		};
	};
	class RB205_GH_keycard_red: RB205_GH_keycard_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Red)";
		class TransportItems {
			class RB205_keycard_red {
				name = "RB205_keycard_red";
				count = 1;
			};
		};
	};
	class RB205_GH_keycard_orange: RB205_GH_keycard_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Orange)";
		class TransportItems {
			class RB205_keycard_orange {
				name = "RB205_keycard_orange";
				count = 1;
			};
		};
	};
	class RB205_GH_keycard_yellow: RB205_GH_keycard_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Yellow)";
		class TransportItems {
			class RB205_keycard_yellow {
				name = "RB205_keycard_yellow";
				count = 1;
			};
		};
	};
	class RB205_GH_keycard_green: RB205_GH_keycard_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Green)";
		class TransportItems {
			class RB205_keycard_green {
				name = "RB205_keycard_green";
				count = 1;
			};
		};
	};
	class RB205_GH_keycard_blue: RB205_GH_keycard_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Blue)";
		class TransportItems {
			class RB205_keycard_blue {
				name = "RB205_keycard_blue";
				count = 1;
			};
		};
	};
	class RB205_GH_keycard_master: RB205_GH_keycard_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Master)";
		class TransportItems {
			class RB205_keycard_master {
				name = "RB205_keycard_master";
				count = 1;
			};
		};
	};
	class RB205_GH_keycard_prison: RB205_GH_keycard_base {
		scope = 2;
		scopeCurator = 2;
		displayName = "Keycard (Prison)";
		class TransportItems {
			class RB205_keycard_prison {
				name = "RB205_keycard_prison";
				count = 1;
			};
		};
	};
};

class CfgEditorCategories
{
	class RB205_props_keycards
	{
		displayName = "[205] Props (Keycards/ Locked Doors)";
	};
};
class CfgEditorSubcategories
{
	class RB205_props_keycards_gh
	{
		displayName = "Keycards";
	};
	class RB205_props_keycards_doors_red
	{
		displayName = "Locked Doors (Red)";
	};
	class RB205_props_keycards_doors_orange
	{
		displayName = "Locked Doors (Orange)";
	};
	class RB205_props_keycards_doors_yellow
	{
		displayName = "Locked Doors (Yellow)";
	};
	class RB205_props_keycards_doors_green
	{
		displayName = "Locked Doors (Green)";
	};
	class RB205_props_keycards_doors_blue
	{
		displayName = "Locked Doors (Blue)";
	};
	class RB205_props_keycards_doors_prison
	{
		displayName = "Locked Doors (Prison)";
	};
};
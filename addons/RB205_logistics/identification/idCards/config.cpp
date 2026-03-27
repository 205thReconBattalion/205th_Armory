class cfgPatches
{
    class RB205_logistics_identification_idCards
	{
		requiredAddons[]=
		{
			"RB205_logistics",
			"JLTS_C_IDs"
		};
		requiredVersion = 1.0;
        author = "205th Recon Battalion";
		weapons[] = {

		};
		units[] = {};
	};
};

class cfgWeapons
{
	//class JLTS_ids_gar_army;
	//class JLTS_ids_gar_medical;
	class JLTS_ids_gar_navy;
	class RB205_ids_rep_diplomat: JLTS_ids_gar_navy
	{
		displayName = "(ID) Republic Diplomat ID card";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\contraband\IDs\data\id_card_gar_navy_co.paa"};
		picture = "\MRC\JLTS\contraband\IDs\data\ui\id_card_gar_navy_ui_ca.paa";
	};
	//class JLTS_ids_police;

	class JLTS_ids_rep_civ;
	class RB205_ids_cis_civ: JLTS_ids_rep_civ
	{
		displayName = "(ID) Confederacy of Independent Systems civilian ID card";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\contraband\IDs\data\id_card_rep_civ_co.paa"};
		picture = "\MRC\JLTS\contraband\IDs\data\ui\id_card_rep_civ_ui_ca.paa";
	};
	class RB205_ids_neutral_civ: JLTS_ids_rep_civ
	{
		displayName = "(ID) civilian ID card";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\contraband\IDs\data\id_card_rep_civ_co.paa"};
		picture = "\MRC\JLTS\contraband\IDs\data\ui\id_card_rep_civ_ui_ca.paa";
	};

	/*
	GAR:
	- Army
	- Medical
	- Navy
	- Intelligence
	- Science Department
	REP:
	- Civilian
	- Diplomat
	CIS:
	- Officer
	- Science Department
	- Civilian
	- Diplomat
	Neutral:
	- Civilian
	- Diplomat
	- Driving License
	- Pilot License
	- Firearm License
	*/
};
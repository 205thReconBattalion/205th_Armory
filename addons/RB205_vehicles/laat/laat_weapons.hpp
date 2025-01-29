weapons[]=
{
	"3as_LAAT_Medium_Canon",
	"RB205_AGM_Torrent_weapon",
	"RB205_AA_Torrent_weapon",
	"CMFlareLauncher"
};
magazines[]=
{
	"3as_LAAT_1000Rnd_Medium_shells",
	"3as_LAAT_1000Rnd_Medium_shells",
	"3as_LAAT_1000Rnd_Medium_shells",
	"3as_LAAT_1000Rnd_Medium_shells",
	"RB205_AGM_Torrent_missile_6rnd",
	"RB205_AA_Torrent_missile_4rnd",
	"240Rnd_CMFlare_Chaff_Magazine",
	"240Rnd_CMFlare_Chaff_Magazine",
	"240Rnd_CMFlare_Chaff_Magazine",
	"240Rnd_CMFlare_Chaff_Magazine"
};

class Components: Components
{
	class TransportPylonsComponent
	{
		UIPicture="3as\3AS_LAAT\LAATI\data\ui\pylon_laat.paa";
		class pylons
		{
			class pylons1
			{
				hardpoints[]=
				{
					"B_BIM9X_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AGM65_RAIL"
				};
				attachment="";
				priority=10;
				maxweight=5000;
				UIposition[]={0.15,0.15};
			};
			class pylons2: pylons1
			{
				UIposition[]={0.5,0.15};
				mirroredMissilePos=1;
			};
			class pylons3: pylons1
			{
				hardpoints[]=
				{
					"B_BIM9X_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AGM65_RAIL"
				};
				attachment="";
				priority=9;
				maxweight=5000;
				UIposition[]={0.1,0.25};
			};
			class pylons4: pylons3
			{
				UIposition[]={0.55,0.25};
				mirroredMissilePos=3;
			};
		};
		class presets
		{
			class empty
			{
				displayName="$STR_empty";
				attachment[]={};
			};
			class AA
			{
				displayName="AA";
				attachment[]=
				{
					"RB205_AMRAAM_missilePylon",
					"RB205_AMRAAM_missilePylon",
					"RB205_BIM9X_missilePylon_3rnd",
					"RB205_BIM9X_missilePylon_3rnd"
				};
			};
			class CAS
			{
				displayName="CAS";
				attachment[]=
				{
					"RB205_AGM65_missilePylon",
					"RB205_AGM65_missilePylon",
					"RB205_AGM65L_missilePylon",
					"RB205_AGM65L_missilePylon"
				};
			};
		};
	};
};
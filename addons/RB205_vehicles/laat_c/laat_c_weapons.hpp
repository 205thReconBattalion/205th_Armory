weapons[] =
{
	"3as_LAAT_Medium_Canon",
	"RB205_AGM_Torrent_weapon",
	"CMFlareLauncher"
};
magazines[] =
{
	"3as_LAAT_1000Rnd_Medium_shells",
	"3as_LAAT_1000Rnd_Medium_shells",
	"3as_LAAT_1000Rnd_Medium_shells",
	"3as_LAAT_1000Rnd_Medium_shells",
	"RB205_AGM_Torrent_missile_2rnd",
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
				hardpoints[]={};
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
				hardpoints[]={};
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
		class presets {};
	};
};
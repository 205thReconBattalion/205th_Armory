class Components: Components
{
	class TransportPylonsComponent
	{
		UIPicture = "3as\3AS_Z95\Data\ui\pylon_z95.paa";
		class pylons
		{
			class pylons1
			{
				hardpoints[] =
				{
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AMRAAM_D_DUAL_RAIL",
					"B_AGM65_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_AMRAAM_missilePylon_2rnd";
				priority = 10;
				maxweight = 5000;
				UIposition[] = {0.5,0.35};
				mirroredMissilePos = 2;
			};
			class pylons2: pylons1
			{
				UIposition[] = {0.15,0.35};
				mirroredMissilePos = 0;
			};
			class pylons3: pylons1
			{
				hardpoints[]=
				{
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AGM65_RAIL",
					"B_HARM_RAIL"
				};
				attachment = "RB205_AGM65_missilePylon";
				priority = 9;
				maxweight = 5000;
				UIposition[] = {0.1,0.25};
				mirroredMissilePos = 0;
			};
			class pylons4: pylons3
			{
				UIposition[] = {0.525,0.25};
				mirroredMissilePos = 3;
			};
			class pylons5: pylons1
			{
				hardpoints[] =
				{
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL"
				};
				attachment = "RB205_BIM9X_missilePylon_3rnd";
				priority = 7;
				maxweight = 5000;
				UIposition[] = {0.575,0.15};
				mirroredMissilePos = 6;
			};
			class pylons6: pylons5
			{
				UIposition[] = {0.05,0.15};
				mirroredMissilePos = 0;
			};
			class Pylons7
			{
				hardpoints[] =
				{
					"z95_CANON_PYLON"
				};
				priority = 5;
				attachment = "3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells";
				maxweight = 4000;
				UIposition[] = {0.325,0.45};
			};
		};
		class presets
		{
			class empty
			{
				displayName = "$STR_empty";
				attachment[] = {};
			};
			class Default
			{
				displayName = "$STR_vehicle_default";
				attachment[] =
				{
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AGM65_missilePylon",
					"RB205_AGM65_missilePylon",
					"RB205_BIM9X_missilePylon_3rnd",
					"RB205_BIM9X_missilePylon_3rnd",
					"3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells"
				};
			};
			class AA
			{
				displayName = "AA";
				attachment[] =
				{
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon_2rnd",
					"RB205_AMRAAM_missilePylon",
					"RB205_AMRAAM_missilePylon",
					"RB205_BIM9X_missilePylon_3rnd",
					"RB205_BIM9X_missilePylon_3rnd",
					"3AS_PylonWeapon_Z95_240Rnd_Heavy_Shells"
				};
			};
		};
	};
};
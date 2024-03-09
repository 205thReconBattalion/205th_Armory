#define IMAGE_CT "#(rgb,8,8,3)color(1,1,1,1)"
#define IMAGE_CS "#(rgb,8,8,3)color(0.349,0.325,0.122,1)"
#define IMAGE_CL "#(rgb,8,8,3)color(0.133,0.31,0.376,1)"
#define IMAGE_CO "#(rgb,8,8,3)color(0.396,0.149,0.161,1)"
#define IMAGE_CC "#(rgb,8,8,3)color(0.733,0.612,0.212,1)"

class XtdGearModels
{
    class CfgWeapons 
    {
        class SW205_H
        {
            label = "Phase I";
            author = "205th Recon Battalion";
            options[] =
			{
                "type",
                "rank"
			};
            class type
            {
                label = "Typ";
                values[] =
				{
                    "dft",
                    "arf",
                    "plt"
				};
                class dft
                {
                    label = "Standard";
                    description = "";
                };
                class arf
                {
                    label = "ARF";
                    description = "Advanced Recon Force";
                };
                class plt
                {
                    label = "Pilot";
                    description = "";
                };
            };
            class rank
            {
                label = "Dienstgrad";
                values[] =
				{
                    "ct",
					"cp",
					"cs",
					"cl",
					"co",
					"cc"
				};
                class ct
                {
                    label = "CT";
                    description = "Clone Recruit (CR) - Clone Corporal (CP)";
                    image = IMAGE_CT;
                };
                class cs
                {
                    label = "CS";
                    description = "Clone Sergeant (CS) - Clone Sergeant-Major (CSM)";
                    image = IMAGE_CS;
                };
                class cl
                {
                    label = "CL";
                    description = "Clone Lieutenant (CL)";
                    image = IMAGE_CL;
                };
                class co
                {
                    label = "CO";
                    description = "Clone Captain (CO)";
                    image = IMAGE_CO;
                };
                class cc
                {
                    label = "CC";
                    description = "Clone Commander (CC)";
                    image = IMAGE_CC;
                };
            };
        };
		class SW205_U: SW205_H
		{
            options[] =
			{
                "rank"
			};
		};
	};
	class CfgVehicles
	{
		class SW205_B
        {
            label = "Phase I";
            author = "205th Recon Battalion";
            options[] =
			{
                "type",
                "special"
			};
            class type
            {
                label = "Typ";
                values[] =
				{
                    "dft",
                    "jetpack",
                    "arf"
				};
                class dft
                {
                    label = "Standard";
                    description = "";
                };
                class jetpack
                {
                    label = "Jetpack";
                    description = "";
                };
                class arf
                {
                    label = "ARF";
                    description = "Advanced Recon Force";
                };
            };
            class special
            {
                label = "Spezialisierung";
                values[] =
				{
                    "default",
                    "heavy",
                    "medic",
                    "radio",
					"rocket",
                    "eod"
				};
                class default
                {
                    label = "";
                    description = "Standard";
                    image = "\RB205_main\data\ui\other\role_rifleman.jpg";
                };
                class heavy
                {
                    label = "";
                    description = "Heavy";
                    image = "\RB205_main\data\ui\other\role_heavy.jpg";
                };
                class medic
                {
                    label = "";
                    description = "Medic";
                    image = "\RB205_main\data\ui\other\role_medic.jpg";
                };
                class radio
                {
                    label = "";
                    description = "RTO";
                    image = "\RB205_main\data\ui\other\role_rto.jpg";
                };
                class rocket
                {
                    label = "";
                    description = "AT/AA";
                    image = "\RB205_main\data\ui\other\role_ataa.jpg";
                };
                class eod
                {
                    label = "";
                    description = "EOD";
                    image = "\RB205_main\data\ui\other\role_eod.jpg";
                };
            };
        };
	};
};
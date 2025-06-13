class cfgPatches
{
    class RB205_training_targets
    {
        requiredAddons[] =
        {
			"RB205_training",
            "A3_Structures_F_Training"
        };
        requiredVersion = 1.0;
        author = "205th Recon Battalion";
		units[] =
		{
			"RB205_TargetP_Inf_F2",
			"RB205_training_target_droid_b1",
			"RB205_training_target_droid_b2",
			"RB205_training_target_droid_bx"
		};
		weapons[] = {};
    };
};

class CfgVeheicles
{
	class TargetP_Inf_F;
	class RB205_TargetP_Inf_F2: TargetP_Inf_F
	{
		displayName = "[205] TARGET 2";
	};
	class RB205_training_target_droid_b1: TargetP_Inf_F
	{
		editorCategory = "RB205_prop_training";
		editorSubcategory = "RB205_training_targets";
		editorPreview = "";
		
		displayName = "Pop-Up Target (B1 Droid)";
		hiddenSelectionsTextures[] = {"RB205_training\target\data\target_droid_b1_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
	class RB205_training_target_droid_b2: RB205_training_target_droid_b1
	{
		displayName = "Pop-Up Target (B2 Droid)";
		hiddenSelectionsTextures[] = {"RB205_training\target\data\target_droid_b2_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
	class RB205_training_target_droid_bx: RB205_training_target_droid_b1
	{
		displayName = "Pop-Up Target (BX Droid)";
		hiddenSelectionsTextures[] = {"RB205_training\target\data\target_droid_bx_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};

	//class Land_Target_Swivel_01_F;

	//class Land_Target_Oval_Wall_Bottom_F;
	//class Land_Target_Oval_Wall_Left_F;
	//class Land_Target_Oval_Wall_Right_F;
	//class Land_Target_Oval_Wall_Top_F;

	//class Land_Target_Dueling_01_F;

	//class Land_VR_Target_Dart_01_F;

};

class CfgEditorSubcategories
{
	class RB205_training_targets
	{
		displayName = "Targets";
	};
};
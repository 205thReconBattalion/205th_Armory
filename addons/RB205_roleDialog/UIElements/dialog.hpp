class RB205_roleDialog
{
    idd = 205530;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground
    {

        class DialogBackground: RB205RoleDialog_RscPicture
        {
            idc = -1;
            x = HINTERGRUND_X;
            y = HINTERGRUND_Y;
            w = HINTERGRUND_W;
            h = HINTERGRUND_H;
            colorBackground[] = {0,0,0,0.6};
            colorText[] = {1,1,1,0.7};
            text = "RB205_roleDialog\UIElements\bilder\HintergrundDialog.paa";
        };
    };

    class controls
    {
        class ButtonRifleman: RB205RoleDialog_RscButton
        {
            idc = 205531;
            text = "";
            x = SPALTE_EINS;
            y = ZEILE_EINS;
            w = 0.05 * safezoneW;
            h = BUTTON_H;

            tooltip = "Rifleman";
            
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\Rifleman.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\Rifleman.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\Rifleman.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\Rifleman.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\Rifleman.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\Rifleman.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickRifleman";
        };
        
        class ButtonATAA: RB205RoleDialog_RscButton
        {
            idc = 205532;
            text = "";
            x = SPALTE_VIER;
            y = ZEILE_EINS;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            
            tooltip = "AT/AA";
            
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\AT_AA.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\AT_AA.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\AT_AA.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\AT_AA.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\AT_AA.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\AT_AA.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickATAA";
        };
        class ButtonEOD: RB205RoleDialog_RscButton
        {
            idc = 205533;
            text = "";
            x = SPALTE_VIER;
            y = ZEILE_ZWEI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "EOD";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\EOD.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\EOD.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\EOD.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\EOD.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\EOD.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\EOD.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickEOD";
        };

        class ButtonARF: RB205RoleDialog_RscButton
        {
            idc = 205540;
            text = "";
            x = SPALTE_DREI;
            y = ZEILE_DREI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "ARF";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\ARF.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\ARF.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\ARF.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\ARF.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\ARF.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\ARF.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickARF";
        };
        
        class ButtonGren: RB205RoleDialog_RscButton
        {
            idc = 205534;
            text = "";
            x = SPALTE_ZWEI;
            y = ZEILE_EINS;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "Grenadier";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\Gren.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\Gren.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\Gren.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\Gren.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\Gren.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\Gren.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickGren";
        };

        class ButtonHeavy: RB205RoleDialog_RscButton
        {
            idc = 205535;
            text = "";
            x = SPALTE_DREI;
            y = ZEILE_EINS;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "Heavy";
            
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\Heavy.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\Heavy.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\Heavy.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\Heavy.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\Heavy.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\Heavy.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickHeavy";
        };

        class ButtonMarksman: RB205RoleDialog_RscButton
        {
            idc = 205536;
            text = "";
            x = SPALTE_EINS;
            y = ZEILE_ZWEI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "Marksman";
            
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\Marksman.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\Marksman.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\Marksman.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\Marksman.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\Marksman.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\Marksman.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickMarksman";
        };

        class ButtonCrewman: RB205RoleDialog_RscButton
        {
            idc = 205541;
            text = "";
            x = SPALTE_EINS;
            y = ZEILE_DREI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "Crewman";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\Crewman.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\Crewman.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\Crewman.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\Crewman.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\Crewman.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\Crewman.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickCrewman";
        };

        class ButtonMedic: RB205RoleDialog_RscButton
        {
            idc = 205537;
            text = "";
            x = SPALTE_DREI;
            y = ZEILE_ZWEI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "Medic";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\Medic.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\Medic.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\Medic.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\Medic.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\Medic.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\Medic.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickMedic";
        };

        class ButtonRTO: RB205RoleDialog_RscButton
        {
            idc = 205538;
            text = "";
            x = SPALTE_ZWEI;
            y = ZEILE_ZWEI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "RTO";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\RTO.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\RTO.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\RTO.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\RTO.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\RTO.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\RTO.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickRTO";
        };

        class ButtonPilot: RB205RoleDialog_RscButton
        {
            idc = 205539;
            text = "";
            x = SPALTE_ZWEI;
            y = ZEILE_DREI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "Pilot";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\Pilot.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\Pilot.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\Pilot.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\Pilot.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\Pilot.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\Pilot.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickPilot";
        };

        class ButtonARC: RB205RoleDialog_RscButton
        {
            idc = 205542;
            text = "";
            x = SPALTE_VIER;
            y = ZEILE_DREI;
            w = 0.05 * safezoneW;
            h = BUTTON_H;
            tooltip = "ARC";
            animTextureNormal = "\RB205_roleDialog\UIElements\bilder\ARC.paa";
            animTextureDisabled = "\RB205_roleDialog\UIElements\bilder\ARC.paa";
            animTextureOver = "\RB205_roleDialog\UIElements\bilder\ARC.paa";
            animTextureFocused = "\RB205_roleDialog\UIElements\bilder\ARC.paa";
            animTexturePressed = "\RB205_roleDialog\UIElements\bilder\ARC.paa";
            animTextureDefault = "\RB205_roleDialog\UIElements\bilder\ARC.paa";

            onButtonClick = "call RB205_roleDialog_fnc_onBtnClickARC";
        };



    };
};
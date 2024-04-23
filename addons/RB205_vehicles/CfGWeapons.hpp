class CfgWeapons{
    class HMG_127;
    class OPTRE_M41_LAAG: HMG_127{
        class FullAuto;
    }

    class 205_wh_mg_wp: OPTRE_M41_LAAG{
        magazines[] = {
            "205_1000rnd_mg_ma",
        };
        class FullAuto: FullAuto{
            class StandardSound{
                soundsetshot[] = {"3AS_Z6_SoundSet"};
            };
        };
    };

};
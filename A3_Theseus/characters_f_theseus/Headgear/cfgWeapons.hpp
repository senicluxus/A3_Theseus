class CfgWeapons
{
    // Arma 3

    // Arma 3 Aegis + Atlas
	class H_MK7_Base_F;
	
    // Arma 3 Theseus
	class H_MK7_digi_des_F: H_MK7_Base_F
    {
        author = $STR_A3_A_BranFlakes;
        scope = public;
        displayName = $STR_A3_T_CfgWeapons_H_mk7_digi_des0;
        //picture = "Picture path";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Theseus\Characters_F_Theseus\Headgear\Data\MK7_digi_des.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
};
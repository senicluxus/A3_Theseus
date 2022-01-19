class CfgWeapons
{
    // Arma 3
    class H_HelmetIA;

    // Arma 3 Aegis + Atlas
	class H_MK7_Base_F;
	
    // Arma 3 Theseus
	class H_MK7_digi_des_F: H_MK7_Base_F
    {
        author = $STR_A3_A_BranFlakes;
        scope = public;
        displayName = $STR_A3_T_CfgWeapons_H_mk7_digi_des0;
        picture = "\A3_Theseus\characters_f_theseus\Headgear\Data\UI\H_MK7_digi_des_ca.paa";
        model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Mk7_F";
        hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\A3_Theseus\Characters_F_Theseus\Headgear\Data\MK7_digi_des.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetSpecter_01_brown_CO.paa",
         	"\A3_Aegis\Characters_F_Aegis\Headgear\Data\equip_d_co.paa"
        };
    };
    class H_I_Helmet_digi_des: H_HelmetIA
    {
        author = $STR_A3_A_BranFlakes;
		displayName = $STR_A3_T_CfgWeapons_H_I_Helmet_digi_des0;
		picture = "A3_Theseus\characters_f_theseus\Headgear\Data\UI\H_I_Helmet_digi_des_ca.paa";
		hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Headgear\Data\Headgear_helmet_digi_des_CO.paa"};
    };
    class lxWS_H_bmask_camo01;
    class lxWS_H_bmask_Minotaur: lxWS_H_bmask_camo01
    {
        author = $STR_A3_A_BranFlakes;
        picture = "\lxws\characters_f_lxws\headgear\pmc\data\ui\icon_mask_black_ca.paa";
        displayName = "Ballistic Mask (Minotaur)";
        hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Headgear\Data\Mask_Minotaur_CO.paa"};
        hiddenSelections[] = {"camo"};
    };
};
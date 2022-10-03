class CfgWeapons
{
    /* Inheritance */
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
	class V_PlateCarrier_CTRG_lxWS;

    /* Items */  
    
    class V_PlateCarrierL_NAAF_grn_F: V_PlateCarrier1_rgr
	{
		author = $STR_A3_A_Heliotrope;
		displayName = $STR_A3_T_CfgWeapons_V_PlateCarrierL_NAAF_grn_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierL_CTRG_grn_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Vests\Data\vests_snake_naaf_CO.paa"};
	};
	class V_PlateCarrierH_NAAF_grn_F: V_PlateCarrier2_rgr
	{
		author = $STR_A3_A_Heliotrope;
		displayName = $STR_A3_T_CfgWeapons_V_PlateCarrierH_NAAF_grn_F0;
		picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierH_CTRG_grn_F_CA.paa";
		hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Vests\Data\vests_snake_naaf_CO.paa"};
    };
	class Theseus_V_PlateCarrier2_alt_NAAF: V_PlateCarrier_CTRG_lxWS
    {
        scope = public; 
        picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierH_CTRG_grn_F_CA.paa";
		displayName = $STR_A3_T_CfgWeapons_V_PlateCarrier2_alt_NAAF_grn_F0;
		hiddenSelectionsTextures[] =
		{
			"\A3_Theseus\Characters_F_Theseus\Vests\Data\vests_snake_naaf_CO.paa"
		};
    };
};
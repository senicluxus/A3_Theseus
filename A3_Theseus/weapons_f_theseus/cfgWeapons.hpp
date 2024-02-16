class cfgWeapons
{
    // Arma 3
    class arifle_TRG21_F;
    class arifle_SPAR_01_blk_F;
    class arifle_SPAR_01_GL_blk_F;
    class arifle_SPAR_03_blk_F;
    class srifle_DMR_02_Camo_F;
    class hgun_ACPC2_black_F;
    class hgun_ACPC2_F;
    class hgun_G17_black_F;
    class sgun_M4_F;

    // Presets
    #include "presets.hpp"

    // NVG Slot Armbands
    class NVGoggles;
    class Aegis_NV_G_Armband_Blu_F: NVGoggles
    {
        class ItemInfo;
    };
    class Theseus_NV_G_Armband_REM1_F: Aegis_NV_G_Armband_Blu_F
    {
        author = $STR_A3_A_Jamie;
	    displayName = $STR_A3_T_CfgGlasses_G_Armband_Remnant_F0;
	    picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_OPF_F_CA.paa";
	    hiddenSelectionsTextures[] = 
	    {
		    "\A3_Theseus\Characters_F_Theseus\Facewear\Data\G_Armband_Remnant_CO.paa"
	    };
	    class ItemInfo: ItemInfo
	    {
		    hiddenSelectionsTextures[] = 
		    {
			    "\A3_Theseus\Characters_F_Theseus\Facewear\Data\G_Armband_Remnant_CO.paa"
		    };
	    };
    };
    class Aegis_NV_G_Armband_Blu_Alt_F;
    class Aegis_NV_G_Armband_IND_alt_F: Aegis_NV_G_Armband_Blu_Alt_F
    {
        class ItemInfo;
    };
    class Theseus_NV_G_Armband_REM1_Alt_F: Aegis_NV_G_Armband_IND_alt_F
    {
	    author = $STR_A3_A_Jamie;
	    displayName = $STR_A3_T_CfgGlasses_G_Armband_Remnant_alt_F0;
	    picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_Aegis_G_Armband_OPF_F_CA.paa";
	    hiddenSelectionsTextures[] = 
	    {
		    "\A3_Theseus\Characters_F_Theseus\Facewear\Data\G_Armband_Remnant_CO.paa"
	    };
	    class ItemInfo: ItemInfo
	    {
		    hiddenSelectionsTextures[] = 
		    {
			    "\A3_Theseus\Characters_F_Theseus\Facewear\Data\G_Armband_Remnant_CO.paa"
		    };
	    };
    };
};
// C-1911 .45ACP + Flashlight
class hgun_ACPC2_black_FL_F: hgun_ACPC2_black_F
{
    author = $STR_A3_A_Heliotrope;
    class linkedItems
    {
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight_pistol;
		};
    };
};

// ACP-C2 .45ACP + Flashlight + Flashhider
class hgun_ACPC2_FL_FH_F: hgun_ACPC2_F
{
    author = $STR_A3_A_Heliotrope;
    class linkedItems
    {
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight_pistol;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_mzls_acp;
		};
    };
};

// G17 (Black) 9 mm + Flashhider
class hgun_G17_black_FH_F: hgun_G17_black_F
{
    author = $STR_A3_A_Heliotrope;
    class linkedItems
    {
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_mzls_L;
		};
    };
};

// SPAR-16 GL 5.56 mm + MRCO + Flashlight + Flashhider
class arifle_SPAR_01_GL_blk_MRCO_FL_FH_F: arifle_SPAR_01_GL_blk_F
{
	author = $STR_A3_A_Heliotrope;
    class linkedItems
    {
        class LinkedItemsOptic
        {
            slot = CowsSlot;
            item = optic_MRCO;
        };
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_mzls_M;
		};
    };
};

// SPAR-16 5.56 mm + ACO (Green) + IR Pointer + Suppressor
class arifle_SPAR_01_blk_F_ACO_grn_Pointer_Snds_F: arifle_SPAR_01_blk_F
{
	author = $STR_A3_A_Heliotrope;
    class linkedItems
    {
        class LinkedItemsOptic
        {
            slot = CowsSlot;
            item = optic_ACO_grn;
        };
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsMuzzle
		{
			slot = MuzzleSlot;
			item = muzzle_snds_M;
		};
    };
};

// SPAR-17 7.62 mm + NVS + Bipod
class arifle_SPAR_03_blk_NVS_LP_BI_F: arifle_SPAR_03_blk_F
{
	author = $STR_A3_A_Heliotrope;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_NVS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_03_F_blk;
		};
	};
};

// TRG-21 5.56 mm + MRCO + IR Laser Pointer
class arifle_TRG21_MRCO_Pointer_F: arifle_TRG21_F
{
    author = $STR_A3_A_Heliotrope;
    class linkedItems
    {
        class LinkedItemsOptic
        {
            slot = CowsSlot;
            item = optic_MRCO;
        };
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
    };
};

// TRG-21 5.56 mm + MRCO + Flashlight
class arifle_TRG21_MRCO_FL_F: arifle_TRG21_F
{
    author = $STR_A3_A_Heliotrope;
    class linkedItems
    {
        class LinkedItemsOptic
        {
            slot = CowsSlot;
            item = optic_MRCO;
        };
        class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_flashlight;
		};
    };
};

// MAR-10 .338 + MOS + IR Laser Pointer + Bipod (Black) [AAF]
class srifle_DMR_02_Camo_LRCO_LP_BI_F: srifle_DMR_02_Camo_F
{
    author = $STR_A3_A_Heliotrope;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = CowsSlot;
			item = optic_SOS;
		};
		class LinkedItemsAcc
		{
			slot = PointerSlot;
			item = acc_pointer_IR;
		};
		class LinkedItemsUnder
		{
			slot = UnderBarrelSlot;
			item = bipod_03_F_blk;
		};
	};
};
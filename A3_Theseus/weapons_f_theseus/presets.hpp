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
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
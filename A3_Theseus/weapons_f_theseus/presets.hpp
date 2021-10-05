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
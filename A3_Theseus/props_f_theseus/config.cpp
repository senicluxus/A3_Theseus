#include "cfgPatches.hpp"

class CfgVehicles
{
    class Newspaper_base_F;
	class Newspaper_02_theseus_base_F: Newspaper_base_F
	{
		model = "a3\Props_F_Enoch\Items\Documents\Newspaper_01_F";
        hiddenSelectionsTextures[] = {"\A3_Theseus\props_f_theseus\data\newspaper_02_co.paa"};
	};
	class Newspaper_02_theseus_F: Newspaper_02_theseus_base_F
	{
		author = "$STR_A3_Heliotrope";
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.012;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Newspaper_01_F.jpg";
		_generalMacro = "Newspaper_01_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_A3_C_CfgVehicles_Newspaper_01_F0";
	};
};

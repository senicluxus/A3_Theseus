class CfgVehicles
{
	// Arma 3
	class Car_F;
	class LSV_01_base_F: Car_F
	{
		class TextureSources
		{
			class Indep
			{
				materials[] =
            	{
				"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_01_CO.paa",
				"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_02_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
            	};
			};
		};
    };
	class LSV_01_armed_base_F: LSV_01_base_F{};
	class LSV_01_unarmed_base_F: LSV_01_base_F{};
	class LSV_01_light_base_F: LSV_01_base_F{};
	class LSV_01_AT_base_F: LSV_01_base_F
	{
		class TextureSources
		{
			class Indep
			{
				materials[] =
            	{
				"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_01_CO.paa",
				"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_02_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
				"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
				"\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
                "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
            	};
			};
		};
	};
	// Arma 3 Theseus
	#include "cfgNAAF.hpp"               // NAAF
};

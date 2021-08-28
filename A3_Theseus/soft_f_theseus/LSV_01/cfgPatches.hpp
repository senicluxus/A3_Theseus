class CfgPatches
{
	class A3_Theseus_Soft_F_Theseus_LSV_01
	{
		addonRootClass = A3_Theseus_Soft_F_Theseus;
		requiredAddons[] = {A3_Theseus_Soft_F_Theseus};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_N_LSV_01_unarmed_F,
            Theseus_B_N_LSV_01_light_F,
            Theseus_B_N_LSV_01_armed_F,
            Theseus_B_N_LSV_01_AT_F
        };
		weapons[] = {/* Automated */};
	};
};
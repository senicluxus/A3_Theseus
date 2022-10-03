class CfgPatches
{
	class A3_Theseus_Air_F_Theseus_UAV_02_lxWS
	{
		addonRootClass = A3_Theseus_Air_F_Theseus;
		requiredAddons[] =
		{
			A3_Theseus_Air_F_Theseus,
			A3_Air_F_Orange_UAV_01,
			A3_Drones_F_Air_F_Gamma_UAV_01,
			A3_Supplies_F_Orange_Bags,
            Air_F_lxWS
		};
		requiredVersion = 0.1;
		units[] =
        {
			/* From "cfgRemnant.hpp" */
			Theseus_O_R_UAV_02_IED_lxWS

        };
		weapons[] = {/* Automated */};
	};
};
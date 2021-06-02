class CfgPatches
{
	class A3_Theseus_Armor_F_Theseus_APC_Wheeled_03
	{
		addonRootClass = A3_Theseus_Armor_F_Theseus;
		requiredAddons[] =
		{
			A3_Theseus_Armor_F_Theseus,
			A3_Armor_F_Gamma_APC_Wheeled_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgRemnants.hpp" */
            Theseus_O_R_APC_Wheeled_03_cannon_F
        };
		weapons[] = {/* Automated */};
	};
};
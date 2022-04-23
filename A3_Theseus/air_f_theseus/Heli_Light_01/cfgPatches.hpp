class CfgPatches
{
	class A3_Theseus_Air_F_Theseus_Heli_Light_01
	{
		addonRootClass = A3_Theseus_Air_F_Theseus;
		requiredAddons[] =
		{
			A3_Theseus_Air_F_Theseus,
			A3_Air_F_Heli_Light_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            I_Heli_Light_01_dynamicLoadout_F,
            I_Heli_Light_01_F,
            I_Heli_Light_01_recon_F,
        };
		weapons[] = {/* Automated */};
	};
};
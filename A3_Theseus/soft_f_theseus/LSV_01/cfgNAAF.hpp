/* NAAF */
class Theseus_B_N_LSV_01_armed_F: LSV_01_armed_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_armed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Theseus_BLU_N_F;
	crew = Theseus_B_N_Soldier_F;
	typicalCargo[] = {Theseus_B_N_Soldier_F};
	textureList[] =
	{
		Indep,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_01_CO.paa",
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_02_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
        mag_xx(200Rnd_65x39_cased_Box,3);
        mag_xx(HandGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,1);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,1);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,1);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,41);
        mag_xx(16Rnd_9x21_Mag,4);
        mag_xx(SmokeShell,1);
        mag_xx(SmokeShellGreen,1);
        mag_xx(SmokeShellOrange,1);
        mag_xx(SmokeShellBlue,1);
        mag_xx(MRAWS_HEAT55_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};
class Theseus_B_N_LSV_01_AT_F: LSV_01_AT_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_AT_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Theseus_BLU_N_F;
	crew = Theseus_B_N_Soldier_F;
	typicalCargo[] = {Theseus_B_N_Soldier_F};
	textureList[] =
	{
		Indep,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_01_CO.paa",
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_02_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
        "\A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
        "\A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_INDP_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
        mag_xx(200Rnd_65x39_cased_Box,3);
        mag_xx(HandGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,1);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,1);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,1);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,41);
        mag_xx(16Rnd_9x21_Mag,4);
        mag_xx(SmokeShell,1);
        mag_xx(SmokeShellGreen,1);
        mag_xx(SmokeShellOrange,1);
        mag_xx(SmokeShellBlue,1);
        mag_xx(MRAWS_HEAT55_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};
class Theseus_B_N_LSV_01_unarmed_F: LSV_01_unarmed_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_unarmed_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Theseus_BLU_N_F;
	crew = Theseus_B_N_Soldier_F;
	typicalCargo[] = {Theseus_B_N_Soldier_F};
	textureList[] =
	{
		Indep,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_01_CO.paa",
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_02_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
        mag_xx(200Rnd_65x39_cased_Box,3);
        mag_xx(HandGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,1);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,1);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,1);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,41);
        mag_xx(16Rnd_9x21_Mag,4);
        mag_xx(SmokeShell,1);
        mag_xx(SmokeShellGreen,1);
        mag_xx(SmokeShellOrange,1);
        mag_xx(SmokeShellBlue,1);
        mag_xx(MRAWS_HEAT55_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};
class Theseus_B_N_LSV_01_light_F: LSV_01_light_base_F
{
	author = $STR_A3_A_Ravenholme;
	//editorPreview = "\A3_Atlas\EditorPreviews_F_Atlas\Data\CfgVehicles\B_L_LSV_01_light_F.jpg";
	scope = public;
	scopeCurator = public;
	side = TWest;
	faction = Theseus_BLU_N_F;
	crew = Theseus_B_N_Soldier_F;
	typicalCargo[] = {Theseus_B_N_Soldier_F};
	textureList[] =
	{
		Indep,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_01_CO.paa",
		"\A3_Theseus\Soft_F_Theseus\LSV_01\Data\LSV_01_NAAF_02_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,8);
        mag_xx(200Rnd_65x39_cased_Box,3);
        mag_xx(HandGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,2);
        mag_xx(1Rnd_Smoke_Grenade_shell,1);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,1);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,1);
        mag_xx(1Rnd_SmokeBlue_Grenade_shell,41);
        mag_xx(16Rnd_9x21_Mag,4);
        mag_xx(SmokeShell,1);
        mag_xx(SmokeShellGreen,1);
        mag_xx(SmokeShellOrange,1);
        mag_xx(SmokeShellBlue,1);
        mag_xx(MRAWS_HEAT55_F,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_TRG21_F,2);
	};
};
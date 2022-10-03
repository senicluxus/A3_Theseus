class Theseus_U_O_R_Bandit_Rags_lxWS: Uniform_Base
{
	author=$STR_A3_A_Heliotrope;
	scope = public;
	displayName = $STR_A3_T_CfgWeapons_U_O_R_Bandit_Rags_lxWS_F0;
	picture = "\A3_Theseus\characters_f_theseus\Uniforms\Data\UI\Theseus_U_B_NAAF_CombatUniform_tshirt_des_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {camo};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_indep_CO.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = Theseus_O_R_Bandit_Rags_lxWS;
		containerClass = Supply40;
		mass=40;
	};
};
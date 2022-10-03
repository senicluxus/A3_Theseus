/* NAAF */
class Theseus_B_NAAF_Uniform_01_dgtl_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_dgtl_F;
	hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_co.paa"};
};
class Theseus_B_NAAF_Uniform_01_shortsleeve_dgtl_F: I_Soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_co.paa"};
};
class Theseus_B_NAAF_Officer_dgtl_F: I_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Officer_dgtl_F;
	hiddenSelections[] = 
	{
		camo1,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_officer_spc_co.paa",
		"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_co.paa"
	};
};
class Theseus_B_NAAF_Uniform_01_des_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_des_F;
	hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_des_co.paa"};
};
class Theseus_B_NAAF_Uniform_01_shortsleeve_des_F: I_Soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_des_F;
	hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_des_co.paa"};
};
class Theseus_B_NAAF_Officer_des_F: I_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Officer_des_F;
	hiddenSelections[] = 
	{
		camo1,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_officer_spc_des_co.paa",
		"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_des_co.paa"
	};
};
class Theseus_B_NAAF_CombatUniform_tshirt_des: I_Support_MG_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_CombatUniform_tshirt_des;
	hiddenSelections[] = 
	{
		camo1,
		camo2,
		camo3
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",
		"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_des_co.paa"
	};
};
class Theseus_B_NAAF_Uniform_01_tanktop_des_F: I_E_Uniform_01_tanktop_F
{
	author = $STR_A3_A_BranFlakes;
    scope = protected;
	model = "\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
	uniformClass = Theseus_U_B_NAAF_Uniform_01_tanktop_des_F;
	hiddenSelectionsTextures[] =
    {
        "\A3_Aegis\Characters_F_Aegis\Uniforms\Data\I_E_Soldier_01_TankTop_arid_CO.paa",
        "\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_des_co.paa"
    };
	class Wounds
	{
		tex[] = {};
		mat[] =
		{
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			"A3\Characters_F_Beta\INDEP\Data\IA_Soldier_01_clothing_injury.rvmat",
			INJURY_PERSONALITY_MATERIALS
		};
	};
};
class I_Tura_HeavyGunner_lxWS;
class Theseus_U_NAAF_Bandit_lxWS: I_Tura_HeavyGunner_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Bandit_lxWS;
	hiddenSelections[] = 
	{
		camo,
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
    {
    	"a3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_des_co.paa",
		"lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_green_co.paa",
		"lxWS\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_brown2_co.paa"
    };
};
class Theseus_U_NAAF_Bandit_alt_lxWS: I_Tura_HeavyGunner_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Bandit_alt_lxWS;
	hiddenSelections[] = 
	{
		camo,
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
    {
    	"a3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_des_co.paa",
		"lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_sand_co.paa",
		"lxWS\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_brown2_co.paa"
    };
};
class Theseus_O_R_Bandit_Rags_lxWS: I_Tura_HeavyGunner_lxWS
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_O_R_Bandit_Rags_lxWS;
	hiddenSelections[] = 
	{
		camo,
		camo1,
		camo2
	};
	hiddenSelectionsTextures[] =
    {
    	"a3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_co.paa",
		"lxws\characters_f_lxws\uniform\djellaba\data\lxWS_djellaba_shirt_green_co.paa",
		"lxWS\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_brown2_co.paa"
    };
};
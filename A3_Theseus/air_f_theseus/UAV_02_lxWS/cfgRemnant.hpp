/*======================================
	Remants IED UAV
======================================*/
class Theseus_O_R_UAV_02_IED_lxWS: UAV_02_IED_Base_lxWS
{
	class SimpleObject{};
	//editorPreview = "\lxws\editorpreviews_f_lxws\Data\CfgVehicles\I_Tura_UAV_02_IED_lxWS.jpg";
	scope = public;
	scopeCurator = public;
	side = TEast;
	faction = Theseus_OPF_R_F;
	crew = O_UAV_AI;
	typicalCargo[] = {O_UAV_AI};
	hiddenSelectionsTextures[] = 
	{
		"lxWS\air_f_lxWS\Data\I_Gun_Drone_CO.paa",
		"\lxWS\air_1_f_lxWS\Data\Gun_Drone_Adds_FIA_CO.paa"
	};
	hiddenSelectionsMaterials[] = 
	{
		"lxWS\air_f_lxWS\Data\drone_mat.rvmat",
		"lxWS\air_1_f_lxWS\Data\gun_drone_adds_FIA.rvmat"
	};
	textureList[] = {IND_G_F,1};
	class assembleInfo
	{
		primary = true;
		base = "";
		assembleTo = "";
		displayName = "";
		dissasembleTo[] = {O_G_UAV_02_IED_backpack_lxWS};
	};
};
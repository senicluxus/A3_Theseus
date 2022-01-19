#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_Heliotrope; \
		editorCategory = EdCat_Equipment; \
		editorSubcategory = ##c##; \
		vehicleClass = ItemsHeadgear; \
		model = "\A3\Weapons_F\DummyCap.p3d"; \
		class TransportItems \
		{ \
			item_xx(##a##,1); \
		}; \
	};

class CfgVehicles
{
	class Headgear_Base_F;
	
	// Arma 3 Theseus
	HEADGEAR_HOLDER(H_MK7_digi_des_F,$STR_A3_T_CfgWeapons_H_mk7_digi_des0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(H_I_Helmet_digi_des,$STR_A3_T_CfgWeapons_H_I_Helmet_digi_des0,EdSubcat_Helmets)
	HEADGEAR_HOLDER(lxWS_H_bmask_Minotaur,"Ballistic Mask (Minotaur)",EdSubcat_Helmets)
};
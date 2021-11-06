#define HEADGEAR_HOLDER(a,b,c) \
	class Headgear_##a##: Headgear_Base_F \
	{ \
		scope = public; \
		scopeCurator = public; \
		displayName = ##b##; \
		author = $STR_A3_A_BranFlakes; \
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
};
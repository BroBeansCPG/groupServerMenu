class CfgPatches
{
	class CTB_groupServer_menu_sog
	{
		name = "CTB_Splash";
		author = "Beans";
		requiredVersion = 1.60;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "loadorder_f_vietnam"};
		units[] = {};
		weapons[] = {};
    skipWhenMissingDependencies = 1;
	};
};

class CfgMainMenuSpotlight
{
  delete vn_showcase_macv;
  delete vn_showcase_macv_13;
  delete vn_showcase_pavn;
  delete vn_showcase_pavn_13;
  delete vn_sogba;
};
class CfgPatches
{
	class CTB_groupServer_menu_ws
	{
		name = "CTB_Splash";
		author = "Beans";
		requiredVersion = 1.60;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "data_f_lxWS_Loadorder"};
		units[] = {};
		weapons[] = {};
    skipWhenMissingDependencies = 1;
	};
};

class CfgMainMenuSpotlight
{
  delete Extraction_lxWS;
	delete Showcase_Alchemist_lxWS;
	delete Showcase_VR_lxWS;
};
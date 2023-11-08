class CfgPatches
{
	class CTB_groupServer_menu_gm
	{
		name = "CTB_Splash";
		author = "Beans";
		requiredVersion = 1.60;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "gm_characters_xx_revolutionaries"};
		units[] = {};
		weapons[] = {};
    skipWhenMissingDependencies = 1;
	};
};
class CfgMainMenuSpotlight
{
  delete gm_campaign_01;
};

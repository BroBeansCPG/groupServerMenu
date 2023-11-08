class CfgPatches
{
	class CTB_groupServer_menu_spe
	{
		name = "CTB_Splash";
		author = "Beans";
		requiredVersion = 1.60;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "WW2_SPE_Missions_p_Cutscene_p"};
		units[] = {};
		weapons[] = {};
    skipWhenMissingDependencies = 1;
	};
};

class CfgMainMenuSpotlight
{
  delete SPE_Arsenal;
  delete SPE_Campagin_OperationCobra_04;
  delete SPE_Coop_DerZahnarzt;
  delete SPE_Faction_Showcase_GER;
  delete SPE_Faction_Showcase_US;
};
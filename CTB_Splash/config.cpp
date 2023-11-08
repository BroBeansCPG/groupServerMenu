class CfgPatches
{
	class CTB_Splash
	{
		name = "CTB_Splash";
		author = "Beans";
		requiredVersion = 1.60;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMainMenuSpotlight 
{
	class ctb_joinServer_1
	{
		text = "";
		picture = "ctb_splash\data\MissionPlanLogo.paa";
		action = "connectToServer ['127.0.0.1', 2302, 'ourpassword']";
		actionText = "Join the CTB Mission Server";
		condition = "true";
	};
	class ctb_joinServer_2: ctb_joinServer_1
	{
		picture = "ctb_splash\data\fukfuk.paa";
	};
	class ctb_joinServer_3: ctb_joinServer_1
	{
		picture = "ctb_splash\data\airborne.paa";
	};
	//Hide others
	delete Tanks_Campaign_01;
	delete Bootcamp;
	delete EastWind;
	delete ApexProtocol;
	delete OldMan;
	delete SP_FD14;
	delete Orange_CampaignGerman;
	delete Orange_Campaign;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete Contact_Campaign;
	delete AoW_Showcase_AoW;
	delete AoW_Showcase_Future;
	delete Tacops_Campaign_03;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_01;
};
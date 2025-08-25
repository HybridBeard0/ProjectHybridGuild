// Elite Food Production Skills - Tier 8 food profession definitions

// Grand Vintner Skill - Following Orchardist Level 1
"GrandVintner" = G3Skill
{
	RequiredSkillName = "Orchardist";
	RequiredSkillLevel = 1;
	
	DisplayName = "$GrandVintner";
	Description = "$GrandVintnerDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 50000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalVineyard" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "Grapes", "WineBarrel" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 11;
			CurrencyType = "Prestige";
			NeededCurrency = 75000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "VintageWine", "MasterVintnersTools" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 12;
			CurrencyType = "Prestige";
			NeededCurrency = 100000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalWine" };
				}
			};
		};
	};
};

// Master Rancher Skill - Following Farming Level 3
"MasterRancher" = G3Skill
{
	RequiredSkillName = "Farming";
	RequiredSkillLevel = 3;
	
	DisplayName = "$MasterRancher";
	Description = "$MasterRancherDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 11;
			CurrencyType = "Prestige";
			NeededCurrency = 55000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalStables" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "GourmetFeed", "PrizeCattle" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 12;
			CurrencyType = "Prestige";
			NeededCurrency = 80000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalHorse", "MasterRanchersBrand" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 13;
			CurrencyType = "Prestige";
			NeededCurrency = 120000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "ThoroughbredWarhorse" };
				}
			};
		};
	};
};

// Culinary Master Skill - Following CrowdManagement Level 3
"CulinaryMaster" = G3Skill
{
	RequiredSkillName = "CrowdManagement";
	RequiredSkillLevel = 3;
	
	DisplayName = "$CulinaryMaster";
	Description = "$CulinaryMasterDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 11;
			CurrencyType = "Prestige";
			NeededCurrency = 60000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "GrandRestaurant" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "ExoticSpices", "TruffleMushrooms" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 12;
			CurrencyType = "Prestige";
			NeededCurrency = 85000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "GourmetMeal", "ChefsSpecialty" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 13;
			CurrencyType = "Prestige";
			NeededCurrency = 125000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalBanquet" };
				}
			};
		};
	};
};

// Master Butcher Skill - Following Butcher Level 1
"MasterButcher" = G3Skill
{
	RequiredSkillName = "Butcher";
	RequiredSkillLevel = 1;
	
	DisplayName = "$MasterButcher";
	Description = "$MasterButcherDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 12;
			CurrencyType = "Prestige";
			NeededCurrency = 65000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalMeatWorks" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "PremiumBeef", "ExoticVenison" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 13;
			CurrencyType = "Prestige";
			NeededCurrency = 90000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "AgedPrimeCuts", "MasterButchersCleaver" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 14;
			CurrencyType = "Prestige";
			NeededCurrency = 130000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalFeastPreparation" };
				}
			};
		};
	};
};
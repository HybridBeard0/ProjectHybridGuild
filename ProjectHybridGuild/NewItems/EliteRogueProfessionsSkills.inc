// Elite Rogue Professions Skills - Tier 8 high-risk skill definitions

// War Mercenary Skill - Following Fighting Level 3
"WarMercenary" = G3Skill
{
	RequiredSkillName = "Fighting";
	RequiredSkillLevel = 3;
	
	DisplayName = "$WarMercenary";
	Description = "$WarMercenaryDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 40000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "WarCamp" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "WarContract", "MercenaryBadge" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 60000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "BattlePlans", "VeteransArmor" };
				}
			};
		};
	};
};

// Royal Bard Skill - Following Gleeman Level 2
"RoyalBard" = G3Skill
{
	RequiredSkillName = "Gleeman";
	RequiredSkillLevel = 2;
	
	DisplayName = "$RoyalBard";
	Description = "$RoyalBardDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 8;
			CurrencyType = "Prestige";
			NeededCurrency = 35000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalTheatre" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "RoyalPerformance", "RoyalInstrument" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 55000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "CourtPatronsFavor" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 12;
			CurrencyType = "Prestige";
			NeededCurrency = 80000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "MastersRepertoire" };
				}
			};
		};
	};
};

// Master Thief Skill - Following SleightOfHand Level 3
"MasterThief" = G3Skill
{
	RequiredSkillName = "SleightOfHand";
	RequiredSkillLevel = 3;
	
	DisplayName = "$MasterThief";
	Description = "$MasterThiefDesc";
	
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
					Names = array { "UndergroundVault" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "BankHeistPlans", "MasterLockpicks" };
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
					Names = array { "ShadowCloak", "StolenRoyalTreasures" };
				}
			};
		};
	};
};

// Smuggling Baron Skill - Following Smuggling Level 2
"SmugglingBaron" = G3Skill
{
	RequiredSkillName = "Smuggling";
	RequiredSkillLevel = 2;
	
	DisplayName = "$SmugglingBaron";
	Description = "$SmugglingBaronDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 45000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "UndergroundNetwork" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "InternationalTradeRoute", "ExoticContraband" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 65000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "SmugglersSeaI" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 11;
			CurrencyType = "Prestige";
			NeededCurrency = 90000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "ForbiddenLuxuries" };
				}
			};
		};
	};
};
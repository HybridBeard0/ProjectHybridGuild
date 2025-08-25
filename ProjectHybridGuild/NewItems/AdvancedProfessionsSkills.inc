// Advanced Professions Skills - Tier 8 skill definitions

// Grand Alchemist Skill - Following Occultism Level 3
"GrandAlchemist" = G3Skill
{
	RequiredSkillName = "Occultism";
	RequiredSkillLevel = 3;
	
	DisplayName = "$GrandAlchemist";
	Description = "$GrandAlchemistDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 8;
			CurrencyType = "Prestige";
			NeededCurrency = 30000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "PhilosophersLaboratory" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "PhilosophersStone" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 45000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "ElixirOfTransmutation", "RoyalPoison", "MastersCrucible" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 60000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "ElixirOfEternalYouth" };
				}
			};
		};
	};
};

// Master Architect Skill - Following HandicraftStone Level 3
"MasterArchitect" = G3Skill
{
	RequiredSkillName = "HandicraftStone";
	RequiredSkillLevel = 3;
	
	DisplayName = "$MasterArchitect";
	Description = "$MasterArchitectDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 8;
			CurrencyType = "Prestige";
			NeededCurrency = 28000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "GrandWorkshop" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "PrecisionTools" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 40000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalGemstone", "ArchitecturalPlans", "MastersCompass" };
				}
			};
		};
	};
};

// Royal Tailor Skill - Following Tailor Level 3
"RoyalTailor" = G3Skill
{
	RequiredSkillName = "Tailor";
	RequiredSkillLevel = 3;
	
	DisplayName = "$RoyalTailor";
	Description = "$RoyalTailorDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 32000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalAtelier" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "ImperialSilk" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 50000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "EmperorsRobes", "CrownOfAuthority", "RoyalScepter" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 11;
			CurrencyType = "Prestige";
			NeededCurrency = 75000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "MastersRegalia" };
				}
			};
		};
	};
};

// Grandmaster Scholar Skill - Following Scholarly Level 3
"GrandmasterScholar" = G3Skill
{
	RequiredSkillName = "Scholarly";
	RequiredSkillLevel = 3;
	
	DisplayName = "$GrandmasterScholar";
	Description = "$GrandmasterScholarDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 35000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "GrandLibrary" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "MasterTome", "KnowledgeCrystal" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 50000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalDecree", "ScholarsLens", "PhilosophersQuill" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 11;
			CurrencyType = "Prestige";
			NeededCurrency = 70000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "CodexOfMastery" };
				}
			};
		};
	};
};
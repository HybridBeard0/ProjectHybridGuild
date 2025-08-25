// Master Crafter Skill - Tier 8 skill following HandicraftMetal Level 3
"MasterCrafter" = G3Skill
{
	RequiredSkillName = "HandicraftMetal";
	RequiredSkillLevel = 3;
	
	DisplayName = "$MasterCrafter";
	Description = "$MasterCrafterDesc";
	
	SkillLevels = map
	{
		0 = G3SkillLevel
		{
			NeededSocialLevel = 8;
			CurrencyType = "Prestige";
			NeededCurrency = 25000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalForge" };
					Level = 1;
				},
				UnlockEffect
				{
					Names = array { "SteelIngot" };
				}
			};
		};
		1 = G3SkillLevel
		{
			NeededSocialLevel = 9;
			CurrencyType = "Prestige";
			NeededCurrency = 35000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalLongsword", "RoyalMace", "RoyalShield" };
				}
			};
		};
		2 = G3SkillLevel
		{
			NeededSocialLevel = 10;
			CurrencyType = "Prestige";
			NeededCurrency = 50000;
			
			Results = array
			{
				UnlockEffect
				{
					Names = array { "RoyalPlatemail", "RoyalRapier", "RoyalCrossbow" };
				}
			};
		};
	};
};
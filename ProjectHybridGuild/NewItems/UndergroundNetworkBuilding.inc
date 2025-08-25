// Underground Network Building - Tier 8 smuggling operations facility
"UndergroundNetwork" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "smuggler_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$UndergroundNetwork";
				Description = "$UndergroundNetworkDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 55000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Smuggler";
						Level = 3;
					};
				};
				SocialLevelRequirement = 9;
				BuildTime = 35.0;
				UnlockBy = array
				{
					"SmugglingBaron",
				};
			};
			EmployeeSlots = 10;
			StorageSlots = 120;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"InternationalSmuggling"
		};
	};
};
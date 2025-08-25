// Grand Library Building - Tier 8 knowledge facility
"GrandLibrary" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "scholar_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$GrandLibrary";
				Description = "$GrandLibraryDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 35000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Scholar";
						Level = 3;
					};
				};
				SocialLevelRequirement = 9;
				BuildTime = 22.0;
				UnlockBy = array
				{
					"GrandmasterScholar",
				};
			};
			EmployeeSlots = 4;
			StorageSlots = 50;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"GrandScholarship"
		};
	};
};
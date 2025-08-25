// Royal Theatre Building - Tier 8 entertainment facility
"RoyalTheatre" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "gleeman_t1";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$RoyalTheatre";
				Description = "$RoyalTheatreDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 45000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Gleeman";
						Level = 1;
					};
				};
				SocialLevelRequirement = 8;
				BuildTime = 28.0;
				UnlockBy = array
				{
					"RoyalBard",
				};
			};
			EmployeeSlots = 6;
			StorageSlots = 40;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"RoyalEntertainment"
		};
	};
};
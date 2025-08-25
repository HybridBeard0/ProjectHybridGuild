// Royal Vineyard Building - Tier 8 wine production facility
"RoyalVineyard" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "orchardist_t1";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$RoyalVineyard";
				Description = "$RoyalVineyardDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 60000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Orchardist";
						Level = 1;
					};
				};
				SocialLevelRequirement = 10;
				BuildTime = 40.0;
				UnlockBy = array
				{
					"GrandVintner",
				};
			};
			EmployeeSlots = 8;
			StorageSlots = 80;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"WineProduction"
		};
	};
};
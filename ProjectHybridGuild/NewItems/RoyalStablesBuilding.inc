// Royal Stables Building - Tier 8 premium livestock facility
"RoyalStables" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "farm_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$RoyalStables";
				Description = "$RoyalStablesDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 65000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Farm";
						Level = 3;
					};
				};
				SocialLevelRequirement = 11;
				BuildTime = 45.0;
				UnlockBy = array
				{
					"MasterRancher",
				};
			};
			EmployeeSlots = 10;
			StorageSlots = 100;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"RoyalLivestock"
		};
	};
};
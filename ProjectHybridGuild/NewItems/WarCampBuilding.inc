// War Camp Building - Tier 8 military facility
"WarCamp" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "guardpost_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$WarCamp";
				Description = "$WarCampDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 40000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "GuardPost";
						Level = 3;
					};
				};
				SocialLevelRequirement = 9;
				BuildTime = 25.0;
				UnlockBy = array
				{
					"WarMercenary",
				};
			};
			EmployeeSlots = 5;
			StorageSlots = 60;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"WarOperations"
		};
	};
};
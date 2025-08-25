// Grand Workshop Building - Tier 8 precision crafting facility
"GrandWorkshop" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "stonemasonshop_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$GrandWorkshop";
				Description = "$GrandWorkshopDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 28000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "StoneMasonShop";
						Level = 3;
					};
				};
				SocialLevelRequirement = 8;
				BuildTime = 16.0;
				UnlockBy = array
				{
					"MasterArchitect",
				};
			};
			EmployeeSlots = 3;
			StorageSlots = 35;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"PrecisionCrafting"
		};
	};
};
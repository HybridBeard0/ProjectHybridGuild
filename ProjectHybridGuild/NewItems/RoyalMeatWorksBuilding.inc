// Royal Meat Works Building - Tier 8 premium meat processing facility
"RoyalMeatWorks" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "butcher_t1";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$RoyalMeatWorks";
				Description = "$RoyalMeatWorksDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 75000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Butcher";
						Level = 1;
					};
				};
				SocialLevelRequirement = 12;
				BuildTime = 55.0;
				UnlockBy = array
				{
					"MasterButcher",
				};
			};
			EmployeeSlots = 15;
			StorageSlots = 120;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"PremiumMeatProcessing"
		};
	};
};
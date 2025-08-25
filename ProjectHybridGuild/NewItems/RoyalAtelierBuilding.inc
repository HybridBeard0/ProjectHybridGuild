// Royal Atelier Building - Tier 8 luxury clothing facility
"RoyalAtelier" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "tailorshop_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$RoyalAtelier";
				Description = "$RoyalAtelierDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 32000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "TailorShop";
						Level = 3;
					};
				};
				SocialLevelRequirement = 9;
				BuildTime = 20.0;
				UnlockBy = array
				{
					"RoyalTailor",
				};
			};
			EmployeeSlots = 4;
			StorageSlots = 45;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"RoyalTailoring"
		};
	};
};
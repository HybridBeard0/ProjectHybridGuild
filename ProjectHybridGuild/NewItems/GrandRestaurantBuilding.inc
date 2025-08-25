// Grand Restaurant Building - Tier 8 gourmet cuisine facility
"GrandRestaurant" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "inn_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$GrandRestaurant";
				Description = "$GrandRestaurantDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 70000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Inn";
						Level = 3;
					};
				};
				SocialLevelRequirement = 11;
				BuildTime = 50.0;
				UnlockBy = array
				{
					"CulinaryMaster",
				};
			};
			EmployeeSlots = 12;
			StorageSlots = 90;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"GourmetCuisine"
		};
	};
};
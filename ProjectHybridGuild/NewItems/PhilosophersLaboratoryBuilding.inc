// Philosopher's Laboratory Building - Tier 8 alchemy facility
"PhilosophersLaboratory" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "alchemist_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$PhilosophersLaboratory";
				Description = "$PhilosophersLaboratoryDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 30000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "AlchemistShop";
						Level = 3;
					};
				};
				SocialLevelRequirement = 8;
				BuildTime = 18.0;
				UnlockBy = array
				{
					"GrandAlchemist",
				};
			};
			EmployeeSlots = 3;
			StorageSlots = 40;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"GrandAlchemy"
		};
	};
};
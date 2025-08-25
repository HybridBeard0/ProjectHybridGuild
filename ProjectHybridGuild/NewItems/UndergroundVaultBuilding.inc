// Underground Vault Building - Tier 8 theft operations facility
"UndergroundVault" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "thiefhideout_t3";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$UndergroundVault";
				Description = "$UndergroundVaultDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 50000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "ThiefHideout";
						Level = 3;
					};
				};
				SocialLevelRequirement = 10;
				BuildTime = 30.0;
				UnlockBy = array
				{
					"MasterThief",
				};
			};
			EmployeeSlots = 8;
			StorageSlots = 100;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"HeistOperations"
		};
	};
};
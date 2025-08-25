// Royal Forge Building - Tier 8 crafting facility for Master Crafter
"RoyalForge" = G3Building
{
	Levels = array
	{
		// Level 1
		G3BuildingLevel
		{
			ModelFileName = "foundry_t1";
			LevelUpgrade = G3BuildingLevelUpgrade
			{
				Name = "$RoyalForge";
				Description = "$RoyalForgeDesc";
				UpgradeCosts = array
				{
					CostEntry
					{
						CurrencyName = "Money";
						Price = 25000;
					};
				};
				Requirements = array
				{
					NeedBuilding
					{
						Building = "Smithy";
						Level = 3;
					};
				};
				SocialLevelRequirement = 8;
				BuildTime = 15.0;
				UnlockBy = array
				{
					"MasterCrafter",
				};
			};
			EmployeeSlots = 2;
			StorageSlots = 30;
		};
	};
	
	BuildingType = "Production";
	CategorialData = G3ProductionBuildingCategorialData
	{
		ProductionCategories = array
		{
			"MasterCrafting"
		};
	};
};
// Grand Vintner Items - Tier 8 Wine production and viticulture

// Grapes - Base ingredient for wine production
"Grapes" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Grapes";
	Description = "$GrapesDesc";
	DisplayCategories = array("All", "RawMaterial");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 180;
	Production = 3;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalVineyard", 1 }
	};
};

// Wine Barrel - Premium aging vessel
"WineBarrel" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$WineBarrel";
	Description = "$WineBarrelDesc";
	DisplayCategories = array("All", "Components");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 500;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodBarrel";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalVineyard", 1 }
	};
};

// Vintage Wine - Premium aged wine
"VintageWine" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$VintageWine";
	Description = "$VintageWineDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 800;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Grapes";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WineBarrel";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkVintageWine", "HandOverVintageWine"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalVineyard", 1 }
	};
};

// Royal Wine - Ultimate luxury beverage
"RoyalWine" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoyalWine";
	Description = "$RoyalWineDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1500;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "VintageWine";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkRoyalWine", "HandOverRoyalWine"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalVineyard", 1 }
	};
};

// Master Vintner's Tools - Wine-making equipment
"MasterVintnersTools" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MasterVintnersTools";
	Description = "$MasterVintnersToolsDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Vintner";
			ActorValue = "Productivity";
			Mod = 0.30;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intelligence";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMasterVintnersTools"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalVineyard", 1 }
	};
};
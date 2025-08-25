// Enhanced Food Production Items - Adding icons and logical ingredients

// === ENHANCED FOOD ITEMS WITH ICONS ===
"Grapes" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Grapes";
	Description = "$GrapesDesc";
	DisplayCategories = array("All", "RawMaterial");
	IconName = "Grapes";

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

"WineBarrel" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$WineBarrel";
	Description = "$WineBarrelDesc";
	DisplayCategories = array("All", "Components");
	IconName = "WineBarrel";

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

"VintageWine" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$VintageWine";
	Description = "$VintageWineDesc";
	DisplayCategories = array("All", "Food");
	IconName = "VintageWine";
	
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

"RoyalWine" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoyalWine";
	Description = "$RoyalWineDesc";
	DisplayCategories = array("All", "Food");
	IconName = "RoyalWine";
	
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

"RoyalHorse" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$RoyalHorse";
	Description = "$RoyalHorseDesc";
	DisplayCategories = array("All", "Livestock");
	IconName = "RoyalHorse";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 2000;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Horse";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "VintageWine";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 2;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};

"PrizeCattle" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$PrizeCattle";
	Description = "$PrizeCattleDesc";
	DisplayCategories = array("All", "Livestock");
	IconName = "PrizeCattle";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1200;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GourmetFeed";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};

"GourmetFeed" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$GourmetFeed";
	Description = "$GourmetFeedDesc";
	DisplayCategories = array("All", "Components");
	IconName = "GourmetFeed";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 300;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Grapes";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 3;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};
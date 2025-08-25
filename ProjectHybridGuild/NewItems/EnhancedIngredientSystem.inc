// Enhanced Ingredient System - Adding logical ingredients like eggs to bread and improved food chains

// === ENHANCED BREAD RECIPES WITH EGGS ===
"EnhancedBreadRoll" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$EnhancedBreadRoll";
	Description = "$EnhancedBreadRollDesc";
	DisplayCategories = array("All", "Food");
	IconName = "EnhancedBreadRoll";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 35;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WheatFlour";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Egg";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatEnhancedBreadRoll", "HandOverEnhancedBreadRoll"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 1 }
	};
};

"EnhancedWheatBread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$EnhancedWheatBread";
	Description = "$EnhancedWheatBreadDesc";
	DisplayCategories = array("All", "Food");
	IconName = "EnhancedWheatBread";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 55;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WheatFlour";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Egg";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatEnhancedWheatBread", "HandOverEnhancedWheatBread"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 2 }
	};
};

"RoyalCake" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoyalCake";
	Description = "$RoyalCakeDesc";
	DisplayCategories = array("All", "Food");
	IconName = "RoyalCake";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 400;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cake";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Egg";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 3;
		};
		comp4 extends G3ItemComponent
		{
			Name = "ExoticSpices";
			Number = 1;
		};
		comp5 extends G3ItemComponent
		{
			Name = "VintageWine";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatRoyalCake", "HandOverRoyalCake"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandRestaurant", 1 }
	};
};

// === ENHANCED DAIRY PRODUCTS ===
"CreamCheese" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$CreamCheese";
	Description = "$CreamCheeseDesc";
	DisplayCategories = array("All", "Food");
	IconName = "CreamCheese";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 120;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Salt";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"RoyalCheese" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoyalCheese";
	Description = "$RoyalCheeseDesc";
	DisplayCategories = array("All", "Food");
	IconName = "RoyalCheese";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PrizeCattle";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "CreamCheese";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "WineBarrel";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "ExoticSpices";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatRoyalCheese", "HandOverRoyalCheese"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalMeatWorks", 1 }
	};
};

// === ENHANCED MEAT PREPARATIONS ===
"ChickenStew" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$ChickenStew";
	Description = "$ChickenStewDesc";
	DisplayCategories = array("All", "Food");
	IconName = "ChickenStew";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 45;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Chicken";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Onion";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "ClayBowl";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatChickenStew", "HandOverChickenStew"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 1 }
	};
};

"BeefSteak" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BeefSteak";
	Description = "$BeefSteakDesc";
	DisplayCategories = array("All", "Food");
	IconName = "BeefSteak";

	Tier = 3;
	SocialClass = 2;
	BuildTime = 65;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Beef";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "GrindedBlackPepper";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatBeefSteak", "HandOverBeefSteak"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 2 }
	};
};

// === ENHANCED FISH PREPARATIONS ===
"TroutWithHerbs" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$TroutWithHerbs";
	Description = "$TroutWithHerbsDesc";
	DisplayCategories = array("All", "Food");
	IconName = "TroutWithHerbs";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 35;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Trout";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "MixedHerbs";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "FishOil";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatTroutWithHerbs", "HandOverTroutWithHerbs"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};
};

// === ENHANCED VEGETABLE PREPARATIONS ===
"VegetableSoup" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$VegetableSoup";
	Description = "$VegetableSoupDesc";
	DisplayCategories = array("All", "Food");
	IconName = "VegetableSoup";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 40;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cabbage";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Onion";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfTomatos";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatVegetableSoup", "HandOverVegetableSoup"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};
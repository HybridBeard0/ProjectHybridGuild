// Enhanced Cross-Profession Ingredient System
// This file adds logical ingredients and creates more interconnected chains between professions
// Focus on low-tier (1-3) and mid-tier (4-6) profession interactions

// === BASIC INGREDIENT COMPONENTS (Tier 1-2) ===

// Salt - Essential for food preservation and cooking
"Salt" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Salt";
	Description = "$SaltDesc";
	DisplayCategories = array("All", "Components");
	IconName = "Salt";

	Tier = 1;
	SocialClass = 0;
	BuildTime = 25;
	Production = 3;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};

// Yeast - Essential for bread making and brewing
"Yeast" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Yeast";
	Description = "$YeastDesc";
	DisplayCategories = array("All", "Components");
	IconName = "Yeast";

	Tier = 1;
	SocialClass = 0;
	BuildTime = 20;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

// Milk - From cattle, used in various food products
"Milk" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Milk";
	Description = "$MilkDesc";
	DisplayCategories = array("All", "Food");
	IconName = "Milk";

	Tier = 2;
	SocialClass = 0;
	BuildTime = 15;
	Production = 2;

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
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};

// Butter - From milk, essential for cooking
"Butter" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Butter";
	Description = "$ButterDesc";
	DisplayCategories = array("All", "Components");
	IconName = "Butter";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 30;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Milk";
			Number = 2;
		};
		comp2 extends G3ItemComponent
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

// === ENHANCED BREAD RECIPES ===

// Simple Bread with logical ingredients
"EnhancedBarleyBread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$EnhancedBarleyBread";
	Description = "$EnhancedBarleyBreadDesc";
	DisplayCategories = array("All", "Food");
	IconName = "EnhancedBarleyBread";

	Tier = 1;
	SocialClass = 0;
	BuildTime = 25;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Egg";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Yeast";
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
			Names = array {"EatEnhancedBarleyBread", "HandOverEnhancedBarleyBread"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 1 }
	};
};

// Rich White Bread
"RichWhiteBread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RichWhiteBread";
	Description = "$RichWhiteBreadDesc";
	DisplayCategories = array("All", "Food");
	IconName = "RichWhiteBread";

	Tier = 3;
	SocialClass = 2;
	BuildTime = 45;
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
			Name = "Butter";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Milk";
			Number = 1;
		};
		comp5 extends G3ItemComponent
		{
			Name = "Yeast";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatRichWhiteBread", "HandOverRichWhiteBread"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 2 }
	};
};

// === ENHANCED BEER AND BREWING ===

// Simple Ale with proper ingredients
"SimpleAle" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$SimpleAle";
	Description = "$SimpleAleDesc";
	DisplayCategories = array("All", "Food");
	IconName = "SimpleAle";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 60;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Yeast";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkSimpleAle", "HandOverSimpleAle"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Brewer", 1 }
	};
};

// === ENHANCED MEAT PROCESSING ===

// Smoked Meat with salt preservation
"SmokedBeef" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$SmokedBeef";
	Description = "$SmokedBeefDesc";
	DisplayCategories = array("All", "Food");
	IconName = "SmokedBeef";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 90;
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
			Name = "Salt";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatSmokedBeef", "HandOverSmokedBeef"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 2 }
	};
};

// Sausage with casings
"Sausage" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Sausage";
	Description = "$SausageDesc";
	DisplayCategories = array("All", "Food");
	IconName = "Sausage";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 40;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pork";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Salt";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "GrindedBlackPepper";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatSausage", "HandOverSausage"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

// === ENHANCED DAIRY PRODUCTS ===

// Basic Cheese
"BasicCheese" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BasicCheese";
	Description = "$BasicCheeseDesc";
	DisplayCategories = array("All", "Food");
	IconName = "BasicCheese";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 80;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Milk";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Salt";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Yeast";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatBasicCheese", "HandOverBasicCheese"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

// === ENHANCED FISH PREPARATIONS ===

// Salted Fish for preservation
"SaltedFish" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$SaltedFish";
	Description = "$SaltedFishDesc";
	DisplayCategories = array("All", "Food");
	IconName = "SaltedFish";

	Tier = 2;
	SocialClass = 0;
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
			Name = "Salt";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatSaltedFish", "HandOverSaltedFish"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};
};

// Fish Stew with vegetables
"RichFishStew" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RichFishStew";
	Description = "$RichFishStewDesc";
	DisplayCategories = array("All", "Food");
	IconName = "RichFishStew";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 55;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Perch";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Onion";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Cabbage";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Milk";
			Number = 1;
		};
		comp5 extends G3ItemComponent
		{
			Name = "ClayBowl";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatRichFishStew", "HandOverRichFishStew"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 2 }
	};
};

// === TEXTILE ENHANCEMENTS ===

// Colored Cloth using dyes
"ColoredCloth" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$ColoredCloth";
	Description = "$ColoredClothDesc";
	DisplayCategories = array("All", "Components");
	IconName = "ColoredCloth";

	Tier = 3;
	SocialClass = 2;
	BuildTime = 65;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Salt";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tailor", 1 }
	};
};

// Enhanced Simple Clothes
"EnhancedSimpleClothes" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$EnhancedSimpleClothes";
	Description = "$EnhancedSimpleClothesDesc";
	DisplayCategories = array("All", "Clothing");
	IconName = "EnhancedSimpleClothes";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 45;
	Production = 1;
	
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.02;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 1;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverEnhancedSimpleClothes"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BoneNeedle";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ColoredCloth";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tailor", 1 }
	};
};

// === ARTISAN ENHANCEMENTS ===

// Kitchen Knife with wooden handle
"KitchenKnife" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$KitchenKnife";
	Description = "$KitchenKnifeDesc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "KitchenKnife";

	Tier = 1;
	SocialClass = 0;
	BuildTime = 25;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Baker";
			ActorValue = "Productivity";
			Mod = 0.05;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "hasTag.Butcher";
			ActorValue = "Productivity";
			Mod = 0.05;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverKitchenKnife"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

// === MEDICINE AND ALCHEMY INTERCONNECTIONS ===

// Herbal Salve using multiple herbs
"HerbalSalve" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$HerbalSalve";
	Description = "$HerbalSalveDesc";
	DisplayCategories = array("All", "Tinctures");
	IconName = "HerbalSalve";

	Tier = 2;
	SocialClass = 0;
	BuildTime = 35;
	Production = 1;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MixedHerbs";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseHerbalSalve", "HandOverHerbalSalve"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

// Enhanced Healing Potion
"EnhancedHealingPotion" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$EnhancedHealingPotion";
	Description = "$EnhancedHealingPotionDesc";
	DisplayCategories = array("All", "Tinctures");
	IconName = "EnhancedHealingPotion";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 75;
	Production = 1;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "HerbTea";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "HerbalSalve";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseEnhancedHealingPotion", "HandOverEnhancedHealingPotion"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 1 }
	};
};

// === CONSTRUCTION AND BUILDING MATERIALS ===

// Mortar using lime and sand
"Mortar" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Mortar";
	Description = "$MortarDesc";
	DisplayCategories = array("All", "Components");
	IconName = "Mortar";

	Tier = 2;
	SocialClass = 0;
	BuildTime = 30;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Sand";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};

// Enhanced Building Tiles
"FiredBricks" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$FiredBricks";
	Description = "$FiredBricksDesc";
	DisplayCategories = array("All", "Components");
	IconName = "FiredBricks";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 60;
	Production = 3;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cauldron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Mortar";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 2 }
	};
};

// === CROSS-PROFESSION ADVANCED ITEMS ===

// Merchant's Scales (Tinker + Mason)
"MerchantsScales" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MerchantsScales";
	Description = "$MerchantsScalesDesc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "MerchantsScales";

	Tier = 3;
	SocialClass = 2;
	BuildTime = 85;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "SalesPrice";
			Mod = 0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intelligence";
			Mod = 1;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMerchantsScales"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 2 }
	};
};

// Farmer's Toolkit (Multiple professions)
"FarmersToolkit" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$FarmersToolkit";
	Description = "$FarmersToolkitDesc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "FarmersToolkit";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 70;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Farmer";
			ActorValue = "Productivity";
			Mod = 0.15;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Strength";
			Mod = 1;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverFarmersToolkit"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "KitchenKnife";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Scythe";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Horseshoe";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};

// === UPGRADE EXISTING ITEMS WITH LOGICAL INGREDIENTS ===

// Enhanced Cake with eggs and butter
"ImprovedCake" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$ImprovedCake";
	Description = "$ImprovedCakeDesc";
	DisplayCategories = array("All", "Food");
	IconName = "ImprovedCake";

	Tier = 4;
	SocialClass = 2;
	BuildTime = 120;
	Production = 1;

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
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Butter";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 2;
		};
		comp5 extends G3ItemComponent
		{
			Name = "Milk";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatImprovedCake", "HandOverImprovedCake"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 3 }
	};
};

// Enhanced Pie with proper crust
"MeatPie" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$MeatPie";
	Description = "$MeatPieDesc";
	DisplayCategories = array("All", "Food");
	IconName = "MeatPie";

	Tier = 3;
	SocialClass = 2;
	BuildTime = 80;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Sausage";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RichWhiteBread";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Onion";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Egg";
			Number = 1;
		};
		comp5 extends G3ItemComponent
		{
			Name = "GrindedBlackPepper";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatMeatPie", "HandOverMeatPie"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 2 }
	};
};

// === PROFESSION SPECIFIC TOOL ENHANCEMENTS ===

// Baker's Tools
"BakersTools" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$BakersTools";
	Description = "$BakersToolsDesc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "BakersTools";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 50;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Baker";
			ActorValue = "Productivity";
			Mod = 0.12;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverBakersTools"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "KitchenKnife";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

// Brewers Kit
"BrewersKit" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$BrewersKit";
	Description = "$BrewersKitDesc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "BrewersKit";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 75;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Brewer";
			ActorValue = "Productivity";
			Mod = 0.15;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverBrewersKit"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cauldron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Yeast";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 2 }
	};
};
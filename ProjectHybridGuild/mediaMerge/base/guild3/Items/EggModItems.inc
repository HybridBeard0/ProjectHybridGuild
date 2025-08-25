"Chicken" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Chicken";
	Description = "$ChickenDesc";
	DisplayCategories = array("All", "Livestock");

	Production = 3;
	BuildTime = 7.5;

	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 1;
		};
	};
			
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};

"EggBasket" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$EggBasket";
	Description = "$EggBasketDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 7.5;

	Tier = 1;
	SocialClass = 0;

	Results = array
	{
		UnlockEffect
		{
			Names = array {"HatchChicken"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Chicken";
			Number = 1;
		};
	};
			
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};

"Egg" = G3Item
{
	Type = 3;

	DisplayName = "$Egg";
	Description = "$EggDesc";
	DisplayCategories = array("All");
	UsableBy = array{ "$qs.charactertype.0" };
	
	Production = 3;
	BuildTime = 6;
	Tier = 0;
	
	SoldAtMarket = true;
	BoughtByMarket = true;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "EggBasket";
			Number = 1;
		}
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatEgg", "HandOverEgg"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 },
	};
};

"FriedChicken" = G3Item
{
	Type = 3;

	DisplayName = "$FriedChicken";
	Description = "$FriedChickenDesc";
	DisplayCategories = array("All");
	UsableBy = array{ "$qs.charactertype.0" };
	
	Production = 1;
	BuildTime = 10;
	Tier = 0;
	
	SoldAtMarket = true;
	BoughtByMarket = true;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Chicken";
			Number = 1;
		}
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatFriedChicken", "HandOverFriedChicken"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 },
	};
};

"ChickenCompanion" = G3Item
{
	Type = 3;

	DisplayName = "$ChickenCompanion";
	Description = "$ChickenCompanionDesc";
	DisplayCategories = array("All");
	
	CompanionModel = "Chicken";
	EquipmentType = 3; //Special
	EquipmentChildrenOnly = true;
	UsableBy = array{ "$characters.Age.Child" };
	
	SoldAtMarket = false;
	BoughtByMarket = false;
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Intelligence";
			Mod = 1;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverChickenCompanion"};
		}		
	};
};
"IngredientsSmokedPerch" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$IngredientsSmokedPerch.iron.name";
	Description = "$IngredientsSmokedPerch.iron.Desc";
	DisplayCategories = array("All", "RawMaterial");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 15.0;
	Production = 1;

	IconName = "IngredientsSmokedPerch";
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Perch";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"CookSmokedPerch"};
		}
	};
};

"DeliciousCookedPerch" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$DeliciousCookedPerch.iron.name";
	Description = "$DeliciousCookedPerch.iron.desc";
	DisplayCategories = array("All", "RawMaterial");
	IconName = "DeliciousCookedPerch";

	Tier = 1;
	SocialClass = 0;
	BuildTime = 40.0;
	Production = 1;
	
	SoldAtMarket = false;
	BoughtByMarket = true;

};
"SimpleFeast" = G3Item
{
	Type = 3;
    IconName = "SimpleFeast";
	DisplayName = "$SimpleFeast";
	Description = "$SimpleFeast.description";
	DisplayCategories = array("All");
	UsableBy = array{ "$qs.charactertype.0" };
	
	
	Production = 3;
	BuildTime = 20;
	Tier = 0;
	

	SoldAtMarket = false;
	BoughtByMarket = false;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "FriedTrout";
			Number = 5;
		},
        comp1 extends G3ItemComponent
		{
			Name = "SmokedPerch";
			Number = 5;
		},
        comp1 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 5;
		},
        comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 10;
		}
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DonateSimpleFeast"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CountryHouse", 1 },
		RequiredBuilding = array { "PoorHouse", 1 },
		RequiredBuilding = array { "CityHouse", 1 },
		RequiredBuilding = array { "Mansion", 1 },
	};
};
"Horseshoe" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Horseshoe";
	Description = "$Horseshoe.Desc";
	DisplayCategories = array("All", "Components");
	IconName = "Horseshoe";

	Production = 2;
	BuildTime = 35.0;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};
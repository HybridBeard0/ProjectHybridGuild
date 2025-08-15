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
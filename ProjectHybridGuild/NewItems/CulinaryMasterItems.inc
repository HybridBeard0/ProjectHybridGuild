// Culinary Master Items - Tier 8 Gourmet cuisine and royal banquets

// Gourmet Meal - Premium prepared food
"GourmetMeal" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$GourmetMeal";
	Description = "$GourmetMealDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PremiumBeef";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "VintageWine";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ExoticSpices";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "TruffleMushrooms";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatGourmetMeal", "HandOverGourmetMeal"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandRestaurant", 1 }
	};
};

// Royal Banquet - Ultimate dining experience
"RoyalBanquet" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoyalBanquet";
	Description = "$RoyalBanquetDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1800;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GourmetMeal";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RoyalWine";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ChefsSpecialty";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"HostRoyalBanquet", "HandOverRoyalBanquet"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandRestaurant", 1 }
	};
};

// Exotic Spices - Premium flavor enhancers
"ExoticSpices" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$ExoticSpices";
	Description = "$ExoticSpicesDesc";
	DisplayCategories = array("All", "Components");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 250;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GrindedBlackPepper";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "ExoticContraband";
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
		RequiredBuilding = array { "GrandRestaurant", 1 }
	};
};

// Truffle Mushrooms - Rare delicacy ingredient
"TruffleMushrooms" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$TruffleMushrooms";
	Description = "$TruffleMushroomsDesc";
	DisplayCategories = array("All", "RawMaterial");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 400;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "RoyalHorse";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandRestaurant", 1 }
	};
};

// Chef's Specialty - Master culinary creation
"ChefsSpecialty" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$ChefsSpecialty";
	Description = "$ChefsSpecialtyDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 900;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ExoticSpices";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "TruffleMushrooms";
			Number = 2;
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
			Names = array {"EatChefsSpecialty", "HandOverChefsSpecialty"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandRestaurant", 1 }
	};
};
"IngredientsSmokedPerch" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$IngredientsSmokedPerch.iron.name";
	Description = "$IngredientsSmokedPerch.iron.desc";
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
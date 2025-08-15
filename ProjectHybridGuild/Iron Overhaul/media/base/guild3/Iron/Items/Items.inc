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
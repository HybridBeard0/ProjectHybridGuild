//----------INN--------
"BarrelBrewerBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BarrelBrewerBeer";
	Description = "$BarrelBrewerBeerDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 7;
	SocialClass = 2;
	BuildTime = 550;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "MixedGrains";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "OakwoodBarrel";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkBrewerBeer", "HandOverBarrelBrewerBeer"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 3 }
	};
};

"Mead" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Mead";
	Description = "$MeadDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 7;
	SocialClass = 2;
	BuildTime = 625;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Candy";
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
			Names = array {"DrinkMead", "HandOverMead"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 3 }
	};
};

//--------------BAKERY------------
"FortuneCake" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FortuneCake";
	Description = "$FortuneCakeDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 7;
	SocialClass = 2;
	BuildTime = 550;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Candy";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseFortuneCake", "HandOverFortuneCake"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 3 }
	};
};

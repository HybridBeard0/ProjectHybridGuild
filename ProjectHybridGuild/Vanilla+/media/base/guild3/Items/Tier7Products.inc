//----------INN--------
"BarrelBrewerBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BarrelBrewerBeer";
	Description = "$BarrelBrewerBeerDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 550.00;
	Price = 889;
	Tier = 6;
	SocialClass = 2;
	
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
			Names = array {"DrinkBrewerBeer"};
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
	
	Production = 1;
	BuildTime = 625.00;
	Price = 899;
	Tier = 6;
	SocialClass = 2;
	
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
			Names = array {"DrinkMead"};
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
	
	Production = 1;
	BuildTime = 550.00;
	Price = 892;
	Tier = 6;
	SocialClass = 2;
	
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
			Names = array {"UseFortuneCake"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 3 }
	};
};

//----------ALCHIMIST GUILD ITEM--------

"Mandrake" = G3Item
{
	Type = 3;

	DisplayName = "$Mandrake";
	Description = "$MandrakeDesc";
	DisplayCategories = array("All");

	Production = 1;
	BuildTime = 25;
	Tier = 1;
	SocialClass = 2;
	
	SoldAtMarket = false;
	BoughtByMarket = false;
};

"PotionOfFateWomen" = G3Item
{
	DisplayCategories = array("All");

	DisplayName = "$PotionOfFateWomen";
	Description = "$PotionOfFateWomenDesc";
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen", "$statusEffect.guild-alchimists" };
	
	Tier = 7;
	BuildTime = 350;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Mandrake";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"PotionOfSalutary", "PotionOfContamination", "PotionOfDecay"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

//----------FREEMASON GUILD ITEM--------

"ConstructionPlan" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$ConstructionPlan";
	Description = "$ConstructionPlanDesc";

	Production = 1;
	BuildTime = 1200.00;
	Price = 4000;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseConstructionPlan"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Stylograph";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 3 }
	};
};

//----------CRAFTING GUILD ITEM--------

"PoisonTrap" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$PoisonTrap";
	Description = "$PoisonTrapDesc";

	Production = 1;
	BuildTime = 800.00;
	Price = 1000;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UsePoisonTrap"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 5;
		};
		comp1 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 3;
		};
		comp1 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

//----------THIEF GUILD ITEM--------

"LockPicks" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$LockPicks";
	Description = "$LockPicksDesc";

	Production = 1;
	BuildTime = 550.00;
	Price = 500;
	SoldAtMarket = false;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		DisplayEffect
		{
			Tags = array{"LockPicking"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.LockPicks";
			Duration = 0.0;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

//----------MERCHANT GUILD ITEM--------

"DiamondStaff" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$DiamondStaff";
	Description = "$DiamondStaffDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 1;
	BuildTime = 202.50;
	Price = 2000;
	SoldAtMarket = false;
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	UsableBy = array{ "$loca.key.anyone" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.8;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Diamond";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 3 }
	};
};
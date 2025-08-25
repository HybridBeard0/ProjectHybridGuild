// Master Butcher Items - Tier 8 Premium meat processing

// Premium Beef - High-quality meat from prize cattle
"PremiumBeef" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$PremiumBeef";
	Description = "$PremiumBeefDesc";
	DisplayCategories = array("All", "Food");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 200;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PrizeCattle";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalMeatWorks", 1 }
	};
};

// Aged Prime Cuts - Expertly cured meats
"AgedPrimeCuts" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$AgedPrimeCuts";
	Description = "$AgedPrimeCutsDesc";
	DisplayCategories = array("All", "Food");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PremiumBeef";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "ExoticSpices";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "WineBarrel";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalMeatWorks", 1 }
	};
};

// Royal Feast Preparation - Ultimate banquet meats
"RoyalFeastPreparation" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoyalFeastPreparation";
	Description = "$RoyalFeastPreparationDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1000;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "AgedPrimeCuts";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "TruffleMushrooms";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "RoyalWine";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatRoyalFeastPreparation", "HandOverRoyalFeastPreparation"};
		}
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalMeatWorks", 1 }
	};
};

// Exotic Venison - Rare game meat delicacy
"ExoticVenison" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$ExoticVenison";
	Description = "$ExoticVenisonDesc";
	DisplayCategories = array("All", "Food");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 300;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Deer";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "ThoroughbredWarhorse";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalMeatWorks", 1 }
	};
};

// Master Butcher's Cleaver - Ultimate meat processing tool
"MasterButchersCleaver" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MasterButchersCleaver";
	Description = "$MasterButchersCleaverDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 500;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Butcher";
			ActorValue = "Productivity";
			Mod = 0.35;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Strength";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "MeatProcessingQuality";
			Mod = 0.25;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMasterButchersCleaver"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalMeatWorks", 1 }
	};
};
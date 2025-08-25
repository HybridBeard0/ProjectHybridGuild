// Master Rancher Items - Tier 8 Royal livestock and breeding

// Royal Horse - Ultimate transportation and status symbol
"RoyalHorse" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$RoyalHorse";
	Description = "$RoyalHorseDesc";
	DisplayCategories = array("All", "Livestock");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 2000;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Horse";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "VintageWine";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 2;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};

// Prize Cattle - Premium breeding stock
"PrizeCattle" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$PrizeCattle";
	Description = "$PrizeCattleDesc";
	DisplayCategories = array("All", "Livestock");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1200;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GourmetFeed";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};

// Gourmet Feed - Premium livestock nutrition
"GourmetFeed" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$GourmetFeed";
	Description = "$GourmetFeedDesc";
	DisplayCategories = array("All", "Components");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 300;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Grapes";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 3;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};

// Thoroughbred Warhorse - Ultimate combat mount
"ThoroughbredWarhorse" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$ThoroughbredWarhorse";
	Description = "$ThoroughbredWarhorseDesc";
	DisplayCategories = array("All", "Livestock");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 2500;
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
			Name = "VeteransArmor";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};

// Master Rancher's Brand - Equipment for livestock management
"MasterRanchersBrand" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MasterRanchersBrand";
	Description = "$MasterRanchersBrandDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 400;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Rancher";
			ActorValue = "Productivity";
			Mod = 0.25;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "AnimalHandling";
			Mod = 5;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMasterRanchersBrand"};
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
			Name = "KnowledgeCrystal";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalStables", 1 }
	};
};
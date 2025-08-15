//---------- QUARRY -------------
"Clay" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Clay";
	Description = "$ClayDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 10; //originally 8
	Price = 6;

	RequiredBuildings = array{
		RequiredBuilding = array { "Quarry", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"Slate" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Slate";
	Description = "$SlateDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 13.4; //originally 10.4
	Price = 8;

	RequiredBuildings = array{
		RequiredBuilding = array { "Quarry", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"GraniteBlock" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$GraniteBlock";
	Description = "$GraniteBlockDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 11.2; //originally 9.2
	Price = 7;

	RequiredBuildings = array{
		RequiredBuilding = array { "Quarry", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

//---------- LUMBER YARD -------------
"Charcoal" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Charcoal";
	Description = "$CharcoalDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 11.2; //originally 9.2
	Price = 7;

	RequiredBuildings = array{
		RequiredBuilding = array { "LumberYard", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"Pinewood" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Pinewood";
	Description = "$PinewoodDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 7.2; //originally 5.2
	Price = 4;

	RequiredBuildings = array{
		RequiredBuilding = array { "LumberYard", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"Oakwood" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Oakwood";
	Description = "$OakwoodDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 10; //originally 8
	Price = 6;

	RequiredBuildings = array{
		RequiredBuilding = array { "LumberYard", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

//---------- MINE -------------
"IronOre" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = $IronOre;
	Description = $IronOreDesc;
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 8.4; //originally 6.4
	Price = 5;

	RequiredBuildings = array{
		RequiredBuilding = array { "Mine", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"GoldOre" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$GoldOre";
	Description = "$GoldOreDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 13.4; //originally 10.4
	Price = 8;

	RequiredBuildings = array{
		RequiredBuilding = array { "Mine", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"SilverOre" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$SilverOre";
	Description = "$SilverOreDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 10; //originally 8
	Price = 6;

	RequiredBuildings = array{
		RequiredBuilding = array { "Mine", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"PreciousStone" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$PreciousStone";
	Description = "$PreciousStoneDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 12.2; //originally 9.2
	Price = 7;

	RequiredBuildings = array{
		RequiredBuilding = array { "Mine", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

//--- IRON OVERHAUL MERGE START ---
"LesserQualitySaltStone" = G3Item
{
	Type = 1;
	SubType = 1;
	DisplayName = "$LesserQualitySaltStone.iron.name";
	Description = "$LesserQualitySaltStone.iron.desc";
	DisplayCategories = array("All", "RawMaterial");
	IconName = "LesserQualitySaltStone";
	Production = 2;
	BuildTime = 5; //originally 8
	Price = 2;
	RequiredBuildings = array{
		RequiredBuilding = array { "Quarry", 1 }
	};
	SeasonAvailability = array{1, 1, 1, 1};
};

"Sand" = G3Item
{
	Type = 1;
	SubType = 1;
	DisplayName = "$Sand.iron.name";
	Description = "$Sand.iron.desc";
	DisplayCategories = array("All", "RawMaterial");
	IconName = "Sand";
	Production = 2;
	BuildTime = 5; //originally 8
	Price = 2;
	RequiredBuildings = array{
		RequiredBuilding = array { "Quarry", 1 }
	};
	SeasonAvailability = array{1, 1, 1, 1};
};
//--- IRON OVERHAUL MERGE END ---

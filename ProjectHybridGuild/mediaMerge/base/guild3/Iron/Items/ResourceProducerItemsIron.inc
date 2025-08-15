//---------- QUARRY -------------

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

//---------- LUMBER YARD -------------


//---------- MINE -------------

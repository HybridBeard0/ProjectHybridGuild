"Berry" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Berry.iron.name";
	Description = "$Berry.iron.desc";
	DisplayCategories = array("All", "RawMaterial");

	IconName = "Berry"

	Production = 2;
	BuildTime = 6.0;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	GatheringBuilding = "Grove";
};

"BlackPepperPlant" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$BlackPepperPlant.iron.name";
	Description = "$BlackPepperPlant.iron.desc";
	DisplayCategories = array("All", "RawMaterial");

	IconName = "BlackPepperPlant"

	Production = 1;
	BuildTime = 6.0;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 }
	};

	GatheringBuilding = "Grove";
};

"Worm" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Worm.iron.name";
	Description = "$Worm.iron.desc";
	DisplayCategories = array("All", "RawMaterial");

	IconName = "Worm";

	Production = 1;
	BuildTime = 4;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Gravedigger", 1 }
	};

	GatheringBuilding = "Cemetary";
};

"Shell" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Shell.iron.name";
	Description = "$Shell.iron.desc";
	DisplayCategories = array("All", "RawMaterial");

	IconName = "Shell";

	Production = 1;
	BuildTime = 7;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "FishingHut", 1 }
	};

	GatheringBuilding = "FishingSpot";
};

"Duck" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$Duck.iron.name";
	Description = "$Duck.iron.desc";
	DisplayCategories = array("All", "Livestock");
	IconName = "Duck";

	Production = 1;
	BuildTime = 30.0;
	Tier = 1;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Butcher", 1 }
	};

	GatheringBuilding = "Grove";
};



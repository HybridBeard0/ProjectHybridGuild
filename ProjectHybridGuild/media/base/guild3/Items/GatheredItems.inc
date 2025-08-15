//---------- GROVE -------------
"Blackberry" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Blackberry";
	Description = "$BlackberryDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 4.25;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 },
		RequiredBuilding = array { "Orchardist", 1 }
	};

	GatheringBuilding = "Grove";
};

"Lavender" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Lavender";
	Description = "$LavenderDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 5;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 }
	};

	GatheringBuilding = "Grove";
};

"Honey" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Honey";
	Description = "$HoneyDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 6.5;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	GatheringBuilding = "Grove";
};

"Fruit" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Fruit";
	Description = "$FruitDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 2;
	BuildTime = 8.5;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	GatheringBuilding = "Grove";
};

"Jasmin" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Jasmin";
	Description = "$JasminDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 11.25;
	Tier = 1;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Apothecary", 1 },
		RequiredBuilding = array { "Barber", 1 }
	};

	GatheringBuilding = "Grove";
};

"Deer" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$Deer";
	Description = "$DeerDesc";
	DisplayCategories = array("All", "Livestock");

	Production = 1;
	BuildTime = 85.0;
	Tier = 1;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Butcher", 1 }
	};

	GatheringBuilding = "Grove";
};

//---------- CEMENTARY -------------
"BatBlood" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$BatBlood";
	Description = "$BatBloodDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 13.75;
	Tier = 3;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Apothecary", 1 },
		RequiredBuilding = array { "Barber", 1 }
	};

	GatheringBuilding = "Cemetary";
};

"Bone" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Bone";
	Description = "$BoneDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 7;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Gravedigger", 1 }
	};

	GatheringBuilding = "Cemetary";
};

"StoneLily" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$StoneLily";
	Description = "$StoneLilyDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 7.5;
	Tier = 2;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 }
	};

	GatheringBuilding = "Cemetary";
};

"SpiderLeg" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Spiderleg";
	Description = "$SpiderlegDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 28.75;
	Tier = 5;
	SocialClass = 2;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};

	GatheringBuilding = "Cemetary";
};

//---------- BRUSHWOOD -------------
"Frogeye" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Frogeye";
	Description = "$FrogeyeDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 20;
	Tier = 4;
	SocialClass = 2;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "AlchemistShop", 2 }
	};

	GatheringBuilding = "Brushwood";
};

"Moonflower" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Moonflower";
	Description = "$MoonflowerDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 12.5;
	Tier = 3;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};

	GatheringBuilding = "Brushwood";
};

"WildRose" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$WildRose";
	Description = "$WildRoseDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 12.5;
	Tier = 2;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Apothecary", 1 };
		RequiredBuilding = array { "Barber", 1 }
	};

	GatheringBuilding = "Brushwood";
};

"SwampRoot" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Swamproot";
	Description = "$SwamprootDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 10;
	Tier = 2;
	SocialClass = 1;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 }
	};

	GatheringBuilding = "Brushwood";
};

//---------- FISHINGSPOT -------------
"Trout" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Trout";
	Description = "$TroutDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 2;
	BuildTime = 8;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "FishingHut", 1 }
	};

	GatheringBuilding = "FishingSpot";
};

"Perch" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Perch";
	Description = "$PerchDesc";
	DisplayCategories = array("All", "RawMaterial");

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

"Pike" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Pike";
	Description = "$PikeDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 12;
	Tier = 2;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "FishingHut", 1 }
	};

	GatheringBuilding = "FishingSpot";
};

//---------- WELL -------------
"BucketOfWater" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$BucketOfWater";
	Description = "$BucketOfWaterDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 3.75;
	Tier = 1;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 },
		RequiredBuilding = array { "Farm", 1 },
		RequiredBuilding = array { "Masonery", 1 },
	};

	GatheringBuilding = "Well";
};


"Clay" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Clay";
	Description = "$ClayDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 10.00;
	Price = 7;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 13.75;
	Price = 9;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 11.25;
	Price = 7;
	Tier = 0;
	SocialClass = 0;

	RequiredBuildings = array{
		RequiredBuilding = array { "Quarry", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"Charcoal" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Charcoal";
	Description = "$CharcoalDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 11.25;
	Price = 7;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 7.50;
	Price = 5;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 10.00;
	Price = 7;
	Tier = 0;
	SocialClass = 0;

	RequiredBuildings = array{
		RequiredBuilding = array { "LumberYard", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"IronOre" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = $IronOre;
	Description = $IronOreDesc;
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 8.75;
	Price = 6;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 13.75;
	Price = 9;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 10.00;
	Price = 7;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 12.50;
	Price = 8;
	Tier = 0;
	SocialClass = 0;

	RequiredBuildings = array{
		RequiredBuilding = array { "Mine", 1 }
	};

	SeasonAvailability = array{1, 1, 1, 1};
};

"Blackberry" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Blackberry";
	Description = "$BlackberryDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 3.75;
	Price = 2;
	Tier = 0;
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
	BuildTime = 5.00;
	Price = 3;
	Tier = 0;
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
	BuildTime = 6.25;
	Price = 4;
	Tier = 0;
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
	BuildTime = 8.75;
	Price = 3;
	Tier = 0;
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
	Price = 7;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 85.00;
	Price = 57;
	Tier = 0;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Butcher", 1 }
	};

	GatheringBuilding = "Grove";
};

"BatBlood" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$BatBlood";
	Description = "$BatBloodDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 13.75;
	Price = 9;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 7.50;
	Price = 5;
	Tier = 0;
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
	BuildTime = 7.50;
	Price = 5;
	Tier = 0;
	SocialClass = 0;

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
	Price = 19;
	Tier = 0;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};

	GatheringBuilding = "Cemetary";
};

"Frogeye" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Frogeye";
	Description = "$FrogeyeDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 20.00;
	Price = 13;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 12.50;
	Price = 8;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 12.50;
	Price = 8;
	Tier = 0;
	SocialClass = 0;

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
	BuildTime = 10.00;
	Price = 7;
	Tier = 0;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 }
	};

	GatheringBuilding = "Brushwood";
};

"Trout" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Trout";
	Description = "$TroutDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 2;
	BuildTime = 7.50;
	Price = 2;
	Tier = 0;
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
	BuildTime = 7.50;
	Price = 5;
	Tier = 0;
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
	BuildTime = 12.50;
	Price = 8;
	Tier = 0;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "FishingHut", 1 }
	};

	GatheringBuilding = "FishingSpot";
};

"BucketOfWater" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$BucketOfWater";
	Description = "$BucketOfWaterDesc";
	DisplayCategories = array("All", "RawMaterial");

	Production = 1;
	BuildTime = 3.75;
	Price = 2;
	Tier = 0;
	SocialClass = 0;

	SeasonAvailability = array{1, 1, 1, 1};

	RequiredBuildings = array{
		RequiredBuilding = array { "Shaman", 1 },
		RequiredBuilding = array { "Farm", 1 },
		RequiredBuilding = array { "Masonery", 1 },
	};

	GatheringBuilding = "Well";
};

"Barley" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Barley";
	Description = "$BarleyDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 7.50;
	Price = 5;
	Tier = 1;
	SocialClass = 0;

	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
	};
			
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};

"Iron" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Iron";
	Description = "$IronDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 7.50;
	Price = 12;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "IronOre";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

"CrudeWeaponHilt" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$CrudeWeaponHilt";
	Description = "$CrudeWeaponHiltDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 12.50;
	Price = 33;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

"Dagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Dagger";
	Description = "$DaggerDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 50.00;
	Price = 88;
	Tier = 1;
	SocialClass = 0;
	
	VisualActorName = "dagger/dagger";

	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 15;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "CrudeWeaponHilt";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

"PinewoodPlank" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$PinewoodPlank";
	Description = "$PinewoodPlankDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 6.25;
	Price = 10;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pinewood";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"Copper" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Copper";
	Description = "$CopperDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 10.00;
	Price = 7;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "IronOre";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"Cauldron" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Cauldron";
	Description = "$CauldronDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 1;
	BuildTime = 35.00;
	Price = 44;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"ClayVase" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$ClayVase";
	Description = "$ClayVaseDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 17.50;
	Price = 31;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Clay";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};

"Beaker" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Beaker";
	Description = "$BeakerDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 2;
	BuildTime = 13.75;
	Price = 9;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Clay";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};

"WeightStone" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$WeightStone";
	Description = "$WeightStoneDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 1;
	BuildTime = 35.00;
	Price = 44;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};

"MixedHerbs" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$MixedHerbs";
	Description = "$MixedHerbsDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 12.50;
	Price = 16;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Lavender";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Blackberry";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

"HerbBandage" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$HerbBandage";
	Description = "$HerbBandageDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 1;
	BuildTime = 40.00;
	Price = 64;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MixedHerbs";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

"HerbTea" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$HerbTea";
	Description = "$HerbTeaDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 37.50;
	Price = 50;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MixedHerbs";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};			
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkHerbTea"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

"BoneDust" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BoneDust";
	Description = "$BoneDustDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 20.00;
	Price = 11;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};
};

"BoneGlue" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BoneGlue";
	Description = "$BoneGlueDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 12.50;
	Price = 21;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bone";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};
};

"BoneBracelet" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$BoneBracelet";
	Description = "$BoneBraceletDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 45.00;
	Price = 76;
	Tier = 1;
	SocialClass = 0;
	
	EquipmentType = 5;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 15;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bone";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneGlue";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};
};

"FriedTrout" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FriedTrout";
	Description = "$FriedTroutDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 7.50;
	Price = 8;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Trout";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};
};

"SmokedPerch" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$SmokedPerch";
	Description = "$SmokedPerchDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 15.00;
	Price = 17;
	Tier = 1;
	SocialClass = 0;
	
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
};

"Juice" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Juice";
	Description = "$JuiceDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 7.50;
	Price = 9;
	Tier = 1;
	SocialClass = 0;

	UsableBy = array{ "$qs.charactertype.0" };
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkJuice"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};
};

"Cider" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Cider";
	Description = "$CiderDesc";
	DisplayCategories = array("All", "Food");
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Production = 1;
	BuildTime = 10.00;
	Price = 18;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 3;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkCider"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};
};

"Candy" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Candy";
	Description = "$CandyDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 37.50;
	Price = 41;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Blackberry";
			Number = 1;
		};
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};
};

"JasmineOil" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$JasmineOil";
	Description = "$JasmineOilDesc";
	DisplayCategories = array("All", "Components");


	Production = 1;
	BuildTime = 8.75;
	Price = 22;
	Tier = 2;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Jasmin";
			Number = 2;
		};
	};			
		
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Barber", 1 }
	};
};

"MakeUp" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MakeUp";
	Description = "$MakeUpDesc";
	DisplayCategories = array("All", "Trinkets");


	Production = 1;
	BuildTime = 17.50;
	Price = 58;
	Tier = 2;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "JasmineOil";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 2;
		};
	};			
		
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Barber", 1 }
	};
};

"Cattle" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$Cattle";
	Description = "$CattleDesc";
	DisplayCategories = array("All", "Livestock");

	Production = 1;
	BuildTime = 70.00;
	Price = 85;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};

"Pig" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$Pig";
	Description = "$PigDesc";
	DisplayCategories = array("All", "Livestock");

	Production = 1;
	BuildTime = 42.50;
	Price = 49;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};

"Wheat" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Wheat";
	Description = "$WheatDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 12.50;
	Price = 12;
	Tier = 1;
	SocialClass = 0;
	
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};

"Nails" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Nails";
	Description = "$NailsDesc";
	DisplayCategories = array("All", "Components");

	Production = 10;
	BuildTime = 50.00;
	Price = 7;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

"Fittings" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Fittings";
	Description = "$FittingsDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 17.50;
	Price = 41;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

"ThrowingKnife" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$ThrowingKnife";
	Description = "$ThrowingKnifeDesc";
	DisplayCategories = array("All", "WeaponArmor");
	
	Production = 1;
	BuildTime = 75.00;
	Price = 111;
	Tier = 2;
	SocialClass = 0;
	
	EquipmentType = 5;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	VisualActorName = "dagger/dagger";
	SpecialAnimationName = "throw_knife";
	
	Range = 300.0;
	
	Results = array
	{
		ModifierEffect
		{
			Tags = array{"FirstStrike"};
			ActorValue = "AttackPower";
			Mod = 1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

"CopperBracelet" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CopperBracelet";
	Description = "$CopperBraceletDesc";
	DisplayCategories = array("All", "Clothing");


	Production = 1;
	BuildTime = 25.00;
	Price = 45;
	Tier = 2;
	SocialClass = 0;

	EquipmentType = 4; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.01;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"Torch" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Torch";
	Description = "$TorchDesc";
	DisplayCategories = array("All", "WeaponArmor");

	VisualActorName = "torch/torch";
	VisibleInInteriors = false;
	
	EquippedIdleAnimation = "idle_torch";
	EquippedWalkAnimation = "walk_torch";
	EquippedRunAnimation = "run_torch";
	
	EquipmentAnimation = "fire1";
	

	Production = 1;
	BuildTime = 50.00;
	Price = 78;
	Tier = 2;
	SocialClass = 0;
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Perception";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"WoodenShield" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$WoodenShield";
	Description = "$WoodenShieldDesc";
	DisplayCategories = array("All", "WeaponArmor");
	

	Production = 1;
	BuildTime = 60.00;
	Price = 92;
	Tier = 2;
	SocialClass = 0;
	
	EquipmentType = 5;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"StrongDoorLatch" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$StrongDoorLatch";
	Description = "$StrongDoorLatchDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Production = 1;
	BuildTime = 80.00;
	Price = 89;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseStrongDoorLatch"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};

"OilLamp" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$OilLamp";
	Description = "$OilLampDesc";
	DisplayCategories = array("All", "Trinkets");


	Production = 1;
	BuildTime = 66.25;
	Price = 131;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ClayVase";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "FishOil";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};

"Linen" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Linen";
	Description = "$LinenDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 5.00;
	Price = 10;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "StoneLily";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

"FishOil" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$FishOil";
	Description = "$FishOilDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 25.00;
	Price = 37;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pike";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Perch";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};
};

"BoneNeedle" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BoneNeedle";
	Description = "$BoneNeedleDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 8.75;
	Price = 8;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pike";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};
};

"BlackberryJam" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BlackberryJam";
	Description = "$BlackberryJamDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 20.00;
	Price = 26;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Blackberry";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};
};

"RoseWater" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$RoseWater";
	Description = "$RoseWaterDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 15.00;
	Price = 33;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WildRose";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
	};			

	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkRoseWater"};
		}
	};
		
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Barber", 1 }
	};
};

"Soap" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Soap";
	Description = "$SoapDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 2;
	BuildTime = 15.00;
	Price = 14;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WildRose";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Jasmin";
			Number = 1;
		};
	};			
		
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Barber", 1 }
	};
};

"SkullLamp" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$SkullLamp";
	Description = "$SkullLampDesc";
	DisplayCategories = array("All", "BlackMarket");
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Production = 1;
	BuildTime = 47.50;
	Price = 175;
	Tier = 2;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bone";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 4;
		};
		comp3 extends G3ItemComponent
		{
			Name = "FishOil";
			Number = 2;
		};
	};			

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseSkullLamp"};
		}
	};
		
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};
};

"ShadowDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$ShadowDagger";
	Description = "$ShadowDaggerDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 37.50;
	Price = 135;
	Tier = 2;
	SocialClass = 0;

	VisualActorName = "shadowdagger/shadowdagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 15;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 2;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 1;
		};
		
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

"Beef" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Beef";
	Description = "$BeefDesc";
	DisplayCategories = array("All", "Components");

	Production = 10;
	BuildTime = 145.00;
	Price = 22;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 1;
		};
	};
	
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"Pork" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Pork";
	Description = "$PorkDesc";
	DisplayCategories = array("All", "Components");

	Production = 5;
	BuildTime = 125.00;
	Price = 33;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pig";
			Number = 1;
		};
	};
	
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"Fat" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Fat";
	Description = "$FatDesc";
	DisplayCategories = array("All", "Components");

	Production = 4;
	BuildTime = 30.00;
	Price = 15;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pork";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"Leather" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Leather";
	Description = "$LeatherDesc";
	DisplayCategories = array("All", "Components");

	Production = 5;
	BuildTime = 42.50;
	Price = 25;
	Tier = 2;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"WheatFlour" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$WheatFlour";
	Description = "$WheatFlourDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 25.00;
	Price = 58;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 3;
		};





	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"BarleyFlour" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BarleyFlour";
	Description = "$BarleyFlourDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 20.00;
	Price = 27;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 2;
		};





	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"FlatBread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FlatBread";
	Description = "$FlatBreadDesc";
	DisplayCategories = array("All", "Food");

	Production = 2;
	BuildTime = 40.00;
	Price = 30;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"Sheep" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$Sheep";
	Description = "$SheepDesc";
	DisplayCategories = array("All", "Livestock");

	Production = 1;
	BuildTime = 125.00;
	Price = 139;
	Tier = 3;
	SocialClass = 1;

	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};

"Wool" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Wool";
	Description = "$WoolDesc";
	DisplayCategories = array("All", "Components");

	Production = 10;
	BuildTime = 10.00;
	Price = 15;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Sheep";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};

"Blanket" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Blanket";
	Description = "$BlanketDesc";
	DisplayCategories = array("All", "Luxury");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 127.50;
	Price = 173;
	Tier = 3;
	SocialClass = 1;
   
	EquipmentType = 3;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 1 }
	};
};

"Cloth" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Cloth";
	Description = "$ClothDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 7.50;
	Price = 31;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BoneNeedle";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 1 }
	};
};

"Backpack" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$Backpack";
	Description = "$BackpackDesc";
	DisplayCategories = array("All", "Transportation");
	
	Production = 1;
	BuildTime = 103.75;
	Price = 207;
	Tier = 3;
	SocialClass = 0;
	
	VisualActorName = "backpack/backpack";
	EquipmentType = 6;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "StorageSlots";
			Mod = 1;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 1 }
	};
};

"Silver" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Silver";
	Description = "$SilverDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 16.25;
	Price = 23;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SilverOre";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 1 }
	};
};

"IronBracelet" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$IronBrachelet";
	Description = "$IronBracheletDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 112.50;
	Price = 184;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 5;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		}
	};
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 1 }
	};
};

"SilverChain" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$SilverChain";
	Description = "$SilverChainDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 125.00;
	Price = 193;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 4; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.04;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Silver";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 1 }
	};
};

"SandingBlock" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$SandingBlock";
	Description = "$SandingBlockDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 27.50;
	Price = 54;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

"Grindstone" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Grindstone";
	Description = "$GrindstoneDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 45.00;
	Price = 79;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
	};

	EquipmentType = 3;
	EquipmentAdultsOnly = true;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.04;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

"MuralPainting" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$MuralPainting";
	Description = "$MuralPaintingDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Production = 1;
	BuildTime = 80.00;
	Price = 212;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyMuralPainting"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

"OakwoodPlank" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$OakwoodPlank";
	Description = "$OakwoodPlankDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 11.25;
	Price = 18;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Oakwood";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"WoodFrame" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$WoodFrame";
	Description = "$WoodFrameDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 16.25;
	Price = 45;
	Tier = 3;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"Comb" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Comb";
	Description = "$CombDesc";
	DisplayCategories = array("All", "Luxury");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 150.00;
	Price = 211;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 3; 

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.01;
			Recover = true;
		}
	};
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"OakwoodBarrel" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$OakwoodBarrel";
	Description = "$OakwoodBarrelDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 30.00;
	Price = 56;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp1 extends G3ItemComponent
		{
			Name = "Nails";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"WalkingStick" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$WalkingStick";
	Description = "$WalkingStickDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 120.00;
	Price = 201;
	Tier = 3;
	SocialClass = 1;
	
	VisualActorName = "walkingstick/walkingstick";
	
	EquippedIdleAnimation = "idle_walkstick1";
	EquippedWalkAnimation = "walk_walkstick";
	EquippedRunAnimation = "run_walkstick";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "MovementSpeedMult";
			Mod = 0.04;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"Bomb" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Bomb";
	Description = "$BombDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	

	Production = 1;
	BuildTime = 125.00;
	Price = 242;
	Tier = 3;
	SocialClass = 1;
	
	ProductionIsProhibitedForChildren = true;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "ClayVase";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ThrowBomb"};
		}
	}; 

	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};			
};

"DarkTalisman" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$DarkTalisman";
	Description = "$DarkTalismanDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 96.25;
	Price = 181;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 4;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 2;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Moonflower";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};
};

"Ethanol" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Ethanol";
	Description = "$EthanolDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 47.50;
	Price = 31;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WildRose";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Blackberry";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 1 }
	};
};

"EndurenceDrink" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$EndurenceDrink";
	Description = "$EndurenceDrinkDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 150.00;
	Price = 209;
	Tier = 3;
	SocialClass = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseEndurenceDrink"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 1 }
	};
};

"Parchment" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Parchment";
	Description = "$ParchmentDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 62.50;
	Price = 100;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

"Paint" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Paint";
	Description = "$PaintDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 70.00;
	Price = 112;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

"AboutTalents1" = G3Item
{
	Type = 1;
	SubType = 7;
	
	DisplayName = "$AboutTalents1";
	Description = "$AboutTalents1Desc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 187.50;
	Price = 454;
	Tier = 3;
	SocialClass = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseAboutTalents1"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

"Poem" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Poem";
	Description = "$PoemDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 125.00;
	Price = 344;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UsePoem"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

"Bandage" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Bandage";
	Description = "$BandageDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$loca.key.anyone" };
	
	Production = 2;
	BuildTime = 75.00;
	Price = 70;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyBandage"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};

"FeverSyrup" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$FeverSyrup";
	Description = "$FeverSyrupDesc";
	DisplayCategories = array("All", "Trinkets");
	
	Production = 2;
	BuildTime = 55.00;
	Price = 75;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PlantEssence";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};

"PestAway" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$PestAway";
	Description = "$PestAwayDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 170.00;
	Price = 247;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ClayVase";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UsePestAway"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};

"MixedGrains" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$MixedGrains";
	Description = "$MixedGrainsDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 25.00;
	Price = 26;
	Tier = 1;
	SocialClass = 0;
	
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"GrainPap" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$GrainPap";
	Description = "$GrainPapDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 87.50;
	Price = 138;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MixedGrains";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"PlantEssence" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$PlantEssence";
	Description = "$PlantEssenceDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 135.00;
	Price = 79;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MixedGrains";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "StoneLily";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"Horse" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$Horse";
	Description = "$HorseDesc";
	DisplayCategories = array("All", "Livestock");

	Production = 1;
	BuildTime = 250.00;
	Price = 384;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MixedGrains";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 3 }
	};
};

"RidingHorse" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$RidingHorse";
	Description = "$RidingHorseDesc";
	DisplayCategories = array("All", "Transportation");

	
	Production = 1;
	BuildTime = 415.00;
	Price = 1147;
	Tier = 5;
	SocialClass = 2;
	
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	VisualActorName = "horses/ridinghorse";
	VisibleInInteriors = false;
	VisibleOnExteriors = false;
	EquipmentType = 6;
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Horse";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "MixedGrains";
			Number = 4;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 4;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "StorageSlots";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "!IsInInterior";
			ActorValue = "MovementSpeedMult";
			Mod = 0.43;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 3 }
	};
};

"DogCompanion" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$DogCompanion";
	Description = "$DogCompanionDesc";
	DisplayCategories = array("All", "Livestock");
	UsableBy = array{ "$loca.key.anyone" };
	

	Production = 1;
	BuildTime = 205.00;
	Price = 440;
	Tier = 5;
	SocialClass = 2;
	
	CompanionModel = "Dog";
	EquipmentType = 3; 
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Perception";
			Mod = 2;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Beef";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Pork";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 3 }
	};
};

"Gingerbread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Gingerbread";
	Description = "$GingerbreadDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 37.50;
	Price = 124;
	Tier = 3;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Candy";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 1 }
	};
};

"Cookie" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Cookie";
	Description = "$CookieDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 112.50;
	Price = 189;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Candy";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 1 }
	};
};

"BreadRoll" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BreadRoll";
	Description = "$BreadRollDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 145.00;
	Price = 233;
	Tier = 3;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 1 }
	};
};

"Alcohol" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Alcohol";
	Description = "$AlcoholDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 20.00;
	Price = 80;
	Tier = 3;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "OakwoodBarrel";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 1 }
	};
};

"SmallBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$SmallBeer";
	Description = "$SmallBeerDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	


	Production = 2;
	BuildTime = 33.75;
	Price = 64;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkSmallBeer"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 1 }
	};
};

"Sausage" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Sausage";
	Description = "$SausageDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 162.50;
	Price = 288;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pork";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MixedHerbs";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 1 }
	};
};

"CommonerClothes1" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CommonerClothes1";
	Description = "$CommonerClothes1Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 375.00;
	Price = 529;
	Tier = 4;
	SocialClass = 0;
	
	EquippedCharacterDesc = "commoner1";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 3;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.02;
			Recover = true;
		},
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 2 }
	};
};

"CommonerClothes2" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CommonerClothes2";
	Description = "$CommonerClothes2Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 370.00;
	Price = 612;
	Tier = 4;
	SocialClass = 0;
	
	EquippedCharacterDesc = "commoner2";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 2;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 2 }
	};
};

"CommonerClothes3" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CommonerClothes3";
	Description = "$CommonerClothes3Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 383.75;
	Price = 603;
	Tier = 4;
	SocialClass = 0;
	
	EquippedCharacterDesc = "commoner3";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 2 }
	};
};

"CommonerClothes4" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CommonerClothes4";
	Description = "$CommonerClothes4Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 307.50;
	Price = 572;
	Tier = 4;
	SocialClass = 0;
	
	EquippedCharacterDesc = "commoner4";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.03;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 2 }
	};
};

"LeatherGloves" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$LeatherGloves";
	Description = "$LeatherGlovesDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 221.25;
	Price = 309;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 5; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 1 }
	};
};

"Gemstone" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Gemstone";
	Description = "$GemstoneDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 45.00;
	Price = 58;
	Tier = 4;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PreciousStone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 2 }
	};
};

"SlateTile" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$SlateTile";
	Description = "$SlateTileDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Production = 1;
	BuildTime = 85.00;
	Price = 163;
	Tier = 4;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Slate";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SandingBlock";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplySlateTile"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 2 }
	};
};

"GemRing" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$GemRing";
	Description = "$GemRingDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 250.00;
	Price = 477;
	Tier = 4;
	SocialClass = 1;
	
	EquipmentType = 3; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.02;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SilverRing";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 2 }
	};
};

"SilverRing" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$SilverRing";
	Description = "$SilverRingDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 62.50;
	Price = 100;
	Tier = 4;
	SocialClass = 1;
	
	EquipmentType = 3; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.02;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Silver";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 2 }
	};
};

"Gambeson" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Gambeson";
	Description = "$GambesonDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 375.00;
	Price = 690;
	Tier = 4;
	SocialClass = 1;
	
	EquippedCharacterDesc = "Gambeson";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 80;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.03;
			Recover = true;
		},
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 2 }
	};
};

"Chainmail" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Chainmail";
	Description = "$ChainmailDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 450.00;
	Price = 720;
	Tier = 4;
	SocialClass = 1;

	EquippedCharacterDesc = "Chainmail";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	IsArmor = true;
	
	EquippedWalkAnimation = "walk_armor";
	EquippedRunAnimation = "run_armor";

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 90;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = -1;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 2 }
	};
};

"Shield" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Shield";
	Description = "$ShieldDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 125.00;
	Price = 280;
	Tier = 4;
	SocialClass = 1;
	
	EquipmentType = 5;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = -1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 4;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 2 }
	};
};

"LeatheredWeaponHilt" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$LeatheredWeaponHilt";
	Description = "$LeatheredWeaponHiltDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 105.00;
	Price = 200;
	Tier = 4;
	SocialClass = 1;

	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "CrudeWeaponHilt";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneGlue";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 2 }
	};
};

"Axe" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Axe";
	Description = "$AxeDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 162.50;
	Price = 420;
	Tier = 4;
	SocialClass = 1;
	
	VisualActorName = "axe/axe";

	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 40;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 2 }
	};
};

"OakwoodRing" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$OakwoodRing";
	Description = "$OakwoodRingDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 137.50;
	Price = 188;
	Tier = 4;
	SocialClass = 1;

	EquipmentType = 3; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.02;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 2 }
	};
};

"Cart" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$Cart";
	Description = "$CartDesc";
	DisplayCategories = array("All", "Transportation");
	
	Production = 1;
	BuildTime = 641.25;
	Price = 1088;
	Tier = 4;
	SocialClass = 1;
	
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	VisualActorName = "cart_small/cart_small";
	VisibleInInteriors = false;
	VisibleOnExteriors = false;
	EquipmentType = 6;
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WoodFrame";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Nails";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 5;
		};
	};

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "StorageSlots";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "!IsInInterior";
			ActorValue = "MovementSpeedMult";
			Mod = -0.1;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 2 }
	};
};

"Ectoplasm" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Ectoplasm";
	Description = "$EctoplasmDesc";
	DisplayCategories = array("All", "Components");

	Production = 5;
	BuildTime = 47.50;
	Price = 32;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 2 }
	};
};

"ToadExcrements" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$ToadExcrements";
	Description = "$ToadExcrementsDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Production = 1;
	BuildTime = 100.00;
	Price = 257;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Frogeye";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyToadExcrements"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 2 }
	};
};

"ArgusEyeglasses" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$ArgusEyeglasses";
	Description = "$ArgusEyeglassesDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 137.50;
	Price = 439;
	Tier = 4;
	SocialClass = 1;
	
	EquipmentType = 3; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Perception";
			Mod = 2;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 2 }
	};
};

"Polish" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Polish";
	Description = "$PolishDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 25.00;
	Price = 116;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Jasmin";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"Perfume" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Perfume";
	Description = "$PerfumeDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 212.50;
	Price = 283;
	Tier = 4;
	SocialClass = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UsePerfume"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Lavender";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "WildRose";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"GhostlyFog" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$GhostlyFog";
	Description = "$GhostlyFogDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Production = 1;
	BuildTime = 275.00;
	Price = 391;
	Tier = 4;
	SocialClass = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyGhostlyFog"};
		}
	}; 
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"WeaponPoison" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$WeaponPoison";
	Description = "$WeaponPoisonDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 43.75;
	Price = 135;
	Tier = 4;
	SocialClass = 1;

	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "StoneLily";
			Number = 1;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = -0.1;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"Stylograph" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Stylograph";
	Description = "$StylographDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 37.50;
	Price = 60;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BoneNeedle";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 2 }
	};
};

"Painting" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Painting";
	Description = "$PaintingDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 1;
	BuildTime = 125.00;
	Price = 431;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "WoodFrame";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 2 }
	};
};

"StatelyDispatch" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$StatelyDispatch";
	Description = "$StatelyDispatchDesc";
	DisplayCategories = array("All", "Tinctures");

	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Production = 1;
	BuildTime = 137.50;
	Price = 435;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Stylograph";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseStatelyDispatch"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 2 }
	};
};

"PainKiller" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$PainKiller";
	Description = "$PainKillerDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$loca.key.anyone" };
	
	Production = 1;
	BuildTime = 125.00;
	Price = 212;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "MixedHerbs";
			Number = 2;
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
			Names = array {"UsePainKiller"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 2 }
	};
};

"Antidote" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Antidote";
	Description = "$AntidoteDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 75.00;
	Price = 294;
	Tier = 4;
	SocialClass = 1;
	
	Results = array 
	{
		UnlockEffect
		{
			Names = array {"UseAntidote"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Moonflower";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"Barleybread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Barleybread";
	Description = "$BarleybreadDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 187.50;
	Price = 287;
	Tier = 4;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 2 }
	};
};

"WheatBread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$WheatBread";
	Description = "$WheatBreadDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 210.00;
	Price = 369;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WheatFlour";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Moonflower";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 2 }
	};
};

"FruitCake" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FruitCake";
	Description = "$FruitCakeDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 50.00;
	Price = 114;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 1;
		};
		comp1 extends G3ItemComponent
		{
			Name = "BlackberryJam";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 2 }
	};
};

"StrongBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$StrongBeer";
	Description = "$StrongBeerDesc";
	DisplayCategories = array("All", "Food");
	
	Production = 1;
	BuildTime = 125.00;
	Price = 267;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 2 }
	};
};

"WheatBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$WheatBeer";
	Description = "$WheatBeerDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 187.50;
	Price = 323;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Blackberry";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"DrinkWheatBeer"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 2 }
	};
};

"RoastBeef" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoastBeef";
	Description = "$RoastBeefDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 200.00;
	Price = 340;
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Beef";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MixedHerbs";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 2 }
	};
};

"Gold" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Gold";
	Description = "$GoldDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 37.50;
	Price = 54;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GoldOre";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"GoldChain" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$GoldChain";
	Description = "$GoldChainDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 237.50;
	Price = 395;
	Tier = 5;
	SocialClass = 2;
	
	EquipmentType = 4;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"Rapier" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Rapier";
	Description = "$RapierDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 255.00;
	Price = 644;
	Tier = 5;
	SocialClass = 2;
	
	VisualActorName = "rapier/rapier";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 25;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.01;
			Recover = true;
		}
	};
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Grindstone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"ShortSword" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$ShortSword";
	Description = "$ShortSwordDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 295.00;
	Price = 765;
	Tier = 5;
	SocialClass = 2;
	
	VisualActorName = "shortsword/shortsword";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 40;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"CitizenClothes1" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CitizenClothes1";
	Description = "$CitizenClothes1Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 375.00;
	Price = 752;
	Tier = 5;
	SocialClass = 1;
	
	EquippedCharacterDesc = "citizen1";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.07;
			Recover = true;
		},
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"CitizenClothes2" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CitizenClothes2";
	Description = "$CitizenClothes2Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 417.50;
	Price = 766;
	Tier = 5;
	SocialClass = 1;

	EquippedCharacterDesc = "citizen2";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Silver";
			Number = 3;
		};
	};
	
	Results = array
	{
			ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.04;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 3;
			Recover = true;
		},
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"CitizenClothes3" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CitizenClothes3";
	Description = "$CitizenClothes3Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 425.00;
	Price = 741;
	Tier = 5;
	SocialClass = 1;

	EquippedCharacterDesc = "citizen3";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 3;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 8;
			Recover = true;
		},
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"CitizenClothes4" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CitizenClothes4";
	Description = "$CitizenClothes4Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 387.50;
	Price = 784;
	Tier = 5;
	SocialClass = 1;

	EquippedCharacterDesc = "citizen4";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Silver";
			Number = 2;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.08;
			Recover = true;
		},
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"LeatherArmor" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$LeatherArmor";
	Description = "$LeatherArmorDesc";
	DisplayCategories = array("All", "WeaponArmor");
	
	Production = 1;
	BuildTime = 450.00;
	Price = 814;
	Tier = 4;
	SocialClass = 1;
	
	EquippedCharacterDesc = "LeatherArmor";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 60;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 2;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 4;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 2 }
	};
};

"SlateBoard" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$SlateBoard";
	Description = "$SlateBoardDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 125.00;
	Price = 333;
	Tier = 5;
	SocialClass = 2;
	
	EquipmentType = 3; 
	EquipmentChildrenOnly = true;
	UsableBy = array{ "$characters.Age.Child" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Slate";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SandingBlock";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "WoodFrame";
			Number = 1;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ExperienceGainMult";
			Mod = 0.03;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 3 }
	};
};

"SpinningTop" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$SpinningTop";
	Description = "$SpinningTopDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 112.50;
	Price = 393;
	Tier = 5;
	SocialClass = 2;
	
	EquipmentType = 3;
	EquipmentChildrenOnly = true;
	UsableBy = array{ "$characters.Age.Child" };
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SandingBlock";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ExperienceGainMult";
			Mod = 0.02;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 3 }
	};
};

"RubinStaff" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$RubinStaff";
	Description = "$RubinStaffDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 202.50;
	Price = 467;
	Tier = 5;
	SocialClass = 2;
	
	VisualActorName = "rubinstaff/rubinstaff";
	
	EquippedIdleAnimation = "idle_walkstick1";
	EquippedWalkAnimation = "walk_walkstick";
	EquippedRunAnimation = "run_walkstick";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.07;
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
			Name = "Gemstone";
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

"Cupboard" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Cupboard";
	Description = "$CupboardDesc";
	DisplayCategories = array("All", "Trinkets");

	Production = 1;
	BuildTime = 187.50;
	Price = 585;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WoodFrame";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Nails";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 3 }
	};
};

"ToadSlime" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$ToadSlime";
	Description = "$ToadSlimeDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Production = 1;
	BuildTime = 232.50;
	Price = 382;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Frogeye";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SpiderLeg";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyToadSlime"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"BoneTalisman" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$BoneTalisman";
	Description = "$BoneTalismanDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 315.00;
	Price = 538;
	Tier = 5;
	SocialClass = 2;
	
	EquipmentType = 4; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Health";
			Mod = -5;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bone";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"PoisonDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$PoisonDagger";
	Description = "$PoisonDaggerDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 450.00;
	Price = 812;
	Tier = 5;
	SocialClass = 2;
	
	VisualActorName = "poisondagger/poisondagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 45;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WeaponPoison";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"FlowerOfDiscord" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$FlowerOfDiscord";
	Description = "$FlowerOfDiscordDesc";
	DisplayCategories = array("All", "BlackMarket");
	UsableBy = array{ "$guiLeader" };

	Production = 1;
	BuildTime = 250.00;
	Price = 440;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SpiderLeg";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseFlowerOfDiscord"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"PowderOfHygeia" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$PowderOfHygeia";
	Description = "$PowderOfHygeiaDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 325.00;
	Price = 567;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Jasmin";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ClayVase";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyPowderOfHygeia"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"ParalysisPoison" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$ParalysisPoison";
	Description = "$ParalysisPoisonDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Production = 1;
	BuildTime = 275.00;
	Price = 470;
	Tier = 5;
	SocialClass = 2;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyParalysisPoison"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SpiderLeg";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"AboutTalents2" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$AboutTalents2";
	Description = "$AboutTalents2Desc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 350.00;
	Price = 816;
	Tier = 5;
	SocialClass = 2;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseAboutTalents2"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
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

"WonderCure" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$WonderCure";
	Description = "$WonderCureDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$loca.key.anyone" };
	
	Production = 1;
	BuildTime = 200.00;
	Price = 622;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Antidote";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseWonderCure"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 3 }
	};
};

"Cake" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Cake";
	Description = "$CakeDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 125.00;
	Price = 312;
	Tier = 5;
	SocialClass = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Candy";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatCake","GiveCake"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 3 }
	};
};

"CreamPie" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$CreamPie";
	Description = "$CreamPieDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 105.00;
	Price = 455;
	Tier = 5;
	SocialClass = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WheatFlour";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Candy";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BlackberryJam";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatCreamPie","GiveCreamPie"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Bakery", 3 }
	};
};

"BoozyBreathBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BoozyBreathBeer";
	Description = "$BoozyBreathBeerDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 200.00;
	Price = 347;
	Tier = 5;
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
			Name = "Barley";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseBoozyBreathBeer"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 3 }
	};
};

"DrunkardBrewBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$DrunkardBrewBeer";
	Description = "$DrunkardBrewBeerDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 125.00;
	Price = 364;
	Tier = 5;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseDrunkardBrewBeer"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 3 }
	};
};

"Pistol" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$HandGun";
	Description = "$HandGunDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 750.00;
	Price = 1638;
	Tier = 6;
	SocialClass = 2;
	
	EquipmentType = 5;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	VisualActorName = "pistol/pistol";
	SpecialAnimationName = "shoot_pistol";
	EquipmentAnimation = "shoot";
	
	Range = 500.0;
	
	Results = array
	{
		ModifierEffect
		{
			Tags = array{"FirstStrike"};
			ActorValue = "AttackPower";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 10;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "WoodFrame";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"Longsword" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Longsword";
	Description = "$LongswordDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 875.00;
	Price = 2012;
	Tier = 6;
	SocialClass = 2;
	
	VisualActorName = "longsword/longsword";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 65;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 15;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"Mace" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Mace";
	Description = "$MaceDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 850.00;
	Price = 1815;
	Tier = 6;
	SocialClass = 2;
	
	VisualActorName = "mace/mace";

	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 65;
			Recover = true;
		}
	};
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 10;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"Platemail" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Platemail";
	Description = "$PlatemailDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 1000.00;
	Price = 2469;
	Tier = 6;
	SocialClass = 2;
	
	EquippedCharacterDesc = "Platemail";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	IsArmor = true;
	
	EquippedWalkAnimation = "walk_armor";
	EquippedRunAnimation = "run_armor";
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 250;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 5;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 15;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 3 }
	};
};

"Diamond" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Diamond";
	Description = "$DiamondDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 700.00;
	Price = 1571;
	Tier = 6;
	SocialClass = 2;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.03;
			Recover = true;
		}
	};
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PreciousStone";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Grindstone";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 3 }
	};
};

"LuckyStone" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$LuckyStone";
	Description = "$LuckyStoneDesc";
	DisplayCategories = array("All", "Luxury");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 575.00;
	Price = 2638;
	Tier = 6;
	SocialClass = 2;
	
	EquipmentType = 3; 
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Diamond";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 3;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Perception";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Luck";
			Mod = 0.25;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 3 }
	};
};

"StoneSoldier" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$StoneSoldier";
	Description = "$StoneSoldierDesc";
	DisplayCategories = array("All", "Luxury");
	
	Production = 1;
	BuildTime = 850.00;
	Price = 1762;
	Tier = 5;
	SocialClass = 2;
	
	EquipmentType = 3;   
	EquipmentChildrenOnly = true;
	UsableBy = array{ "$characters.Age.Child" };
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 3;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ExperienceGainMult";
			Mod = 0.04;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 3 }
	};

};

"NobleClothes1" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$NobleClothes1";
	Description = "$NobleClothes1Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 875.00;
	Price = 2036;
	Tier = 6;
	SocialClass = 2;
	
	EquippedCharacterDesc = "noble1";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.03;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 10;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"NobleClothes2" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$NobleClothes2";
	Description = "$NobleClothes2Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 900.00;
	Price = 1814;
	Tier = 6;
	SocialClass = 2;
	
	EquippedCharacterDesc = "noble2";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 3;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"NobleClothes3" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$NobleClothes3";
	Description = "$NobleClothes3Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 750.00;
	Price = 2088;
	Tier = 6;
	SocialClass = 2;
	
	EquippedCharacterDesc = "noble3";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 4;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 8;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 4;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"NobleClothes4" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$NobleClothes4";
	Description = "$NobleClothes4Desc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 862.50;
	Price = 1860;
	Tier = 6;
	SocialClass = 2;
	
	EquippedCharacterDesc = "noble4";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ExperienceGainMult";
			Mod = 0.05;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.04;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 7;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"MoneyBag" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$MoneyBag";
	Description = "$MoneyBagDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 625.00;
	Price = 1292;
	Tier = 5;
	SocialClass = 2;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.02;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

"Crossbow" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Crossbow";
	Description = "$CrossbowDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 875.00;
	Price = 1615;
	Tier = 6;
	SocialClass = 2;

	EquipmentType = 5;
	VisualActorName = "crossbow/crossbow";
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	SpecialAnimationName = "shoot_crossbow";
	EquipmentAnimation = "shoot";
	
	Range = 500.0;

	Results = array
	{
		ModifierEffect
		{
			Tags = array{"FirstStrike"};
			ActorValue = "AttackPower";
			Mod = 2;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WoodFrame";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 3 }
	};
};

"CartBig" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$CartBig";
	Description = "$CartBigDesc";
	DisplayCategories = array("All", "Transportation");
	
	Production = 1;
	BuildTime = 1000.00;
	Price = 2957;
	Tier = 6;
	SocialClass = 2;
	
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	VisualActorName = "cartbig/cartbig";
	VisibleInInteriors = false;
	VisibleOnExteriors = false;
	EquipmentType = 6;
	AIRequiredEquipSocialLevel = 5;
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Horse";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Cart";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 4;
		};
	};
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "StorageSlots";
			Mod = 2; 
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "!IsInInterior";
			ActorValue = "MovementSpeedMult";
			Mod = 0.05;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 3 }
	};
};

"BeltOfMetaphysics" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$BeltOfMetaphysic";
	Description = "$BeltOfMetaphysicDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 775.00;
	Price = 1464;
	Tier = 6;
	SocialClass = 2;
	
	EquipmentType = 3; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Strength";
			Mod = 2;
			Recover = true;
		}
	};
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"Nightcap" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Nightcap";
	Description = "$NightcapDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 875.00;
	Price = 2587;
	Tier = 6;
	SocialClass = 2;
	
	EquipmentType = 3; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"StinkBomb" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$StinkBomb";
	Description = "$StinkBombDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Production = 1;
	BuildTime = 862.50;
	Price = 1634;
	Tier = 6;
	SocialClass = 2;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Frogeye";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Bomb";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ThrowStinkBomb"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"CamouflageCloak" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$CamouflageCloak";
	Description = "$CamouflageCloakDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 900.00;
	Price = 2043;
	Tier = 6;
	SocialClass = 2;
	
	EquippedCharacterDesc = "CamouflageCloak";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 15;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 6;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 3;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 8;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"DartagnansFragrance" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$DartagnansFragrance";
	Description = "$DartagnansFragranceDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen" };
	
	Production = 1;
	BuildTime = 750.00;
	Price = 1293;
	Tier = 6;
	SocialClass = 2;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseDartagnansFragrance"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Lavender";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"DrFaustusElixir" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$DrFaustusElixir";
	Description = "$DrFaustusElixirDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 875.00;
	Price = 1589;
	Tier = 6;
	SocialClass = 2;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseDrFaustusElixir"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "HerbTea";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"BlackWidowPoison" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$BlackWidowPoison";
	Description = "$BlackWidowPoisonDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Production = 1;
	BuildTime = 925.00;
	Price = 1380;
	Tier = 6;
	SocialClass = 2;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyBlackWidowPoison"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SpiderLeg";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"Almanac" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Almanac";
	Description = "$AlmanacDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 900.00;
	Price = 2713;
	Tier = 6;
	SocialClass = 2;

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseAlmanac"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "AboutTalents1";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "AboutTalents2";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 3 }
	};
};

"PlagueSuit" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$PlagueSuit";
	Description = "$PlagueSuitDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 900.00;
	Price = 2059;
	Tier = 6;
	SocialClass = 2;
	
	EquippedCharacterDesc = "PlagueSuit";
	EquipmentType = 1; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 20;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 17;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "MedicineMastery";
			Mod = 6;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = -5;
			Recover = true;
		},
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WonderCure";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 3 }
	};
};

"GameMeat" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$GameMeat";
	Description = "$GameMeatDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 32.50;
	Price = 45;
	Tier = 3;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Deer";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"RoastVenison" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoastVenison";
	Description = "$RoastVenisonDesc";
	DisplayCategories = array("All", "Food");

	Production = 1;
	BuildTime = 100.00;
	Price = 190;
	Tier = 3;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GameMeat";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

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


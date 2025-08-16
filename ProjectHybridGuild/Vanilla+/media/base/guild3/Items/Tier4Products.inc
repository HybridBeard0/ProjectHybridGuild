//-------------WINDMILL---------------
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

//-----------FARM--------------
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
		
//--------------- BAKERY ------------
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

//------------ INN --------------
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

"Egg" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Egg";
	Description = "$EggDesc";
	DisplayCategories = array("All", "Food");
	UsableBy = array{ "$qs.charactertype.0" };
	
	Production = 3;
	Price = 9;
	BuildTime = 23;
	Tier = 2;
	
	SoldAtMarket = true;
	BoughtByMarket = true;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "EggBasket";
			Number = 1;
		}
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatEgg"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 1 }
	};
};

//------- TAILOR ----------
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
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
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
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 2;
			Recover = true;
		},
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
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "MedicineMastery";
			Mod = 2;
			Recover = true;
		},
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
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Strength";
			Mod = 1;
			Recover = true;
		},
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
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		},
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

"LeatherArmor" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$LeatherArmor";
	Description = "$LeatherArmorDesc";
	DisplayCategories = array("All", "WeaponArmor");
	
	Production = 1;
	BuildTime = 450.00;
	Price = 514;
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
			Mod = 50;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
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
			Name = "Wool";
			Number = 2;
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

//------------- STONEMASON --------------
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

//---------------BLACKSMITH------------
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
			ActorValue = "Intimidation";
			Mod = 2;
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
	Price = 920;
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
			Mod = 120;
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
			ActorValue = "Intimidation";
			Mod = 3;
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
		RequiredBuilding = array { "Smithy", 3 }
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

//---------- CARPENTER ---------
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

//---------------- ALCHEMIST ----------------
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
	Tier = 5;
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
		RequiredBuilding = array { "AlchemistShop", 3 }
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

//------------ APOTHECARY -----------------
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
		},
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

//--------- SCHOLAR ------------
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

//--------- MEDICUS -------------
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
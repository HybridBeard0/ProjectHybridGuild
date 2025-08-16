//------BAKERY---------
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

//-------------INN------------
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

"FriedChicken" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FriedChicken";
	Description = "$FriedChickenDesc";
	DisplayCategories = array("All", "Food");
	UsableBy = array{ "$qs.charactertype.0" };
	
	Production = 1;
	Price = 80;
	BuildTime = 60;
	Tier = 3;
	
	SoldAtMarket = true;
	BoughtByMarket = true;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Chicken";
			Number = 1;
		}
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"EatFriedChicken"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 2 }
	};
};

//----------BLACKSMITH-------
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
	Price = 944;
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
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 40;
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
	Price = 665;
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
			Mod = 35;
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
		RequiredBuilding = array { "Smithy", 2 }
	};
};

//---------- TAILOR -------------
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
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.06;
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
			Mod = 3;
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
			Mod = 6;
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
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ExperienceGainMult";
			Mod = 0.04;
			Recover = true;
		},
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 3 }
	};
};

//-----------STONEMASON -------------
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

//-------------CARPENTER ---------------
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

//----------ALCHEMIST--------------------
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
			ActorValue = "Damage";
			Mod = 35;
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

"PotGrenade" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$PotGrenade";
	Description = "$PotGrenadeDesc";
	DisplayCategories = array("All", "BlackMarket");

	Tier = 1;
	SocialClass = 1;
	BuildTime = 25;
	Price = 612;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
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
			Names = array {"ThrowPotGrenade"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

//-----------APOTHECARY----------
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

//------------SCHOLAR----------
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

//----------------HOSPITAL------------
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
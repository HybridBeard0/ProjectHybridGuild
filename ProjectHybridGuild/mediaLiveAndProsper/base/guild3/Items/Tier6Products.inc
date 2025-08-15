//---------BAKERY-----------
"Cake" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Cake";
	Description = "$CakeDesc";
	DisplayCategories = array("All", "Food");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 125;
	Production = 1;

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
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 105;
	Production = 1;

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

//------------INN----------
"BoozyBreathBeer" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BoozyBreathBeer";
	Description = "$BoozyBreathBeerDesc";
	DisplayCategories = array("All", "Food");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 200;
	Production = 1;

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
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 125;
	Production = 1;
	
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

//---------BLACKSMITH-------------
"Pistol" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$HandGun";
	Description = "$HandGunDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 750;
	Production = 1;
	
	EquipmentType = 5;//hand
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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 875;
	Production = 1;
	
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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 850;
	Production = 1;
	
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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 1000;
	Production = 1;
	
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

//----------STONEMASON----------
"Diamond" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Diamond";
	Description = "$DiamondDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 700;
	Production = 1;
	
	EquipmentType = 3;//special
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
	SubType = 5;

	DisplayName = "$LuckyStone";
	Description = "$LuckyStoneDesc";
	UsableBy = array{ "$loca.key.anyone" };
	DisplayCategories = array("All", "Trinkets");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 575;
	Production = 1;
	
	EquipmentType = 3; //special item
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
	DisplayCategories = array("All", "Trinkets");
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 850;
	Production = 1;
	
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

//-----------TAILOR---------------
"NobleClothes1" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$NobleClothes1";
	Description = "$NobleClothes1Desc";
	DisplayCategories = array("All", "Clothing");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 875;
	Production = 1;
	
	EquippedCharacterDesc = "noble1";
	EquipmentType = 1;//Body
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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 900;
	Production = 1;
	
	EquippedCharacterDesc = "noble2";
	EquipmentType = 1;//Body
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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 750;
	Production = 1;
	
	EquippedCharacterDesc = "noble3";
	EquipmentType = 1;//Boby
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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 862.5;
	Production = 1;
	
	EquippedCharacterDesc = "noble4";
	EquipmentType = 1;//Body
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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 625;
	Production = 1;
	
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

//------CARPENTER----------
"Crossbow" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Crossbow";
	Description = "$CrossbowDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 875;
	Production = 1;

	EquipmentType = 5;//hand
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
	
	BuildTime = 1000;
	Production = 1;
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

//----------ALCHEMIST----------
"BeltOfMetaphysics" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$BeltOfMetaphysic";
	Description = "$BeltOfMetaphysicDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 775;
	Production = 1;
	
	EquipmentType = 3; //Special
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

"StinkBomb" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$StinkBomb";
	Description = "$StinkBombDesc";
	DisplayCategories = array("All", "WeaponArmor");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 862.5;
	Production = 1;
	
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

//-----------------APOTHECARY-------------
"DartagnansFragrance" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$DartagnansFragrance";
	Description = "$DartagnansFragranceDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers", "$gui.item.UsableByHenchmen" };
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 750;
	Production = 1;
	
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
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 875;
	Production = 1;
	
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
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	BuildTime = 925;
	Production = 1;
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
		
//------------SCHOLAR------------
"Almanac" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Almanac";
	Description = "$AlmanacDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 6;
	SocialClass = 2;
	BuildTime = 900;
	Production = 1;

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

//------------MEDICUS-----------
"PlagueSuit" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$PlagueSuit";
	Description = "$PlagueSuitDesc";
	DisplayCategories = array("All", "Clothing");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 900;
	Production = 1;
	
	EquippedCharacterDesc = "PlagueSuit";
	EquipmentType = 1; //Body
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

// Butcher
"GameMeat" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$GameMeat";
	Description = "$GameMeatDesc";
	DisplayCategories = array("All", "Food");

	Tier = 6;
	SocialClass = 2;
	BuildTime = 33;
	Production = 2;

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

	Tier = 6;
	SocialClass = 2;
	BuildTime = 100;
	Production = 1;

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

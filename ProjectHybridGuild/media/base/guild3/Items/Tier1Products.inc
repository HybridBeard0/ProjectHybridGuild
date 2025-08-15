//------- FARM ------
"Barley" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Barley";
	Description = "$BarleyDesc";
	DisplayCategories = array("All", "Food");

	Production = 2;
	BuildTime = 7.5;

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

//--------- ARTISAN HUT -----------
"Iron" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Iron";
	Description = "$IronDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 7.5;
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
	BuildTime = 13;
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

	Tier = 1;
	SocialClass = 0;
	BuildTime = 50;
	Production = 1;
	
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
		},
		UnlockEffect
		{
			Names = array {"HandOverDagger"};
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

//------- TINKER --------
"PinewoodPlank" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$PinewoodPlank";
	Description = "$PinewoodPlankDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 6.25;
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
	BuildTime = 10;
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
	BuildTime = 35;
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

//------- MASONERY --------
"ClayVase" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$ClayVase";
	Description = "$ClayVaseDesc";
	DisplayCategories = array("All", "Trinkets");

	BuildTime = 18;
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

	Tier = 1;
	SocialClass = 0;
	BuildTime = 14;
	Production = 2;
	
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

	Tier = 1;
	SocialClass = 0;
	BuildTime = 35; // before: 22
	Production = 1;
	
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

//------- HERB HUT --------
"MixedHerbs" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$MixedHerbs";
	Description = "$MixedHerbsDesc";
	DisplayCategories = array("All", "Food");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 12.5;
	Production = 1;
	
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

	Tier = 1;
	SocialClass = 0;
	BuildTime = 40;
	Production = 1;
	
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
	SubType = 2;

	DisplayName = "$HerbTea";
	Description = "$HerbTeaDesc";
	UsableBy = array{ "$loca.key.anyone" };
	DisplayCategories = array("All", "Food");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 37.5;
	Production = 1;

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
			Names = array {"DrinkHerbTea", "HandOverHerbTea"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

//------- GRAVEDIGGER --------
"BoneDust" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BoneDust";
	Description = "$BoneDustDesc";
	DisplayCategories = array("All", "Components");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 20.0;
	Production = 2;
	
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

	Tier = 1;
	SocialClass = 0;
	BuildTime = 12.5;
	Production = 1;
	
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

	Tier = 1;
	SocialClass = 0;
	BuildTime = 45.25;
	Production = 1;
	
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
		},
		UnlockEffect
		{
			Names = array {"HandOverBoneBracelet"};
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

//------- FISHER --------
"FriedTrout" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FriedTrout";
	Description = "$FriedTroutDesc";
	DisplayCategories = array("All", "Food");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 8;
	Production = 1;
	
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

	Results = array
	{
		UnlockEffect
		{
			Names = array {"HandOverFriedTrout"};
		}
	};
};

"SmokedPerch" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$SmokedPerch";
	Description = "$SmokedPerchDesc";
	DisplayCategories = array("All", "Food");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 15.0;
	Production = 1;
	
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

	Results = array
	{
		UnlockEffect
		{
			Names = array {"HandOverSmokedPerch"};
		}
	};
};


//------- ORCHARDIST --------
"Juice" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Juice";
	Description = "$JuiceDesc";
	DisplayCategories = array("All", "Food");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 8;
	Production = 1;

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
			Names = array {"DrinkJuice", "HandOverJuice"};
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
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	DisplayCategories = array("All", "Food");

	Tier = 2;
	SocialClass = 0;
	BuildTime = 10;
	Production = 1;
	
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
			Names = array {"DrinkCider", "HandOverCider"};
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

	Tier = 1;
	SocialClass = 0;
	BuildTime = 37.5;
	Production = 1;
	
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

//------- BARBER --------
"JasmineOil" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$JasmineOil";
	Description = "$JasmineOilDesc";

	DisplayCategories = array("All", "Components");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 8.5;
	Production = 1;

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
	SubType = 6;

	DisplayName = "$MakeUp";
	Description = "$MakeUpDesc";

	DisplayCategories = array("All", "Luxury");

	BuildTime = 17.5;
	Production = 1;
	Tier = 1;
	SocialClass = 1;

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


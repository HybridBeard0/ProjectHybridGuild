//------- ORCHARDIST --------
"BerryJuice" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BerryJuice.iron.name";
	Description = "$BerryJuice.iron.desc";
	DisplayCategories = array("All", "Food");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 11;
	Production = 1;

	IconName = "BerryJuice";

	UsableBy = array{ "$qs.charactertype.0" };
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Berry";
			Number = 1;
		};
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
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

"Pipe" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Pipe.iron.name";
	Description = "$Pipe.iron.description";
	DisplayCategories = array("All", "Components");
	IconName = "Pipe";

	Production = 1;
	BuildTime = 8.00;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"Bucket" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Bucket.iron.name";
	Description = "$Bucket.iron.description";
	DisplayCategories = array("All", "Components");
	IconName = "Bucket";

	Production = 1;
	BuildTime = 37.00;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"ImprovedMillerClothes" = G3Item
{
	Type = 3;
	
	DisplayName = "$ImprovedMillerClothes.iron.name";
	Description = "$ImprovedMillerClothes.iron.name";
	DisplayCategories = array("All");

	IconName = "ImprovedMillerClothes";

	EquippedCharacterDesc = "commoner2";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	SoldAtMarket = false;
	BoughtByMarket = true;

	Production = 1;
	BuildTime = 74.0;

	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Hemp";
			Number = 7;
		};
	};

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Dexterity";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = -1;
			Recover = true;
		},
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Miller", 1 }
	};
};

"ImprovedMillerClothesHat" = G3Item
{
	Type = 3;
	
	DisplayName = "$ImprovedMillerClothesHat.iron.name";
	Description = "$ImprovedMillerClothesHat.iron.desc";
	DisplayCategories = array("All");

	IconName = "ImprovedMillerClothesHat";

	EquipmentType = 4;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	SoldAtMarket = false;
	BoughtByMarket = true;

	Tier = 1;
	SocialClass = 0;

	Production = 1;
	BuildTime = 22.0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Hemp";
			Number = 2;
		};
	};

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Dexterity";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = -1;
			Recover = true;
		},
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "Miller", 1 }
	};
};

"Hemp" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Hemp.iron.name";
	Description = "$Hemp.iron.desc";
	DisplayCategories = array("All", "Food");

	IconName = "Hemp";

	Production = 2;
	BuildTime = 10.0;

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

"Ashes" = G3Item
{
	Type = 1;
	SubType = 1;

	DisplayName = "$Ashes.iron.name";
	Description = "$Ashes.iron.desc";
	DisplayCategories = array("All", "RawMaterial");

	IconName = "Ashes";

	Production = 10;
	BuildTime = 70.0;

	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bone";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Torch";
			Number = 1;
		};
	};
			
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};
};

"Olive" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Olive.iron.name";
	Description = "$Olive.iron.desc";
	DisplayCategories = array("All", "Food");

	IconName = "Olive";

	Production = 1;
	BuildTime = 7.0;

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

"Tomato" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Tomato.iron.name";
	Description = "$Tomato.iron.desc";
	DisplayCategories = array("All", "Food");

	IconName = "Tomato";

	Production = 3;
	BuildTime = 15.0;

	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 3;
		};
	};
			
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};
};

"ClayBowl" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$ClayBowl.iron.name";
	Description = "$ClayBowl.iron.desc";
	DisplayCategories = array("All", "Trinkets");

	IconName = "ClayBowl";

	BuildTime = 12;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Clay";
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
		RequiredBuilding = array { "Masonery", 1 }
	};
};

"ShellNecklace" = G3Item
{
	Type = 3;
	
	DisplayName = "$ShellNecklace.iron.name";
	Description = "$ShellNecklace.iron.desc";
	DisplayCategories = array("All");

	IconName = "ShellNecklace";

	EquipmentType = 4;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	SoldAtMarket = false;
	BoughtByMarket = true;

	Tier = 1;
	SocialClass = 0;

	Production = 1;
	BuildTime = 19.0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Shell";
			Number = 5;
		};
	};

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Dexterity";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = -1;
			Recover = true;
		},
	};

	RequiredBuildings = array
	{
		RequiredBuilding = array { "FishingHut", 1 }
	};
};

"Sickle" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Sickle.iron.name";
	Description = "$Sickle.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 25;
	Production = 1;

	IconName = "Sickle";
	
	VisualActorName = "dagger/dagger";

	EquipmentType = 2;
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
			ActorValue = "Damage";
			Mod = -10;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "hasTag.herbIron";
			ActorValue = "Productivity";
			Mod = 0.1;
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

"Scythe" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Scythe.iron.name";
	Description = "$Scythe.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 27.5;
	Production = 1;

	IconName = "Scythe";
	
	VisualActorName = "dagger/dagger";

	EquipmentType = 2;
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
			ActorValue = "Damage";
			Mod = 15;
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
			Filter = "hasTag.Farmer";
			ActorValue = "Productivity";
			Mod = 0.1;
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
			Name = "PinewoodPlank";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

"ThrowingStones" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$ThrowingStones.iron.name";
	Description = "$ThrowingStones.iron.desc";
	DisplayCategories = array("All", "Trinkets");

	IconName = "ThrowingStones";

	BuildTime = 15;
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

	Results = array
	{
		UnlockEffect
		{
			Names = array {"AdultThrowStones"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};


"Porcelain" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Porcelain.iron.name";
	Description = "$Porcelain.iron.desc";
	DisplayCategories = array("All", "Trinkets");

	IconName = "Porcelain";

	BuildTime = 15;
	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Clay";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Sand";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Masonery", 1 }
	};
};
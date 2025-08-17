"RomanHelmet" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$RomanHelmet.iron.name";
	Description = "$RomanHelmet.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	IconName = "RomanHelmet";

	Tier = 2;
	SocialClass = 1;
	BuildTime = 90;
	Production = 1;
	
	EquipmentType = 4; //jewellry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 5;
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
			ActorValue = "DefensePower";
			Mod = -1;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"BronceFlail" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$BronceFlail.iron.name";
	Description = "$BronceFlail.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 1;
	SocialClass = 0;
	BuildTime = 50;
	Production = 1;

	IconName = "BronceFlail";
	
	VisualActorName = "dagger/dagger";

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
			Mod = 10;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Copper";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "CrudeWeaponHilt";
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
		RequiredBuilding = array { "Tinker", 1 }
	};
};

"BucketOfFruits" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BucketOfFruits.iron.name";
	Description = "$BucketOfFruits.iron.description";
	DisplayCategories = array( "All", "Food");
	IconName = "BucketOfFruits";

	Production = 1;
	BuildTime = 37.00;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bucket";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Berry";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fruit";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"DonateBucketOfFruits"};
		}
	};
};

"FlowerPot" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$FlowerPot.iron.name";
	Description = "$FlowerPot.iron.desc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "Flowerpot";

	Production = 1;
	BuildTime = 42.00;
	Tier = 1;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cauldron";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Jasmin";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "StoneLily";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Orchardist", 1 }
	};

	Results = array
	{
		UnlockEffect
			{
				Names = array {"GiveFlowers"};
			}
	};
};

"GrindedBlackPepper" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$GrindedBlackPepper.iron.name";
	Description = "$GrindedBlackPepper.iron.description";
	DisplayCategories = array("All", "Food");
	IconName = "GrindedBlackPepper";

	Production = 1;
	BuildTime = 30.00;
	Tier = 1;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BlackPepperPlant";
			Number = 10;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"SackOfFlours" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$SackOfFlours.iron.name";
	Description = "$SackOfFlours.iron.desc";
	DisplayCategories = array("All", "Food");
	IconName = "SackOfFlours";

	Production = 1;
	BuildTime = 200.00;
	Tier = 1;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WheatFlour";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Miller", 1 }
	};
};

"Tombstone" = G3Item
{
	Type = 2;
	SubType = 2;

	DisplayName = "$Tombstone.iron.name";
	Description = "$Tombstone.iron.desc";
	DisplayCategories = array("All", "Food");

	IconName = "Tombstone";

	Production = 2;
	BuildTime = 30.0;

	Tier = 1;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 3;
		};
	};
			
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};
};

"BoneShield" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$BoneShield.iron.name";
	Description = "$BoneShield.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");
	
	IconName = "BoneShield";

	Tier = 2;
	SocialClass = 0;

	BuildTime = 60;
	Production = 1;
	
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
			Name = "BoneGlue";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Bone";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Gravedigger", 1 }
	};
};

"MassageOil" = G3Item
{
	Type = 1;
	SubType = 6;
	DisplayCategories = array("All", "Luxury");

	DisplayName = "$MassageOil.iron.name";
	Description = "$MassageOil.iron.desc";

	IconName = "MassageOil";

	BuildTime = 21.5;
	Production = 5;
	Tier = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Olive";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RoseWater";
			Number = 1;
		};
	};			
		
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Barber", 1 }
	};
};


"BucketOfTomatos" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BucketOfTomatos.iron.name";
	Description = "$BucketOfTomatos.iron.description";
	DisplayCategories = array( "All", "Food");
	IconName = "BucketOfTomatos";

	Production = 1;
	BuildTime = 37.00;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Bucket";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Tomato";
			Number = 10;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 1 }
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"DonateBucketOfTomatos"};
		}
	};
};

"FishSoup" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FishSoup.iron.name";
	Description = "$FishSoup.iron.desc";
	DisplayCategories = array("All", "Food");

	Tier = 2;
	SocialClass = 0;
	BuildTime = 30.0;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Perch";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "ClayBowl";
			Number = 1;
		};
		comp3 extends G3ItemComponent
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

"LivingTrout" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$LivingTrout.iron.name";
	Description = "$LivingTrout.iron.desc";
	DisplayCategories = array("All", "Food");

	Tier = 2;
	SocialClass = 0;
	BuildTime = 60.0;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Worm";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Bucket";
			Number = 1;
		};
		comp3 extends G3ItemComponent
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

"Roses" = G3Item
{
	Type = 3;

	DisplayName = "$Roses.iron.name";
	Description = "$Roses.iron.desc";
	DisplayCategories = array("All");
	UsableBy = array{ "$qs.charactertype.0" };
	
	IconName = "Roses";

	Production = 1;
	BuildTime = 25;
	Tier = 2;
	
	SoldAtMarket = false;
	BoughtByMarket = false;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WildRose";
			Number = 3;
		},
		comp2 extends G3ItemComponent
		{
			Name = "RoseWater";
			Number = 1;
		}
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"GiveFlowers"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Barber", 1 }
	};
};

"AuDeToilette" = G3Item
{
	Type = 3;

	DisplayName = "$AuDeToilette.iron.name";
	Description = "$AuDeToilette.iron.desc";
	DisplayCategories = array("All");
	UsableBy = array{ "$qs.charactertype.0" };
	
	IconName = "AuDeToilette";

	Production = 1;
	BuildTime = 40;
	Tier = 2;
	
	SoldAtMarket = false;
	BoughtByMarket = false;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Worm";
			Number = 3;
		},
		comp2 extends G3ItemComponent
		{
			Name = "Perch";
			Number = 1;
		},
		comp3 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 2;
		},
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyAuDeToilette"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Barber", 1 }
	};
};

"Joint" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Joint.iron.name";
	Description = "$Joint.iron.desc";
	DisplayCategories = array("All", "Food");

	IconName = "Joint";
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 2;
	SocialClass = 0;
	BuildTime = 15.5;
	Production = 1;
	
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
		UnlockEffect
		{
			Names = array {"SmokeJoint", "GiveJoint"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Shaman", 1 }
	};
};

"BlacksmithHammer" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$BlacksmithHammer.iron.name";
	Description = "$BlacksmithHammer.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 2;
	SocialClass = 0;
	BuildTime = 33;
	Production = 1;

	IconName = "BlacksmithHammer";
	
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
			Mod = -2;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "hasTag.Tinker";
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
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
		comp3 extends G3ItemComponent
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

"Poker" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Poker.iron.name";
	Description = "$Poker.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");
	IconName = "Poker";

	Tier = 1;
	SocialClass = 0;
	BuildTime = 30;
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
			Filter = "hasTag.Mason";
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
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "CrudeWeaponHilt";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

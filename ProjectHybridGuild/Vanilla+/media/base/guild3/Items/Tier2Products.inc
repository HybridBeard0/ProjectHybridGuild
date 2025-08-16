//------- FARM ------
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

//------- ARTISAN HUT ------
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

"CraftsmanHammer" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$CraftsmanHammer";
	Description = "$CraftsmanHammerDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Price = 300;
	SoldAtMarket = true;

	VisualActorName = "hammer/hammer";

	Production = 1;
	BuildTime = 125.00;
	Price = 141;
	Tier = 2;
	SocialClass = 0;
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.06;
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
			Name = "Iron";
			Number = 4;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Artisan", 1 }
	};
};

//---------- TINKER ------------
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
	SubType = 4;

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
		RequiredBuilding = array { "Tinker", 1 }
	};
};

//---------- MASONERY ------------
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

//---------- HERB HUT ------------
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

//---------- FISHING HUT ------------
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

//---------- ORCHASDIST ------------
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

//------- BARBER --------
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

//------- GRAVEDIGGER --------
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

//---------- SPECIAL ------------
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
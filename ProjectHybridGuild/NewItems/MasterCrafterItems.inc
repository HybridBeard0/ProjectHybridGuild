// Steel Ingot - Premium crafting material for Royal equipment
"SteelIngot" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$SteelIngot";
	Description = "$SteelIngotDesc";
	DisplayCategories = array("All", "Components");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 125;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalForge", 1 }
	};
};

// Royal Longsword - Enhanced version of regular Longsword
"RoyalLongsword" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$RoyalLongsword";
	Description = "$RoyalLongswordDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1250;
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
			Mod = 7;
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
			Mod = 85;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.03;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverRoyalLongsword"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
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
		RequiredBuilding = array { "RoyalForge", 1 }
	};
};

// Royal Mace - Enhanced version of regular Mace
"RoyalMace" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$RoyalMace";
	Description = "$RoyalMaceDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1200;
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
			Mod = 85;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 2;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverRoyalMace"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalForge", 1 }
	};
};

// Royal Platemail - Enhanced version of regular Platemail
"RoyalPlatemail" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$RoyalPlatemail";
	Description = "$RoyalPlatemailDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1500;
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
			Mod = 350;
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
			Mod = 7;
			Recover = true;
		},
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
			Name = "SteelIngot";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalForge", 1 }
	};
};

// Royal Shield - Enhanced version of regular Shield
"RoyalShield" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$RoyalShield";
	Description = "$RoyalShieldDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 875;
	Production = 1;
	
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
			Mod = 6;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 25;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.02;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverRoyalShield"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalForge", 1 }
	};
};

// Royal Rapier - Enhanced version of regular Rapier
"RoyalRapier" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$RoyalRapier";
	Description = "$RoyalRapierDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1125;
	Production = 1;
	
	VisualActorName = "rapier/rapier";
	
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
			Mod = 45;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.03;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 2;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverRoyalRapier"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "LeatheredWeaponHilt";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Polish";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalForge", 1 }
	};
};

// Royal Crossbow - Enhanced version of regular Crossbow
"RoyalCrossbow" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$RoyalCrossbow";
	Description = "$RoyalCrossbowDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1375;
	Production = 1;

	EquipmentType = 5;//hand
	VisualActorName = "crossbow/crossbow";
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	SpecialAnimationName = "shoot_crossbow";
	EquipmentAnimation = "shoot";
	
	Range = 600.0;

	Results = array
	{
		ModifierEffect
		{
			Tags = array{"FirstStrike"};
			ActorValue = "AttackPower";
			Mod = 3;
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
			Mod = 0.02;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverRoyalCrossbow"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WoodFrame";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalForge", 1 }
	};
};
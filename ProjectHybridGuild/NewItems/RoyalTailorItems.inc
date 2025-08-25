// Royal Tailor Items - Tier 8 Luxury clothing and textiles

// Imperial Silk - Premium textile material
"ImperialSilk" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$ImperialSilk";
	Description = "$ImperialSilkDesc";
	DisplayCategories = array("All", "Components");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 250;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalAtelier", 1 }
	};
};

// Emperor's Robes - Ultimate royal clothing
"EmperorsRobes" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$EmperorsRobes";
	Description = "$EmperorsRobesDesc";
	DisplayCategories = array("All", "Clothing");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1200;
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
			Mod = 8;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.15;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 5;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalAtelier", 1 }
	};
};

// Crown of Authority - Ultimate headwear
"CrownOfAuthority" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$CrownOfAuthority";
	Description = "$CrownOfAuthorityDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1000;
	Production = 1;
	
	EquipmentType = 4;//jewelry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.20;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.15;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 3;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverCrownOfAuthority"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalAtelier", 1 }
	};
};

// Master's Regalia - Ultimate craftsman outfit
"MastersRegalia" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$MastersRegalia";
	Description = "$MastersRegaliaDesc";
	DisplayCategories = array("All", "Clothing");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1500;
	Production = 1;
	
	EquippedCharacterDesc = "noble2";
	EquipmentType = 1;//Body
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.30;
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
			ActorValue = "Intelligence";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 3;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalAtelier", 1 }
	};
};

// Royal Scepter - Symbol of ultimate authority
"RoyalScepter" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$RoyalScepter";
	Description = "$RoyalScepterDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 800;
	Production = 1;
	
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
			Mod = 0.25;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.20;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 3;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverRoyalScepter"};
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
			Name = "RoyalGemstone";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalAtelier", 1 }
	};
};
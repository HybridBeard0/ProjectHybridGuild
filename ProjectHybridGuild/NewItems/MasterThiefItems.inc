// Master Thief Items - Tier 8 Ultimate theft and heist profession

// Bank Heist Plans - Ultimate theft operation
"BankHeistPlans" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$BankHeistPlans";
	Description = "$BankHeistPlansDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1000;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ArchitecturalPlans";
			Number = 1;
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
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ExecuteBankHeist", "HandOverBankHeistPlans"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundVault", 1 }
	};
};

// Master Lockpicks - Ultimate theft tools
"MasterLockpicks" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MasterLockpicks";
	Description = "$MasterLockpicksDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 800;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Thief";
			ActorValue = "Productivity";
			Mod = 0.50;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Dexterity";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "HeistSuccessChance";
			Mod = 0.25;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMasterLockpicks"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundVault", 1 }
	};
};

// Stolen Royal Treasures - Ultimate heist rewards
"StolenRoyalTreasures" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$StolenRoyalTreasures";
	Description = "$StolenRoyalTreasuresDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 50;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BankHeistPlans";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundVault", 1 }
	};
};

// Shadow Cloak - Ultimate stealth equipment
"ShadowCloak" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$ShadowCloak";
	Description = "$ShadowCloakDesc";
	DisplayCategories = array("All", "Clothing");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1400;
	Production = 1;
	
	EquippedCharacterDesc = "CamouflageCloak";
	EquipmentType = 1;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Perception";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "HeistSuccessChance";
			Mod = 0.20;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "MovementSpeedMult";
			Mod = 0.15;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "CamouflageCloak";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundVault", 1 }
	};
};
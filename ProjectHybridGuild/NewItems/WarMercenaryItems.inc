// War Mercenary Items - Tier 8 Military contractor profession

// War Contract - High-risk military engagement
"WarContract" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$WarContract";
	Description = "$WarContractDesc";
	DisplayCategories = array("All", "Transportation");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 120;
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
			Name = "RoyalDecree";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ExecuteWarContract", "HandOverWarContract"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "WarCamp", 1 }
	};
};

// Mercenary Badge - Status symbol and equipment
"MercenaryBadge" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MercenaryBadge";
	Description = "$MercenaryBadgeDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
	Production = 1;
	
	EquipmentType = 4;//jewelry
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
			Mod = 3;
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
			ActorValue = "WarSurvivalChance";
			Mod = 0.15;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMercenaryBadge"};
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
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "WarCamp", 1 }
	};
};

// Battle Plans - Strategic warfare documents
"BattlePlans" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$BattlePlans";
	Description = "$BattlePlansDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 800;
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
			Name = "MasterTome";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseBattlePlans", "HandOverBattlePlans"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "WarCamp", 1 }
	};
};

// Veteran's Armor - Ultimate protection for war
"VeteransArmor" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$VeteransArmor";
	Description = "$VeteransArmorDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 2000;
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
			Mod = 400;
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
			ActorValue = "Intimidation";
			Mod = 8;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "WarSurvivalChance";
			Mod = 0.30;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.08;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "RoyalPlatemail";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
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
		RequiredBuilding = array { "WarCamp", 1 }
	};
};
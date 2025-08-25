// Enhanced Advanced Profession Items - Adding icons to all advanced profession items

// === MASTER ARCHITECT ITEMS WITH ICONS ===
"KnowledgeCrystal" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$KnowledgeCrystal";
	Description = "$KnowledgeCrystalDesc";
	DisplayCategories = array("All", "Components");
	IconName = "KnowledgeCrystal";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 300;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandLibrary", 1 }
	};
};

"PrecisionTools" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$PrecisionTools";
	Description = "$PrecisionToolsDesc";
	DisplayCategories = array("All", "Components");
	IconName = "PrecisionTools";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 400;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Diamond";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandWorkshop", 1 }
	};
};

"RoyalGemstone" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$RoyalGemstone";
	Description = "$RoyalGemstoneDesc";
	DisplayCategories = array("All", "Components");
	IconName = "RoyalGemstone";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 350;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Diamond";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandWorkshop", 1 }
	};
};

"ArchitecturalPlans" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$ArchitecturalPlans";
	Description = "$ArchitecturalPlansDesc";
	DisplayCategories = array("All", "Luxury");
	IconName = "ArchitecturalPlans";
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "MasterTome";
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
			Names = array {"UseArchitecturalPlans", "HandOverArchitecturalPlans"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandWorkshop", 1 }
	};
};

"MastersCompass" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MastersCompass";
	Description = "$MastersCompassDesc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "MastersCompass";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 500;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Stonemason";
			ActorValue = "Productivity";
			Mod = 0.20;
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
			ActorValue = "Intelligence";
			Mod = 2;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMastersCompass"};
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
			Name = "RoyalGemstone";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandWorkshop", 1 }
	};
};

// === GRAND ALCHEMIST ITEMS WITH ICONS ===
"PhilosophersStone" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$PhilosophersStone";
	Description = "$PhilosophersStoneDesc";
	DisplayCategories = array("All", "Components");
	IconName = "PhilosophersStone";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 200;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Gold";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "PrecisionTools";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "PhilosophersLaboratory", 1 }
	};
};

"ElixirOfTransmutation" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$ElixirOfTransmutation";
	Description = "$ElixirOfTransmutationDesc";
	DisplayCategories = array("All", "Tinctures");
	IconName = "ElixirOfTransmutation";
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 450;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 5;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseElixirOfTransmutation", "HandOverElixirOfTransmutation"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "PhilosophersLaboratory", 1 }
	};
};

"RoyalPoison" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$RoyalPoison";
	Description = "$RoyalPoisonDesc";
	DisplayCategories = array("All", "Tinctures");
	IconName = "RoyalPoison";
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 500;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BlackWidowPoison";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SpiderLeg";
			Number = 3;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyRoyalPoison", "HandOverRoyalPoison"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "PhilosophersLaboratory", 1 }
	};
};

"ElixirOfEternalYouth" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$ElixirOfEternalYouth";
	Description = "$ElixirOfEternalYouthDesc";
	DisplayCategories = array("All", "Tinctures");
	IconName = "ElixirOfEternalYouth";
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 750;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WonderCure";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseElixirOfEternalYouth", "HandOverElixirOfEternalYouth"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "PhilosophersLaboratory", 1 }
	};
};

"MastersCrucible" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MastersCrucible";
	Description = "$MastersCrucibleDesc";
	DisplayCategories = array("All", "Trinkets");
	IconName = "MastersCrucible";

	Tier = 8;
	SocialClass = 3;
	BuildTime = 625;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Alchemist";
			ActorValue = "Productivity";
			Mod = 0.25;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intelligence";
			Mod = 3;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverMastersCrucible"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "PhilosophersLaboratory", 1 }
	};
};
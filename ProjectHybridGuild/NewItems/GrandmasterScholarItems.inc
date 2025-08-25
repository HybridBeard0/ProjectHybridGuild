// Grandmaster Scholar Items - Tier 8 Knowledge and documentation

// Master Tome - Advanced knowledge component
"MasterTome" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$MasterTome";
	Description = "$MasterTomeDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 400;
	Production = 1;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "AboutTalents1";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "AboutTalents2";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Almanac";
			Number = 1;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Gemstone";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseMasterTome", "HandOverMasterTome"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandLibrary", 1 }
	};
};

// Royal Decree - Ultimate political document
"RoyalDecree" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$RoyalDecree";
	Description = "$RoyalDecreeDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
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
			Name = "RoyalGemstone";
			Number = 1;
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
			Names = array {"UseRoyalDecree", "HandOverRoyalDecree"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandLibrary", 1 }
	};
};

// Codex of Mastery - Ultimate knowledge compilation
"CodexOfMastery" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$CodexOfMastery";
	Description = "$CodexOfMasteryDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1200;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PhilosophersStone";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseCodexOfMastery", "HandOverCodexOfMastery"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "GrandLibrary", 1 }
	};
};

// Scholar's Lens - Ultimate research tool
"ScholarsLens" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$ScholarsLens";
	Description = "$ScholarsLensDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 750;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Scholar";
			ActorValue = "Productivity";
			Mod = 0.30;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intelligence";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ExperienceGainMult";
			Mod = 0.15;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverScholarsLens"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "KnowledgeCrystal";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
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
		RequiredBuilding = array { "GrandLibrary", 1 }
	};
};

// Philosopher's Quill - Ultimate writing instrument
"PhilosophersQuill" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$PhilosophersQuill";
	Description = "$PhilosophersQuillDesc";
	DisplayCategories = array("All", "Trinkets");

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
			ActorValue = "Intelligence";
			Mod = 3;
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
			ActorValue = "Charisma";
			Mod = 2;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverPhilosophersQuill"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
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
		RequiredBuilding = array { "GrandLibrary", 1 }
	};
};
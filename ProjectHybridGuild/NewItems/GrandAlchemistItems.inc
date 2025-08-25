// Grand Alchemist Items - Tier 8 Alchemy profession

// Philosopher's Stone - Core transmutation component
"PhilosophersStone" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$PhilosophersStone";
	Description = "$PhilosophersStoneDesc";
	DisplayCategories = array("All", "Components");

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

// Elixir of Transmutation - Converts base metals to gold
"ElixirOfTransmutation" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$ElixirOfTransmutation";
	Description = "$ElixirOfTransmutationDesc";
	DisplayCategories = array("All", "Tinctures");
	
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

// Royal Poison - Ultimate assassination tool
"RoyalPoison" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$RoyalPoison";
	Description = "$RoyalPoisonDesc";
	DisplayCategories = array("All", "Tinctures");
	
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

// Elixir of Eternal Youth - Ultimate health enhancement
"ElixirOfEternalYouth" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$ElixirOfEternalYouth";
	Description = "$ElixirOfEternalYouthDesc";
	DisplayCategories = array("All", "Tinctures");
	
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

// Master's Crucible - Enhanced crafting tool
"MastersCrucible" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MastersCrucible";
	Description = "$MastersCrucibleDesc";
	DisplayCategories = array("All", "Trinkets");

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
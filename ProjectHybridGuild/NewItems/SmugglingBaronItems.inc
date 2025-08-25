// Smuggling Baron Items - Tier 8 International contraband profession

// International Trade Route - Long-distance smuggling operation
"InternationalTradeRoute" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$InternationalTradeRoute";
	Description = "$InternationalTradeRouteDesc";
	DisplayCategories = array("All", "Transportation");
	
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
			Name = "CartBig";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "RoyalDecree";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ExecuteInternationalSmuggling", "HandOverInternationalTradeRoute"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundNetwork", 1 }
	};
};

// Exotic Contraband - Ultra-rare illegal goods
"ExoticContraband" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$ExoticContraband";
	Description = "$ExoticContrabandDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 600;
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
			Name = "RoyalPoison";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "ElixirOfEternalYouth";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundNetwork", 1 }
	};
};

// Smuggler's Seal - International credentials
"SmugglersSeaI" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$SmugglersSeaI";
	Description = "$SmugglersSeaIDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 700;
	Production = 1;
	
	EquipmentType = 4;//jewelry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Smuggler";
			ActorValue = "Productivity";
			Mod = 0.35;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 10;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "InterceptionResistance";
			Mod = 0.20;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverSmugglersSeaI"};
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SteelIngot";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "MasterTome";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundNetwork", 1 }
	};
};

// Forbidden Luxuries - Ultimate black market goods
"ForbiddenLuxuries" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$ForbiddenLuxuries";
	Description = "$ForbiddenLuxuriesDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1200;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ExoticContraband";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "ImperialSilk";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "CrownOfAuthority";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "UndergroundNetwork", 1 }
	};
};
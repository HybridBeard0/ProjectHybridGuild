// Master Architect Items - Tier 8 Stone/Precision crafting

// Knowledge Crystal - Base component for advanced crafting
"KnowledgeCrystal" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$KnowledgeCrystal";
	Description = "$KnowledgeCrystalDesc";
	DisplayCategories = array("All", "Components");

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

// Precision Tools - Enhanced crafting implements
"PrecisionTools" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$PrecisionTools";
	Description = "$PrecisionToolsDesc";
	DisplayCategories = array("All", "Components");

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

// Royal Gemstone - Ultimate precious stone
"RoyalGemstone" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$RoyalGemstone";
	Description = "$RoyalGemstoneDesc";
	DisplayCategories = array("All", "Components");

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

// Architectural Plans - Blueprint component
"ArchitecturalPlans" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$ArchitecturalPlans";
	Description = "$ArchitecturalPlansDesc";
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

// Master's Compass - Precision tool equipment
"MastersCompass" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MastersCompass";
	Description = "$MastersCompassDesc";
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
// Royal Bard Items - Tier 8 Court entertainment profession

// Royal Performance - Ultimate entertainment contract
"RoyalPerformance" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$RoyalPerformance";
	Description = "$RoyalPerformanceDesc";
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
			Name = "ImperialSilk";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "RoyalGemstone";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"PerformRoyalShow", "HandOverRoyalPerformance"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalTheatre", 1 }
	};
};

// Royal Instrument - Master musician's tool
"RoyalInstrument" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$RoyalInstrument";
	Description = "$RoyalInstrumentDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1200;
	Production = 1;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			Filter = "hasTag.Minstrel";
			ActorValue = "Productivity";
			Mod = 0.40;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Entertainment";
			Mod = 8;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.10;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverRoyalInstrument"};
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
		RequiredBuilding = array { "RoyalTheatre", 1 }
	};
};

// Court Patron's Favor - Royal endorsement
"CourtPatronsFavor" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$CourtPatronsFavor";
	Description = "$CourtPatronsFavorDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 300;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "RoyalDecree";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "CrownOfAuthority";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseCourtPatronsFavor", "HandOverCourtPatronsFavor"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalTheatre", 1 }
	};
};

// Master's Repertoire - Ultimate performance collection
"MastersRepertoire" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$MastersRepertoire";
	Description = "$MastersRepertoireDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Tier = 8;
	SocialClass = 3;
	BuildTime = 1500;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "CodexOfMastery";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "RoyalInstrument";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "CourtPatronsFavor";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseMastersRepertoire", "HandOverMastersRepertoire"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "RoyalTheatre", 1 }
	};
};
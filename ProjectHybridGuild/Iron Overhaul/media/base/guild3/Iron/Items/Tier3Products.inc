"DuckMeat" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$DuckMeat.iron.name";
	Description = "$DuckMeat.iron.desc";
	DisplayCategories = array("All", "Food");
	IconName = "DuckMeat";

	Tier = 3;
	SocialClass = 1;
	Production = 2;
	BuildTime = 30;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Duck";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "LesserQualitySalt";
			Number = 3;
		};
	};
	
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"LesserQualitySalt" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$LesserQualitySalt.iron.name";
	Description = "$LesserQualitySalt.iron.desc";
	DisplayCategories = array("All", "Food");
	IconName = "LesserQualitySalt";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 45;
	Production = 4;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "LesserQualitySaltStone";
			Number = 1;
		}
	};

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.04;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

"MasonHammer" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$MasonHammer.iron.name";
	Description = "$MasonHammer.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	IconName = "MasonHammer";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 122.5;
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
			ActorValue = "Damage";
			Mod = 15;
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
			Filter = "hasTag.Stonemason";
			ActorValue = "Productivity";
			Mod = 0.1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 1 }
	};
};

"Saw" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$Saw.iron.name";
	Description = "$Saw.iron.desc";
	DisplayCategories = array("All", "WeaponArmor");

	IconName = "Saw";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 122.5;
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
			ActorValue = "Damage";
			Mod = 15;
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
			Filter = "hasTag.Carpenter";
			ActorValue = "Productivity";
			Mod = 0.1;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Iron";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Charcoal";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 1 }
	};
};



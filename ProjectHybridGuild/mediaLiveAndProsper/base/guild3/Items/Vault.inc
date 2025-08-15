
"FineGrindstone" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$FineGrindstone";
	Description = "$GrindstoneDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 3;
	SocialClass = 5;
	BuildTime = 150;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 4;
		};
	};

	EquipmentType = 3;
	EquipmentAdultsOnly = true;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.08;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }		
	};
};

"SuperiorGrindstone" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$SuperiorGrindstone";
	Description = "$GrindstoneDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 4;
	SocialClass = 7;
	BuildTime = 300;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 8;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 8;
		};
	};

	EquipmentType = 3;
	EquipmentAdultsOnly = true;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.16;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 2 }	
	};
};
	
"EquisiteGrindstone" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$EquisiteGrindstone";
	Description = "$GrindstoneDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 3;
	SocialClass = 9;
	BuildTime = 450;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 16;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 16;
		};
	};

	EquipmentType = 3;
	EquipmentAdultsOnly = true;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.32;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 3 }	
	};
};

"MasterworkGrindstone" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MasterworkGrindstone";
	Description = "$GrindstoneDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 6;
	SocialClass = 11;
	BuildTime = 600;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 32;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 32;
		};
	};

	EquipmentType = 3;
	EquipmentAdultsOnly = true;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.48;
			Recover = true;
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 3 }		
	};
};

"FineNightcap" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$FineNightcap";
	Description = "$NightcapDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 4;
	SocialClass = 5;
	BuildTime = 600;
	Production = 1;
	
	EquipmentType = 3; //Special
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = -0.20;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 8;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};
};

"SuperiorNightcap" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$SuperiorNightcap";
	Description = "$NightcapDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 5;
	SocialClass = 7;
	BuildTime = 750;
	Production = 1;
	
	EquipmentType = 5; //Special
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = -0.15;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 8;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 8;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 12;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 2 }
	};
};

"EquisiteNightcap" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$EquisiteNightcap";
	Description = "$NightcapDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 6;
	SocialClass = 9;
	BuildTime = 900;
	Production = 1;
	
	EquipmentType = 3; //Special
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 8;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = -0.10;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 12;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 12;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 16;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"MasterworkNightcap" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$MasterworkNightcap";
	Description = "$NightcapDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 7;
	SocialClass = 11;
	BuildTime = 1200;
	Production = 1;
	
	EquipmentType = 3; //Special
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 12;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = -0.05;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 16;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 16;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 20;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"FineCamouflageCloak" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$FineCamouflageCloak";
	Description = "$CamouflageCloakDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 600;
	Production = 1;
	Tier = 4;
	SocialClass = 5;
	
	EquippedCharacterDesc = "CamouflageCloak";
	EquipmentType = 1; //Body
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
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
			ActorValue = "Resistance";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 2;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 10;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 7;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};
};

"SuperiorCamouflageCloak" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$SuperiorCamouflageCloak";
	Description = "$CamouflageCloakDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 750;
	Production = 1;
	Tier = 5;
	SocialClass = 7;
	
	EquippedCharacterDesc = "CamouflageCloak";
	EquipmentType = 1; //Body
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 15;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 3;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 11;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 4;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 8;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 2 }
	};
};

"EquisiteCamouflageCloak" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$EquisiteCamouflageCloak";
	Description = "$CamouflageCloakDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 900;
	Production = 1;
	Tier = 6;
	SocialClass = 9;
	
	EquippedCharacterDesc = "CamouflageCloak";
	EquipmentType = 1; //Body
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 25;
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
			ActorValue = "Resistance";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 4;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 12;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 9;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"MasterworkCamouflageCloak" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$MasterworkCamouflageCloak";
	Description = "$CamouflageCloakDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 1200;
	Production = 1;
	Tier = 7;
	SocialClass = 11;
	
	EquippedCharacterDesc = "CamouflageCloak";
	EquipmentType = 1; //Body
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 50;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 8;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 5;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 15;
		};
		comp2 extends G3ItemComponent
		{
			Name = "GhostlyFog";
			Number = 6;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 10;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"FineShadowDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$FineShadowDagger";
	Description = "$ShadowDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 3;
	SocialClass = 5;
	BuildTime = 150;
	Production = 1;

	VisualActorName = "shadowdagger/shadowdagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 2;
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
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 3;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 3;
		};
		
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 1 }
	};
};

"SuperiorShadowDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$SuperiorShadowDagger";
	Description = "$ShadowDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 4;
	SocialClass = 7;
	BuildTime = 300;
	Production = 1;

	VisualActorName = "shadowdagger/shadowdagger";
	
	EquipmentType = 2;
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
			ActorValue = "Damage";
			Mod = 20;
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
			ActorValue = "Stealth";
			Mod = 4;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 4;
		};
		
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 4;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"EquisiteShadowDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$EquisiteShadowDagger";
	Description = "$ShadowDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 5;
	SocialClass = 9;
	BuildTime = 450;
	Production = 1;

	VisualActorName = "shadowdagger/shadowdagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 25;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 5;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 5;
		};
		
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"MasterworkShadowDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$MasterworkShadowDagger";
	Description = "$ShadowDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	Tier = 2;
	SocialClass = 11;
	BuildTime = 600;
	Production = 1;

	VisualActorName = "shadowdagger/shadowdagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 30;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Stealth";
			Mod = 6;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 6;
		};
		
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 6;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 3 }
	};
};

"FinePoisonDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$FinePoisonDagger";
	Description = "$PoisonDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 450;
	Production = 1;
	Tier = 4;
	SocialClass = 5;
	
	VisualActorName = "poisondagger/poisondagger";
	
	EquipmentType = 2;
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
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 35;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 1;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WeaponPoison";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};
};

"SuperiorPoisonDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$SuperiorPoisonDagger";
	Description = "$PoisonDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 600;
	Production = 1;
	Tier = 5;
	SocialClass = 7;
	
	VisualActorName = "poisondagger/poisondagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 4;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 40;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 3;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 3;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WeaponPoison";
			Number = 3;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 2 }
	};
};

"EquisitePoisonDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$EquisitePoisonDagger";
	Description = "$PoisonDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 750;
	Production = 1;
	Tier = 6;
	SocialClass = 9;
	
	VisualActorName = "poisondagger/poisondagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 6;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 5;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 45;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 4;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 4;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WeaponPoison";
			Number = 4;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 4;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};

"MasterworkPoisonDagger" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$MasterworkPoisonDagger";
	Description = "$PoisonDaggerDesc";
	DisplayCategories = array("All", "Tiered");

	BuildTime = 900;
	Production = 1;
	Tier = 7;
	SocialClass = 11;
	
	VisualActorName = "poisondagger/poisondagger";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "AttackPower";
			Mod = 7;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 6;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Damage";
			Mod = 50;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 5;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Dagger";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "WeaponPoison";
			Number = 5;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Ectoplasm";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 3 }
	};
};
//----------- BUTCHER -----------
"Beef" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Beef";
	Description = "$BeefDesc";
	DisplayCategories = array("All", "Components");

	Production = 10;
	BuildTime = 145.00;
	Price = 22;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"Pork" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Pork";
	Description = "$PorkDesc";
	DisplayCategories = array("All", "Components");

	Production = 5;
	BuildTime = 125.00;
	Price = 33;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pig";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"Fat" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Fat";
	Description = "$FatDesc";
	DisplayCategories = array("All", "Components");

	Production = 4;
	BuildTime = 30.00;
	Price = 15;
	Tier = 2;
	SocialClass = 0;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pork";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

"Leather" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Leather";
	Description = "$LeatherDesc";
	DisplayCategories = array("All", "Components");

	Production = 5;
	BuildTime = 42.50;
	Price = 25;
	Tier = 2;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cattle";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Butcher", 1 }
	};
};

//------ WINDMILL ---------
"WheatFlour" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$WheatFlour";
	Description = "$WheatFlourDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 25.00;
	Price = 58;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"BarleyFlour" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$BarleyFlour";
	Description = "$BarleyFlourDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 20.00;
	Price = 27;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"FlatBread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$FlatBread";
	Description = "$FlatBreadDesc";
	DisplayCategories = array("All", "Food");

	Production = 2;
	BuildTime = 40.00;
	Price = 30;
	Tier = 1;
	SocialClass = 0;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BarleyFlour";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

//------------ FARM ----------
"Sheep" = G3Item
{
	Type = 1;
	SubType = 10;

	DisplayName = "$Sheep";
	Description = "$SheepDesc";
	DisplayCategories = array("All", "Livestock");

	Production = 1;
	BuildTime = 125.00;
	Price = 139;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};

"Wool" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Wool";
	Description = "$WoolDesc";
	DisplayCategories = array("All", "Components");

	Production = 10;
	BuildTime = 10.00;
	Price = 15;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Sheep";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};

"Tobacco" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Tobacco";
	Description = "$TobaccoDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 100.0;
	Price = 90;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 5;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};

//------- TAILOR ---------
"Blanket" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Blanket";
	Description = "$BlanketDesc";
	DisplayCategories = array("All", "Luxury");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 127.50;
	Price = 173;
	Tier = 3;
	SocialClass = 1;
   
	EquipmentType = 3;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 1 }
	};
};

"Cloth" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Cloth";
	Description = "$ClothDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 7.50;
	Price = 31;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BoneNeedle";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 1 }
	};
};

"Backpack" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$Backpack";
	Description = "$BackpackDesc";
	DisplayCategories = array("All", "Transportation");
	
	Production = 1;
	BuildTime = 103.75;
	Price = 207;
	Tier = 3;
	SocialClass = 0;

	VisualActorName = "backpack/backpack";
	EquipmentType = 6;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "StorageSlots";
			Mod = 1;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "TailorShop", 1 }
	};
};

//------ BLACKSMITH ----------
"Silver" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Silver";
	Description = "$SilverDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 16.25;
	Price = 23;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "SilverOre";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Smithy", 1 }
	};
};

"IronBracelet" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$IronBrachelet";
	Description = "$IronBracheletDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 112.50;
	Price = 184;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 5;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 2;
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
			Name = "Leather";
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

"SilverChain" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$SilverChain";
	Description = "$SilverChainDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 125.00;
	Price = 193;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 4; 
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.04;
			Recover = true;
		}
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Silver";
			Number = 2;
		};
		comp2 extends G3ItemComponent
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

//--------- STONE MASON-----------
"SandingBlock" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$SandingBlock";
	Description = "$SandingBlockDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 27.50;
	Price = 54;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

"Grindstone" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Grindstone";
	Description = "$GrindstoneDesc";
	DisplayCategories = array("All", "Luxury");

	Production = 1;
	BuildTime = 45.00;
	Price = 79;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
	};

	EquipmentType = 3;
	EquipmentAdultsOnly = true;

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

"MuralPainting" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$MuralPainting";
	Description = "$MuralPaintingDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Production = 1;
	BuildTime = 80.00;
	Price = 212;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "GraniteBlock";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyMuralPainting"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

//-------- CARPENTER ------------
"OakwoodPlank" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$OakwoodPlank";
	Description = "$OakwoodPlankDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 11.25;
	Price = 18;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Oakwood";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"WoodFrame" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$WoodFrame";
	Description = "$WoodFrameDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 16.25;
	Price = 45;
	Tier = 3;
	SocialClass = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "PinewoodPlank";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"Comb" = G3Item
{
	Type = 1;
	SubType = 6;

	DisplayName = "$Comb";
	Description = "$CombDesc";
	DisplayCategories = array("All", "Luxury");
	UsableBy = array{ "$loca.key.anyone" };

	Production = 1;
	BuildTime = 150.00;
	Price = 211;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 3; 

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.01;
			Recover = true;
		}
	};
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 3;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"OakwoodBarrel" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$OakwoodBarrel";
	Description = "$OakwoodBarrelDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 30.00;
	Price = 56;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp1 extends G3ItemComponent
		{
			Name = "Nails";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

"WalkingStick" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$WalkingStick";
	Description = "$WalkingStickDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Production = 1;
	BuildTime = 120.00;
	Price = 201;
	Tier = 3;
	SocialClass = 1;
	
	VisualActorName = "walkingstick/walkingstick";
	
	EquippedIdleAnimation = "idle_walkstick1";
	EquippedWalkAnimation = "walk_walkstick";
	EquippedRunAnimation = "run_walkstick";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "MovementSpeedMult";
			Mod = 0.04;
			Recover = true;
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "CarpenterShop", 1 }
	};
};

//--------- ALCHEMIST SHOP ----------------
"Bomb" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Bomb";
	Description = "$BombDesc";
	DisplayCategories = array("All", "BlackMarket");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	

	Production = 1;
	BuildTime = 125.00;
	Price = 242;
	Tier = 3;
	SocialClass = 1;
	
	ProductionIsProhibitedForChildren = true;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "ClayVase";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Fat";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ThrowBomb"};
		}
	}; 

	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};			
};

"DarkTalisman" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$DarkTalisman";
	Description = "$DarkTalismanDesc";
	DisplayCategories = array("All", "Clothing");

	Production = 1;
	BuildTime = 96.25;
	Price = 181;
	Tier = 3;
	SocialClass = 1;
	
	EquipmentType = 4;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Charisma";
			Mod = -1;
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
			Name = "BoneDust";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Moonflower";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};
};

//----------- APOTHECARY --------------
"Ethanol" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Ethanol";
	Description = "$EthanolDesc";
	DisplayCategories = array("All", "Components");

	Production = 2;
	BuildTime = 47.50;
	Price = 31;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "WildRose";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Blackberry";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 1 }
	};
};

"EndurenceDrink" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$EndurenceDrink";
	Description = "$EndurenceDrinkDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 150.00;
	Price = 209;
	Tier = 3;
	SocialClass = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseEndurenceDrink"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 1 }
	};
};

//-------------- SCHOLAR -------------
"Parchment" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Parchment";
	Description = "$ParchmentDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 62.50;
	Price = 100;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Leather";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Linen";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

"Paint" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$Paint";
	Description = "$PaintDesc";
	DisplayCategories = array("All", "Components");

	Production = 1;
	BuildTime = 70.00;
	Price = 112;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

"AboutTalents1" = G3Item
{
	Type = 1;
	SubType = 7;
	
	DisplayName = "$AboutTalents1";
	Description = "$AboutTalents1Desc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 187.50;
	Price = 454;
	Tier = 3;
	SocialClass = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseAboutTalents1"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Fittings";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

"Poem" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Poem";
	Description = "$PoemDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 125.00;
	Price = 344;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Parchment";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Paint";
			Number = 1;
		};
	};

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UsePoem"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Scholar", 1 }
	};
};

//-------- Medicus -------------
"Bandage" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Bandage";
	Description = "$BandageDesc";
	DisplayCategories = array("All", "Tinctures");
	UsableBy = array{ "$loca.key.anyone" };
	
	Production = 2;
	BuildTime = 75.00;
	Price = 70;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Cloth";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Wool";
			Number = 2;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"ApplyBandage"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};

"FeverSyrup" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$FeverSyrup";
	Description = "$FeverSyrupDesc";
	DisplayCategories = array("All", "Trinkets");
	
	Production = 2;
	BuildTime = 55.00;
	Price = 75;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "PlantEssence";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Honey";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};

"PestAway" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$PestAway";
	Description = "$PestAwayDesc";
	DisplayCategories = array("All", "Tinctures");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Production = 1;
	BuildTime = 170.00;
	Price = 247;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "ClayVase";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Ethanol";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "SwampRoot";
			Number = 1;
		};
	};
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UsePestAway"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};
//----------- BUTCHER -----------
"Beef" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Beef";
	Description = "$BeefDesc";
	DisplayCategories = array("All", "Food");

	Tier = 3;
	SocialClass = 1;
	Production = 10;
	BuildTime = 145;
	
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
	SubType = 2;

	DisplayName = "$Pork";
	Description = "$PorkDesc";
	DisplayCategories = array("All", "Food");

	Tier = 3;
	SocialClass = 1;
	Production = 5;
	BuildTime = 125;
	
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
	SubType = 2;

	DisplayName = "$Fat";
	Description = "$FatDesc";
	DisplayCategories = array("All", "Food");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 30;
	Production = 4;
	
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

	Tier = 3;
	SocialClass = 1;
	Production = 5;
	BuildTime = 42.5;

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
	SubType = 2;

	DisplayName = "$WheatFlour";
	Description = "$WheatFlourDesc";
	DisplayCategories = array("All", "Food");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 25;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Wheat";
			Number = 3;
		};
//		comp2 extends G3ItemComponent
//		{
//			Name = "LinenSack";
//			Number = 1;
//		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"BarleyFlour" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$BarleyFlour";
	Description = "$BarleyFlourDesc";
	DisplayCategories = array("All", "Food");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 20;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Barley";
			Number = 2;
		};
//		comp2 extends G3ItemComponent
//		{
//			Name = "LinenSack";
//			Number = 1;
//		};
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

	Tier = 3;
	SocialClass = 0;
	BuildTime = 40;
	Production = 2;

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

	Results = array
	{
		UnlockEffect
		{
			Names = array {"HandOverFlatBread"};
		}
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
	BuildTime = 125;

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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 10;
	Production = 10;
	
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

//------- TAILOR ---------
"Blanket" = G3Item
{
	Type = 1;
	SubType = 4;

	DisplayName = "$Blanket";
	Description = "$BlanketDesc";
	UsableBy = array{ "$loca.key.anyone" };
	DisplayCategories = array("All", "Clothing");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 127.5;
	Production = 1;
   
	EquipmentType = 3;

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Resistance";
			Mod = 3;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverBlanket"};
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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 7.5;
	Production = 1;
	
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

//"LinenSack" = G3Item
//{
//	Type = 1;
//	SubType = 8;
//
//	DisplayName = "$LinenSack";
//	Description = "$LinenSackDesc";
//	DisplayCategories = array("All", "Components");
//
//	Tier = 3;
//	SocialClass = 1;
//	BuildTime = 5;
//	Production = 2;
//	
//	Requirements = array
//	{
//		comp1 extends G3ItemComponent
//		{
//			Name = "Linen";
//			Number = 1;
//		};
//	};
//	
//	RequiredBuildings = array
//	{
//		RequiredBuilding = array { "TailorShop", 1 }
//	};
//};

"Backpack" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$Backpack";
	Description = "$BackpackDesc";
	DisplayCategories = array("All", "Transportation");
	
	Tier = 3;
	SocialClass = 1;
	BuildTime = 103.75;
	Production = 1;
	
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

	Tier = 3;
	SocialClass = 1;
	Production = 1;
	BuildTime = 16.25;
	
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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 112.5;
	Production = 1;
	
	EquipmentType = 5;
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
		UnlockEffect
		{
			Names = array {"HandOverIronBracelet"};
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
	SubType = 6;

	DisplayName = "$SilverChain";
	Description = "$SilverChainDesc";
	DisplayCategories = array("All", "Luxury");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 125;
	Production = 1;
	
	EquipmentType = 4; //jewellry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.04;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverSilverChain"};
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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 27.5;
	Production = 1;
	
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
	SubType = 5;

	DisplayName = "$Grindstone";
	Description = "$GrindstoneDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 45;
	Production = 1;
	
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
		},
		UnlockEffect
		{
			Names = array {"HandOverGrindstone"};
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
	SubType = 6;

	DisplayName = "$MuralPainting";
	Description = "$MuralPaintingDesc";
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	DisplayCategories = array("All", "Luxury");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 80;
	Production = 1;
	
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
			Names = array {"ApplyMuralPainting", "HandOverMuralPainting"};
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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 16.25;
	Production = 1;

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
	SubType = 5;

	DisplayName = "$Comb";
	Description = "$CombDesc";
	UsableBy = array{ "$loca.key.anyone" };
	DisplayCategories = array("All", "Trinkets");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 150;
	Production = 1;
	
	EquipmentType = 3; //Special

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.01;
			Recover = true;
		},
		UnlockEffect
		{
			Names = array {"HandOverComb"};
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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 29.5;
	Production = 1;
	
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
	SubType = 5;

	DisplayName = "$WalkingStick";
	Description = "$WalkingStickDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 120;
	Production = 1;
	
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
		},
		UnlockEffect
		{
			Names = array {"HandOverWalkingStick"};
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
	SubType = 3;

	DisplayName = "$Bomb";
	Description = "$BombDesc";
	DisplayCategories = array("All", "WeaponArmor");
	
	UsableBy = array{ "$gui.item.UsableByAdultPartyMembers", "$gui.item.UsableByHenchmen" };
	
	Tier = 3;
	SocialClass = 1;

	BuildTime = 125;
	Production = 1;
	
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
			Names = array {"ThrowBomb", "HandOverBomb"};
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
	SubType = 5;

	DisplayName = "$DarkTalisman";
	Description = "$DarkTalismanDesc";
	DisplayCategories = array("All", "Trinkets");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 96.25;
	Production = 1;
	
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
		},
		UnlockEffect
		{
			Names = array {"HandOverDarkTalisman"};
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
	SubType = 2;

	DisplayName = "$Ethanol";
	Description = "$EthanolDesc";
	DisplayCategories = array("All", "Food");

	Tier = 3;
	SocialClass = 1;
	BuildTime = 47.5;
	Production = 2;
	
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
	
	Tier = 3;
	SocialClass = 1;
	BuildTime = 150;
	Production = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseEndurenceDrink", "HandOverEndurenceDrink"};
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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 62.5;
	Production = 1;
	
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

	Tier = 3;
	SocialClass = 1;
	BuildTime = 70;
	Production = 1;
	
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
	SubType = 6;
	
	DisplayName = "$AboutTalents1";
	Description = "$AboutTalents1Desc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 3;
	SocialClass = 1;
	BuildTime = 187.5;
	Production = 1;
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseAboutTalents1", "HandOverAboutTalents1"};
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
	SubType = 6;

	DisplayName = "$Poem";
	Description = "$PoemDesc";
	DisplayCategories = array("All", "Luxury");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 3;
	SocialClass = 1;
	BuildTime = 125;
	Production = 1;
	
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
			Names = array {"UsePoem", "HandOverPoem"};
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
	SubType = 5;

	DisplayName = "$Bandage";
	Description = "$BandageDesc";
	UsableBy = array{ "$loca.key.anyone" };
	DisplayCategories = array("All", "Trinkets");
	
	BuildTime = 75;
	Production = 2;
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
			Names = array {"ApplyBandage", "HandOverBandage"};
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
	SubType = 7;

	DisplayName = "$FeverSyrup";
	Description = "$FeverSyrupDesc";
	DisplayCategories = array("All", "Tinctures");
	
	BuildTime = 55;
	Production = 2;
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
	
	BuildTime = 170;
	Production = 1;
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
			Names = array {"UsePestAway", "HandOverPestAway"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};

//-------- Marijuana -------------
"MarijuanaFlour" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$MarijuanaFlour";
	Description = "$MarijuanaFlourDesc";
	DisplayCategories = array("All", "Food");
	IsLegalByDefault = false;
	
	Tier = 3;
	SocialClass = 1;
	BuildTime = 20;
	Production = 1;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Marijuana";
			Number = 2;
		};
//		comp2 extends G3ItemComponent
//		{
//			Name = "LinenSack";
//			Number = 1;
//		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"MarijuanaFlatBread" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$MarijuanaFlatBread";
	Description = "$MarijuanaFlatBreadDesc";
	DisplayCategories = array("All", "Food");
	IsLegalByDefault = false;
	
	Tier = 3;
	SocialClass = 0;
	BuildTime = 40;
	Production = 2;

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "MarijuanaFlour";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Windmill", 1 }
	};
};

"HempBandage" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$HempBandage";
	Description = "$BandageDesc";
	UsableBy = array{ "$loca.key.anyone" };
	DisplayCategories = array("All", "Trinkets");
	
	BuildTime = 75;
	Production = 2;
	Tier = 3;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "HempCloth";
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
			Names = array {"ApplyHempBandage"};
		}
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 1 }
	};
};

"HempCloth" = G3Item
{
	Type = 1;
	SubType = 8;

	DisplayName = "$HempCloth";
	Description = "$HempClothDesc";
	DisplayCategories = array("All", "Components");
	
	Tier = 3;
	SocialClass = 1;
	BuildTime = 7.5;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Marijuana";
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
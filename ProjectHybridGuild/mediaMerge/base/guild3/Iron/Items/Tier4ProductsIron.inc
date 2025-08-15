"Antibiotics" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$Antibiotics.iron.name";
	Description = "$Antibiotics.iron.desc";
	DisplayCategories = array("All", "Tinctures");

    IconName = "Antibiotics";

	Tier = 4;
	SocialClass = 2;
	BuildTime = 75;
	Production = 4;


	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "CowLiver";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Onion";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Alcohol";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"Fertilizer" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$Fertilizer.iron.name";
	Description = "$Fertilizer.iron.desc";
	DisplayCategories = array("All", "Trinkets");

    IconName = "Fertilizer";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 40.25;
	Production = 5;
	

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BoneDust";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "BatBlood";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "Sand";
			Number = 4;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "AlchemistShop", 1 }
	};
};

"CowLiver" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$CowLiver.iron.name";
	Description = "$CowLiver.iron.desc";
	DisplayCategories = array("All", "Food");

    IconName = "CowLiver";

	Tier = 4;
	SocialClass = 2;
	BuildTime = 30;
	Production = 2;

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

"Onion" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Onion.iron.name";
	Description = "$Onion.iron.desc";
	DisplayCategories = array("All", "Food");

    IconName = "Onion";

	Production = 3;
	BuildTime = 20.5;
	
	Tier = 4;
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
			Name = "Fertilizer";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 3 }
	};
};

"SpeedPotion" = G3Item
{
	Type = 1;
	SubType = 7;

	DisplayName = "$SpeedPotion.iron.name";
	Description = "$SpeedPotion.iron.desc";
	DisplayCategories = array("All", "RawMaterial");
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Tier = 4;
	SocialClass = 1;
	BuildTime = 170;
	Production = 1;

		IconName = "SpeedPotion";
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseSpeedPotion"};
		}
	};
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "RoseWater";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Moonflower";
			Number = 2;
		};
		comp3 extends G3ItemComponent
		{
			Name = "PlantEssence";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "Glas";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Apothecary", 2 }
	};
};

"Glas" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Glas.iron.name";
	Description = "$Glas.iron.desc";
	DisplayCategories = array("All", "RawMaterial");
	IconName = "Glas";

	Tier = 3;
	SocialClass = 1;
	BuildTime = 45;
	Production = 4;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Sand";
			Number = 5;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Torch";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "StoneMasonShop", 1 }
	};
};

"Eyeglas" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Eyeglas.iron.name";
	Description = "$Eyeglas.iron.desc";
	DisplayCategories = array("All", "Food");
	IconName = "Eyeglas";

	Tier = 4;
	SocialClass = 1;
	BuildTime = 75;
	Production = 1;
	
	EquipmentType = 4; //jewellry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Perception";
			Mod = 2;
			Recover = true;
		},
	};

	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Glas";
			Number = 2;
		};
		comp2 extends G3ItemComponent
		{
			Name = "OakwoodPlank";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "BoneGlue";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Medicus", 2 }
	};
};

"RoastedPig" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$RoastedPig.iron.name";
	Description = "$SausageDesc.iron.desc";
	DisplayCategories = array("All", "Food");

	IconName = "RoastedPig";

	Tier = 4;
	SocialClass = 2;
	BuildTime = 75.5;
	Production = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "Pig";
			Number = 1;
		};
		comp2 extends G3ItemComponent
		{
			Name = "Cabbage";
			Number = 1;
		};
		comp3 extends G3ItemComponent
		{
			Name = "LesserQualitySalt";
			Number = 2;
		};
		comp4 extends G3ItemComponent
		{
			Name = "GrindedBlackPepper";
			Number = 1;
		};
		comp5 extends G3ItemComponent
		{
			Name = "Porcelain";
			Number = 1;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Inn", 2 }
	};
};

"Cabbage" = G3Item
{
	Type = 1;
	SubType = 2;

	DisplayName = "$Cabbage.iron.name";
	Description = "$Cabbage.iron.desc";
	DisplayCategories = array("All", "Food");

    IconName = "Cabbage";

	Production = 2;
	BuildTime = 10.5;
	
	Tier = 4;
	SocialClass = 1;
	
	Requirements = array
	{
		comp1 extends G3ItemComponent
		{
			Name = "BucketOfWater";
			Number = 2;
		};
	};
	
	RequiredBuildings = array
	{
		RequiredBuilding = array { "Farm", 2 }
	};
};
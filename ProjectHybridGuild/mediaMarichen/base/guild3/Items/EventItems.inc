"WarBanner" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$WarBanner";
	Description = "$WarBannerDesc";

	Price = 2500;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseWarBanner"};
		}
	};
};

"WarHorse" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$WarHorse";
	Description = "$WarHorseDesc";

	Price = 2500;
	SoldAtMarket = false;
	
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	
	VisualActorName = "horses/ridinghorse";
	VisibleInInteriors = false;
	VisibleOnExteriors = false;
	EquipmentType = 6;
	
	Results = array
	{
		ModifierEffect
		{
			ActorValue = "StorageSlots";
			Mod = 2;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "DefensePower";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Armor";
			Mod = 50;
			Recover = true;
		},
		ModifierEffect
		{
			Filter = "!IsInInterior";
			ActorValue = "MovementSpeedMult";
			Mod = 0.46;
			Recover = true;
		}
		
	};
};

"ConstructionPlan" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$ConstructionPlan";
	Description = "$ConstructionPlanDesc";

	Price = 4000;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseConstructionPlan"};
		}
	};
};

"SignetGuildofCraftsmen" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$SignetGuildofCraftsmen";
	Description = "$SignetGuildofCraftsmenDesc";

	Price = 4000;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseSignetGuildofCraftsmen"};
		}
	};
};

"SignetGuildofMerchants" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$SignetGuildofMerchants";
	Description = "$SignetGuildofMerchantsDesc";

	Price = 4000;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseSignetGuildofMerchants"};
		}
	};
};



"BetrayedCaptain" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$BetrayedCaptain";
	Description = "$BetrayedCaptainDesc";

	Price = 4000;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };
	
	Results = array
	{
		UnlockEffect
		{
			Names = array {"UseBetrayedCaptain"};
		}
	};
};

"PoisonTrap" = G3Item
{
	Type = 1;
	SubType = 9;

	DisplayName = "$PoisonTrap";
	Description = "$PoisonTrapDesc";

	Price = 1600;
	SoldAtMarket = false;
	
	UsableBy = array{ "$gui.item.UsableByAdultFamilyMembers" };

	Results = array
	{
		UnlockEffect
		{
			Names = array {"UsePoisonTrap"};
		}
	};
};


"ElegantRapier" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$ElegantRapier";
	Description = "$ElegantRapierDesc";

	Price = 2000;
	SoldAtMarket = false;
	
	VisualActorName = "rapier/rapier";
	
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
			Mod = 30;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ReputationBonus";
			Mod = 0.05;
			Recover = true;
		}
	};
};

"MetalHammer" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$MetalHammer";
	Description = "$MetalHammerDesc";
	DisplayCategories = array("All", "WeaponArmor");

	Price = 1200;
	SoldAtMarket = false;
	
	VisualActorName = "hammer/hammer";
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Productivity";
			Mod = 0.2;
			Recover = true;
		}
	};
};

"MedalOfHonor" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$MedalOfHonor";
	Description = "$MedalOfHonorDesc";
	DisplayCategories = array("All", "Trinkets");

	Price = 1200;
	SoldAtMarket = false;
	
	EquipmentType = 4; //jewellry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "Intimidation";
			Mod = 3;
			Recover = true;
		}
	};
};

"TalismanOfInspiration" = G3Item
{
	Type = 1;
	SubType = 5;

	DisplayName = "$TalismanOfInspiration";
	Description = "$TalismanOfInspirationDesc";
	DisplayCategories = array("All", "Trinkets");

	Price = 1200;
	SoldAtMarket = false;
	
	EquipmentType = 4; //jewellry
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "Intelligence";
			Mod = 1;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "ExperienceGainMult";
			Mod = 0.1;
			Recover = true;
		}
	};
};

"LockPicks" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$LockPicks";
	Description = "$LockPicksDesc";

	Price = 1200;
	SoldAtMarket = false;
	
	EquipmentType = 3;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };

	Results = array
	{
		DisplayEffect
		{
			Tags = array{"LockPicking"};
			ApplyTo = "Target";
			DisplayGroup = "buffed";
			DisplayName = "$effect.buff.LockPicks";
			Duration = 0.0;
		},
	};
};



"DiamondStaff" = G3Item
{
	Type = 1;
	SubType = 3;

	DisplayName = "$DiamondStaff";
	Description = "$DiamondStaffDesc";
	DisplayCategories = array("All", "Trinkets");

	Price = 2000;
	SoldAtMarket = false;
	
	EquipmentType = 2;
	EquipmentAdultsOnly = true;
	UsableBy = array{ "$characters.Age.Adult" };
	UsableBy = array{ "$loca.key.anyone" };

	Results = array
	{
		ModifierEffect
		{
			ActorValue = "PrestigeGainMult";
			Mod = 0.8;
			Recover = true;
		},
		ModifierEffect
		{
			ActorValue = "BargainingBonus";
			Mod = 5;
			Recover = true;
		}
	};
};

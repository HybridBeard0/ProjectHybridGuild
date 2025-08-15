ResultObject
{
	Id = "CityGuardBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "CityGuard", "NPCGuard", "NoRomance", "NoKidnap" };
		}
	};
},
ResultObject
{
	Id = "VIPGuardBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "VIPGuard", "NPCGuard", "NoRomance", "NoKidnap" };
		}
	};
},
ResultObject
{
	Id = "TowncrierBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "NPC", "Towncrier", "FakeMarriage", "Untargetable", "NoRomance", "NoKidnap" };
		}
	};
},
ResultObject
{
	Id = "PriestBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "NPC", "Priest", "IsPreacher", "NoRomance", "NoKidnap", "DiseaseImmunity", "Untargetable" };
		}
	};
},
ResultObject
{
	Id = "MoABuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "NPC", "MoA", "NoRomance", "NoKidnap", "DiseaseImmunity", "Untargetable" };
		}
	};
},
ResultObject
{
	Id = "ReceptionistBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "NPC", "Receptionist", "NoRomance", "NoKidnap", "DiseaseImmunity", "Untargetable" };
		}
	};
},
ResultObject
{
	Id = "JailorBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "NPC", "Jailor", "NoRomance", "NoKidnap", "DiseaseImmunity", "Untargetable" };
		}
	};
},
ResultObject
{
	Id = "LansquenetBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{ "Profession", "Lansquenet", "IgnoringWorktime" };
		},
	};
},
// Economy Resupply Transporter
ResultObject
{
	Id = "ResupplyTransporterBuff";
	DisplayName = "$Status.StatusRunning";
	Results = array
	{
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"Profession", "ResupplyTransporter", "NoRomance"};
			DisplayGroup = "buffed";
			DisplayName = "$Status.StatusRunning";
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"Profession", "ResupplyTransporter", "NoRomance"};
			ActorValue = "MovementSpeedMult";
			Mod = 0.05;
			Recover = true;
		},
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{ "NPCGuard", "DiseaseImmunity", "NoKidnap" };
		},
	};
},
// Economy Resupply Guard
ResultObject
{
	Id = "ResupplyGuardBuff";
	DisplayName = "$Status.StatusRunning";
	Results = array
	{
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"Profession", "ResupplyGuard", "NoRomance"};
			DisplayGroup = "buffed";
			DisplayName = "$Status.StatusRunning";
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"Profession", "ResupplyGuard", "NoRomance"};
			ActorValue = "MovementSpeedMult";
			Mod = 0.05;
			Recover = true;
		},		
		TagEffect
		{
			ApplyTo = "Self";
			Tags = array{ "Profession", "DiseaseImmunity", "NoKidnap" };
		},
	};
},
// gives all preachers the tag "IsPreacher" to prevent them from being converted through WinBelievers
ResultObject
{
	Id = "PreacherBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{"Profession", "IsPreacher"};
		},
	};
},
// gives robbers, thieves and mercenaries the tag "IgnoringWorktime" to allow the action WakeUpCall
ResultObject
{
	Id = "IgnoringWorktimeBuff";
	Results = array
	{
		TagEffect
		{
			Tags = array{"Profession", "IgnoringWorktime"};
		},
	};
},
//--- IRON OVERHAUL PROFESSIONS MERGE START ---
ResultObject
{
	Id = "FarmingProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Farmer", "Farming" };
		}
	};
},
ResultObject
{
	Id = "InkeeperProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Innkeeper", "Cooking" };
		}
	};
},
ResultObject
{
	Id = "ApothecaryProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Apothecary", "Healing" };
		}
	};
},
ResultObject
{
	Id = "MedicusProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Medicus", "Healing" };
		}
	};
},
ResultObject
{
	Id = "GravediggerProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Gravedigger", "Working" };
		}
	};
},
ResultObject
{
	Id = "ScholarProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Scholar", "Healing" };
		}
	};
},
ResultObject
{
	Id = "AlchemistProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Alchemist", "Cooking" };
		}
	};
},
ResultObject
{
	Id = "BarberProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Barber", "Haircutting" };
		}
	};
},
ResultObject
{
	Id = "BlacksmithProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Blacksmith", "Smithing" };
		}
	};
},
ResultObject
{
	Id = "TailorProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Tailor", "Tailoring" };
		}
	};
},
ResultObject
{
	Id = "MasonProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Mason", "Stonecutting" };
		}
	};
},
ResultObject
{
	Id = "OrchadistProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Orchadist", "Farming" };
		}
	};
},
ResultObject
{
	Id = "BakerProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Baker", "Baking" };
		}
	};
},
ResultObject
{
	Id = "ButcherProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Butcher", "Butchering" };
		}
	};
},
ResultObject
{
	Id = "FishingProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Fisher", "Fishing" };
		}
	};
},
ResultObject
{
	Id = "MillerProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Miller", "Milling" };
		}
	};
},
ResultObject
{
	Id = "HerbalistProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Herbalist" };
		}
	};
},
ResultObject
{
	Id = "ArtisanProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Artisan", "Smithing" };
		}
	};
},
ResultObject
{
	Id = "MasonProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Mason", "Masonery" };
		}
	};
},
ResultObject
{
	Id = "TinkerProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Tinker", "Tinkering" };
		}
	};
},
ResultObject
{
	Id = "CarpenterProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "Carpenter", "Sawing" };
		}
	};
},
ResultObject
{
	Id = "StonemasonProfession";
	Results = array
	{
		@base/Unlearned
		TagEffect
		{
			Tags = array{ "Profession", "HandicraftStone", "Stonemason" };
		}
	};
},
//--- IRON OVERHAUL PROFESSIONS MERGE END ---
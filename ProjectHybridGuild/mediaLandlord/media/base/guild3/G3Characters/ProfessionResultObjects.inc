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
}
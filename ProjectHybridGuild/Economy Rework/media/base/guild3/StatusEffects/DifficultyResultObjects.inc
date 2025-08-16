ResultObject
{
	Id = "EasyDifficultyPlayerForward";
	Tags = array{"PlayerStartupBuffs", "Easy"};
	Results = array
	{
		ModifierEffect // Every member and henchman of the family directly receives DiseaseImmunity
		{
			ApplyTo = "Target";
			Filter = "IsCharacter"; 
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 3240; //3 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect // Residents of buildings also get DiseaseImmunity forwarded which is necessary for reaching employees who usually are not full members of the family
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 3240; //3 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffEasy"};
		},
		ForwardEffect // For tagging employees of buildings, we need a ForwardEffect again
		{
			ApplyTo = "Target";
			Filter = "IsBuilding";
			Relation = "Self";
			ResultObjectId = "BuffEasyTagForResidents";
		},
	};
},

ResultObject
{
	Id = "NormalDifficultyPlayerForward";
	Tags = array{"PlayerStartupBuffs", "Normal"};
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsCharacter";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 1620; //1.5 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 1620; //1.5 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffNormal"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Filter = "IsBuilding";
			Relation = "Self";
			ResultObjectId = "BuffNormalTagForResidents";
		},
	};
},

ResultObject
{
	Id = "HardDifficultyPlayerForward";
	Tags = array{"PlayerStartupBuffs", "Hard"};
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsCharacter";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 810; //0.75 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 810; //0.75 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffHard"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			ResultObjectId = "BuffHardTagForResidents";
		},
	};
},

ResultObject
{
	Id = "ImpossibleDifficultyPlayerForward";
	Tags = array{"PlayerStartupBuffs", "Impossible"};
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsCharacter";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 540; //0.5 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 540; //0.5 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffImpossible"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			ResultObjectId = "BuffImpossibleTagForResidents";
		},
	};
},

ResultObject // AI players
{
	Id = "EasyDifficultyAIForward";
	Tags = array{"AIStartupBuffs", "Easy"};
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsCharacter";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 3240; //3 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 3240; //3 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffEasy"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Filter = "IsBuilding";
			Relation = "Self";
			ResultObjectId = "BuffEasyTagForResidents";
		},
	};
},

ResultObject
{
	Id = "NormalDifficultyAIForward";
	Tags = array{"AIStartupBuffs", "Normal"};
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsCharacter";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 1620; //1.5 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 1620; //1.5 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffNormal"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Filter = "IsBuilding";
			Relation = "Self";
			ResultObjectId = "BuffNormalTagForResidents";
		},
	};
},

ResultObject
{
	Id = "HardDifficultyAIForward";
	Tags = array{"AIStartupBuffs", "Hard"};
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsCharacter";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 810; //0.75 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 810; //0.75 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffHard"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			ResultObjectId = "BuffHardTagForResidents";
		},
	};
},

ResultObject
{
	Id = "ImpossibleDifficultyAIForward";
	Tags = array{"AIStartupBuffs", "Impossible"};
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Filter = "IsCharacter";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
			Duration = 540; //0.5 rounds
			UseDurationSinceStart = true;
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			Duration = 540; //0.5 rounds
			UseDurationSinceStart = true;
			ResultObjectId = "DiseaseImmunityForResidents";
		},
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffImpossible"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			ResultObjectId = "BuffImpossibleTagForResidents";
		},
	};
},

ResultObject
{
	Id = "GiveMoneyAndInfluenceIntervall";
	Filter = "IsFamilyMainHouse";
	Results = array
	{
		IntervalExecutionEffect
		{
			ApplyTo = "Target";
			Frequency = 12;
			ResultObjectId = "GiveMoneyAndInfluence";
		}
	};
},


ResultObject
{
	Id = "GiveMoneyAndInfluence";
	Results = array
	{
		FunctionGiveMoney
		{
			ApplyTo = "Target";
			Amount = 100;
		},
		FunctionTransferPrestige
		{
			Receiver = "Target";
			Amount = 20;
		}
	};
},

ResultObject
{
	Id = "DiseaseImmunityForResidents";
	Filter = "IsResidentOfBuilding";
	Results = array
	{
		ModifierEffect
		{
			ApplyTo = "Target";
			Tags = array{"DiseaseImmunity"};
			ActorValue = "DiseaseImmunity"; //Not actually an used actor value, just to add the TAG for disease immunity
			Mod = 1;
			Recover = true;
		}
	};
},

ResultObject
{
	Id = "BuffEasyTagForResidents";
	Filter = "IsResidentOfBuilding";
	Results = array
	{
		//Give every player Character the buff
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffEasy"};
		}
	};
},

ResultObject
{
	Id = "BuffNormalTagForResidents";
	Filter = "IsResidentOfBuilding";
	Results = array
	{
		//Give every player Character the buff
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffNormal"};
		}
	};
},

ResultObject
{
	Id = "BuffHardTagForResidents";
	Filter = "IsResidentOfBuilding";
	Results = array
	{
		//Give every player Character the buff
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffHard"};
		}
	};
},

ResultObject
{
	Id = "BuffImpossibleTagForResidents";
	Filter = "IsResidentOfBuilding";
	Results = array
	{
		//Give every player Character the buff
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"BuffImpossible"};
		}
	};
},

ResultObject
{
	Id = "TagNotAI";
	Results = array
	{
		// Every character and building of the family gets tagged with 'IsNotAI'
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"IsNotAI"};
		},
		ForwardEffect // For tagging employees of buildings, we need a ForwardEffect again
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			ResultObjectId = "NotAITagForResident";
		}
	};
},

ResultObject
{
	Id = "NotAITagForResident";
	Filter = "IsResidentOfBuilding";
	Results = array
	{
		//Give every player Character the "IsNotAI" buff
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"IsNotAI"};
		}
	};
},

ResultObject
{
	Id = "TagAI";
	Results = array
	{
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"IsAI"};
		},
		ForwardEffect
		{
			ApplyTo = "Target";
			Relation = "Self";
			Filter = "IsBuilding";
			ResultObjectId = "AITagForResident";
		}
	};
},

ResultObject
{
	Id = "AITagForResident";
	Filter = "IsResidentOfBuilding";
	Results = array
	{
		//Give every AI Character the "IsAI" buff
		TagEffect
		{
			ApplyTo = "Target";
			Tags = array{"IsAI"};
		}
	};
},

ResultObject
{
	Id = "TagNPC";
	Results = array
	{
		//Give every NPC character the NPC tag
		TagEffect
		{
			Tags = array{"NPC"};
		},
		TagEffect
		{
			Tags = array{"NoService"};
			Duration = 360.0;
		}
	};
}
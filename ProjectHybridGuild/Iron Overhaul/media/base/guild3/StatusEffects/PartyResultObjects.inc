// The names of these are hardcoded.
// Make sure that the tags are still applied if you remove/change these effects.
// I.e. make sure that at least a TagEffect with these tags remains.
ResultObject
{
	Id = "LeaderGained";
	Results = array
	{
		DisplayEffect
		{
			Tags = array{"Leader", "PartyMember"};
			DisplayGroup = "leader";
			DisplayName = "$statusEffect.leader.desc";
		},
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array {"HeirHumiliation", "deeplydisappointed", "HandHumiliation"};
		}
	};
},
ResultObject
{
	Id = "RightHandGained";
	Results = array
	{
		DisplayEffect
		{
			Tags = array{"RightHand", "Hand", "PartyMember"};
			DisplayGroup = "righthand";
			DisplayName = "$statusEffect.righthand.desc";
		}
	};
},
ResultObject
{
	Id = "RightHandLost";
	DisplayName = "$status.hand.humiliated";
	Results = array
	{
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{"RightHand"};
		},
		DisplayEffect
		{
			Tags = array{"HandHumiliation"};
			DisplayGroup = "wound";
			DisplayName = "$status.hand.humiliated";
			Duration = 1800.0; //1 year
		},
		VisualEffect
		{
			Tags = array{"HandHumiliation"};
			VisualName = "Insulted";
			Duration = 10.0;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Charisma";
			Mod = -1;
			Duration = 1800.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Perception";
			Mod = -1;
			Duration = 1800.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Resistance";
			Mod = -2;
			Duration = 1800.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Productivity";
			Mod = -0.15;
			Duration = 1800.0; //1 year
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "LeftHandGained";
	Results = array
	{
		DisplayEffect
		{
			Tags = array{"LeftHand", "Hand", "PartyMember"};
			DisplayGroup = "lefthand";
			DisplayName = "$statusEffect.lefthand.desc";
		}
	};
},
ResultObject
{
	Id = "LeftHandLost";
	DisplayName = "$status.hand.humiliated";
	Results = array
	{
		FunctionRemoveEffect
		{
			MatchAny = true;
			Tags = array{"LeftHand"};
		},
		DisplayEffect
		{
			Tags = array{"HandHumiliation"};
			DisplayGroup = "wound";
			DisplayName = "$status.hand.humiliated";
			Duration = 1800.0; //1 year
		},
		VisualEffect
		{
			Tags = array{"HandHumiliation"};
			VisualName = "Insulted";
			Duration = 10.0;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Charisma";
			Mod = -1;
			Duration = 1800.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Perception";
			Mod = -1;
			Duration = 1800.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Resistance";
			Mod = -2;
			Duration = 1800.0; //1 year
			Recover = true;
		},
		ModifierEffect
		{
			Tags = array{"HandHumiliation"};
			ActorValue = "Productivity";
			Mod = -0.15;
			Duration = 1800.0; //1 year
			Recover = true;
		}
	};
}

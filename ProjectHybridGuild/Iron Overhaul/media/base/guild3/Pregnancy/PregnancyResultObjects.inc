// Place all pregnancy related result objects in here
// For everything targeting the mother use [ApplyTo = "Self"] in all function/effects/...

ResultObject
{
	Id = "Pregnant";
	DisplayName = "$status.pregnant";
	Results = array
	{
		FunctionSendMessage
		{
			ApplyTo = "Self";
			Description = "PregnancySuccess";
		},
		DelayedExecutionEffect
		{
			ApplyTo = "Self";
			Tags = array{"Pregnant"};
			Duration = 1350.0; // 9 months
			ResultObjectIds = array { "GiveBirth" };
		},
		FunctionTrackObjectiveProgress
		{ 
			Amount = 1; 
			ObjectiveTypename = "GetChildOrPregnant"; 
		},
		DisplayEffect
		{
			ApplyTo = "Self";
			Tags = array{"Pregnant","NoDrinking"};
			Duration = 1350; //9 Months
			DisplayGroup = "pregnant";
			DisplayName = "$status.pregnant";
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"Pregnant"};
			ActorValue = "Charisma";
			Mod = +5;
			Duration = 1350.0; // 9 months
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"Pregnant"};
			ActorValue = "BargainingBonus";
			Mod = 10;
			Duration = 1350.0; // 9 months
			Recover = true;
		},
		ModifierEffect
		{
			ApplyTo = "Self";
			Tags = array{"Pregnant"};
			ActorValue = "Resistance";
			Mod = +3;
			Duration = 1350.0; // 9 months
			Recover = true;
		}
	};
},
ResultObject
{
	Id = "GiveBirth";
	DisplayName = "";
	Results = array
	{
		FunctionGiveBirth
		{
			ApplyTo = "Self";
		},
		// Here we DON'T use 'FunctionTrackObjectiveProgress' to increment the progress on 'GetChildOrPregnant' objectives. 
		// This is because 'normal' childbirth already increments the progress at the start of the pregnancy and it must not be tracked twice.
		// FunctionTrackObjectiveProgress { Amount = 1; ObjectiveTypename = "GetChildOrPregnant"; },
		FunctionTransferPrestige
		{
			Receiver = "Source";
			Amount = 10;
		}
	};
},
ResultObject
{
	Id = "NotifyPregnancyFailure";
	DisplayName = "";
	Results = array
	{ //Father will get charisma debuff when produce offspring fails
		DisplayEffect
		{
			ApplyTo = "Target";
			Duration = 270;
			DisplayGroup = "alarm";
			DisplayName = "$status.ProduceOffspringFailed";
		},
		ModifierEffect
		{
			ApplyTo = "Target";
			ActorValue = "Charisma";
			Mod = -2;
			Duration = 270.0; // 3 months
			Recover = true;
		},
	};
},
ResultObject
{
	Id = "BastardDebuff";
	DisplayName = "$debuff.Bastard";
	Results = array
	{
		DisplayEffect
		{
			ApplyTo = "Source";
			DisplayName = "$debuff.Bastard";
			DisplayGroup = "debuffed";
		},
		ModifierEffect
		{
			ApplyTo = "Source";
			ActorValue = "ReputationBonus";
			Mod = -0.25;
			Recover = true;
			DisplayName = "$debuff.BastardShort";
		},
		ModifierEffect
		{
			ApplyTo = "Source";
			ActorValue = "BargainingBonus";
			Mod = -0.25;
			Recover = true;
			DisplayName = "$debuff.BastardShort";
		},
		SpreadEffect
		{
			ApplyTo = "Target";
			UniqueTag = "BastardInfluenceLossSpread";
			Tags = array{"BastardInfluenceLossSpread"};
			SpreadResult = "BastardInfluenceLossSpread";
			Radius = 100.0;
			SpreadChance = 1;
			SpreadFrequency = 20;
			SpreadTargetRules = array
			{
				SpreadTargetRule
				{
					TargetType = "Character";
					TargetProperties = array{"IsInSameRoom", "NotMyFamily", "IsConscious", "NotInCombat", "NotFleeing"};
					TargetScoreFormula = "Intelligence*2";
				}
			}; 
		},
	};
},
ResultObject
{
	Id = "BastardInfluenceLossSpread";
	DisplayName = "$debuff.Bastard";
	Results = array
	{
		FunctionTransferPrestige
		{
			Giver = "Source";
			Amount = 1;
		}
	};
}
DialogueSuccessType
{
	  Type = "Failure";
},
FunctionUpdateRelationship
{
	AffectTarget = "-10";
	AffectLiaison = "-50";
},
SpreadEffect
{
	ApplyTo = "Source";
	UniqueTag = "DuelInsultFailure";
	Tags = array{"DuelInsultFailure"};
	SpreadResult = "DuelInsultSpread";
	Radius = 300.0;
	Duration = 1;
	SpreadChance = 1;
	SpreadToEveryone = true;
	TickOnce = true;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"Outside", "IsConscious", "NotInCombat", "NotFleeing"};
			TargetScoreFormula = "Intelligence*0.25";
		}
	}; 
},
DialogueSuccessType
{
	  Type = "Success";
},
DisplayEffect
{
	Tags = array{"Rumor"};
	ApplyTo = "Target";
	Duration = 100;
	DisplayGroup = "buffed";
	DisplayName = "$effect.rumorPositive";
},
FunctionUpdateRelationship
{
	AffectTarget = "10";
},
SpreadEffect
{
	ApplyTo = "Target";
	UniqueTag = "RumorSpreadEffect";
	Tags = array{"RumorSpread"};
	SpreadResult = "PositiveRumor";
	Radius = 300.0;
	Duration = 100;
	SpreadChance = 0.5;
	SpreadFrequency = 5;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"Outside", "NotMyFamily", "NotInCombat", "IsConscious", "NotFleeing"};
			TargetScoreFormula = "Intelligence*0.5";
		}
	}; 
}
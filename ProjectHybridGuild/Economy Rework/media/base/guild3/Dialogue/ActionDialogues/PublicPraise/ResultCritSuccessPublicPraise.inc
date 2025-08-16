DialogueSuccessType
{
	  Type = "CriticalSuccess";
},
DisplayEffect
{
	Tags = array{"Rumor"};
	ApplyTo = "Target";
	Duration = 150;
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
	Duration = 150;
	SpreadChance = 0.5;
	SpreadFrequency = 4;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"Outside", "NotMyFamily", "NotInCombat", "IsConscious", "NotFleeing"};
			TargetScoreFormula = "Intelligence*0.25";
		}
	}; 
}
SpreadEffect
{
	UniqueTag = "InfectWithCold";
	Tags = array{"ColdSpread"};
	SpreadTags = array{"Cold", "ColdSpread"};
	SpreadResult = "InfectionCold";
	Radius = 120.0;
	Duration = 300;
	SpreadChance = 0.5;
	SpreadFrequency = 1;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "Adult", "hasNotTag.NPCGuard"};
			SourceScoreFormula = "2";
			TargetScoreFormula = "Resistance * 1.5";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "Child"};
			SourceScoreFormula = "2";
			TargetScoreFormula = "Resistance * 1.5";
		},
	};
}
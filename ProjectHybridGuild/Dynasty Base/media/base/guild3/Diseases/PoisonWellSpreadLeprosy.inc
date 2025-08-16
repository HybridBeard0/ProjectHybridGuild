SpreadEffect
{
	UniqueTag = "InfectWithLeprosy";
	Tags = array{"LeprosySpread"};
	SpreadTags = array{"Leprosy", "LeprosySpread"};
	SpreadResult = "InfectionLeprosy";
	Radius = 200.0;
	Duration = 540;
	SpreadChance = 0.5;
	SpreadFrequency = 1;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "Adult", "hasNotTag.NPCGuard"};
			SourceScoreFormula = "2";
			TargetScoreFormula = "Resistance * 2.5";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "Child"};
			SourceScoreFormula = "2";
			TargetScoreFormula = "Resistance * 2.5";
		},
	};
}
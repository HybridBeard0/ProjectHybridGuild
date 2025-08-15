SpreadEffect
{
	UniqueTag = "InfectWithLeprosy";
	Tags = array{"LeprosySpread", "Disease"};
	SpreadTags = array{"Leprosy", "LeprosySpread"};
	SpreadResult = "InfectionLeprosy";
	Radius = 50.0;
	Duration = 1080;
	//SpreadChance = 0.5;
	SpreadChance = 0.15;
	SpreadFrequency = 3;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Adult", "hasNotTag.NPCGuard"};
			//SourceScoreFormula = "2";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 3";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Child"};
			//SourceScoreFormula = "2";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 3";
		},
	};
}
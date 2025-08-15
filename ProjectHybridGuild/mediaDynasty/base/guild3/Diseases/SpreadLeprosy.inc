SpreadEffect
{
	UniqueTag = "InfectWithLeprosy";
	Tags = array{"LeprosySpread", "Disease"};
	SpreadTags = array{"Leprosy", "LeprosySpread"};
	SpreadResult = "InfectionLeprosy";
	Radius = 75.0;
	Duration = 2160;
	//SpreadChance = 0.5;
	SpreadChance = 0.05;
	SpreadFrequency = 10;
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
SpreadEffect
{
	UniqueTag = "InfectWithPlague";
	Tags = array{"PlagueSpread", "Disease"};
	SpreadTags = array{"Plague", "PlagueSpread"};
	SpreadResult = "InfectionPlague";
	Radius = 50.0;
	Duration = 1080;
	//SpreadChance = 0.6;
	SpreadChance = 0.35;
	SpreadFrequency = 5;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Adult", "hasNotTag.NPCGuard"};
			//SourceScoreFormula = "2";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 4";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Child"};
			//SourceScoreFormula = "2";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 4";
		},
	};
}
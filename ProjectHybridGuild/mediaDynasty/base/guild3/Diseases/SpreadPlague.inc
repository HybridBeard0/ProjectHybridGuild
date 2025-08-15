SpreadEffect
{
	UniqueTag = "InfectWithPlague";
	Tags = array{"PlagueSpread", "Disease"};
	SpreadTags = array{"Plague", "PlagueSpread"};
	SpreadResult = "InfectionPlague";
	Radius = 150.0;
	Duration = 2160;
	//SpreadChance = 0.6;
	SpreadChance = 0.05;
	SpreadFrequency = 7;
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
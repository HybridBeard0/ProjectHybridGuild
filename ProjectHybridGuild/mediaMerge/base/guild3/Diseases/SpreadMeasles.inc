SpreadEffect
{
	UniqueTag = "InfectWithMeasles";
	Tags = array{"MeaslesSpread", "Disease"};
	SpreadTags = array{"Measles", "MeaslesSpread"};
	SpreadResult = "InfectionMeasles";
	Radius = 50.0;
	Duration = 540;
	//SpreadChance = 0.75;
	SpreadChance = 0.35;
	SpreadFrequency = 1.5;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Child", "hasNotTag.NPCGuard"};
			//SourceScoreFormula = "1";
			TargetScoreFormula = "Resistance + HasFamily * 10";
		},
	};
}
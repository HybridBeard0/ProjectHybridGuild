SpreadEffect
{
	UniqueTag = "InfectWithCold";
	Tags = array{"ColdSpread", "Disease"};
	SpreadTags = array{"Cold", "ColdSpread"};
	SpreadResult = "InfectionCold";
	Radius = 50.0;
	Duration = 540;
	//SpreadChance = 0.75;
	SpreadChance = 0.35;
	SpreadFrequency = 2;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Adult", "hasNotTag.NPCGuard"};
			//SourceScoreFormula = "1";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 1.5";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Child"};
			//SourceScoreFormula = "1";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 1.5";
		},
	};
}
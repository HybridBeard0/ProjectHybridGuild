SpreadEffect
{
	UniqueTag = "InfectWithCold";
	Tags = array{"ColdSpread", "Disease"};
	SpreadTags = array{"Cold", "ColdSpread"};
	SpreadResult = "InfectionCold";
	Radius = 80.0;
	@base/Disease
	SpreadChance = 0.10;
	SpreadFrequency = 9;
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
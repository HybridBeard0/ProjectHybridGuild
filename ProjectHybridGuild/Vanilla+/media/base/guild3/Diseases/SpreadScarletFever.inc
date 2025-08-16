SpreadEffect
{
	UniqueTag = "InfectWithScarletFever";
	Tags = array{"ScarletFeverSpread", "Disease"};
	SpreadTags = array{"ScarletFever", "ScarletFeverSpread"};
	SpreadResult = "InfectionScarletFever";
	Radius = 350.0;
	@base/Disease
	SpreadChance = 0.55;
	SpreadFrequency = 2;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "IsInSameRoom", "Child"};
			//SourceScoreFormula = "1";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 1.25";
		},
	};
}
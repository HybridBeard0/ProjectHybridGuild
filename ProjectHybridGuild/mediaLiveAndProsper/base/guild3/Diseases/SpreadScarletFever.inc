SpreadEffect
{
	UniqueTag = "InfectWithScarletFever";
	Tags = array{"ScarletFeverSpread", "Disease"};
	SpreadTags = array{"ScarletFever", "ScarletFeverSpread"};
	SpreadResult = "InfectionScarletFever";
	Radius = 50.0;
	Duration = 720;
	//SpreadChance = 0.75;
	SpreadChance = 0.35;
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
SpreadEffect
{
	UniqueTag = "InfectWithPlague";
	Tags = array{"PlagueSpread"};
	SpreadTags = array{"Plague", "PlagueSpread"};
	SpreadResult = "InfectionPlague";
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
			TargetScoreFormula = "Resistance * 4";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"NoDiseaseImmunity", "Child"};
			SourceScoreFormula = "2";
			TargetScoreFormula = "Resistance * 4";
		},
	};
}
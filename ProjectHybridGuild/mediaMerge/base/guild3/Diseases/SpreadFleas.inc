SpreadEffect
{
	UniqueTag = "InfectionFleas";
	Tags = array{"Fleaspread"};
	SpreadTags = array{"FleeInfection", "Fleaspread"};
	SpreadResult = "InfectWithFleas";
	Radius = 250.0;
	Duration = 60;
	//SpreadChance = 0.35;
	SpreadChance = 0.05;
	SpreadFrequency = 5;
	SpreadTargetRules = array
	{
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"IsInSameRoom", "Adult", "hasNotTag.NPCGuard"};
			//SourceScoreFormula = "4";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 2";
		},
		SpreadTargetRule
		{
			TargetType = "Character";
			TargetProperties = array{"IsInSameRoom", "Child"};
			//SourceScoreFormula = "4";
			TargetScoreFormula = "(Resistance + HasFamily * 10) * 2";
		}
	};
}
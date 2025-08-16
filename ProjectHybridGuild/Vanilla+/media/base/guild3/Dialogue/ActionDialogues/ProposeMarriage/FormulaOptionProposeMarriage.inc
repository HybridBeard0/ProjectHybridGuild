// Actually ask for hand in marriage
Replacements = map
{    
	"SourceScoreFormula" = "(RelationshipScore + Charisma) * (1.0 + clamp(ReputationScore / 100.0, -0.5, 0.5))";
	"TargetScoreFormula" = "(Intelligence * 0.75 + (100 - RelationshipScore)) * (1.0 - clamp(ReputationScore / 100.0, -0.5, 0.5))";
	"CritFactor" = "1"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Charisma" };
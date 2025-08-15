//Option 3 (Str) formula
Replacements = map
{    
	"SourceScoreFormula" = "(Source.Strength + 5) * Source.ReputationBonus";	
	"TargetScoreFormula" = "Target.Intelligence + 5";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.ReputationBonus" };
//Option 3 (Str) formula
Replacements = map
{    
	"SourceScoreFormula" = "Source.Strength * Source.ReputationBonus";	
	"TargetScoreFormula" = "Target.Intelligence";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.ReputationBonus" };
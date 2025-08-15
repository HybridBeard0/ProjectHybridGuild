//Option 2 (intimidation) formula
Replacements = map
{    
	"SourceScoreFormula" = "(Source.Intimidation + 5) * Source.ReputationBonus";	
	"TargetScoreFormula" = "Target.Intelligence + 5";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.ReputationBonus" };
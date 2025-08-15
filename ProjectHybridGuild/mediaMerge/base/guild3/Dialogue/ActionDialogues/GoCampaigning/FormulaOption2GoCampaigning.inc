//Option 2 (intimidation) formula
Replacements = map
{    
	"SourceScoreFormula" = "Source.Intimidation * Source.ReputationBonus";	
	"TargetScoreFormula" = "Target.Intelligence";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.ReputationBonus" };
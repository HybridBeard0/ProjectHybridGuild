//Option 1 (CHA) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Charisma * Source.ReputationBonus";	
	"TargetScoreFormula" = "Target.Intelligence + 5";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma", "$gui.Char.ReputationBonus" };
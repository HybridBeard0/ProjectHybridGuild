//Option 1 (int) formulas
Replacements = map
{    
	"SourceScoreFormula" = "((Source.Intelligence + 5) + (Source.Charisma + 5))";	
	"TargetScoreFormula" = "2 / ((Target.Intelligence + 5)+(Target.Charisma + 5))";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intelligence", "$gui.Char.Charisma" };
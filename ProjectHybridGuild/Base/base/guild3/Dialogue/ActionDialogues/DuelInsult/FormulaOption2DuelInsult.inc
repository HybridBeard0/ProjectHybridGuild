//Option 2 (STR) formulas
Replacements = map
{    
	"SourceScoreFormula" = "((Source.Strength + 5) + (Source.Intelligence + 5))*0.25";
	"TargetScoreFormula" = "((Target.Intimidation + 5) + (Target.Charisma + 5))*0.25";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.Intelligence" };
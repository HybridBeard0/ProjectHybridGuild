//Option 1 (str) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Intimidation + Source.Strength + 10";	
	"TargetScoreFormula" = "Target.Intelligence+Target.Charisma + 10";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.Strength" };
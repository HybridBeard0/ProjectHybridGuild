//Option 1 (int) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Intelligence + Source.Charisma";	
	"TargetScoreFormula" = "2 / (Target.Intelligence+Target.Charisma)";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intelligence", "$gui.Char.Charisma" };
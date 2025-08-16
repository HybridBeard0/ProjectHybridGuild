//Option 2 (intim) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Intimidation + Source.Charisma";	
	"TargetScoreFormula" = "2 / (Target.Intelligence+Target.Charisma)";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.Charisma" };
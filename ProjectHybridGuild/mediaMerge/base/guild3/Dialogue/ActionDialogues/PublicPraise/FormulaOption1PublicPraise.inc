//Option 1 (cha) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Charisma * 3";	
	"TargetScoreFormula" = "2 / (Target.Intelligence + Target.Charisma)";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma" };
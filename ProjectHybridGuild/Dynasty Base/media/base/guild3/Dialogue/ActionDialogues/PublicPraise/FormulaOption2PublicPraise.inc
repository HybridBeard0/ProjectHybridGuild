//Option 2 (prod) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Productivity * 5 + 10";	
	"TargetScoreFormula" = "2 / (Target.Intelligence + Target.Charisma) + 10";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Productivity" };
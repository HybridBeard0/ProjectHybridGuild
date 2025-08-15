//Option 3 (bb) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.BargainingBonus * 0.5 + 10";	
	"TargetScoreFormula" = "2 / (Target.Intelligence + Target.Charisma) + 10";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.BargainingBonus" };
//Option 3 (bb) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.BargainingBonus * 0.5";	
	"TargetScoreFormula" = "2 / (Target.Intelligence + Target.Charisma)";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.BargainingBonus" };
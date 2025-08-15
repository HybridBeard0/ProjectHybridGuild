//Option 1 (per) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Perception * 2 + 10";	
	"TargetScoreFormula" = "Target.Intimidation + 10";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Perception" };
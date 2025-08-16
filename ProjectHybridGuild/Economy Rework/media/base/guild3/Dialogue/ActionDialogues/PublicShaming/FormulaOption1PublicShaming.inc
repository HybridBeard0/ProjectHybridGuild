//Option 1 (per) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Perception * 2";	
	"TargetScoreFormula" = "Target.Intimidation";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Perception" };
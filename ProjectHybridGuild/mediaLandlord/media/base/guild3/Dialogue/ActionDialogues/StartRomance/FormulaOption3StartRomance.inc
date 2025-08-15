//Option 3 (PER) formulas
Replacements = map
{
	@base/fStartRomanceOption3
	"CriticalFactor" = "0.75"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; 
OptionSubtext = array { "$gui.Char.Perception" };

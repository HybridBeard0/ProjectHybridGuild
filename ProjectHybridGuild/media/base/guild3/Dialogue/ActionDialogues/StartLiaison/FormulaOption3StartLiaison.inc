//Option 3 (PER) formulas
Replacements = map
{    
	@base/fStartLiaisonOption3
	"CritFactor" = "1"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Perception" };
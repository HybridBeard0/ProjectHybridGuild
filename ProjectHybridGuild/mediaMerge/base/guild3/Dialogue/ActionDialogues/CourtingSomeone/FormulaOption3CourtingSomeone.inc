//Option 3 (STAT, replace STAT with the main stat used) formulas
Replacements = map
{    
	@base/fCourtingSomeoneOption3
	"CritFactor" = "1"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Perception" };
//Option 2 (STAT, replace STAT with the main stat used) formulas
Replacements = map
{    
	@base/fCourtingSomeoneOption2
	"CritFactor" = "1"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Charisma" };
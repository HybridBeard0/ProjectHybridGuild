// Actually ask for hand in marriage
Replacements = map
{    
	@base/fProposeMarriage
	"CritFactor" = "1"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Charisma" };
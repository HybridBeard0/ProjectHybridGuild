//Option 1 (int) formulas
Replacements = map
{
	@base/fStartRomanceOption1
	"CriticalFactor" = "0.75"; // (1 - CriticalFactor) 
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intelligence" };
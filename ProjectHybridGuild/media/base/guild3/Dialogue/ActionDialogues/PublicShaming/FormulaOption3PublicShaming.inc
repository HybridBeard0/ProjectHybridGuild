//Option 3 (Int) formula
Replacements = map
{
	"SourceScoreFormula" = "Source.Intelligence * 2";
	"TargetScoreFormula" = "Target.Intimidation";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intelligence" };
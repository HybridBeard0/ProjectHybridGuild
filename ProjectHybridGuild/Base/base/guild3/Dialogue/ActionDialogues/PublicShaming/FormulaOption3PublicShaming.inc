//Option 3 (Int) formula
Replacements = map
{
	"SourceScoreFormula" = "Source.Intelligence * 2 + 10";
	"TargetScoreFormula" = "Target.Intimidation + 10";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intelligence" };
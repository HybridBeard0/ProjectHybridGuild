//Option 2 (prod) formula
Replacements = map
{
	"SourceScoreFormula" = "Source.Productivity * 5";
	"TargetScoreFormula" = "Target.Intimidation";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Productivity" };
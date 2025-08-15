//Option 2 (intimidation) formula
Replacements = map
{
	"SourceScoreFormula" = "(Source.Intimidation + 5) * 3 + Source.SocialLevel";
	"TargetScoreFormula" = "(Target.Intimidation + 5) + Target.SocialLevel/2 + Target.Office.Stage";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.ReputationBonus" };
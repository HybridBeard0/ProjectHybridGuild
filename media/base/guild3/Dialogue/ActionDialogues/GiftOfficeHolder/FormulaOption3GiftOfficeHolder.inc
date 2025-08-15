//Option 3 (Cha) formula
Replacements = map
{
	"SourceScoreFormula" = "(Source.Charisma + 5) * 3 + + Source.SocialLevel";
	"TargetScoreFormula" = "(Target.Charisma + 5) + Target.SocialLevel/2 + Target.Office.Stage";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma", "$gui.Char.ReputationBonus" };
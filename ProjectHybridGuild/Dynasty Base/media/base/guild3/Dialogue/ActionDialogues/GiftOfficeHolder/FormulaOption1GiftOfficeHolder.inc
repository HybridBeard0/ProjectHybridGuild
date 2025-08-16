//Option 1 (int) formulas
Replacements = map
{    
	"SourceScoreFormula" = "(Source.Intelligence + 5) * 3 + Source.SocialLevel";	
	"TargetScoreFormula" = "(Target.Intelligence + 5) + Target.SocialLevel/2 + Target.Office.Stage";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intelligence", "$gui.Char.ReputationBonus" };
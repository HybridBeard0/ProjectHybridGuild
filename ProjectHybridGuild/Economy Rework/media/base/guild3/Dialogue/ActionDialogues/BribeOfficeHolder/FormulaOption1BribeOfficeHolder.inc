//Option 1 (int) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Intelligence * 3 + Source.SocialLevel";	
	"TargetScoreFormula" = "Target.Intelligence + Target.SocialLevel/2 + Target.Office.Stage";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intelligence", "$gui.Char.ReputationBonus" };
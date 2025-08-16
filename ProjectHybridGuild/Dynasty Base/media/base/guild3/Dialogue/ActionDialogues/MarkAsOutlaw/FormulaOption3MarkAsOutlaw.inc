//Option 3 (DEX) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Intimidation + Source.Dexterity + 10";	
	"TargetScoreFormula" = "Target.Intelligence+Target.Charisma + 10";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.Dexterity" };
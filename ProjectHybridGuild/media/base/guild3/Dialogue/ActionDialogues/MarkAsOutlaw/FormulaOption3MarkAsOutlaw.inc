//Option 3 (DEX) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Intimidation + Source.Dexterity";	
	"TargetScoreFormula" = "0.5 * (Target.Intelligence+Target.Charisma";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.Dexterity" };
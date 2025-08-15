//Option 3 (dex) formulas
Replacements = map
{    
	"SourceScoreFormula" = "((Source.Dexterity + 5) + (Source.Intelligence + 5))*0.25";
	"TargetScoreFormula" = "((Target.Intimidation + 5) + (Target.Charisma + 5))*0.25";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Dexterity", "$gui.Char.Intelligence" };
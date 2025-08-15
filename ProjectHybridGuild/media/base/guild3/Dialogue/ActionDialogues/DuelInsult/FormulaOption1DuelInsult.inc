//Option 1 (cha) formulas
Replacements = map
{    
	"SourceScoreFormula" = "((Source.Charisma + 5) + (Source.Intelligence + 5))*0.25";
	"TargetScoreFormula" = "((Target.Intimidation + 5) + (Target.Charisma + 5))*0.25";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma", "$gui.Char.Intelligence" };
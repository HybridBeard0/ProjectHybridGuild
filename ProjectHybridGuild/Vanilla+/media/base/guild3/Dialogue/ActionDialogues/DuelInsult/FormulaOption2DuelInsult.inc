//Option 2 (STR) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Strength + Source.Intelligence*0.25";
	"TargetScoreFormula" = "Target.Intimidation + Target.Charisma*0.25";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Strength", "$gui.Char.Intelligence" };
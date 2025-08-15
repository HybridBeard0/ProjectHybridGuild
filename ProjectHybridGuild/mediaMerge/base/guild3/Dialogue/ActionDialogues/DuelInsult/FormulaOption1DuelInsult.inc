//Option 1 (cha) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Charisma + Source.Intelligence*0.25";
	"TargetScoreFormula" = "Target.Intimidation + Target.Charisma*0.25";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma", "$gui.Char.Intelligence" };
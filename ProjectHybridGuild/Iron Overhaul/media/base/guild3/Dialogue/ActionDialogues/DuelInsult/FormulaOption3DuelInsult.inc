//Option 3 (dex) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Dexterity + Source.Intelligence*0.25";
	"TargetScoreFormula" = "Target.Intimidation + Target.Charisma*0.25";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Dexterity", "$gui.Char.Intelligence" };
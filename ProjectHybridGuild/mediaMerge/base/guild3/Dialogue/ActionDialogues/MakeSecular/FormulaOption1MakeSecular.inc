//Option 1 
Replacements = map
{    
	"SourceScoreFormula" = "2 + Source.Intelligence + Source.Intimidation * 0.5";	
	"TargetScoreFormula" = "(Target.Intelligence * 2) + (Target.Strength * 0.5) + Target.ReligionStolidity";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Intelligence", "$gui.Char.Intimidation"};
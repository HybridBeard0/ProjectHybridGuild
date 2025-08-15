//Option 1 (cha) formulas
Replacements = map
{    
	"SourceScoreFormula" = "Source.Charisma * 3 + 10";	
	"TargetScoreFormula" = "2 / (Target.Intelligence + Target.Charisma) + 10";
	"CritFactor" = "0.9"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma" };
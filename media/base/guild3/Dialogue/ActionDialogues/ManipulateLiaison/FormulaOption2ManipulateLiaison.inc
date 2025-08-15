//Option 2 (STAT, replace STAT with the main stat used) formulas
Replacements = map
{    
	"SourceScoreFormula" = "(RelationshipScore/50 + Intimidation + Charisma) + 10";
	"TargetScoreFormula" = "(Target.Intelligence*0.5 + (100 - RelationshipScore)/75) + 10";
	"CritFactor" = "0.65"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.Charisma" };
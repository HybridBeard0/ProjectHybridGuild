//Option 3 (STAT, replace STAT with the main stat used) formulas
Replacements = map
{    
	"SourceScoreFormula" = "0.15 * (Strength + Dexterity + Perception + Charisma + Intelligence) + (RelationshipScore/50 + Intimidation + Strength)";
	"TargetScoreFormula" = "0.15 * (Strength + Dexterity + Perception + Charisma + Intelligence) + (Target.Intelligence*0.5 + (100 - RelationshipScore)/75)";
	"CritFactor" = "0.65"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Intimidation", "$gui.Char.Strength" };
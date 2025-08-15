//Option 3 (STAT, replace STAT with the main stat used) formulas
Replacements = map
{    
	"SourceScoreFormula" = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + RelationshipScore/25 + Perception + SocialInteractionsOppositeSex + Target.DoesHaveTag.RomPrefMoreDistance";	
	"TargetScoreFormula" = "0.2 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Target.Intelligence * (0.5 + ((((Source.DoesHaveTag.Catholic && Target.DoesHaveTag.Protestant) || (Source.DoesHaveTag.Protestant && Target.DoesHaveTag.Catholic)) * 3) + (((Source.DoesHaveTag.Religious && Target.DoesNotHaveTag.Religious) || (Source.DoesNotHaveTag.Religious && Target.DoesHaveTag.Religious)) * 1.5)))";
	"CritFactor" = "1"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Perception" };
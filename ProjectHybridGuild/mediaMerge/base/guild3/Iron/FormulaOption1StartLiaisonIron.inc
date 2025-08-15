//Option 1 (STAT, replace STAT with the main stat used) formulas
Replacements = map
{    
	"SourceScoreFormula" = "0.5 * (Strength + Dexterity + Perception + Charisma + Intelligence) + RelationshipScore + (Intelligence * 2) + Target.DoesHaveTag.RomPrefCloseApproach + Target.DoesHaveTag.RomPrefContraryGoodBehavior";	
	"TargetScoreFormula" = "0.5 * (Strength + Dexterity + Perception + Charisma + Intelligence) + Target.Intelligence * (0.5 + ((((Source.DoesHaveTag.Catholic && Target.DoesHaveTag.Protestant) || (Source.DoesHaveTag.Protestant && Target.DoesHaveTag.Catholic)) * 1) + (((Source.DoesHaveTag.Religious && Target.DoesNotHaveTag.Religious) || (Source.DoesNotHaveTag.Religious && Target.DoesHaveTag.Religious)) * 0.5))) + (100 - RelationshipScore)";
	"CritFactor" = "1"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula"; // DON'T CHANGE
OptionSubtext = array { "$gui.Char.Intelligence" };
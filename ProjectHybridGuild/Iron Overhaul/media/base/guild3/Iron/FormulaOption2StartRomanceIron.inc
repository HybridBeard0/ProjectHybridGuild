//Option 2 (CHA) formulas
Replacements = map
{
	"SourceScoreFormula" = "0.5 * (Strength + Dexterity + Perception + Charisma + Intelligence) + (Charisma * 3) + Luck";	
	"TargetScoreFormula" = "0.5 * (Target.Strength + Target.Dexterity + Target.Perception + Target.Charisma + Target.Intelligence) + (Target.Charisma + Target.Intelligence) * (0.75 + ((((Source.DoesHaveTag.Catholic && Target.DoesHaveTag.Protestant) || (Source.DoesHaveTag.Protestant && Target.DoesHaveTag.Catholic)) * 0.5) + (((Source.DoesHaveTag.Religious && Target.DoesNotHaveTag.Religious) || (Source.DoesNotHaveTag.Religious && Target.DoesHaveTag.Religious)) * 0.25)))";
	"CriticalFactor" = "0.75"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma" };

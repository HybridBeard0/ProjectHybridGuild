//Option 2 (CHA) formulas
Replacements = map
{
	"SourceScoreFormula" = "(Charisma * 2) + Luck";	
	"TargetScoreFormula" = "Target.Intelligence * (0.75 + ((((Source.DoesHaveTag.Catholic && Target.DoesHaveTag.Protestant) || (Source.DoesHaveTag.Protestant && Target.DoesHaveTag.Catholic)) * 0.5) + (((Source.DoesHaveTag.Religious && Target.DoesNotHaveTag.Religious) || (Source.DoesNotHaveTag.Religious && Target.DoesHaveTag.Religious)) * 0.25)))";
	"CriticalFactor" = "0.75"; // (1 - CriticalFactor)
};
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Charisma" };

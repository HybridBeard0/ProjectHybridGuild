Replacements = map
{    
	"SourceScoreFormula" = "20 + Source.Charisma + 10 + Source.Stealth * 0.3 + Source.Motivation";	
	"TargetScoreFormula" = "Perception + Intelligence +10";
	"CritFactor" = "1.0"; // (1 - CriticalFactor)
};	
DisplayChance = "EvaluateActionScore.SourceScoreFormula.TargetScoreFormula";
OptionSubtext = array { "$gui.Char.Stealth", "$gui.Char.Charisma" };

TopicResult = ResultObject
{
	Results = array
	{
		FunctionPlayRandomReaction
		{
			ApplyTo = "Target";
			Animations = array { "town_crier1" };
			VoiceOvers = array { 475 };
		},
	};
};
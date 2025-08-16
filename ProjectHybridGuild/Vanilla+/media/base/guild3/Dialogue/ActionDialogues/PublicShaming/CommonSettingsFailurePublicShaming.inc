Speaker = "Switch";							
Probability = "TargetScoreFormula * CritFactor";
TopicResult = ResultObject
{
	Results = array
	{
		FunctionPlayRandomReaction
		{
			ApplyTo = "Target";
			Animations = array { "rire1" };
			VoiceOvers = array {450};
		},
		@base/SourceShamed
	};
};
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultFailurePublicShaming
	};
};	
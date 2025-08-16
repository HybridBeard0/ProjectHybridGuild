Speaker = "Switch";							
Probability = "TargetScoreFormula * CritFactor";
TopicResult = ResultObject
{
	Results = array
	{
		FunctionPlayRandomReaction
		{
			ApplyTo = "Target";
			Animations = array { "NoThankYou", "refuse1", "refuse2" };
			VoiceOvers = array {453};
		},
		@base/SourceShamed
	};
};
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultFailurePublicPraise
	};
};	
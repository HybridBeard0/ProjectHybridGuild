Speaker = "Switch";
Probability = "TargetScoreFormula - (TargetScoreFormula * CritFactor)";
TopicResult = ResultObject
{
	Results = array
	{
		FunctionPlayRandomReaction
		{
			ApplyTo = "Target";
			Animations = array { "NoThankYou", "refuse1", "refuse2" };
			VoiceOvers = array {444};
		},
		@base/SourceListen
	};
};
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultCritFailureBribeOfficeHolder
	};
};	
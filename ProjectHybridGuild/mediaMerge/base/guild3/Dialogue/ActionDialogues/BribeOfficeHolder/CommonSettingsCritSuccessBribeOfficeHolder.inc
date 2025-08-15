//CritSuccessCommonSettings
Speaker = "Switch";
Probability = "SourceScoreFormula - (SourceScoreFormula * CritFactor)";
TopicResult = ResultObject
{
	Results = array
	{
		FunctionPlayRandomReaction
		{
			ApplyTo = "Target";
			Animations = array { "accept1" };
			VoiceOvers = array {441};
		},
		@base/SourceListen
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultCritSuccessBribeOfficeHolder
	};
};
Speaker = "Switch";
Probability = "SourceScoreFormula * CritFactor";
TopicResult = ResultObject
{
	Results = array
	{
		FunctionPlayRandomReaction
		{
			ApplyTo = "Target";
			Animations = array { "accept1" };
			VoiceOvers = array {442};
		},
		@base/SourceListen
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultSuccessBribeOfficeHolder
	};
};
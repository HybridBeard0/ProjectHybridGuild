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
			VoiceOvers = array {529};
		},
		@base/SourceListen,
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultSuccessMakeSecular
	};
};
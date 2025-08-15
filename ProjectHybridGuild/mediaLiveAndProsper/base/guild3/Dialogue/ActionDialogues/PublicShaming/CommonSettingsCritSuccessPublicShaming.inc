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
			Animations = array { "shame1" };
			VoiceOvers = array {449};
		},
		@base/SourceListen
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultCritSuccessPublicShaming
	};
};
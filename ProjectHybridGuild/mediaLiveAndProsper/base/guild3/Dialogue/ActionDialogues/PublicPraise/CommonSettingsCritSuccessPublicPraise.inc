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
			VoiceOvers = array {452};
		},
		@base/SourceAccepting
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultCritSuccessPublicPraise
	};
};
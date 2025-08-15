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
			VoiceOvers = array {530};
		},
		@base/SourceListen,
	};
};
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultFailureMakeProtestant
	};
};	
//FailureCommonSettings
Speaker = "Switch";
Probability = "TargetScoreFormula * CritFactor";
TopicResult = ResultObject
{
	Results = array
	{
		@base/TargetDeclining,
		@base/SourceShocked
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultFailureAwardKeyToCity
	};
};
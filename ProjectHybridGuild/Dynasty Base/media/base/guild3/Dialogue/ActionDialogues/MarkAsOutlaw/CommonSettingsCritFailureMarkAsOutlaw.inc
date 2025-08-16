Speaker = "Switch";
Probability = "TargetScoreFormula - (TargetScoreFormula * CritFactor)";
TopicResult = ResultObject
{
	Results = array
	{
		@base/TargetLaughingMarkAsOutlaw,
		@base/SourceShamed
	};
};
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultCritFailureMarkAsOutlaw
	};
};	
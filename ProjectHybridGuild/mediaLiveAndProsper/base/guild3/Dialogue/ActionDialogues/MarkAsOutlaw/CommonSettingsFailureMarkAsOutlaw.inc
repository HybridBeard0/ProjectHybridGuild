Speaker = "Switch";							
Probability = "TargetScoreFormula * CritFactor";
TopicResult = ResultObject
{
	Results = array
	{
		@base/TargetDecliningMarkAsOutlaw,
		@base/SourceShamed
	};
};
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultFailureMarkAsOutlaw
	};
};	
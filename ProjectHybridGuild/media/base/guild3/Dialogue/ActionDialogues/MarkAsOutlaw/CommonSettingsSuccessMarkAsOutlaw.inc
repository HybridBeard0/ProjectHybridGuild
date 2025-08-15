Speaker = "Switch";
Probability = "SourceScoreFormula * CritFactor";
TopicResult = ResultObject
{
	Results = array
	{
		@base/TargetShamedMarkAsOutlaw,
		@base/SourceDeclining
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
		@base/ResultSuccessMarkAsOutlaw
	};
};
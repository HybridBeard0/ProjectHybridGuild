//CritSuccessCommonSettings
Speaker = "Switch";
Probability = "SourceScoreFormula - (SourceScoreFormula * CritFactor)";
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
		@base/ResultCritSuccessMarkAsOutlaw
	};
};
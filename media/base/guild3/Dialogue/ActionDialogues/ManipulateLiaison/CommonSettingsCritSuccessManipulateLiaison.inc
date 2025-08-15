//CritSuccessCommonSettings
Speaker = "Switch";
Probability = "SourceScoreFormula - (SourceScoreFormula * CritFactor)";
TopicResult = ResultObject
{
	Results = array
	{
		@base/TargetAccepting,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
		@base/SourceComplimenting, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
	//adjust file names here
		@base/ResultCritSuccessManipulateLiaison
	};
};
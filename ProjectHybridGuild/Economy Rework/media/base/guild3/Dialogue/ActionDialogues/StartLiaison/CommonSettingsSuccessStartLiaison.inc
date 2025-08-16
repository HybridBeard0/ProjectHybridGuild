Speaker = "Switch";
Probability = "SourceScoreFormula * CritFactor";
TopicResult = ResultObject
{
	Results = array
	{
		@base/SourceAccepting,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
		@base/TargetComplimenting, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
	};
};	
ConversationResult = ResultObject
{
	Results = array
	{
	//adjust file names here
		@base/ResultSuccessStartLiaison
	};
};
Speaker = "Switch";
Probability = "TargetScoreFormula - (TargetScoreFormula * CritFactor)";
TopicResult = ResultObject
{
	Results = array
	{
		@base/TargetDeclining,  //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
		@base/SourceShamed, //Can be replaced with any of the listen/talk animations from "..\data\media\base\guild3\Dialogue\DialogueAnimations"
	};
};
ConversationResult = ResultObject
{
	Results = array
	{
		//adjust file names here
		@base/ResultCritFailureManipulateLiaison
	};
};	
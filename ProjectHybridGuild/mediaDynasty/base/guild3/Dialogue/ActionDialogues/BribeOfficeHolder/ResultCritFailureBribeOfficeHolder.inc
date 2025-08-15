//Crit Failure BribeOfficeHolder
DialogueSuccessType
{
	  Type = "CriticalFailure";
},
//FunctionGiveMoney
//{
//	ApplyTo = "Target";
//	Amount = 500;
//},
FunctionTransferMoney
{
	Amount = "(Source.SocialLevel^2*(((15 * Source.hasTag.BuffEasy) + (30 * Source.hasTag.BuffNormal) + (60 * Source.hasTag.BuffHard) + (100 * Source.hasTag.BuffImpossible))-(Source.SocialLevel*2))) * 0.9";
	Giver = "";
	Receiver = "Target";
},
FunctionUpdateRelationship
{
	AffectTarget = "-15";
};
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "PlayerBribedFailed";
},
//FunctionTriggerAction
//{
//	Filter = "!IsControlledByHuman";
//	ApplyTo = "Source";
//	Actions = array{"NPCDynRandomFollowUpShort"};
//};
//FunctionTriggerAction
//{
//	Filter = "!IsControlledByHuman";
//	ApplyTo = "Target";
//	Actions = array{"NPCRandomFollowUpShort"};
//};

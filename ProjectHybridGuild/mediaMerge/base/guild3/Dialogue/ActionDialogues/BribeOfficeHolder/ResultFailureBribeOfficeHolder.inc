//Failure BribeOfficeHolder
DialogueSuccessType
{
	Type = "Failure";
},
//FunctionGiveMoney
//{
//	ApplyTo = "Target";
//	Amount = 5000;
//},
FunctionTransferMoney
{
	Amount = "(Source.SocialLevel^2*(((100 * Source.hasTag.BuffEasy) + (150 * Source.hasTag.BuffNormal) + (200 * Source.hasTag.BuffHard) + (250 * Source.hasTag.BuffImpossible))-(Source.SocialLevel*2))) * 0.9";
	Giver = "";
	Receiver = "Target";
},
FunctionUpdateRelationship
{
	AffectTarget = "-10";
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

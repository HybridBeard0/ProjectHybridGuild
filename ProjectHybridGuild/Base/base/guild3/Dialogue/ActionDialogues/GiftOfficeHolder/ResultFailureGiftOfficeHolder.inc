//Failure GiftOfficeHolder
DialogueSuccessType
{
	Type = "Failure";
},
//FunctionGiveMoney
//{
//	ApplyTo = "Target";
//	Amount = 150;
//},
FunctionTransferMoney
{
	Amount = "150";
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

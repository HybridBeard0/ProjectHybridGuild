//Success GiftOfficeHolder
DialogueSuccessType
{
	Type = "Success";
},
FunctionUpdateRelationship
{
	AffectTarget = "10";
},
//FunctionGiveMoney
//{
//	ApplyTo = "Target";
//	Amount = 150;
//};
FunctionTransferMoney
{
	Amount = "150";
	Giver = "";
	Receiver = "Target";
},
FunctionSendMessage
{
	ApplyTo = "Target";
	Description = "PlayerBribed";
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

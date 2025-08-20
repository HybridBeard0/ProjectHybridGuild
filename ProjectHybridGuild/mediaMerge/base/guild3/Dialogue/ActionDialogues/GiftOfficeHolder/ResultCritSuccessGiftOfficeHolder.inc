//GiftOfficeHolder Crit Success
DialogueSuccessType
{
	Type = "CriticalSuccess";
},
FunctionTransferPrestige
{
	Receiver = "Source";
	Amount = 150;
},
FunctionUpdateRelationship
{
	AffectTarget = "15";
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
